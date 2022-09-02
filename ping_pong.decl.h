#ifndef _DECL_ping_pong_H_
#define _DECL_ping_pong_H_
#include "charm++.h"
#include "envelope.h"
#include <memory>
#include "sdag.h"
/* DECLS: mainchare Main: Chare{
Main(CkArgMsg* impl_msg);
void done();
};
 */
 class Main;
 class CkIndex_Main;
 class CProxy_Main;
/* --------------- index object ------------------ */
class CkIndex_Main:public CkIndex_Chare{
  public:
    typedef Main local_t;
    typedef CkIndex_Main index_t;
    typedef CProxy_Main proxy_t;
    typedef CProxy_Main element_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: Main(CkArgMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_Main_CkArgMsg();
    // Entry point index lookup
    
    inline static int idx_Main_CkArgMsg() {
      static int epidx = reg_Main_CkArgMsg();
      return epidx;
    }

    
    static int ckNew(CkArgMsg* impl_msg) { return idx_Main_CkArgMsg(); }
    
    static void _call_Main_CkArgMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_Main_CkArgMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void done();
     */
    // Entry point registration at startup
    
    static int reg_done_void();
    // Entry point index lookup
    
    inline static int idx_done_void() {
      static int epidx = reg_done_void();
      return epidx;
    }

    
    inline static int idx_done(void (Main::*)() ) {
      return idx_done_void();
    }


    
    static int done() { return idx_done_void(); }
    // Entry point registration at startup
    
    static int reg_redn_wrapper_done_void();
    // Entry point index lookup
    
    inline static int idx_redn_wrapper_done_void() {
      static int epidx = reg_redn_wrapper_done_void();
      return epidx;
    }
    
    static int redn_wrapper_done(CkReductionMsg* impl_msg) { return idx_redn_wrapper_done_void(); }
    
    static void _call_redn_wrapper_done_void(void* impl_msg, void* impl_obj_void);
    
    static void _call_done_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_done_void(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxy_Main:public CProxy_Chare{
  public:
    typedef Main local_t;
    typedef CkIndex_Main index_t;
    typedef CProxy_Main proxy_t;
    typedef CProxy_Main element_t;

    CProxy_Main(void) {};
    CProxy_Main(CkChareID __cid) : CProxy_Chare(__cid){  }
    CProxy_Main(const Chare *c) : CProxy_Chare(c){  }

    int ckIsDelegated(void) const
    { return CProxy_Chare::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxy_Chare::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxy_Chare::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxy_Chare::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxy_Chare::ckCheck(); }
    const CkChareID &ckGetChareID(void) const
    { return CProxy_Chare::ckGetChareID(); }
    operator const CkChareID &(void) const
    { return ckGetChareID(); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxy_Chare::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxy_Chare::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxy_Chare::pup(p);
    }

    void ckSetChareID(const CkChareID &c)
    {      CProxy_Chare::ckSetChareID(c); }
    Main *ckLocal(void) const
    { return (Main *)CkLocalChare(&ckGetChareID()); }
/* DECLS: Main(CkArgMsg* impl_msg);
 */
    static CkChareID ckNew(CkArgMsg* impl_msg, int onPE=CK_PE_ANY);
    static void ckNew(CkArgMsg* impl_msg, CkChareID* pcid, int onPE=CK_PE_ANY);

/* DECLS: void done();
 */
    
    void done(const CkEntryOptions *impl_e_opts=NULL);

};
#define Main_SDAG_CODE 
typedef CBaseT1<Chare, CProxy_Main>CBase_Main;

#ifndef GROUPDEPNUM_DECLARED
# define GROUPDEPNUM_DECLARED
struct GroupDepNum
{
  int groupDepNum;
  explicit GroupDepNum(int g = 0) : groupDepNum{g} { }
  operator int() const { return groupDepNum; }
};
#endif
/* DECLS: message MyPointerMsg{
int arr[];
int size;
}
;
 */
class MyPointerMsg;
class CMessage_MyPointerMsg:public CkMessage{
  public:
    static int __idx;
    void* operator new(size_t, void*p) { return p; }
    void* operator new(size_t);
    void* operator new(size_t, int*, const int);
    void* operator new(size_t, int*, const int, const GroupDepNum);
    void* operator new(size_t, int*);
#if CMK_MULTIPLE_DELETE
    void operator delete(void*p, void*){dealloc(p);}
    void operator delete(void*p){dealloc(p);}
    void operator delete(void*p, int*, const int){dealloc(p);}
    void operator delete(void*p, int*, const int, const GroupDepNum){dealloc(p);}
    void operator delete(void*p, int*){dealloc(p);}
#endif
    void operator delete(void*p, size_t){dealloc(p);}
    static void* alloc(int,size_t, int*, int, GroupDepNum);
    static void dealloc(void *p);
    CMessage_MyPointerMsg();
    static void *pack(MyPointerMsg *p);
    static MyPointerMsg* unpack(void* p);
    void *operator new(size_t, int);
    void *operator new(size_t, int, const int);
    void *operator new(size_t, int, const int, const GroupDepNum);
#if CMK_MULTIPLE_DELETE
    void operator delete(void *p, int){dealloc(p);}
    void operator delete(void *p, int, const int){dealloc(p);}
    void operator delete(void *p, int, const int, const GroupDepNum){dealloc(p);}
#endif
    static void __register(const char *s, size_t size, CkPackFnPtr pack, CkUnpackFnPtr unpack) {
      __idx = CkRegisterMsg(s, pack, unpack, dealloc, size);
    }
};

/* DECLS: group Player: IrrGroup{
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
 class Player;
 class CkIndex_Player;
 class CProxy_Player;
 class CProxyElement_Player;
 class CProxySection_Player;
/* --------------- index object ------------------ */
class CkIndex_Player:public CkIndex_IrrGroup{
  public:
    typedef Player local_t;
    typedef CkIndex_Player index_t;
    typedef CProxy_Player proxy_t;
    typedef CProxyElement_Player element_t;
    typedef CProxySection_Player section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: Player(int impl_noname_0, int impl_noname_1);
     */
    // Entry point registration at startup
    
    static int reg_Player_marshall1();
    // Entry point index lookup
    
    inline static int idx_Player_marshall1() {
      static int epidx = reg_Player_marshall1();
      return epidx;
    }

    
    static int ckNew(int impl_noname_0, int impl_noname_1) { return idx_Player_marshall1(); }
    
    static void _call_Player_marshall1(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_Player_marshall1(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_Player_marshall1(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_Player_marshall1(PUP::er &p,void *msg);
    /* DECLS: void beginMarshallRound();
     */
    // Entry point registration at startup
    
    static int reg_beginMarshallRound_void();
    // Entry point index lookup
    
    inline static int idx_beginMarshallRound_void() {
      static int epidx = reg_beginMarshallRound_void();
      return epidx;
    }

    
    inline static int idx_beginMarshallRound(void (Player::*)() ) {
      return idx_beginMarshallRound_void();
    }


    
    static int beginMarshallRound() { return idx_beginMarshallRound_void(); }
    
    static void _call_beginMarshallRound_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_beginMarshallRound_void(void* impl_msg, void* impl_obj);
    /* DECLS: void beginMessageRound();
     */
    // Entry point registration at startup
    
    static int reg_beginMessageRound_void();
    // Entry point index lookup
    
    inline static int idx_beginMessageRound_void() {
      static int epidx = reg_beginMessageRound_void();
      return epidx;
    }

    
    inline static int idx_beginMessageRound(void (Player::*)() ) {
      return idx_beginMessageRound_void();
    }


    
    static int beginMessageRound() { return idx_beginMessageRound_void(); }
    
    static void _call_beginMessageRound_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_beginMessageRound_void(void* impl_msg, void* impl_obj);
    /* DECLS: void beginMessageNoAllocationRound();
     */
    // Entry point registration at startup
    
    static int reg_beginMessageNoAllocationRound_void();
    // Entry point index lookup
    
    inline static int idx_beginMessageNoAllocationRound_void() {
      static int epidx = reg_beginMessageNoAllocationRound_void();
      return epidx;
    }

    
    inline static int idx_beginMessageNoAllocationRound(void (Player::*)() ) {
      return idx_beginMessageNoAllocationRound_void();
    }


    
    static int beginMessageNoAllocationRound() { return idx_beginMessageNoAllocationRound_void(); }
    
    static void _call_beginMessageNoAllocationRound_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_beginMessageNoAllocationRound_void(void* impl_msg, void* impl_obj);
    /* DECLS: void receiveMarshalled(int sz, const int *arr);
     */
    // Entry point registration at startup
    
    static int reg_receiveMarshalled_marshall5();
    // Entry point index lookup
    
    inline static int idx_receiveMarshalled_marshall5() {
      static int epidx = reg_receiveMarshalled_marshall5();
      return epidx;
    }

    
    inline static int idx_receiveMarshalled(void (Player::*)(int sz, const int *arr) ) {
      return idx_receiveMarshalled_marshall5();
    }


    
    static int receiveMarshalled(int sz, const int *arr) { return idx_receiveMarshalled_marshall5(); }
    
    static void _call_receiveMarshalled_marshall5(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_receiveMarshalled_marshall5(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_receiveMarshalled_marshall5(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_receiveMarshalled_marshall5(PUP::er &p,void *msg);
    /* DECLS: void receiveNoAllocation(MyPointerMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_receiveNoAllocation_MyPointerMsg();
    // Entry point index lookup
    
    inline static int idx_receiveNoAllocation_MyPointerMsg() {
      static int epidx = reg_receiveNoAllocation_MyPointerMsg();
      return epidx;
    }

    
    inline static int idx_receiveNoAllocation(void (Player::*)(MyPointerMsg* impl_msg) ) {
      return idx_receiveNoAllocation_MyPointerMsg();
    }


    
    static int receiveNoAllocation(MyPointerMsg* impl_msg) { return idx_receiveNoAllocation_MyPointerMsg(); }
    
    static void _call_receiveNoAllocation_MyPointerMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_receiveNoAllocation_MyPointerMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void receiveAllocation(MyPointerMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_receiveAllocation_MyPointerMsg();
    // Entry point index lookup
    
    inline static int idx_receiveAllocation_MyPointerMsg() {
      static int epidx = reg_receiveAllocation_MyPointerMsg();
      return epidx;
    }

    
    inline static int idx_receiveAllocation(void (Player::*)(MyPointerMsg* impl_msg) ) {
      return idx_receiveAllocation_MyPointerMsg();
    }


    
    static int receiveAllocation(MyPointerMsg* impl_msg) { return idx_receiveAllocation_MyPointerMsg(); }
    
    static void _call_receiveAllocation_MyPointerMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_receiveAllocation_MyPointerMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void receiveMsg(int number);
     */
    // Entry point registration at startup
    
    static int reg_receiveMsg_marshall8();
    // Entry point index lookup
    
    inline static int idx_receiveMsg_marshall8() {
      static int epidx = reg_receiveMsg_marshall8();
      return epidx;
    }

    
    inline static int idx_receiveMsg(void (Player::*)(int number) ) {
      return idx_receiveMsg_marshall8();
    }


    
    static int receiveMsg(int number) { return idx_receiveMsg_marshall8(); }
    
    static void _call_receiveMsg_marshall8(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_receiveMsg_marshall8(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_receiveMsg_marshall8(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_receiveMsg_marshall8(PUP::er &p,void *msg);
};
/* --------------- element proxy ------------------ */
class CProxyElement_Player: public CProxyElement_IrrGroup{
  public:
    typedef Player local_t;
    typedef CkIndex_Player index_t;
    typedef CProxy_Player proxy_t;
    typedef CProxyElement_Player element_t;
    typedef CProxySection_Player section_t;


    /* TRAM aggregators */

    CProxyElement_Player(void) {
    }
    CProxyElement_Player(const IrrGroup *g) : CProxyElement_IrrGroup(g){
    }
    CProxyElement_Player(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_IrrGroup(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_Player(CkGroupID _gid,int _onPE) : CProxyElement_IrrGroup(_gid,_onPE){
    }

    int ckIsDelegated(void) const
    { return CProxyElement_IrrGroup::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxyElement_IrrGroup::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxyElement_IrrGroup::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxyElement_IrrGroup::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxyElement_IrrGroup::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxyElement_IrrGroup::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxyElement_IrrGroup::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_IrrGroup::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_IrrGroup::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxyElement_IrrGroup::ckSetReductionClient(cb); }
int ckGetGroupPe(void) const
{return CProxyElement_IrrGroup::ckGetGroupPe();}

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxyElement_IrrGroup::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxyElement_IrrGroup::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxyElement_IrrGroup::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxyElement_IrrGroup::ckSetGroupID(g);
    }
    Player* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static Player* ckLocalBranch(CkGroupID gID) {
      return (Player*)CkLocalBranch(gID);
    }
/* DECLS: Player(int impl_noname_0, int impl_noname_1);
 */
    

/* DECLS: void beginMarshallRound();
 */
    
    void beginMarshallRound(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void beginMessageRound();
 */
    
    void beginMessageRound(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void beginMessageNoAllocationRound();
 */
    
    void beginMessageNoAllocationRound(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void receiveMarshalled(int sz, const int *arr);
 */
    
    void receiveMarshalled(int sz, const int *arr, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void receiveNoAllocation(MyPointerMsg* impl_msg);
 */
    
    void receiveNoAllocation(MyPointerMsg* impl_msg);

/* DECLS: void receiveAllocation(MyPointerMsg* impl_msg);
 */
    
    void receiveAllocation(MyPointerMsg* impl_msg);

/* DECLS: void receiveMsg(int number);
 */
    
    void receiveMsg(int number, const CkEntryOptions *impl_e_opts=NULL);

};
/* ---------------- collective proxy -------------- */
class CProxy_Player: public CProxy_IrrGroup{
  public:
    typedef Player local_t;
    typedef CkIndex_Player index_t;
    typedef CProxy_Player proxy_t;
    typedef CProxyElement_Player element_t;
    typedef CProxySection_Player section_t;

    CProxy_Player(void) {
    }
    CProxy_Player(const IrrGroup *g) : CProxy_IrrGroup(g){
    }
    CProxy_Player(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_IrrGroup(_gid,CK_DELCTOR_ARGS){  }
    CProxy_Player(CkGroupID _gid) : CProxy_IrrGroup(_gid){  }
    CProxyElement_Player operator[](int onPE) const
      {return CProxyElement_Player(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

    int ckIsDelegated(void) const
    { return CProxy_IrrGroup::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxy_IrrGroup::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxy_IrrGroup::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxy_IrrGroup::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxy_IrrGroup::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxy_IrrGroup::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxy_IrrGroup::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_IrrGroup::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_IrrGroup::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxy_IrrGroup::ckSetReductionClient(cb); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxy_IrrGroup::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxy_IrrGroup::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxy_IrrGroup::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxy_IrrGroup::ckSetGroupID(g);
    }
    Player* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static Player* ckLocalBranch(CkGroupID gID) {
      return (Player*)CkLocalBranch(gID);
    }
/* DECLS: Player(int impl_noname_0, int impl_noname_1);
 */
    
    static CkGroupID ckNew(int impl_noname_0, int impl_noname_1, const CkEntryOptions *impl_e_opts=NULL);
    CProxy_Player(int impl_noname_0, int impl_noname_1, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void beginMarshallRound();
 */
    
    void beginMarshallRound(const CkEntryOptions *impl_e_opts=NULL);
    
    void beginMarshallRound(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void beginMarshallRound(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void beginMessageRound();
 */
    
    void beginMessageRound(const CkEntryOptions *impl_e_opts=NULL);
    
    void beginMessageRound(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void beginMessageRound(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void beginMessageNoAllocationRound();
 */
    
    void beginMessageNoAllocationRound(const CkEntryOptions *impl_e_opts=NULL);
    
    void beginMessageNoAllocationRound(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void beginMessageNoAllocationRound(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void receiveMarshalled(int sz, const int *arr);
 */
    
    void receiveMarshalled(int sz, const int *arr, const CkEntryOptions *impl_e_opts=NULL);
    
    void receiveMarshalled(int sz, const int *arr, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void receiveMarshalled(int sz, const int *arr, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void receiveNoAllocation(MyPointerMsg* impl_msg);
 */
    
    void receiveNoAllocation(MyPointerMsg* impl_msg);
    
    void receiveNoAllocation(MyPointerMsg* impl_msg, int npes, int *pes);
    
    void receiveNoAllocation(MyPointerMsg* impl_msg, CmiGroup &grp);

/* DECLS: void receiveAllocation(MyPointerMsg* impl_msg);
 */
    
    void receiveAllocation(MyPointerMsg* impl_msg);
    
    void receiveAllocation(MyPointerMsg* impl_msg, int npes, int *pes);
    
    void receiveAllocation(MyPointerMsg* impl_msg, CmiGroup &grp);

/* DECLS: void receiveMsg(int number);
 */
    
    void receiveMsg(int number, const CkEntryOptions *impl_e_opts=NULL);
    
    void receiveMsg(int number, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void receiveMsg(int number, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

};
/* ---------------- section proxy -------------- */
class CProxySection_Player: public CProxySection_IrrGroup{
  public:
    typedef Player local_t;
    typedef CkIndex_Player index_t;
    typedef CProxy_Player proxy_t;
    typedef CProxyElement_Player element_t;
    typedef CProxySection_Player section_t;

    CProxySection_Player(void) {
    }
    CProxySection_Player(const IrrGroup *g) : CProxySection_IrrGroup(g){
    }
    CProxySection_Player(const CkGroupID &_gid,const int *_pelist,int _npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_Player(const CkGroupID &_gid,const int *_pelist,int _npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(_gid,_pelist,_npes,factor){  }
    CProxySection_Player(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,factor){  }
    CProxySection_Player(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

    int ckIsDelegated(void) const
    { return CProxySection_IrrGroup::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxySection_IrrGroup::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxySection_IrrGroup::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxySection_IrrGroup::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxySection_IrrGroup::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxySection_IrrGroup::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxySection_IrrGroup::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_IrrGroup::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_IrrGroup::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxySection_IrrGroup::ckSetReductionClient(cb); }
inline int ckGetNumSections() const
{ return CProxySection_IrrGroup::ckGetNumSections(); }
inline CkSectionInfo &ckGetSectionInfo()
{ return CProxySection_IrrGroup::ckGetSectionInfo(); }
inline CkSectionID *ckGetSectionIDs()
{ return CProxySection_IrrGroup::ckGetSectionIDs(); }
inline CkSectionID &ckGetSectionID()
{ return CProxySection_IrrGroup::ckGetSectionID(); }
inline CkSectionID &ckGetSectionID(int i)
{ return CProxySection_IrrGroup::ckGetSectionID(i); }
inline CkGroupID ckGetGroupIDn(int i) const
{ return CProxySection_IrrGroup::ckGetGroupIDn(i); }
inline const int *ckGetElements() const
{ return CProxySection_IrrGroup::ckGetElements(); }
inline const int *ckGetElements(int i) const
{ return CProxySection_IrrGroup::ckGetElements(i); }
inline int ckGetNumElements() const
{ return CProxySection_IrrGroup::ckGetNumElements(); } 
inline int ckGetNumElements(int i) const
{ return CProxySection_IrrGroup::ckGetNumElements(i); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxySection_IrrGroup::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxySection_IrrGroup::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxySection_IrrGroup::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxySection_IrrGroup::ckSetGroupID(g);
    }
    Player* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static Player* ckLocalBranch(CkGroupID gID) {
      return (Player*)CkLocalBranch(gID);
    }
/* DECLS: Player(int impl_noname_0, int impl_noname_1);
 */
    

/* DECLS: void beginMarshallRound();
 */
    
    void beginMarshallRound(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void beginMessageRound();
 */
    
    void beginMessageRound(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void beginMessageNoAllocationRound();
 */
    
    void beginMessageNoAllocationRound(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void receiveMarshalled(int sz, const int *arr);
 */
    
    void receiveMarshalled(int sz, const int *arr, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void receiveNoAllocation(MyPointerMsg* impl_msg);
 */
    
    void receiveNoAllocation(MyPointerMsg* impl_msg);

/* DECLS: void receiveAllocation(MyPointerMsg* impl_msg);
 */
    
    void receiveAllocation(MyPointerMsg* impl_msg);

/* DECLS: void receiveMsg(int number);
 */
    
    void receiveMsg(int number, const CkEntryOptions *impl_e_opts=NULL);

};
#define Player_SDAG_CODE 
typedef CBaseT1<Group, CProxy_Player>CBase_Player;

/* ---------------- method closures -------------- */
class Closure_Main {
  public:


    struct done_2_closure;

};


/* ---------------- method closures -------------- */
class Closure_Player {
  public:


    struct beginMarshallRound_2_closure;


    struct beginMessageRound_3_closure;


    struct beginMessageNoAllocationRound_4_closure;


    struct receiveMarshalled_5_closure;




    struct receiveMsg_8_closure;

};

extern void _registerping_pong(void);
extern "C" void CkRegisterMainModule(void);
#endif
