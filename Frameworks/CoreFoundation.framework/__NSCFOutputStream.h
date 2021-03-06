/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface __NSCFOutputStream : NSOutputStream  {
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (void)setDelegate:(id)arg1;
- (void)finalize;
- (void)open;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (void)close;
- (id)delegate;
- (BOOL)hasSpaceAvailable;
- (int)write:(const char *)arg1 maxLength:(unsigned int)arg2;
- (id)initToFileAtPath:(id)arg1 append:(BOOL)arg2;
- (id)initToBuffer:(char *)arg1 capacity:(unsigned int)arg2;
- (id)initToMemory;
- (id)initWithURL:(id)arg1 append:(BOOL)arg2;
- (void)_unscheduleFromCFRunLoop:(struct __CFRunLoop { }*)arg1 forMode:(struct __CFString { }*)arg2;
- (void)_scheduleInCFRunLoop:(struct __CFRunLoop { }*)arg1 forMode:(struct __CFString { }*)arg2;
- (BOOL)_setCFClientFlags:(unsigned long)arg1 callback:(int (*)())arg2 context:(struct { int x1; void *x2; int (*x3)(); int (*x4)(); int (*x5)(); }*)arg3;
- (id)streamError;
- (unsigned int)streamStatus;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (BOOL)setProperty:(id)arg1 forKey:(id)arg2;
- (id)propertyForKey:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (unsigned int)retainCount;
- (id)retain;
- (oneway void)release;

@end
