/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString, NSMutableArray;

@interface NSXPCConnection : NSObject <NSXPCObject> {
    struct _xpc_connection_s { } *_conn;
    struct _xpc_connection_s { } *_sconn;
    int _lock;
    struct dispatch_queue_s { } *_dq;
    struct dispatch_group_s { } *_dgroup;
    NSString *_serviceName;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _handleMessage;

    long long _mseqno;
    NSMutableArray *_invalidHandlers;
    int _started;
    int _invalid;
    int _flavor;
}

@property(readonly) NSString * serviceName;
@property(readonly) struct _xpc_connection_s { }* XPCConnection;
@property(copy) id handleMessage;
@property struct dispatch_queue_s { }* dispatchQueue;


- (void)start;
- (void)invalidate;
- (id)initWithXPCObject:(void*)arg1;
- (void)sendMessage:(void*)arg1 waitForAck:(BOOL)arg2;
- (void)sendMessage:(void*)arg1 waitForSend:(BOOL)arg2;
- (void)setHandleMessage:(id)arg1;
- (id)handleMessage;
- (struct _xpc_connection_s { }*)XPCConnection;
- (id)initWithPeerConnection:(struct _xpc_connection_s { }*)arg1;
- (id)initWithReceivedConnection:(struct _xpc_connection_s { }*)arg1;
- (id)initWithServiceName:(id)arg1 privileged:(BOOL)arg2;
- (id)initWithXPCConnection:(struct _xpc_connection_s { }*)arg1 type:(int)arg2;
- (void*)encodeToNewXPCObject;
- (void)setDispatchQueue:(struct dispatch_queue_s { }*)arg1;
- (struct dispatch_queue_s { }*)dispatchQueue;
- (id)serviceName;
- (void)addInvalidationHandler:(id)arg1;
- (void)__invalidate;
- (void)dealloc;

@end
