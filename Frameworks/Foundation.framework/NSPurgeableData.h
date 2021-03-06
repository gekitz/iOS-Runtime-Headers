/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSPurgeableData : NSMutableData <NSDiscardableContent> {
    unsigned int _length;
    int _accessCount;
    unsigned char _private[32];
    void *_reserved;
}


- (void)finalize;
- (void)_destroyMemory;
- (id)initWithBytes:(void*)arg1 length:(unsigned int)arg2 copy:(BOOL)arg3 freeWhenDone:(BOOL)arg4 bytesAreVM:(BOOL)arg5;
- (void)setLength:(unsigned int)arg1;
- (void*)mutableBytes;
- (BOOL)isContentDiscarded;
- (void)discardContentIfPossible;
- (void)endContentAccess;
- (BOOL)beginContentAccess;
- (const void*)bytes;
- (id)description;
- (id)initWithCapacity:(unsigned int)arg1;
- (unsigned int)length;
- (id)init;
- (void)dealloc;

@end
