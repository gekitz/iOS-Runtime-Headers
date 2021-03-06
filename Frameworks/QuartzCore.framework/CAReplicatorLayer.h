/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface CAReplicatorLayer : CALayer  {
}

@property int instanceCount;
@property BOOL preservesDepth;
@property double instanceDelay;
@property struct CATransform3D { float m11; float m12; float m13; float m14; float m21; float m22; float m23; float m24; float m31; float m32; float m33; float m34; float m41; float m42; float m43; float m44; } instanceTransform;
@property struct CGColor { }* instanceColor;
@property float instanceRedOffset;
@property float instanceGreenOffset;
@property float instanceBlueOffset;
@property float instanceAlphaOffset;

+ (id)defaultValueForKey:(id)arg1;
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)arg1;

- (void)setInstanceTransform:(struct CATransform3D { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })arg1;
- (void)setInstanceCount:(int)arg1;
- (id)implicitAnimationForKeyPath:(id)arg1;
- (int)instanceCount;
- (void)didChangeValueForKey:(id)arg1;
- (id)init;
- (void)setPreservesDepth:(BOOL)arg1;
- (void)setInstanceDelay:(double)arg1;
- (void)setInstanceColor:(struct CGColor { }*)arg1;
- (void)setInstanceRedOffset:(float)arg1;
- (void)setInstanceGreenOffset:(float)arg1;
- (void)setInstanceBlueOffset:(float)arg1;
- (void)setInstanceAlphaOffset:(float)arg1;
- (BOOL)preservesDepth;
- (struct CATransform3D { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })instanceTransform;
- (double)instanceDelay;
- (struct CGColor { }*)instanceColor;
- (float)instanceRedOffset;
- (float)instanceGreenOffset;
- (float)instanceBlueOffset;
- (float)instanceAlphaOffset;
- (void)_renderSublayersInContext:(struct CGContext { }*)arg1;
- (struct Layer { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; unsigned int x3; unsigned short x4; unsigned short x5; float x6; struct LayerExt {} *x7; struct Handle {} *x8; struct Object {} *x9; struct Vec2<double> { double x_10_1_1; double x_10_1_2; } x10; struct Rect { double x_11_1_1; double x_11_1_2; double x_11_1_3; double x_11_1_4; } x11; struct TypedArray<CA::Render::Layer> {} *x12; struct TypedArray<CA::Render::Animation> {} *x13; }*)_copyRenderLayer:(struct Transaction { struct Shared {} *x1; int x2; struct HashTable<CA::Layer*,uint32_t*> {} *x3; struct SpinLock {} *x4; unsigned int x5; struct Level {} *x6; struct Command {} *x7; struct Deleted {} *x8; struct List<const void*> {} *x9; struct Context {} *x10; struct HashTable<CA::Layer*,CA::Layer*> {} *x11; struct __CFRunLoop {} *x12; struct __CFRunLoopObserver {} *x13; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; }*)arg1 layerFlags:(unsigned int)arg2 commitFlags:(unsigned int*)arg3;
- (bool)_renderLayerDefinesProperty:(unsigned int)arg1;
- (unsigned int)_renderLayerPropertyAnimationFlags:(unsigned int)arg1;

@end
