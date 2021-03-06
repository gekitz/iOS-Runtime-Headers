/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class UIImageView, UILabel, NSString, GKUITheme;

@interface GKSectionHeader : UIView <GKTableViewCellContents> {
    UIImageView *_leftOrnamentView;
    UIImageView *_rightOrnamentView;
    UILabel *_leftLabel;
    GKUITheme *_theme;
    UILabel *_rightLabel;
    int _style;
    float _fontSize;
    float _bottomOffset;
    float _horizontalContentInset;
    NSString *_primaryText;
    NSString *_alternatePrimaryText;
}

@property(retain) GKUITheme * theme;
@property(retain) NSString * primaryText;
@property(retain) NSString * alternatePrimaryText;
@property(retain) NSString * secondaryText;
@property int style;
@property float fontSize;
@property float bottomOffset;
@property float horizontalContentInset;
@property(retain) UIImageView * leftOrnamentView;
@property(retain) UILabel * leftLabel;
@property(retain) UILabel * rightLabel;
@property(retain) UIImageView * rightOrnamentView;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } confirmationButtonRect;


- (id)alternatePrimaryText;
- (float)horizontalContentInset;
- (void)setBottomOffset:(float)arg1;
- (float)bottomOffset;
- (id)rightOrnamentView;
- (id)leftOrnamentView;
- (void)setSecondaryText:(id)arg1;
- (id)secondaryText;
- (void)setAlternatePrimaryText:(id)arg1;
- (void)layoutSubviewsInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setRightOrnamentView:(id)arg1;
- (void)setLeftOrnamentView:(id)arg1;
- (void)prepareOrnamentViews;
- (id)rightLabel;
- (id)leftLabel;
- (void)setRightLabel:(id)arg1;
- (void)setLeftLabel:(id)arg1;
- (void)setHorizontalContentInset:(float)arg1;
- (id)primaryText;
- (void)setPrimaryText:(id)arg1;
- (float)preferredHeightForOrientation:(int)arg1;
- (id)theme;
- (void)setTheme:(id)arg1;
- (float)fontSize;
- (void)setFontSize:(float)arg1;
- (void)prepareForReuse;
- (int)style;
- (void)setStyle:(int)arg1;
- (void)layoutSubviews;
- (id)init;
- (void)dealloc;

@end
