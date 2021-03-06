/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSValue, UITabBarButtonLabel, UIView, UIImage, UITabBarButtonBadge, UITabBarSelectionIndicatorView;

@interface UITabBarButton : UIControl  {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _hitRect;
    UIView *_info;
    UITabBarButtonLabel *_label;
    UITabBarButtonBadge *_badge;
    UITabBarSelectionIndicatorView *_selectedIndicator;
    BOOL _selected;
    BOOL _barHeight;
    BOOL _badgeAnimated;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _infoInsets;
    struct UIOffset { 
        float horizontal; 
        float vertical; 
    } _selectedInfoOffset;
    struct UIOffset { 
        float horizontal; 
        float vertical; 
    } _infoOffset;
    UIImage *_customSelectedIndicatorImage;
    NSValue *_labelOffsetValue;
}

@property(retain) NSValue * labelOffsetValue;
@property(readonly) UITabBarButtonLabel * tabBarButtonLabel;

+ (id)_donePushButton;
+ (id)_defaultLabelColor;
+ (id)_defaultLabelFont;

- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setLabelOffsetValue:(id)arg1;
- (id)labelOffsetValue;
- (struct UIOffset { float x1; float x2; })_titlePositionAdjustment;
- (void)_setCustomSelectedIndicatorImage:(id)arg1;
- (void)_setInfoOffset:(struct UIOffset { float x1; float x2; })arg1;
- (void)_setSelectedInfoOffset:(struct UIOffset { float x1; float x2; })arg1;
- (id)_swappableImageView;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_tabBarHitRect;
- (void)_setTabBarHitRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithImage:(id)arg1 selectedImage:(id)arg2 label:(id)arg3 withInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg4;
- (void)_setTitlePositionAdjustment:(struct UIOffset { float x1; float x2; })arg1;
- (id)tabBarButtonLabel;
- (void)_showSelectedIndicator:(BOOL)arg1 changeSelection:(BOOL)arg2;
- (void)_updateInfoFrame;
- (void)_setSelected:(BOOL)arg1;
- (void)_applyTabBarButtonAppearanceStorage:(id)arg1 withTaggedSelectors:(id)arg2;
- (void)_UIAppearance_setTitlePositionAdjustment:(struct UIOffset { float x1; float x2; })arg1;
- (BOOL)_useBarHeight;
- (void)_setBarHeight:(float)arg1;
- (void)_setBadgeAnimated:(BOOL)arg1;
- (void)_setBadgeValue:(id)arg1;
- (void)_badgeAnimationDidStop:(id)arg1 finished:(id)arg2;
- (void)_positionBadge;
- (void)_UIAppearance_setTitleTextAttributes:(id)arg1 forState:(unsigned int)arg2;
- (id)_scriptingInfo;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)setImage:(id)arg1;
- (void)dealloc;

@end
