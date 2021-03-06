/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class GKInviteButton, UIActivityIndicatorView, UIImage, NSString, GKTouchInterceptView;

@interface GKFriendPickerCellContents : GKPlayerCellContentView <GKMultilineLayoutProtocol> {
    int _inviteStatus;
    BOOL _showsSelectionIcon;
    BOOL _showsInviteStatus;
    BOOL _showsInviteButton;
    BOOL _showsUninviteButton;
    BOOL _padsForInvisibleSelectionIcon;
    BOOL _enabled;
    UIImage *_selectionIcon;
    BOOL _showingActivityIndicator;
    UIActivityIndicatorView *_activityView;
    struct CGSize { 
        float width; 
        float height; 
    } _firstLineOffset;
    GKInviteButton *_inviteButton;
    BOOL _showingInviteButton;
    BOOL _showingConfirmButton;
    unsigned int _index;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _inviteButtonHandler;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _uninviteButtonHandler;

    GKTouchInterceptView *_touchInterceptView;
    NSString *_rankString;
    BOOL _shouldShowRank;
}

@property int inviteStatus;
@property BOOL showsSelectionIcon;
@property BOOL showsInviteStatus;
@property BOOL showsInviteButton;
@property BOOL showsUninviteButton;
@property BOOL padsForInvisibleSelectionIcon;
@property BOOL enabled;
@property BOOL shouldShowRank;
@property(retain) NSString * rankString;
@property(readonly) BOOL showingInviteButton;
@property(readonly) BOOL showingUninviteButton;
@property(readonly) GKInviteButton * inviteButton;
@property unsigned int index;
@property(copy) id inviteButtonHandler;
@property(copy) id uninviteButtonHandler;
@property(retain) UIImage * selectionIcon;
@property(retain) GKTouchInterceptView * touchInterceptView;


- (id)touchInterceptView;
- (id)rankString;
- (BOOL)padsForInvisibleSelectionIcon;
- (BOOL)showsUninviteButton;
- (BOOL)showsInviteButton;
- (BOOL)showsInviteStatus;
- (BOOL)showsSelectionIcon;
- (BOOL)showingUninviteButton;
- (void)drawLineIndex:(unsigned int)arg1 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg2 highlighted:(BOOL)arg3;
- (void)setTouchInterceptView:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })selectionIconRectForContentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setSelectionIcon:(id)arg1;
- (id)selectionIcon;
- (void)layoutInviteButton;
- (id)inviteButtonHandler;
- (BOOL)showingInviteButton;
- (id)uninviteButtonHandler;
- (void)setTouchesIntercepted:(BOOL)arg1;
- (BOOL)hasStatusForUninviteButton;
- (BOOL)hasStatusForInviteButton;
- (void)layoutInviteButtonAnimated:(BOOL)arg1;
- (void)updateInviteButtonAnimated:(BOOL)arg1;
- (void)setShowingActivityIndicator:(BOOL)arg1;
- (void)updateInviteButton;
- (void)createInviteMatchConfirmButton;
- (void)inviteButtonPushed;
- (BOOL)shouldShowRank;
- (id)initWithNumberOfLines:(unsigned int)arg1;
- (void)setConfirmButtonHidden:(BOOL)arg1;
- (id)inviteButton;
- (void)updateLines;
- (void)setUninviteButtonHandler:(id)arg1;
- (void)setInviteButtonHandler:(id)arg1;
- (void)setPadsForInvisibleSelectionIcon:(BOOL)arg1;
- (void)setShowsInviteButton:(BOOL)arg1;
- (void)setShowsUninviteButton:(BOOL)arg1;
- (void)setShowsInviteStatus:(BOOL)arg1;
- (void)setShowsSelectionIcon:(BOOL)arg1;
- (void)setRankString:(id)arg1;
- (void)setShouldShowRank:(BOOL)arg1;
- (void)setTheme:(id)arg1;
- (void)setInviteStatus:(int)arg1;
- (int)inviteStatus;
- (void)setIndex:(unsigned int)arg1;
- (BOOL)enabled;
- (unsigned long long)accessibilityTraits;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })imageRectForContentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (unsigned int)index;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })textRectForContentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)prepareForReuse;
- (void)setEnabled:(BOOL)arg1;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)removeFromSuperview;
- (void)layoutSubviews;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;

@end
