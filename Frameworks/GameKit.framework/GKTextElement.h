/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSAttributedString, NSString, UIColor, UIFont;

@interface GKTextElement : NSObject  {
    BOOL _hidden;
    NSString *_text;
    NSAttributedString *_attributedText;
    UIFont *_font;
    float _minFontSize;
    UIColor *_color;
    UIColor *_highlightedColor;
    int _textAlignment;
    int _lineBreakMode;
    struct CGSize { 
        float width; 
        float height; 
    } _offset;
    struct CGSize { 
        float width; 
        float height; 
    } _size;
    int _lineSpacing;
    UIColor *_shadowColor;
    UIColor *_highlightedShadowColor;
    struct CGSize { 
        float width; 
        float height; 
    } _shadowOffset;
}

@property BOOL hidden;
@property(retain) NSString * text;
@property(retain) NSAttributedString * attributedText;
@property(retain) UIFont * font;
@property float minFontSize;
@property(retain) UIColor * color;
@property(retain) UIColor * highlightedColor;
@property(retain) UIColor * highlightedShadowColor;
@property int textAlignment;
@property int lineBreakMode;
@property struct CGSize { float x1; float x2; } offset;
@property struct CGSize { float x1; float x2; } size;
@property int lineSpacing;
@property(retain) UIColor * shadowColor;
@property struct CGSize { float x1; float x2; } shadowOffset;


- (id)highlightedShadowColor;
- (struct CGSize { float x1; float x2; })drawInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 highlighted:(BOOL)arg2;
- (id)attributedText;
- (void)setAttributedText:(id)arg1;
- (void)setHighlightedShadowColor:(id)arg1;
- (id)initWithTheme:(id)arg1;
- (BOOL)hidden;
- (float)minFontSize;
- (void)setMinFontSize:(float)arg1;
- (id)highlightedColor;
- (id)color;
- (int)textAlignment;
- (struct CGSize { float x1; float x2; })shadowOffset;
- (void)setHighlightedColor:(id)arg1;
- (void)setColor:(id)arg1;
- (void)setTextAlignment:(int)arg1;
- (void)setOffset:(struct CGSize { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })offset;
- (void)setSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setLineBreakMode:(int)arg1;
- (int)lineBreakMode;
- (void)setLineSpacing:(int)arg1;
- (int)lineSpacing;
- (id)font;
- (id)text;
- (void)setFont:(id)arg1;
- (void)setShadowOffset:(struct CGSize { float x1; float x2; })arg1;
- (void)setShadowColor:(id)arg1;
- (id)shadowColor;
- (void)setText:(id)arg1;
- (void)setHidden:(BOOL)arg1;
- (struct CGSize { float x1; float x2; })size;
- (id)description;
- (id)init;
- (void)dealloc;

@end
