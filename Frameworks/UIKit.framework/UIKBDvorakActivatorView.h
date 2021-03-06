/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIKBTree, UIDelayedAction;

@interface UIKBDvorakActivatorView : UIView  {
    UIDelayedAction *_timer;
    int _hitCount;
    UIKBTree *_forwardDeletionKey;
    BOOL _useShortenedDelayForNextRequestToActAsSpace;
}

+ (id)sharedInstance;

- (void)makeForwardKeyTemporarilyActAsSpace;
- (void)forwardDeleteFinishedFadeIn:(id)arg1 finished:(id)arg2;
- (void)activateEdgeDetectionView:(id)arg1;
- (void)userTappedOnForwardDeleteKeyButGotSpaceKey;
- (id)hitTestAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setPressed:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;

@end
