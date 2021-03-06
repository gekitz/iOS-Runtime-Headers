/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSRecursiveLock : NSObject <NSLocking> {
    void *_priv;
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (void)finalize;
- (BOOL)isLocking;
- (BOOL)lockBeforeDate:(id)arg1;
- (BOOL)tryLock;
- (void)unlock;
- (void)lock;
- (id)name;
- (void)setName:(id)arg1;
- (id)description;
- (id)init;
- (void)dealloc;

@end
