/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class NSDictionary, UIImageView, AVRemaker, PLMoviePlayerController, PLPhotoBakedThumbnails, PLVideoEditingOverlayView, PLVideoOutBackgroundView, NSString, PLVideoPosterFrameView, NSTimer, PLAirTunesService, PLManagedAsset, PLPhotoTileViewController, UIMovieScrubber, PLAirPlayBackgroundView, NSLock, NSMutableDictionary, <PLVideoViewDelegate>, UIButton, NSArray, UIImage, UIView, NSURL;

@interface PLVideoView : UIView <UIMovieScrubberDelegate, UIMovieScrubberDataSource, PLMoviePlayerControllerDelegate> {
    PLManagedAsset *_videoCameraImage;
    NSURL *_videoURL;
    PLPhotoTileViewController *_imageTile;
    PLVideoPosterFrameView *_posterFrameView;
    UIButton *_videoOverlayPlayButton;
    UIView *_videoOverlayBackgroundView;
    PLVideoEditingOverlayView *_trimMessageView;
    UIImage *_posterFrameImage;
    float _scrubberWidth;
    unsigned int _scaleMode;
    UIImageView *_scrubberBackgroundView;
    UIView *_scrubberTitleView;
    NSTimer *_scrubberUpdateTimer;
    NSDictionary *_thumbnailOptionsDict;
    struct CGSize { 
        float width; 
        float height; 
    } _thumbnailSize;
    PLPhotoBakedThumbnails *_bakedLandscapeThumbnails;
    PLPhotoBakedThumbnails *_bakedPortraitThumbnails;
    AVRemaker *_remaker;
    NSString *_trimmedPath;
    NSString *_videoPathAfterTrim;
    NSTimer *_trimProgressTimer;
    PLManagedAsset *_trimmedVideoClip;
    struct { id x1; float x2; struct __CFArray {} *x3; float x4; BOOL x5; id x6; } *_trimProgressStack;
    float _progress;
    int _interfaceOrientation;
    PLMoviePlayerController *_moviePlayer;
    int _orientationWhenLastDisplayed;
    <PLVideoViewDelegate> *_delegate;
    double _maximumTrimLength;
    double _lastScrubbedValue;
    double _lastActualValue;
    double _duration;
    double _cachedCurrentPlaybackTime;
    unsigned int _currentThumbnailRequestID;
    PLAirTunesService *_selectedAirTunesService;
    PLAirPlayBackgroundView *_airPlayBackgroundView;
    PLVideoOutBackgroundView *_videoOutBackgroundView;
    NSArray *_imageGenerators;
    NSLock *_thumbnailReqlock;
    unsigned int _showsPosterFrame : 1;
    unsigned int _showsPlayButton : 1;
    unsigned int _showsScrubber : 1;
    unsigned int _canEdit : 1;
    unsigned int _loadMediaImmediately : 1;
    unsigned int _scrubberIsSubview : 1;
    unsigned int _viewWillAppear : 1;
    unsigned int _didLayout : 1;
    unsigned int _wasPlayingBeforeScrub : 1;
    unsigned int _playFromBeginning : 1;
    unsigned int _needsReloadScrubberThumbnails : 1;
    unsigned int _playing : 1;
    unsigned int _playingToAirTunes : 1;
    unsigned int _editing : 1;
    unsigned int _disableEditAfterTrim : 1;
    unsigned int _scrubbing : 1;
    unsigned int _scrubbingToRight : 1;
    unsigned int _deleteOriginalFile : 1;
    unsigned int _passthroughTrimming : 1;
    unsigned int _preparingMoviePlayer : 1;
    unsigned int _preparedMoviePlayer : 1;
    unsigned int _isMoviePlayerDelegate : 1;
    unsigned int _moviePlayerIsReady : 1;
    unsigned int _moviePlayerDidBuffer : 1;
    unsigned int _hidePosterImage : 1;
    unsigned int _showingOverlay : 1;
    unsigned int _showingScrubber : 1;
    unsigned int _showScrubberWhenMovieIsReady : 1;
    unsigned int _playbackDidBegin : 1;
    unsigned int _playbackWillBegin : 1;
    unsigned int _loadScrubberThumbnails : 1;
    unsigned int _videoIsLandscape : 1;
    unsigned int _canCreateMetadata : 1;
    unsigned int _createPreviewPosterFrame : 1;
    unsigned int _startedDeliveringNotificationsToMainThread : 1;
    unsigned int _isTrimming : 1;
    unsigned int _wasTrimmedInPlace : 1;
    unsigned int _remakingFailed : 1;
    unsigned int _previewFrameRequestID;
    NSMutableDictionary *_thumbnailRequests;
    NSMutableDictionary *_requestsBeingProcessed;
    UIMovieScrubber *_scrubber;
    NSMutableDictionary *_cachedThumbnails;
    NSArray *_landscapeSummaryThumbnailTimestamps;
    NSArray *_portraitSummaryThumbnailTimestamps;
}

@property(readonly) NSString * pathForVideoFile;
@property <PLVideoViewDelegate> * delegate;
@property PLPhotoTileViewController * imageTile;
@property(readonly) PLManagedAsset * videoCameraImage;
@property(readonly) int interfaceOrientation;
@property(retain) PLManagedAsset * trimmedVideoClip;
@property(readonly) UIImage * posterFrameImage;
@property(readonly) UIView * posterFrameView;
@property(readonly) double duration;
@property(getter=isEditing) BOOL editing;
@property(readonly) double startTime;
@property(readonly) double endTime;
@property(readonly) NSString * videoPathAfterTrim;
@property(readonly) UIImageView * previewImageView;
@property(readonly) UIImage * currentFrameImage;
@property BOOL showsPosterFrame;
@property BOOL showsPlayOverlay;
@property BOOL showsScrubber;
@property BOOL loadMediaImmediately;
@property BOOL canEdit;
@property BOOL scrubberIsSubview;
@property float scrubberWidth;
@property double currentTime;
@property(readonly) NSString * _pathForOriginalFile;
@property(readonly) NSString * _pathForVideoPreviewFile;
@property(readonly) NSString * _pathForPrebakedLandscapeScrubberThumbnails;
@property(readonly) NSString * _pathForPrebakedPortraitScrubberThumbnails;
@property(readonly) NSString * _mediaTitle;
@property(readonly) BOOL _mediaIsPlayable;
@property(readonly) BOOL _didSetPhotoData;

+ (id)videoViewForVideoFileAtURL:(id)arg1;

- (void)_screenDidDisconnect:(id)arg1;
- (void)_screenDidConnect:(id)arg1;
- (BOOL)moviePlayerExitRequest:(id)arg1 exitReason:(int)arg2;
- (void)moviePlayerPlaybackDidEnd:(id)arg1;
- (void)moviePlayerDurationAvailable:(id)arg1;
- (void)moviePlayerPlaybackRateDidChange:(id)arg1;
- (void)moviePlayerReadyToPlay:(id)arg1;
- (void)moviePlayerBufferingStateDidChange:(id)arg1;
- (BOOL)moviePlayerHeadsetPreviousTrackPressed:(id)arg1;
- (BOOL)moviePlayerHeadsetNextTrackPressed:(id)arg1;
- (BOOL)moviePlayerHeadsetPlayPausePressed:(id)arg1;
- (void)toggleScaleMode:(float)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (double)duration;
- (void)setDelegate:(id)arg1;
- (void)play;
- (void)pause;
- (void)stop;
- (double)startTime;
- (void)_reset;
- (void)setMaximumTrimLength:(double)arg1;
- (float)movieScrubberThumbnailAspectRatio:(id)arg1;
- (void)movieScrubber:(id)arg1 requestThumbnailImageForTimestamp:(id)arg2;
- (id)movieScrubber:(id)arg1 timestampsStartingAt:(id)arg2 endingAt:(id)arg3 maxCount:(int)arg4;
- (id)movieScrubber:(id)arg1 evenlySpacedTimestamps:(int)arg2 startingAt:(id)arg3 endingAt:(id)arg4;
- (void)movieScrubberDidEndScrubbing:(id)arg1 withHandle:(int)arg2;
- (void)movieScrubberDidBeginScrubbing:(id)arg1 withHandle:(int)arg2;
- (double)movieScrubberDuration:(id)arg1;
- (void)movieScrubber:(id)arg1 widthDelta:(float)arg2 originXDelta:(float)arg3;
- (void)movieScrubberEditingAnimationFinished:(id)arg1;
- (void)movieScrubberDidBeginEditing:(id)arg1;
- (void)movieScrubberDidCancelEditing:(id)arg1;
- (void)movieScrubberWillBeginEditing:(id)arg1;
- (void)movieScrubberDidFinishRequestingThumbnails:(id)arg1;
- (void)movieScrubberWillBeginRequestingThumbnails:(id)arg1;
- (void)movieScrubber:(id)arg1 editingEndValueDidChange:(double)arg2;
- (void)movieScrubber:(id)arg1 editingStartValueDidChange:(double)arg2;
- (void)movieScrubber:(id)arg1 valueDidChange:(double)arg2;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)viewWillAppear:(BOOL)arg1;
- (void)setEditing:(BOOL)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)isEditing;
- (void)setProgress:(id)arg1;
- (void)willMoveToSuperview:(id)arg1;
- (void)didMoveToSuperview;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (int)interfaceOrientation;
- (id)delegate;
- (void)layoutSubviews;
- (id)videoScrubber;
- (BOOL)isPlaying;
- (double)currentTime;
- (void)setCurrentTime:(double)arg1;
- (id)posterFrameView;
- (void)setScrubberWidth:(float)arg1;
- (id)_moviePlayer;
- (void)setScrubberIsSubview:(BOOL)arg1;
- (BOOL)showsScrubber;
- (BOOL)showsPlayOverlay;
- (id)posterFrameImage;
- (void)setPosterFrameImage:(id)arg1;
- (BOOL)showsPosterFrame;
- (void)viewDidDisappear;
- (void)handleDoubleTap;
- (id)currentFrameImage;
- (BOOL)wasTrimmedInPlace;
- (id)videoOverlayPlayButton;
- (id)videoOverlayBackgroundView;
- (void)didBecomeMoviePlayerDelegate:(id)arg1;
- (void)willResignMoviePlayerDelegate:(id)arg1;
- (id)_parentViewForExternalOutputBackground;
- (BOOL)scrubberIsSubview;
- (void)_handleScreenConnectionChange:(BOOL)arg1;
- (BOOL)_mediaIsVideo;
- (BOOL)loadMediaImmediately;
- (void)_airTunesServiceChanged;
- (void)_showVideoOverlay;
- (void)_updatePosterImageView;
- (void)_reloadScrubberThumbnailsIfNeeded;
- (void)_createScrubberIfNeeded;
- (void)_removeAirPlayBackgroundView;
- (void)_resetScrubberUpdateTimer;
- (void)playToAirTunes;
- (void)_delayedHidePosterFrame;
- (void)_addAirPlayBackgroundView;
- (void)_resetTrimProgressTimer;
- (BOOL)_canEditDuration:(double)arg1;
- (void)_remakerDidFinish:(id)arg1;
- (void)importerFinishedProcessingTrimmedVideo:(id)arg1;
- (void)_thumbnailsWereRegenerated:(id)arg1 error:(id)arg2 contextInfo:(void*)arg3;
- (void)_startDeliveringNotificationsToMainThread;
- (void)_removeTrimProgressTimer;
- (void)cancelTrim;
- (void)_trimProgressChanged:(id)arg1;
- (void)_updateTrimProgress;
- (void)_stopDeliveringNotifications;
- (void)_informDelegateAboutProgressChange:(float)arg1;
- (void)setTrimmedVideoClip:(id)arg1;
- (void)_prepareMoviePlayerIfNeeded;
- (void)_scrubberAnimationFinished;
- (void)_setPlaying:(BOOL)arg1;
- (void)_destroyGenerators;
- (void)_didScrubToValue:(double)arg1 withHandle:(int)arg2;
- (void)_updatePosterFrameVisibility;
- (void)_hideVideoOverlay:(BOOL)arg1;
- (BOOL)playingToAirTunes;
- (void)_removeScrubberUpdateTimer;
- (void)_updateScrubberValue;
- (id)_loadThumbnailsIntoDictionary:(id)arg1 isLandscape:(BOOL)arg2 aspectRatio:(float)arg3;
- (id)_pathForPrebakedPortraitScrubberThumbnails;
- (id)_pathForPrebakedLandscapeScrubberThumbnails;
- (void)_scrubToTime:(double)arg1;
- (void)moviePlayerPlaybackStateDidChange:(id)arg1;
- (id)_mediaTitle;
- (id)_pathForOriginalFile;
- (BOOL)_didSetPhotoData;
- (void)_updateScrubberVisibilityWithDuration:(double)arg1;
- (void)_setNeedsReloadScrubberThumbnails:(BOOL)arg1;
- (void)_requestPreviewPosterFrameForVideoSize:(struct CGSize { float x1; float x2; })arg1;
- (void)_setScaleModeForSize:(struct CGSize { float x1; float x2; })arg1;
- (id)_pathForVideoPreviewFile;
- (void)_addThumbnailRequestForTimestamp:(id)arg1 isPreviewThumbnail:(BOOL)arg2;
- (void)_serviceImageGenerationRequest;
- (void)_saveCachedThumbnailsIfNecessary;
- (BOOL)_canCreateMetadata;
- (void)_removeThumbnailRequestForRequestID:(id)arg1;
- (void)_savePreviewPosterFrameImage:(struct CGImage { }*)arg1;
- (void)_didBeginPlayback;
- (void)_verifyPlaybackHasBegun;
- (void)_playbackFinished;
- (void)_updateScrubberFrame;
- (void)_videoOverlayFadeOutDidFinish;
- (void)playButtonClicked:(id)arg1;
- (BOOL)_mediaIsPlayable;
- (BOOL)canEdit;
- (float)scrubberWidth;
- (void)_hideTrimMessageView:(BOOL)arg1;
- (void)_clearImageGenerators;
- (void)_resetMoviePlayer;
- (void)_cancelRemaking:(id)arg1;
- (id)_initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 videoCameraImage:(id)arg2 orientation:(int)arg3;
- (id)previewImageView;
- (void)showTrimMessage:(id)arg1 withBottomY:(float)arg2;
- (void)hideTrimMessage;
- (void)setImageTile:(id)arg1;
- (void)setShowsPosterFrame:(BOOL)arg1;
- (void)setLoadMediaImmediately:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 videoCameraImage:(id)arg2 orientation:(int)arg3;
- (BOOL)playingToVideoOut;
- (BOOL)shouldShowCopyCalloutAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setShowsScrubber:(BOOL)arg1 duration:(double)arg2;
- (id)trimmedVideoClip;
- (id)videoPathAfterTrim;
- (void)trimUsingMode:(int)arg1 saveACopy:(BOOL)arg2;
- (id)newPreviewImageData:(id*)arg1 fullScreenImage:(id*)arg2;
- (id)imageTile;
- (void)adjustUIForVideoOut:(BOOL)arg1;
- (id)videoCameraImage;
- (id)pathForVideoFile;
- (void)setShowsScrubber:(BOOL)arg1;
- (BOOL)deleteOriginalFileAfterTrim;
- (void)viewDidAppear;
- (void)removeVideoOverlay;
- (BOOL)isTrimming;
- (void)setShowsPlayOverlay:(BOOL)arg1;
- (void)setCanEdit:(BOOL)arg1;
- (void)setVideoOverlayBackgroundView:(id)arg1;
- (id)description;
- (void)dealloc;
- (double)endTime;

@end
