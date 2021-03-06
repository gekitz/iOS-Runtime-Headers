/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIColor, UIView;

@interface UIGroupTableViewCellBackground : UIView  {
    int _sectionLocation;
    int _newSectionLocation;
    int _animationCount;
    int _selectionStyle;
    int _separatorStyle;
    UIView *_topSeparatorView;
    UIView *_bottomSeparatorView;
    struct { 
        unsigned int selected : 1; 
    } _groupBackgroundFlags;
    UIColor *_selectionTintColor;
}

@property int sectionLocation;
@property int selectionStyle;
@property int separatorStyle;
@property(retain) UIColor * selectionTintColor;
@property(getter=isSelected) BOOL selected;

+ (void)_flushCacheOnNotification:(id)arg1;
+ (void)initialize;

- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setSelectionTintColor:(id)arg1 layoutSubviews:(BOOL)arg2;
- (void)_setSectionLocationAnimationDidStop;
- (void)_decrementAnimationCount;
- (void)_incrementAnimationCount;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_contentRectForContentHeight:(float)arg1;
- (id)_cachedImageForKey:(id)arg1;
- (void)_updateSeparatorViews;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_contentsCenter:(BOOL)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_contentsRect:(BOOL)arg1;
- (float)_pixelDisplayedImageHeight;
- (id)_roundedRectBezierPathInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withSectionLocation:(int)arg2 forBorder:(BOOL)arg3 cornerRadiusAdjustment:(float)arg4;
- (id)_fillColor;
- (id)_bottomShadowColor;
- (id)_topShadowColor;
- (void)setSectionLocation:(int)arg1;
- (id)_topShadowViewWithColor:(id)arg1;
- (id)_contentMaskLayer;
- (int)sectionLocation;
- (id)selectionTintColor;
- (int)selectionStyle;
- (void)setSelectionTintColor:(id)arg1;
- (void)displayLayer:(id)arg1;
- (void)_layoutSubviews:(BOOL)arg1;
- (void)setSelectionStyle:(int)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setSectionLocation:(int)arg1 animated:(BOOL)arg2;
- (id)_sectionBorderColor;
- (id)_separatorColor;
- (int)separatorStyle;
- (BOOL)isSelected;
- (void)setSeparatorStyle:(int)arg1;
- (id)_backgroundColor;
- (id)backgroundColor;
- (void)layoutSubviews;
- (void)setBackgroundColor:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;

@end
