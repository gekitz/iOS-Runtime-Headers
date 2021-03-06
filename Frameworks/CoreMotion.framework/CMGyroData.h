/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMGyroData : CMLogItem  {
    id _internal;
}

@property(readonly) struct { double x1; double x2; double x3; } rotationRate;


- (struct { double x1; double x2; double x3; })rotationRate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)initWithRotationRate:(struct { float x1; float x2; float x3; })arg1 andTimestamp:(double)arg2;

@end
