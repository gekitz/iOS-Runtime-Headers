/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIScreenMode : NSObject  {
    id _mode;
}

@property(readonly) struct CGSize { float x1; float x2; } size;
@property(readonly) float pixelAspectRatio;

+ (id)screenModeForDisplayMode:(id)arg1;

- (id)initWithDisplayMode:(id)arg1;
- (id)_displayMode;
- (float)pixelAspectRatio;
- (BOOL)_isNTSCOrPAL;
- (struct CGSize { float x1; float x2; })size;
- (id)description;

@end
