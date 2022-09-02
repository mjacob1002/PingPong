/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Main::done_2_closure : public SDAG::Closure {
      

      done_2_closure() {
        init();
      }
      done_2_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~done_2_closure() {
      }
      PUPable_decl(SINGLE_ARG(done_2_closure));
    };
#endif /* CK_TEMPLATES_ONLY */



/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Player::beginMarshallRound_2_closure : public SDAG::Closure {
      

      beginMarshallRound_2_closure() {
        init();
      }
      beginMarshallRound_2_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~beginMarshallRound_2_closure() {
      }
      PUPable_decl(SINGLE_ARG(beginMarshallRound_2_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Player::beginMessageRound_3_closure : public SDAG::Closure {
      

      beginMessageRound_3_closure() {
        init();
      }
      beginMessageRound_3_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~beginMessageRound_3_closure() {
      }
      PUPable_decl(SINGLE_ARG(beginMessageRound_3_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Player::beginMessageNoAllocationRound_4_closure : public SDAG::Closure {
      

      beginMessageNoAllocationRound_4_closure() {
        init();
      }
      beginMessageNoAllocationRound_4_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~beginMessageNoAllocationRound_4_closure() {
      }
      PUPable_decl(SINGLE_ARG(beginMessageNoAllocationRound_4_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Player::receiveMarshalled_5_closure : public SDAG::Closure {
            int sz;
            int *arr;

      CkMarshallMsg* _impl_marshall;
      char* _impl_buf_in;
      int _impl_buf_size;

      receiveMarshalled_5_closure() {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      receiveMarshalled_5_closure(CkMigrateMessage*) {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
            int & getP0() { return sz;}
            int *& getP1() { return arr;}
      void pup(PUP::er& __p) {
        __p | sz;
        packClosure(__p);
        __p | _impl_buf_size;
        bool hasMsg = (_impl_marshall != 0); __p | hasMsg;
        if (hasMsg) CkPupMessage(__p, (void**)&_impl_marshall);
        else PUParray(__p, _impl_buf_in, _impl_buf_size);
        if (__p.isUnpacking()) {
          char *impl_buf = _impl_marshall ? _impl_marshall->msgBuf : _impl_buf_in;
          PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> sz;
  implP|sz;
  int impl_off_arr, impl_cnt_arr;
  implP|impl_off_arr;
  implP|impl_cnt_arr;
          impl_buf+=CK_ALIGN(implP.size(),16);
          arr = (int *)(impl_buf+impl_off_arr);
        }
      }
      virtual ~receiveMarshalled_5_closure() {
        if (_impl_marshall) CmiFree(UsrToEnv(_impl_marshall));
      }
      PUPable_decl(SINGLE_ARG(receiveMarshalled_5_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Player::receiveMsg_8_closure : public SDAG::Closure {
            int number;


      receiveMsg_8_closure() {
        init();
      }
      receiveMsg_8_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return number;}
      void pup(PUP::er& __p) {
        __p | number;
        packClosure(__p);
      }
      virtual ~receiveMsg_8_closure() {
      }
      PUPable_decl(SINGLE_ARG(receiveMsg_8_closure));
    };
#endif /* CK_TEMPLATES_ONLY */


/* DEFS: mainchare Main: Chare{
Main(CkArgMsg* impl_msg);
void done();
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_Main::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: Main(CkArgMsg* impl_msg);
 */
CkChareID CProxy_Main::ckNew(CkArgMsg* impl_msg, int impl_onPE)
{
  CkChareID impl_ret;
  CkCreateChare(CkIndex_Main::__idx, CkIndex_Main::idx_Main_CkArgMsg(), impl_msg, &impl_ret, impl_onPE);
  return impl_ret;
}
void CProxy_Main::ckNew(CkArgMsg* impl_msg, CkChareID* pcid, int impl_onPE)
{
  CkCreateChare(CkIndex_Main::__idx, CkIndex_Main::idx_Main_CkArgMsg(), impl_msg, pcid, impl_onPE);
}

// Entry point registration function
int CkIndex_Main::reg_Main_CkArgMsg() {
  int epidx = CkRegisterEp("Main(CkArgMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_Main_CkArgMsg), CMessage_CkArgMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkArgMsg::ckDebugPup);
  return epidx;
}

void CkIndex_Main::_call_Main_CkArgMsg(void* impl_msg, void* impl_obj_void)
{
  Main* impl_obj = static_cast<Main*>(impl_obj_void);
  new (impl_obj_void) Main((CkArgMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void done();
 */
void CProxy_Main::done(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_Main::idx_done_void(), impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_Main::idx_done_void(), impl_msg, &ckGetChareID(),destPE);
  } else {
    CkSendMsg(CkIndex_Main::idx_done_void(), impl_msg, &ckGetChareID(),0);
  }
}
void CkIndex_Main::_call_redn_wrapper_done_void(void* impl_msg, void* impl_obj_void)
{
  Main* impl_obj = static_cast<Main*> (impl_obj_void);
  char* impl_buf = (char*)((CkReductionMsg*)impl_msg)->getData();
  impl_obj->done();
  delete (CkReductionMsg*)impl_msg;
}


// Entry point registration function
int CkIndex_Main::reg_done_void() {
  int epidx = CkRegisterEp("done()",
      reinterpret_cast<CkCallFnPtr>(_call_done_void), 0, __idx, 0);
  return epidx;
}


// Redn wrapper registration function
int CkIndex_Main::reg_redn_wrapper_done_void() {
  return CkRegisterEp("redn_wrapper_done(CkReductionMsg *impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_redn_wrapper_done_void), CMessage_CkReductionMsg::__idx, __idx, 0);
}

void CkIndex_Main::_call_done_void(void* impl_msg, void* impl_obj_void)
{
  Main* impl_obj = static_cast<Main*>(impl_obj_void);
  impl_obj->done();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_Main::done_2_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_Main::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeMainChare);
  CkRegisterBase(__idx, CkIndex_Chare::__idx);
  // REG: Main(CkArgMsg* impl_msg);
  idx_Main_CkArgMsg();
  CkRegisterMainChare(__idx, idx_Main_CkArgMsg());

  // REG: void done();
  idx_done_void();
  idx_redn_wrapper_done_void();

}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message MyPointerMsg{
int arr[];
int size;
}
;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_MyPointerMsg::operator new(size_t s){
  return MyPointerMsg::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_MyPointerMsg::operator new(size_t s, int* sz){
  return MyPointerMsg::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_MyPointerMsg::operator new(size_t s, int* sz,const int pb){
  return MyPointerMsg::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_MyPointerMsg::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return MyPointerMsg::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_MyPointerMsg::operator new(size_t s, int sz0) {
  int sizes[1];
  sizes[0] = sz0;
  return MyPointerMsg::alloc(__idx, s, sizes, 0, GroupDepNum{});
}
void *CMessage_MyPointerMsg::operator new(size_t s, int sz0, const int p) {
  int sizes[1];
  sizes[0] = sz0;
  return MyPointerMsg::alloc(__idx, s, sizes, p, GroupDepNum{});
}
void *CMessage_MyPointerMsg::operator new(size_t s, int sz0, const int p, const GroupDepNum groupDepNum) {
  int sizes[1];
  sizes[0] = sz0;
  return MyPointerMsg::alloc(__idx, s, sizes, p, groupDepNum);
}
void* CMessage_MyPointerMsg::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  if(sizes==0)
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0];
  else
    CkpvAccess(_offsets)[1] = CkpvAccess(_offsets)[0] + ALIGN_DEFAULT(sizeof(int)*sizes[0]);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[1], pb, groupDepNum);
}
CMessage_MyPointerMsg::CMessage_MyPointerMsg() {
MyPointerMsg *newmsg = (MyPointerMsg *)this;
  newmsg->arr = (int *) ((char *)newmsg + CkpvAccess(_offsets)[0]);
}
void CMessage_MyPointerMsg::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_MyPointerMsg::pack(MyPointerMsg *msg) {
  msg->arr = (int *) ((char *)msg->arr - (char *)msg);
  return (void *) msg;
}
MyPointerMsg* CMessage_MyPointerMsg::unpack(void* buf) {
  MyPointerMsg *msg = (MyPointerMsg *) buf;
  msg->arr = (int *) ((size_t)msg->arr + (char *)msg);
  return msg;
}
int CMessage_MyPointerMsg::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group Player: IrrGroup{
Player(int impl_noname_0, int impl_noname_1);
void beginMarshallRound();
void beginMessageRound();
void beginMessageNoAllocationRound();
void receiveMarshalled(int sz, const int *arr);
void receiveNoAllocation(MyPointerMsg* impl_msg);
void receiveAllocation(MyPointerMsg* impl_msg);
void receiveMsg(int number);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_Player::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: Player(int impl_noname_0, int impl_noname_1);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void beginMarshallRound();
 */
void CProxyElement_Player::beginMarshallRound(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Player::idx_beginMarshallRound_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_Player::idx_beginMarshallRound_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_Player::idx_beginMarshallRound_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void beginMessageRound();
 */
void CProxyElement_Player::beginMessageRound(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Player::idx_beginMessageRound_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_Player::idx_beginMessageRound_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_Player::idx_beginMessageRound_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void beginMessageNoAllocationRound();
 */
void CProxyElement_Player::beginMessageNoAllocationRound(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Player::idx_beginMessageNoAllocationRound_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_Player::idx_beginMessageNoAllocationRound_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_Player::idx_beginMessageNoAllocationRound_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void receiveMarshalled(int sz, const int *arr);
 */
void CProxyElement_Player::receiveMarshalled(int sz, const int *arr, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int sz, const int *arr
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_arr, impl_cnt_arr;
  impl_off_arr=impl_off=CK_ALIGN(impl_off,sizeof(int));
  impl_off+=(impl_cnt_arr=sizeof(int)*(sz));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|sz;
    implP|impl_off_arr;
    implP|impl_cnt_arr;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|sz;
    implP|impl_off_arr;
    implP|impl_cnt_arr;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_arr,arr,impl_cnt_arr);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Player::idx_receiveMarshalled_marshall5(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_Player::idx_receiveMarshalled_marshall5(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_Player::idx_receiveMarshalled_marshall5(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void receiveNoAllocation(MyPointerMsg* impl_msg);
 */
void CProxyElement_Player::receiveNoAllocation(MyPointerMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Player::idx_receiveNoAllocation_MyPointerMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_Player::idx_receiveNoAllocation_MyPointerMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_Player::idx_receiveNoAllocation_MyPointerMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void receiveAllocation(MyPointerMsg* impl_msg);
 */
void CProxyElement_Player::receiveAllocation(MyPointerMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Player::idx_receiveAllocation_MyPointerMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_Player::idx_receiveAllocation_MyPointerMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_Player::idx_receiveAllocation_MyPointerMsg(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void receiveMsg(int number);
 */
void CProxyElement_Player::receiveMsg(int number, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int number
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|number;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|number;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Player::idx_receiveMsg_marshall8(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_Player::idx_receiveMsg_marshall8(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_Player::idx_receiveMsg_marshall8(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Player(int impl_noname_0, int impl_noname_1);
 */
CkGroupID CProxy_Player::ckNew(int impl_noname_0, int impl_noname_1, const CkEntryOptions *impl_e_opts)
{
  //Marshall: int impl_noname_0, int impl_noname_1
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_0;
    implP|impl_noname_1;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_0;
    implP|impl_noname_1;
  }
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  CkGroupID gId = CkCreateGroup(CkIndex_Player::__idx, CkIndex_Player::idx_Player_marshall1(), impl_msg);
  return gId;
}
  CProxy_Player::CProxy_Player(int impl_noname_0, int impl_noname_1, const CkEntryOptions *impl_e_opts)
{
  //Marshall: int impl_noname_0, int impl_noname_1
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_0;
    implP|impl_noname_1;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_0;
    implP|impl_noname_1;
  }
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  ckSetGroupID(CkCreateGroup(CkIndex_Player::__idx, CkIndex_Player::idx_Player_marshall1(), impl_msg));
}

// Entry point registration function
int CkIndex_Player::reg_Player_marshall1() {
  int epidx = CkRegisterEp("Player(int impl_noname_0, int impl_noname_1)",
      reinterpret_cast<CkCallFnPtr>(_call_Player_marshall1), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_Player_marshall1);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_Player_marshall1);

  return epidx;
}

void CkIndex_Player::_call_Player_marshall1(void* impl_msg, void* impl_obj_void)
{
  Player* impl_obj = static_cast<Player*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int impl_noname_0, int impl_noname_1*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> impl_noname_0;
  implP|impl_noname_0;
  PUP::detail::TemporaryObjectHolder<int> impl_noname_1;
  implP|impl_noname_1;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj_void) Player(std::move(impl_noname_0.t), std::move(impl_noname_1.t));
}
int CkIndex_Player::_callmarshall_Player_marshall1(char* impl_buf, void* impl_obj_void) {
  Player* impl_obj = static_cast<Player*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int impl_noname_0, int impl_noname_1*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> impl_noname_0;
  implP|impl_noname_0;
  PUP::detail::TemporaryObjectHolder<int> impl_noname_1;
  implP|impl_noname_1;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj_void) Player(std::move(impl_noname_0.t), std::move(impl_noname_1.t));
  return implP.size();
}
void CkIndex_Player::_marshallmessagepup_Player_marshall1(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int impl_noname_0, int impl_noname_1*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> impl_noname_0;
  implP|impl_noname_0;
  PUP::detail::TemporaryObjectHolder<int> impl_noname_1;
  implP|impl_noname_1;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("impl_noname_0");
  implDestP|impl_noname_0;
  if (implDestP.hasComments()) implDestP.comment("impl_noname_1");
  implDestP|impl_noname_1;
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void beginMarshallRound();
 */
void CProxy_Player::beginMarshallRound(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Player::idx_beginMarshallRound_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_Player::idx_beginMarshallRound_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_Player::idx_beginMarshallRound_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_Player::beginMarshallRound(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_Player::idx_beginMarshallRound_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_Player::beginMarshallRound(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_Player::idx_beginMarshallRound_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_Player::reg_beginMarshallRound_void() {
  int epidx = CkRegisterEp("beginMarshallRound()",
      reinterpret_cast<CkCallFnPtr>(_call_beginMarshallRound_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_Player::_call_beginMarshallRound_void(void* impl_msg, void* impl_obj_void)
{
  Player* impl_obj = static_cast<Player*>(impl_obj_void);
  impl_obj->beginMarshallRound();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_Player::beginMarshallRound_2_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void beginMessageRound();
 */
void CProxy_Player::beginMessageRound(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Player::idx_beginMessageRound_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_Player::idx_beginMessageRound_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_Player::idx_beginMessageRound_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_Player::beginMessageRound(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_Player::idx_beginMessageRound_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_Player::beginMessageRound(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_Player::idx_beginMessageRound_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_Player::reg_beginMessageRound_void() {
  int epidx = CkRegisterEp("beginMessageRound()",
      reinterpret_cast<CkCallFnPtr>(_call_beginMessageRound_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_Player::_call_beginMessageRound_void(void* impl_msg, void* impl_obj_void)
{
  Player* impl_obj = static_cast<Player*>(impl_obj_void);
  impl_obj->beginMessageRound();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_Player::beginMessageRound_3_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void beginMessageNoAllocationRound();
 */
void CProxy_Player::beginMessageNoAllocationRound(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Player::idx_beginMessageNoAllocationRound_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_Player::idx_beginMessageNoAllocationRound_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_Player::idx_beginMessageNoAllocationRound_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_Player::beginMessageNoAllocationRound(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_Player::idx_beginMessageNoAllocationRound_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_Player::beginMessageNoAllocationRound(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_Player::idx_beginMessageNoAllocationRound_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_Player::reg_beginMessageNoAllocationRound_void() {
  int epidx = CkRegisterEp("beginMessageNoAllocationRound()",
      reinterpret_cast<CkCallFnPtr>(_call_beginMessageNoAllocationRound_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_Player::_call_beginMessageNoAllocationRound_void(void* impl_msg, void* impl_obj_void)
{
  Player* impl_obj = static_cast<Player*>(impl_obj_void);
  impl_obj->beginMessageNoAllocationRound();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_Player::beginMessageNoAllocationRound_4_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void receiveMarshalled(int sz, const int *arr);
 */
void CProxy_Player::receiveMarshalled(int sz, const int *arr, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int sz, const int *arr
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_arr, impl_cnt_arr;
  impl_off_arr=impl_off=CK_ALIGN(impl_off,sizeof(int));
  impl_off+=(impl_cnt_arr=sizeof(int)*(sz));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|sz;
    implP|impl_off_arr;
    implP|impl_cnt_arr;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|sz;
    implP|impl_off_arr;
    implP|impl_cnt_arr;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_arr,arr,impl_cnt_arr);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Player::idx_receiveMarshalled_marshall5(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_Player::idx_receiveMarshalled_marshall5(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_Player::idx_receiveMarshalled_marshall5(), impl_msg, ckGetGroupID(),0);
}
void CProxy_Player::receiveMarshalled(int sz, const int *arr, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: int sz, const int *arr
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_arr, impl_cnt_arr;
  impl_off_arr=impl_off=CK_ALIGN(impl_off,sizeof(int));
  impl_off+=(impl_cnt_arr=sizeof(int)*(sz));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|sz;
    implP|impl_off_arr;
    implP|impl_cnt_arr;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|sz;
    implP|impl_off_arr;
    implP|impl_cnt_arr;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_arr,arr,impl_cnt_arr);
  CkSendMsgBranchMulti(CkIndex_Player::idx_receiveMarshalled_marshall5(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_Player::receiveMarshalled(int sz, const int *arr, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: int sz, const int *arr
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_arr, impl_cnt_arr;
  impl_off_arr=impl_off=CK_ALIGN(impl_off,sizeof(int));
  impl_off+=(impl_cnt_arr=sizeof(int)*(sz));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|sz;
    implP|impl_off_arr;
    implP|impl_cnt_arr;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|sz;
    implP|impl_off_arr;
    implP|impl_cnt_arr;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_arr,arr,impl_cnt_arr);
  CkSendMsgBranchGroup(CkIndex_Player::idx_receiveMarshalled_marshall5(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_Player::reg_receiveMarshalled_marshall5() {
  int epidx = CkRegisterEp("receiveMarshalled(int sz, const int *arr)",
      reinterpret_cast<CkCallFnPtr>(_call_receiveMarshalled_marshall5), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_receiveMarshalled_marshall5);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_receiveMarshalled_marshall5);

  return epidx;
}

void CkIndex_Player::_call_receiveMarshalled_marshall5(void* impl_msg, void* impl_obj_void)
{
  Player* impl_obj = static_cast<Player*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int sz, const int *arr*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> sz;
  implP|sz;
  int impl_off_arr, impl_cnt_arr;
  implP|impl_off_arr;
  implP|impl_cnt_arr;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  int *arr=(int *)(impl_buf+impl_off_arr);
  impl_obj->receiveMarshalled(std::move(sz.t), arr);
}
int CkIndex_Player::_callmarshall_receiveMarshalled_marshall5(char* impl_buf, void* impl_obj_void) {
  Player* impl_obj = static_cast<Player*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int sz, const int *arr*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> sz;
  implP|sz;
  int impl_off_arr, impl_cnt_arr;
  implP|impl_off_arr;
  implP|impl_cnt_arr;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  int *arr=(int *)(impl_buf+impl_off_arr);
  impl_obj->receiveMarshalled(std::move(sz.t), arr);
  return implP.size();
}
void CkIndex_Player::_marshallmessagepup_receiveMarshalled_marshall5(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int sz, const int *arr*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> sz;
  implP|sz;
  int impl_off_arr, impl_cnt_arr;
  implP|impl_off_arr;
  implP|impl_cnt_arr;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  int *arr=(int *)(impl_buf+impl_off_arr);
  if (implDestP.hasComments()) implDestP.comment("sz");
  implDestP|sz;
  if (implDestP.hasComments()) implDestP.comment("arr");
  implDestP.synchronize(PUP::sync_begin_array);
  for (int impl_i=0;impl_i*(sizeof(*arr))<impl_cnt_arr;impl_i++) {
    implDestP.synchronize(PUP::sync_item);
    implDestP|arr[impl_i];
  }
  implDestP.synchronize(PUP::sync_end_array);
}
PUPable_def(SINGLE_ARG(Closure_Player::receiveMarshalled_5_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void receiveNoAllocation(MyPointerMsg* impl_msg);
 */
void CProxy_Player::receiveNoAllocation(MyPointerMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Player::idx_receiveNoAllocation_MyPointerMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_Player::idx_receiveNoAllocation_MyPointerMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_Player::idx_receiveNoAllocation_MyPointerMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_Player::receiveNoAllocation(MyPointerMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_Player::idx_receiveNoAllocation_MyPointerMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_Player::receiveNoAllocation(MyPointerMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_Player::idx_receiveNoAllocation_MyPointerMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_Player::reg_receiveNoAllocation_MyPointerMsg() {
  int epidx = CkRegisterEp("receiveNoAllocation(MyPointerMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_receiveNoAllocation_MyPointerMsg), CMessage_MyPointerMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)MyPointerMsg::ckDebugPup);
  return epidx;
}

void CkIndex_Player::_call_receiveNoAllocation_MyPointerMsg(void* impl_msg, void* impl_obj_void)
{
  Player* impl_obj = static_cast<Player*>(impl_obj_void);
  impl_obj->receiveNoAllocation((MyPointerMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void receiveAllocation(MyPointerMsg* impl_msg);
 */
void CProxy_Player::receiveAllocation(MyPointerMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Player::idx_receiveAllocation_MyPointerMsg(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_Player::idx_receiveAllocation_MyPointerMsg(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_Player::idx_receiveAllocation_MyPointerMsg(), impl_msg, ckGetGroupID(),0);
}
void CProxy_Player::receiveAllocation(MyPointerMsg* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_Player::idx_receiveAllocation_MyPointerMsg(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_Player::receiveAllocation(MyPointerMsg* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_Player::idx_receiveAllocation_MyPointerMsg(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_Player::reg_receiveAllocation_MyPointerMsg() {
  int epidx = CkRegisterEp("receiveAllocation(MyPointerMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_receiveAllocation_MyPointerMsg), CMessage_MyPointerMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)MyPointerMsg::ckDebugPup);
  return epidx;
}

void CkIndex_Player::_call_receiveAllocation_MyPointerMsg(void* impl_msg, void* impl_obj_void)
{
  Player* impl_obj = static_cast<Player*>(impl_obj_void);
  impl_obj->receiveAllocation((MyPointerMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void receiveMsg(int number);
 */
void CProxy_Player::receiveMsg(int number, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int number
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|number;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|number;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Player::idx_receiveMsg_marshall8(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_Player::idx_receiveMsg_marshall8(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_Player::idx_receiveMsg_marshall8(), impl_msg, ckGetGroupID(),0);
}
void CProxy_Player::receiveMsg(int number, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: int number
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|number;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|number;
  }
  CkSendMsgBranchMulti(CkIndex_Player::idx_receiveMsg_marshall8(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_Player::receiveMsg(int number, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: int number
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|number;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|number;
  }
  CkSendMsgBranchGroup(CkIndex_Player::idx_receiveMsg_marshall8(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_Player::reg_receiveMsg_marshall8() {
  int epidx = CkRegisterEp("receiveMsg(int number)",
      reinterpret_cast<CkCallFnPtr>(_call_receiveMsg_marshall8), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_receiveMsg_marshall8);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_receiveMsg_marshall8);

  return epidx;
}

void CkIndex_Player::_call_receiveMsg_marshall8(void* impl_msg, void* impl_obj_void)
{
  Player* impl_obj = static_cast<Player*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int number*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> number;
  implP|number;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->receiveMsg(std::move(number.t));
}
int CkIndex_Player::_callmarshall_receiveMsg_marshall8(char* impl_buf, void* impl_obj_void) {
  Player* impl_obj = static_cast<Player*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int number*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> number;
  implP|number;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->receiveMsg(std::move(number.t));
  return implP.size();
}
void CkIndex_Player::_marshallmessagepup_receiveMsg_marshall8(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int number*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> number;
  implP|number;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("number");
  implDestP|number;
}
PUPable_def(SINGLE_ARG(Closure_Player::receiveMsg_8_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Player(int impl_noname_0, int impl_noname_1);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void beginMarshallRound();
 */
void CProxySection_Player::beginMarshallRound(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_Player::idx_beginMarshallRound_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_Player::idx_beginMarshallRound_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void beginMessageRound();
 */
void CProxySection_Player::beginMessageRound(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_Player::idx_beginMessageRound_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_Player::idx_beginMessageRound_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void beginMessageNoAllocationRound();
 */
void CProxySection_Player::beginMessageNoAllocationRound(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_Player::idx_beginMessageNoAllocationRound_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_Player::idx_beginMessageNoAllocationRound_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void receiveMarshalled(int sz, const int *arr);
 */
void CProxySection_Player::receiveMarshalled(int sz, const int *arr, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int sz, const int *arr
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_arr, impl_cnt_arr;
  impl_off_arr=impl_off=CK_ALIGN(impl_off,sizeof(int));
  impl_off+=(impl_cnt_arr=sizeof(int)*(sz));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|sz;
    implP|impl_off_arr;
    implP|impl_cnt_arr;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|sz;
    implP|impl_off_arr;
    implP|impl_cnt_arr;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_arr,arr,impl_cnt_arr);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_Player::idx_receiveMarshalled_marshall5(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_Player::idx_receiveMarshalled_marshall5(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void receiveNoAllocation(MyPointerMsg* impl_msg);
 */
void CProxySection_Player::receiveNoAllocation(MyPointerMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_Player::idx_receiveNoAllocation_MyPointerMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_Player::idx_receiveNoAllocation_MyPointerMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void receiveAllocation(MyPointerMsg* impl_msg);
 */
void CProxySection_Player::receiveAllocation(MyPointerMsg* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_Player::idx_receiveAllocation_MyPointerMsg(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_Player::idx_receiveAllocation_MyPointerMsg(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void receiveMsg(int number);
 */
void CProxySection_Player::receiveMsg(int number, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int number
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|number;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|number;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_Player::idx_receiveMsg_marshall8(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_Player::idx_receiveMsg_marshall8(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_Player::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_IrrGroup::__idx);
   CkRegisterGroupIrr(__idx,Player::isIrreducible());
  // REG: Player(int impl_noname_0, int impl_noname_1);
  idx_Player_marshall1();

  // REG: void beginMarshallRound();
  idx_beginMarshallRound_void();

  // REG: void beginMessageRound();
  idx_beginMessageRound_void();

  // REG: void beginMessageNoAllocationRound();
  idx_beginMessageNoAllocationRound_void();

  // REG: void receiveMarshalled(int sz, const int *arr);
  idx_receiveMarshalled_marshall5();

  // REG: void receiveNoAllocation(MyPointerMsg* impl_msg);
  idx_receiveNoAllocation_MyPointerMsg();

  // REG: void receiveAllocation(MyPointerMsg* impl_msg);
  idx_receiveAllocation_MyPointerMsg();

  // REG: void receiveMsg(int number);
  idx_receiveMsg_marshall8();

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerping_pong(void)
{
  static int _done = 0; if(_done) return; _done = 1;
/* REG: mainchare Main: Chare{
Main(CkArgMsg* impl_msg);
void done();
};
*/
  CkIndex_Main::__register("Main", sizeof(Main));

/* REG: message MyPointerMsg{
int arr[];
int size;
}
;
*/
CMessage_MyPointerMsg::__register("MyPointerMsg", sizeof(MyPointerMsg),(CkPackFnPtr) MyPointerMsg::pack,(CkUnpackFnPtr) MyPointerMsg::unpack);

/* REG: group Player: IrrGroup{
Player(int impl_noname_0, int impl_noname_1);
void beginMarshallRound();
void beginMessageRound();
void beginMessageNoAllocationRound();
void receiveMarshalled(int sz, const int *arr);
void receiveNoAllocation(MyPointerMsg* impl_msg);
void receiveAllocation(MyPointerMsg* impl_msg);
void receiveMsg(int number);
};
*/
  CkIndex_Player::__register("Player", sizeof(Player));

}
extern "C" void CkRegisterMainModule(void) {
  _registerping_pong();
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_Main::virtual_pup(PUP::er &p) {
    recursive_pup<Main>(dynamic_cast<Main*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_Player::virtual_pup(PUP::er &p) {
    recursive_pup<Player>(dynamic_cast<Player*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
