/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIScrollerIndicator, UIView;

@interface UIScroller : UIView  {
    struct CGSize { 
        float width; 
        float height; 
    } _contentSize;
    id _delegate;
    UIScrollerIndicator *_verticalScrollerIndicator;
    UIScrollerIndicator *_horizontalScrollerIndicator;
    struct { 
        unsigned int bounceEnabled : 1; 
        unsigned int rubberBanding : 1; 
        unsigned int scrollingDisabled : 1; 
        unsigned int scrollingDisabledOnMouseDown : 1; 
        unsigned int directionalLockEnabled : 1; 
        unsigned int eventMode : 3; 
        unsigned int dragging : 1; 
        unsigned int mouseDragged : 1; 
        unsigned int scrollTriggered : 1; 
        unsigned int dontSelect : 1; 
        unsigned int contentHighlighted : 1; 
        unsigned int lockVertical : 1; 
        unsigned int lockHorizontal : 1; 
        unsigned int keepLocked : 1; 
        unsigned int bouncedVertical : 1; 
        unsigned int bouncedHorizontal : 1; 
        unsigned int mouseUpGuard : 1; 
        unsigned int pushedTrackingMode : 1; 
        unsigned int delegateScrollerDidScroll : 1; 
        unsigned int delegateScrollerAdjustSmoothScrollEndVelocity : 1; 
        unsigned int delegateScrollerShouldAdjustSmoothScrollEndForVelocity : 1; 
        unsigned int offsetIgnoresContentSize : 1; 
        unsigned int usingThumb : 1; 
        unsigned int thumbDetectionEnabled : 1; 
        unsigned int showScrollerIndicators : 1; 
        unsigned int indicatorSubrect : 1; 
        unsigned int indicatorHideInGesture : 1; 
        unsigned int pinIndicatorToContent : 1; 
        unsigned int indicatorStyle : 2; 
        unsigned int multipleDrag : 1; 
        unsigned int showBackgroundShadow : 1; 
        unsigned int cancelNextContentMouseUp : 1; 
        unsigned int displayingScrollIndicators : 1; 
        unsigned int dontResetStartTouchPosition : 1; 
        unsigned int verticalIndicatorShrunk : 1; 
        unsigned int horizontalIndicatorShrunk : 1; 
        unsigned int highlightContentImmediately : 1; 
        unsigned int adjustedEndOffset : 1; 
        unsigned int ignoreNextMouseDrag : 1; 
        unsigned int contentFitDisableScrolling : 1; 
        unsigned int dontScrollToTop : 1; 
        unsigned int scrollingToTop : 1; 
        unsigned int delegateScrollerAdjustScrollToTopEnd : 1; 
        unsigned int autoscrolling : 1; 
        unsigned int reserved : 17; 
    } _scrollerFlags;
    float _scrollHysteresis;
    float _scrollDecelerationFactor;
    double _scrollToPointAnimationDuration;
    float _directionalScrollingAngle;
    float _farthestDistance;
    float _leftRubberBandWidth;
    float _rightRubberBandWidth;
    float _topRubberBandHeight;
    float _bottomRubberBandHeight;
    float _bottomBufferHeight;
    struct CGPoint { 
        float x; 
        float y; 
    } _initialTouchPosition;
    struct CGPoint { 
        float x; 
        float y; 
    } _startTouchPosition;
    double _startTouchTime;
    struct CGPoint { 
        float x; 
        float y; 
    } _startOffset;
    struct CGPoint { 
        float x; 
        float y; 
    } _lastTouchPosition;
    double _lastTouchTime;
    double _lastUpdateTime;
    struct CGPoint { 
        float x; 
        float y; 
    } _lastUpdateOffset;
    UIView *_lastHighlightedView;
    struct { 
        double width; 
        double height; 
    } _velocity;
    struct { 
        double width; 
        double height; 
    } _previousVelocity;
    struct { 
        double width; 
        double height; 
    } _decelerationFactor;
    struct { 
        double width; 
        double height; 
    } _decelerationLnFactor;
    struct CGPoint { 
        float x; 
        float y; 
    } _stopOffset;
    void *_scrollHeartbeat;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _indicatorSubrect;
    UIView *_scrollerShadows[2];
    UIView *_contentShadows[8];
    id _scrollNotificationViews;
    struct CGSize { 
        float width; 
        float height; 
    } _gridSize;
    struct { 
        double width; 
        double height; 
    } _gridBounceLnFactor;
}

@property BOOL scrollsToTop;

+ (void)_unregisterForNotifications;
+ (void)_registerForNotifications;

- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)_disableScrollingIfNecessary;
- (void)_enableScrollingIfNecessary;
- (void)_adjustEndOffset;
- (BOOL)_dragging;
- (BOOL)_passControlEvents;
- (id)_bottomShadowView;
- (id)_bottomSpecialView;
- (id)_topSpecialView;
- (BOOL)adjustSmoothScrollEnd:(struct { double x1; double x2; })arg1;
- (BOOL)isScrolling;
- (struct { double x1; double x2; })velocity;
- (void)setHighlightContentImmediately:(BOOL)arg1;
- (void)highlightView:(id)arg1 state:(BOOL)arg2;
- (void)cancelNextContentMouseUp;
- (BOOL)showBackgroundShadow;
- (BOOL)releaseRubberBandIfNecessary;
- (float)rubberBandValueForEdge:(unsigned int)arg1;
- (int)scrollerIndicatorStyle;
- (void)setScrollerIndicatorStyle:(int)arg1;
- (BOOL)scrollerIndicatorsPinToContent;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })scrollerIndicatorSubrect;
- (BOOL)thumbDetectionEnabled;
- (struct CGSize { float x1; float x2; })gridSize;
- (void)setGridSize:(struct CGSize { float x1; float x2; })arg1;
- (float)scrollDecelerationFactor;
- (float)directionalScrollingAngle;
- (BOOL)directionalScrolling;
- (void)setDirectionalScrolling:(BOOL)arg1;
- (void)setAllowsHorizontalRubberBanding:(BOOL)arg1;
- (int)eventMode;
- (void)setEventMode:(int)arg1;
- (float)scrollHysteresis;
- (double)scrollToPointAnimationDuration;
- (void)setScrollToPointAnimationDuration:(double)arg1;
- (BOOL)adjustForContentSizeChange;
- (void)setAdjustForContentSizeChange:(BOOL)arg1;
- (BOOL)_commonCancelMouseAndTouchTracking;
- (id)_defaultHitTest:(struct CGPoint { float x1; float x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (void)_scrollerDidEndDragging;
- (void)contentMouseUpInView:(id)arg1 withEvent:(struct __GSEvent { }*)arg2;
- (void)setOffsetForDragOffset:(struct CGPoint { float x1; float x2; })arg1 withEvent:(struct __GSEvent { }*)arg2 duration:(float)arg3;
- (void)_scrollerWillStartDragging;
- (struct CGPoint { float x1; float x2; })dragStartOffset;
- (void)_cancelContentHighlight;
- (void)_doContentHighlight;
- (void)setRubberBand:(float)arg1 forEdges:(unsigned int)arg2;
- (void)setAllowsVerticalRubberBanding:(BOOL)arg1;
- (void)_scrollAnimationEnded;
- (struct CGPoint { float x1; float x2; })_pinnedScrollPointForPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)scrollPointVisibleAtTopLeft:(struct CGPoint { float x1; float x2; })arg1 animated:(BOOL)arg2;
- (void)scrollByDelta:(struct CGSize { float x1; float x2; })arg1 animated:(BOOL)arg2;
- (void)scrollByDelta:(struct CGSize { float x1; float x2; })arg1;
- (void)_adjustSpecialViews;
- (void)_disableScrollingIfEntirelyVisible;
- (void)_adjustBackgroundShadowsForContentSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setScrollHysteresis:(float)arg1;
- (void)setThumbDetectionEnabled:(BOOL)arg1;
- (void)setDirectionalScrollingAngle:(float)arg1;
- (void)setScrollDecelerationFactor:(float)arg1;
- (BOOL)_isUserScrolling;
- (void)setScrollerIndicatorsPinToContent:(BOOL)arg1;
- (void)setScrollerIndicatorSubrect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setAllowsFourWayRubberBanding:(BOOL)arg1;
- (void)setAllowsRubberBanding:(BOOL)arg1;
- (void)displayScrollerIndicators;
- (BOOL)showScrollerIndicators;
- (void)setShowScrollerIndicators:(BOOL)arg1;
- (float)bottomBufferHeight;
- (void)setBottomBufferHeight:(float)arg1;
- (void)scrollRectToVisible:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)scrollPointVisibleAtTopLeft:(struct CGPoint { float x1; float x2; })arg1;
- (void)_controlTouchEnded:(id)arg1 withEvent:(id)arg2;
- (void)_controlTouchMoved:(id)arg1 withEvent:(id)arg2;
- (void)_controlTouchBegan:(id)arg1 withEvent:(id)arg2;
- (void)_controlMouseDragged:(struct __GSEvent { }*)arg1;
- (void)_controlMouseUp:(struct __GSEvent { }*)arg1;
- (void)_controlMouseDown:(struct __GSEvent { }*)arg1;
- (BOOL)_continueScrollingAtOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)_runLoopModePopped:(id)arg1;
- (void)_smoothScroll:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentFrameForView:(id)arg1;
- (void)setAutoscrollContentOffset:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })autoscrollContentOffset;
- (BOOL)_isAutoscrolling;
- (void)_setAutoscrolling:(BOOL)arg1;
- (BOOL)_scrollsToMakeFirstResponderVisible;
- (void)_resetScrollingWithEvent:(struct __GSEvent { }*)arg1;
- (void)setScrollingEnabled:(BOOL)arg1;
- (void)setOffset:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })offset;
- (void)gestureChanged:(struct __GSEvent { }*)arg1;
- (void)gestureStarted:(struct __GSEvent { }*)arg1;
- (struct CGPoint { float x1; float x2; })_initialTouchPosition;
- (void)setScrollsToTop:(BOOL)arg1;
- (BOOL)scrollsToTop;
- (void)setShowBackgroundShadow:(BOOL)arg1;
- (BOOL)bounces;
- (void)setBounces:(BOOL)arg1;
- (void)scrollRectToVisible:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 animated:(BOOL)arg2;
- (BOOL)_isRectFullyVisible:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_popTrackingRunLoopMode;
- (void)_startTimer:(BOOL)arg1;
- (void)_hideScrollIndicators;
- (void)_notifyDidScroll;
- (struct CGPoint { float x1; float x2; })contentOffset;
- (void)setContentSize:(struct CGSize { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })contentSize;
- (void)_stopScrollingNotify:(BOOL)arg1 dealloc:(BOOL)arg2 pin:(BOOL)arg3;
- (void)_adjustScrollerIndicators:(BOOL)arg1 alwaysShowingThem:(BOOL)arg2;
- (BOOL)_isScrollingEnabled;
- (BOOL)_alwaysHandleInteractionEvents;
- (void)_removeScrollNotificationView:(id)arg1;
- (void)_addScrollNotificationView:(id)arg1;
- (void)mouseUp:(struct __GSEvent { }*)arg1;
- (void)mouseDragged:(struct __GSEvent { }*)arg1;
- (void)mouseDown:(struct __GSEvent { }*)arg1;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (int)swipe:(int)arg1 withEvent:(struct __GSEvent { }*)arg2;
- (BOOL)canHandleSwipes;
- (BOOL)cancelMouseTracking;
- (void)gestureEnded:(struct __GSEvent { }*)arg1;
- (BOOL)cancelTouchTracking;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (BOOL)_scrollToTop;
- (BOOL)scrollingEnabled;
- (BOOL)isScrollEnabled;
- (id)_gestureTargetHitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (BOOL)_usesDifferentHitTestForGestures;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (id)delegate;
- (BOOL)isDecelerating;
- (void)removeFromSuperview;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;

@end
