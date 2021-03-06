/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKUITheme;

@interface GKRecipientTextField : UITextField  {
    GKUITheme *_theme;
}

@property(retain) GKUITheme * theme;


- (id)theme;
- (void)setTheme:(id)arg1;
- (void)drawPlaceholderInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)_placeholderColor;
- (BOOL)becomeFirstResponder;
- (void)dealloc;

@end
