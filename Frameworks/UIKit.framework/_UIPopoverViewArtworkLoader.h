/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString;

@interface _UIPopoverViewArtworkLoader : NSObject  {
    int _backgroundStyle;
    NSString *_backgroundSelector;
}

+ (id)backgroundSelectorForBackgroundStyle:(int)arg1;

- (id)shortBottomArrowRightEndCapView;
- (id)shortBottomArrowPinnedView;
- (id)shortBottomArrowView;
- (id)shortTopArrowRightEndCapView;
- (id)shortTopArrowPinnedView;
- (id)shortTopArrowView;
- (id)shortBottomArrowLeftEndCapView;
- (id)shortTopArrowLeftEndCapView;
- (id)viewWithContentsImage:(id)arg1 rect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 center:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 antialiasingMask:(unsigned int)arg4 directionSelector:(id)arg5;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentsCenterForRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inImageOfSize:(struct CGSize { float x1; float x2; })arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentRectForRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inImageOfSize:(struct CGSize { float x1; float x2; })arg2;
- (id)templateImageForDirection:(id)arg1 shortArtwork:(BOOL)arg2;
- (id)rightArrowView;
- (id)rightArrowTopEndCapView;
- (id)rightArrowPinnedBottomView;
- (id)rightArrowBottomEndCapView;
- (id)rightArrowPinnedTopView;
- (id)shortRightArrowView;
- (id)bottomArrowRightEndCapView;
- (id)bottomArrowView;
- (id)bottomArrowPinnedView;
- (id)bottomArrowLeftEndCapView;
- (id)topArrowRightEndCapView;
- (id)topArrowView;
- (id)topArrowPinnedView;
- (id)topArrowLeftEndCapView;
- (id)initWithBackgroundStyle:(int)arg1;
- (void)dealloc;

@end
