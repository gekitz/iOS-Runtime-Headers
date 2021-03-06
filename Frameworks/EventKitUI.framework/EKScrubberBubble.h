/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class UILabel;

@interface EKScrubberBubble : UICalloutView  {
    struct CGPoint { 
        float x; 
        float y; 
    } _currentPoint;
    float _minimumWidth;
    UILabel *_sizer;
    BOOL _blockAlpha;
    BOOL _avoidClipping;
}

@property BOOL avoidClipping;


- (void)getActualAnchorPoint:(struct CGPoint { float x1; float x2; }*)arg1 frame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg2 position:(int*)arg3 forDesiredAnchorPoint:(struct CGPoint { float x1; float x2; })arg4 boundaryRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg5;
- (void)setAlpha:(float)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)avoidClipping;
- (float)widthForString:(id)arg1;
- (void)setText:(id)arg1 animate:(BOOL)arg2;
- (void)resetMinimumWidth;
- (void)clearPoint;
- (void)blockAlpha:(BOOL)arg1;
- (void)moveToPoint:(struct CGPoint { float x1; float x2; })arg1 withText:(id)arg2 animate:(BOOL)arg3;
- (void)setAvoidClipping:(BOOL)arg1;
- (void)dealloc;

@end
