/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSCharacterSet;

@interface _NSPlaceholderCharacterSet : NSCharacterSet  {
    NSCharacterSet *_original;
    NSCharacterSet *_invertedSet;
    struct { 
        unsigned int _inverted : 1; 
        unsigned int _builtin : 1; 
        unsigned int _isCF : 1; 
        unsigned int _reserved : 29; 
    } _flags;
}


- (id)replacementObjectForKeyedArchiver:(id)arg1;
- (void)_expandInverted;
- (struct __CFCharacterSet { }*)_expandedCFCharacterSet;
- (id)initWithSet:(id)arg1 options:(unsigned int)arg2;
- (id)replacementObjectForCoder:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (id)invertedSet;
- (BOOL)longCharacterIsMember:(unsigned long)arg1;
- (BOOL)isEmpty;
- (BOOL)hasMemberInPlane:(unsigned char)arg1;
- (BOOL)isSupersetOfSet:(id)arg1;
- (id)bitmapRepresentation;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)retainCount;
- (BOOL)characterIsMember:(unsigned short)arg1;
- (id)retain;
- (id)autorelease;
- (oneway void)release;
- (void)dealloc;

@end
