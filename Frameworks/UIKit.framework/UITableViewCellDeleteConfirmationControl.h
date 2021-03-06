/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITableViewCellDeleteConfirmationControl : UIControl  {
    BOOL _visible;
}

@property(getter=isVisible) BOOL visible;

+ (struct CGSize { float x1; float x2; })defaultSizeForTitle:(id)arg1;

- (void)setVisible:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)isVisible;
- (void)_confirmationAnimationDidEnd;
- (void)setVisible:(BOOL)arg1;
- (void)cancelTrackingWithEvent:(id)arg1;
- (BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)initWithTitle:(id)arg1;
- (void)_setInterceptMouseEvent:(BOOL)arg1;
- (id)_interceptMouseEvent:(struct __GSEvent { }*)arg1;
- (id)_interceptEvent:(id)arg1;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)removeFromSuperview;
- (void)layoutSubviews;
- (struct CGSize { float x1; float x2; })defaultSize;

@end
