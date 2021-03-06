/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPTimeMarker, UIActivityIndicatorView, MPDetailSlider, MPButton, UILabel, <MPPlaybackControlsDelegate>, MPAVItem, UIView, MPAVController, CABasicAnimation;

@interface MPPlaybackControlsView : UIView <MPDetailSliderDelegate> {
    <MPPlaybackControlsDelegate> *_delegate;
    MPAVController *_player;
    MPAVItem *_item;
    MPTimeMarker *_markerForProgressControlDuration;
    UIActivityIndicatorView *_activityIndicator;
    MPDetailSlider *_progressControl;
    MPButton *_repeatButton;
    MPButton *_shuffleButton;
    MPButton *_playbackSpeedButton;
    MPButton *_geniusButton;
    MPButton *_rewindButton;
    MPButton *_mailButton;
    MPButton *_socialLikeButton;
    MPButton *_socialPostButton;
    UIView *_rewindButtonBezel;
    UILabel *_trackInfoLabel;
    CABasicAnimation *_rewindOpacityAnimation;
    double _progressOffset;
    double _tickInterval;
    unsigned int _visibleParts;
    unsigned int _wantsTick : 1;
    unsigned int _geniusButtonDisabled : 1;
    unsigned int _rewindButtonDisabled : 1;
    unsigned int _playbackSpeedButtonDisabled : 1;
    unsigned int _mailButtonDisabled : 1;
    unsigned int _mailButtonHidden : 1;
    unsigned int _socialLikeButtonHidden : 1;
    unsigned int _socialLikeButtonSelected : 1;
    unsigned int _socialPostButtonHidden : 1;
    unsigned int _useMediaDetailSlider : 1;
    unsigned int _detailScrubbing : 1;
    unsigned int _needsUpdateButtonVisibility : 1;
    float _seekedToValue;
}

@property <MPPlaybackControlsDelegate> * delegate;
@property(retain) MPAVItem * item;
@property(retain) MPAVController * player;
@property unsigned int visibleParts;
@property(readonly) BOOL hideGeniusButton;
@property(readonly) BOOL isScrubbing;
@property(readonly) unsigned int repeatType;
@property(readonly) unsigned int shuffleType;

+ (unsigned int)defaultVisibleParts;

- (void)reloadView;
- (void)_changeGeniusImageToNormalImage:(id)arg1;
- (void)_changeGeniusImageToPressedImage:(id)arg1;
- (void)reloadButtonVisibility;
- (void)_updateButtonVisibility;
- (BOOL)hideGeniusButton;
- (void)handleChangeToShuffleType:(unsigned int)arg1;
- (BOOL)_shuffleIsOn;
- (void)handleChangeToRepeatType:(unsigned int)arg1;
- (void)_updateForPlaybackSpeed;
- (void)_handleGeniusButtonClick;
- (void)_resetGeniusButtonImages;
- (double)_updatedDisplayDurationForTime:(double)arg1;
- (double)_currentDisplayTime;
- (BOOL)progressBarClipsToChapterDuration;
- (void)_socialPostButton:(id)arg1;
- (void)_socialLikeButton:(id)arg1;
- (id)_shuffleButtonImage;
- (void)_shuffleButton:(id)arg1;
- (id)_repeatButtonImage;
- (void)_repeatButton:(id)arg1;
- (void)_playbackSpeedButton:(id)arg1;
- (id)_mailButtonImage;
- (void)_mailButton:(id)arg1;
- (id)_geniusButtonImage:(unsigned int)arg1;
- (void)_geniusButton:(id)arg1;
- (void)_rewindButton:(id)arg1;
- (void)_applicationDidBecomeActiveNotification:(id)arg1;
- (void)_applicationWillResignActiveNotification:(id)arg1;
- (void)_contentsChangedNotification:(id)arg1;
- (void)_setVisiblePartsNeedReload;
- (void)_initializeControls;
- (unsigned int)displayablePartsInPartMask:(unsigned int)arg1;
- (BOOL)isScrubbing;
- (void)updateForEndOfDetailScrubbing;
- (void)resetDetailSlider:(id)arg1;
- (id)newButtonForPart:(unsigned int)arg1;
- (void)detailSlider:(id)arg1 didChangeScrubSpeed:(int)arg2;
- (void)detailSlider:(id)arg1 didChangeValue:(float)arg2;
- (void)detailSliderTrackingDidCancel:(id)arg1;
- (void)detailSliderTrackingDidEnd:(id)arg1;
- (void)detailSliderTrackingDidBegin:(id)arg1;
- (void)stopTicking;
- (void)startTicking;
- (void)crossedURLTimeMarker:(id)arg1;
- (void)crossedArtworkTimeMarker:(id)arg1;
- (unsigned int)shuffleType;
- (unsigned int)repeatType;
- (void)crossedChapterTimeMarker:(id)arg1;
- (void)_tickNotification:(id)arg1;
- (void)_validityChangedNotification:(id)arg1;
- (void)setVisibleParts:(unsigned int)arg1;
- (unsigned int)visibleParts;
- (void)setPlayer:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)item;
- (void)didMoveToSuperview;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (id)delegate;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setCurrentTime:(double)arg1;
- (id)player;
- (void)dealloc;
- (id)newProgressIndicator;
- (void)setItem:(id)arg1;

@end
