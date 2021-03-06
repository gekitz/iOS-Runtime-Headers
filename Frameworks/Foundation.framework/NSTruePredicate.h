/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSTruePredicate : NSPredicate  {
}

+ (id)defaultInstance;
+ (void)initialize;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (BOOL)evaluateWithObject:(id)arg1 substitutionVariables:(id)arg2;
- (id)predicateFormat;
- (void)acceptVisitor:(id)arg1 flags:(unsigned int)arg2;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (unsigned int)retainCount;
- (id)retain;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)autorelease;
- (oneway void)release;

@end
