#include "ping_pong.decl.h"
#include <cassert>


CProxy_Main mainProxy;
CProxy_Player playerProxy;

struct MyPointerMsg : public CMessage_MyPointerMsg {
	int* arr;
	int size;
	MyPointerMsg(int* arr_in, int size_in) : arr(arr_in), size(size_in) {

	} 
	
	~MyPointerMsg() {
		
	}	
	friend class CMessage_MyPointerMsg;
};


class Main : public CBase_Main {
	double  _start_time;
	int _num_messages;
	int _message_size;
	MyPointerMsg* _pointer_msg = nullptr;
	int _num_sims_left = 3;
public:
	Main(CkArgMsg* msg){
		if(msg -> argc != 3){
			ckout << "Provide a number of times they should play ping pong for, as well as the length of int[] that will be sent as a message" << endl;
			CkExit();
		}
		int num_messages = atoi(msg -> argv[1]);
		_message_size = atoi(msg -> argv[2]);
		_num_messages = num_messages;
		playerProxy = CProxy_Player::ckNew(num_messages, _message_size);
		ckout << "LOGISTICS\n";
		ckout << "Number of PEs: " << CkNumPes() << endl;
		ckout << "Number of nodes: " << CkNumNodes() << endl;
		// specific to the message construct thingy
		_start_time = CkWallTimer();
		playerProxy.beginMarshallRound(); // broadcast to begin the round
	}

	void done(){
		double end_time = CkWallTimer();	
		ckout << end_time - _start_time << " second have elapsed" << endl;
		// ckout << "Number of messages sent by each chare: " << _num_messages << endl;
		ckout << (end_time - _start_time) * 1000000000 / (1.0 * _num_messages) << endl;
		ckout << "Time (in nanoseconds): " << (end_time - _start_time) * 1000000000 / (1.0 * _num_messages) << " message_size: " << _message_size;
		if(_num_sims_left == 3){
			ckout << " PROTOCOL: Parameter_Marshalling" << endl;
		} else if(_num_sims_left == 2) {
			ckout << " PROTOCOL: Message" << endl;
		} else {
			ckout << " PROTOCOL: Message_w/o_allocation" << endl;
		} 
		_num_sims_left--;
		if(!_num_sims_left){
			CkExit();
		} else if (_num_sims_left == 1){
			_start_time = CkWallTimer();
			playerProxy.beginMessageRound();	
		} else {
			_start_time = CkWallTimer();
			playerProxy.beginMessageNoAllocationRound();
		}
	}

};


class Player : public CBase_Player {
	
	int _num_messages;
	int _message_size;
	int _permanent_messages;
	int _round = 0;
public:
	Player(int num_message, int message_size){
		_num_messages = num_message;
		_permanent_messages = num_message;
		_message_size = message_size;
	}	
	
	void resetMessages(){
		_num_messages = _permanent_messages;
	}

	int expectedPartner(){
		if(CkMyPe() % 2) return CkMyPe() - 1;
		else return CkMyPe() + 1;
	}
	void receiveMsg(int number){
		sendMessage(number + 1);
		/*if(!_num_messages){
			// perform reduction
			CkCallback cb(CkReductionTarget(Main, done), mainProxy);
			contribute(sizeof(int), &number, CkReduction::nop, cb);
			return;
		}*/
	}

	void sendMessage(int num){
		if(!_num_messages){
		// perform reduction
			CkCallback cb(CkReductionTarget(Main, done), mainProxy);
			contribute(sizeof(int), &num, CkReduction::nop, cb);
			return;
		} else {
			thisProxy[expectedPartner()].receiveMsg(num);
			_num_messages--;
		}

	}
	
	void beginMarshallRound(){
//		sendMessage(0);
		_round = 0;
		resetMessages();
		int* og = new int[_message_size];
		for(int i = 0; i < _message_size; ++i) og[i] = 0;
		sendMarshalledMessage(_message_size, og);
		delete[] og;	
	}

	void beginMessageRound(){
		_round = 0;
		resetMessages();
		int* og = new int[_message_size];
		for(int i = 0; i < _message_size; ++i) og[i] = 0;
		MyPointerMsg* mpm = new(_message_size) MyPointerMsg(og, _message_size); 
		sendMessage(mpm);
	}

	void beginMessageNoAllocationRound(){
		_round = 0;
		resetMessages();
		int* og = new int[_message_size];
		for(int i = 0; i < _message_size; ++i) og[i] = 0;
		MyPointerMsg* mpm = new(_message_size) MyPointerMsg(og, _message_size); 
		sendMessageNoAllocation(mpm);
	}

	void receiveMarshalled(int sz, int* arr){
		for(int i = 0; i < sz; ++i)
			assert(arr[i] == _round);
		sendMarshalledMessage(sz, arr);
	}

	void receiveNoAllocation(MyPointerMsg* my_message){
		int sz = my_message -> size;
		for(int i = 0; i < sz; ++i){
			assert(my_message -> arr[i] == _round);
		}
		sendMessageNoAllocation(my_message);
	}

	void receiveAllocation(MyPointerMsg* my_message){
		for(int i = 0; i < my_message -> size; ++i){
			assert(my_message -> arr[i] == _round);
		}
		sendMessage(my_message);
	}

	void sendMarshalledMessage(int sz, int* arr){
		if(!_num_messages){
			CkCallback cb(CkReductionTarget(Main, done), mainProxy);
			contribute(sizeof(int), &sz, CkReduction::nop, cb);
			return;
		} else {
			for(int i = 0; i < sz; ++i)
				arr[i] = _round + 1;
			_round++;
			thisProxy[expectedPartner()].receiveMarshalled(sz, arr);
			_num_messages--;
		}
	}

	void sendMessage(MyPointerMsg* to_send){
		if(!_num_messages){
			delete to_send -> arr;
			delete to_send;
			CkCallback cb(CkReductionTarget(Main, done), mainProxy);
			contribute(sizeof(int), &(to_send -> size), CkReduction::nop, cb);
			return;
		} else {
			MyPointerMsg* newMessage = new(to_send -> size) MyPointerMsg(to_send -> arr, to_send -> size);
			delete to_send;
			for(int i = 0; i < newMessage -> size; ++i){
				newMessage -> arr[i] = _round + 1;
			}
			_round++;
			_num_messages--;
			thisProxy[expectedPartner()].receiveAllocation(newMessage);
		}
	}
	void sendMessageNoAllocation(MyPointerMsg* to_send){
		if(!_num_messages){
			delete (to_send -> arr);
			delete to_send;
			CkCallback cb(CkReductionTarget(Main, done), mainProxy);
			contribute(sizeof(int), &(to_send -> size), CkReduction::nop, cb);
			return;
		} else {
			int sz = to_send -> size;
			for(int i = 0; i < sz; ++i)
				to_send -> arr[i] = _round + 1;
			_round++;
			thisProxy[expectedPartner()].receiveNoAllocation(to_send);
			_num_messages--;
		}
	}
};

#include "ping_pong.def.h"
