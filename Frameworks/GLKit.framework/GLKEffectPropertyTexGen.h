/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GLKit.framework/GLKit
 */

@interface GLKEffectPropertyTexGen : GLKEffectProperty  {
    int _mode;
    float *_plane;
    int _coord;
    float *_eyePlaneByInvModelview;
    int _modeLoc;
    int _planeLoc;
    int _eyePlaneByInvModelviewLoc;
    char *_modeNameString;
    char *_planeNameString;
    unsigned int _textureIndex;
}

@property int mode;
@property(readonly) int coord;
@property float* plane;
@property float* eyePlaneByInvModelview;
@property int modeLoc;
@property int planeLoc;
@property int eyePlaneByInvModelviewLoc;
@property char * modeNameString;
@property char * planeNameString;
@property unsigned int textureIndex;


- (unsigned int)textureIndex;
- (void)setEyePlaneByInvModelviewLoc:(int)arg1;
- (int)eyePlaneByInvModelviewLoc;
- (void)setPlaneLoc:(int)arg1;
- (int)planeLoc;
- (void)setEyePlaneByInvModelview:(float*)arg1;
- (float*)eyePlaneByInvModelview;
- (int)coord;
- (float*)plane;
- (void)setPlane:(float*)arg1;
- (id)initWithMode:(int)arg1 coord:(int)arg2;
- (char *)planeNameString;
- (char *)modeNameString;
- (void)setPlaneNameString:(char *)arg1;
- (void)setModeNameString:(char *)arg1;
- (void)setModeLoc:(int)arg1;
- (int)modeLoc;
- (char **)fshMaskStr;
- (char **)vshMaskStr;
- (unsigned int)fshMaskCt;
- (unsigned int)vshMaskCt;
- (struct GLKBigInt_s { unsigned long long x1; unsigned long long x2; }*)fshMasks;
- (struct GLKBigInt_s { unsigned long long x1; unsigned long long x2; }*)vshMasks;
- (void)initializeMasks;
- (void)setShaderBindings;
- (void)setTextureIndex:(unsigned int)arg1;
- (void)dirtyAllUniforms;
- (int)mode;
- (void)setMode:(int)arg1;
- (void)bind;
- (id)init;
- (void)dealloc;

@end
