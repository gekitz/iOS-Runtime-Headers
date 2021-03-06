/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSString, AVWeakReference;

@interface AVCMNotificationDispatcherListenerKey : NSObject <NSCopying> {
    AVWeakReference *_weakReferenceToListener;
    int (*_callback)();
    NSString *_name;
    void *_object;
}

+ (id)listenerKeyWithWeakReferenceToListener:(id)arg1 callback:(int (*)())arg2 name:(id)arg3 object:(const void*)arg4;

- (id)initWithWeakReferenceToListener:(id)arg1 callback:(int (*)())arg2 name:(id)arg3 object:(const void*)arg4;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;

@end
