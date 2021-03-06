/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSArray, MPAVItem, NSString, NSDate, AVPlayerItemInternal, NSError;

@interface AVPlayerItem : NSObject <NSCopying> {
    AVPlayerItemInternal *_playerItem;
}

@property(readonly) NSArray * formatDetailsForTracks;
@property(retain) MPAVItem * MPAVItem;
@property(getter=isAuthorizationRequiredForPlayback,readonly) BOOL authorizationRequiredForPlayback;
@property(getter=isApplicationAuthorizedForPlayback,readonly) BOOL applicationAuthorizedForPlayback;
@property(getter=isContentAuthorizedForPlayback,readonly) BOOL contentAuthorizedForPlayback;
@property(getter=_isExternalProtectionRequiredForPlayback,setter=_setExternalProtectionRequiredForPlayback:) BOOL _externalProtectionRequiredForPlayback;
@property(getter=_isRental,readonly) BOOL _rental;
@property(readonly) NSDate * _rentalStartDate;
@property(readonly) NSDate * _rentalExpirationDate;
@property(getter=_isRentalPlaybackStarted,readonly) BOOL _rentalPlaybackStarted;
@property(readonly) NSDate * _rentalPlaybackStartedDate;
@property(readonly) NSDate * _rentalPlaybackExpirationDate;
@property(copy) NSString * dataYouTubeID;
@property(readonly) BOOL canDisplayExternalSubtitles;
@property BOOL displaysExternalSubtitles;
@property(readonly) NSError * error;
@property(readonly) int status;

+ (void)initialize;
+ (id)_initializeProtectedContentPlaybackSupportSessionAsynchronouslyForProvider:(id)arg1 withOptions:(id)arg2;
+ (void)_uninitializeProtectedContentPlaybackSupportSession:(id)arg1;
+ (id)playerItemWithAsset:(id)arg1;
+ (BOOL)automaticallyNotifiesObserversOfForwardPlaybackEndTime;
+ (BOOL)automaticallyNotifiesObserversOfReversePlaybackEndTime;
+ (BOOL)automaticallyNotifiesObserversOfLimitReadAhead;
+ (BOOL)automaticallyNotifiesObserversOfAlwaysMonitorsPlayability;
+ (BOOL)automaticallyNotifiesObserversOfContinuesPlayingDuringPrerollForSeek;
+ (BOOL)automaticallyNotifiesObserversOfContinuesPlayingDuringPrerollForRateChange;
+ (BOOL)automaticallyNotifiesObserversOfAudioMix;
+ (BOOL)automaticallyNotifiesObserversOfVideoComposition;
+ (BOOL)automaticallyNotifiesObserversOfGaplessInfo;
+ (BOOL)automaticallyNotifiesObserversOfSoundCheckVolumeNormalization;
+ (BOOL)automaticallyNotifiesObserversOfVolumeAdjustment;
+ (BOOL)automaticallyNotifiesObserversOfNonForcedSubtitleDisplayEnabled;
+ (BOOL)automaticallyNotifiesObserversOfStatus;
+ (BOOL)automaticallyNotifiesObserversOfAsset;
+ (BOOL)automaticallyNotifiesObserversOfPlaybackLikelyToKeepUp;
+ (BOOL)automaticallyNotifiesObserversOfPlaybackBufferEmpty;
+ (BOOL)automaticallyNotifiesObserversOfPlaybackBufferFull;
+ (BOOL)automaticallyNotifiesObserversOfSeekableTimeRanges;
+ (BOOL)automaticallyNotifiesObserversOfLoadedTimeRanges;
+ (BOOL)automaticallyNotifiesObserversOfPresentationSize;
+ (BOOL)automaticallyNotifiesObserversOfTracks;
+ (BOOL)_forStreamingItemsVendAssetWithFigPlaybackItem;
+ (BOOL)_forNonStreamingURLsFireKVOForAssetWhenReadyForInspection;
+ (id)playerItemWithURL:(id)arg1;

- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (void)finalize;
- (id)valueForUndefinedKey:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })_duration;
- (id)initWithURL:(id)arg1;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned int)arg3 context:(void*)arg4;
- (BOOL)isAuthorizationRequiredForPlayback;
- (BOOL)isApplicationAuthorizedForPlayback;
- (BOOL)isContentAuthorizedForPlayback;
- (void)_setExternalProtectionRequiredForPlayback:(BOOL)arg1;
- (BOOL)_isRental;
- (id)_rentalStartDate;
- (id)_rentalExpirationDate;
- (BOOL)_isRentalPlaybackStarted;
- (id)_rentalPlaybackStartedDate;
- (id)_rentalPlaybackExpirationDate;
- (id)accessLog;
- (id)errorLog;
- (void)_setRampInOutInfo:(id)arg1;
- (void)_setAudibleDRMInfo:(id)arg1;
- (long long)_fileSize;
- (long long)_availableFileSize;
- (void)setDataYouTubeID:(id)arg1;
- (void)setDisplaysExternalSubtitles:(BOOL)arg1;
- (id)dataYouTubeID;
- (BOOL)canPlayFastForward;
- (BOOL)canPlayFastReverse;
- (void)cancelPendingSeeks;
- (id)currentDate;
- (id)initialDate;
- (void)setInitialDate:(id)arg1;
- (id)currentEstimatedDate;
- (id)initialEstimatedDate;
- (void)setInitialEstimatedDate:(id)arg1;
- (void)stepByCount:(int)arg1;
- (BOOL)limitReadAhead;
- (void)setLimitReadAhead:(BOOL)arg1;
- (BOOL)alwaysMonitorsPlayability;
- (void)setAlwaysMonitorsPlayability:(BOOL)arg1;
- (BOOL)isPlaybackLikelyToKeepUp;
- (BOOL)isPlaybackBufferFull;
- (BOOL)isPlaybackBufferEmpty;
- (float)progressTowardsPlaybackLikelyToKeepUp;
- (id)playabilityMetrics;
- (id)seekableTimeRanges;
- (id)loadedTimeRanges;
- (id)gaplessInfo;
- (void)setGaplessInfo:(id)arg1;
- (int)selectedTrackIDInTrackGroup:(id)arg1;
- (void)selectTrackWithID:(int)arg1 inTrackGroup:(id)arg2;
- (id)timedMetadata;
- (void)_removeSyncLayer:(id)arg1;
- (void)_addSyncLayer:(id)arg1;
- (void)_createPlayerItemInternal;
- (void)_setURL:(id)arg1;
- (void)_setAsset:(id)arg1;
- (id)audioMix;
- (void)setAudioMix:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })forwardPlaybackEndTime;
- (void)setForwardPlaybackEndTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })reversePlaybackEndTime;
- (void)setReversePlaybackEndTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (float)soundCheckVolumeNormalization;
- (void)setSoundCheckVolumeNormalization:(float)arg1;
- (float)volumeAdjustment;
- (void)setVolumeAdjustment:(float)arg1;
- (BOOL)continuesPlayingDuringPrerollForRateChange;
- (void)setContinuesPlayingDuringPrerollForRateChange:(BOOL)arg1;
- (BOOL)continuesPlayingDuringPrerollForSeek;
- (void)setContinuesPlayingDuringPrerollForSeek:(BOOL)arg1;
- (BOOL)isNonForcedSubtitleDisplayEnabled;
- (void)setNonForcedSubtitleDisplayEnabled:(BOOL)arg1;
- (id)selectedMediaOptionInMediaSelectionGroup:(id)arg1;
- (void)selectMediaOption:(id)arg1 inMediaSelectionGroup:(id)arg2;
- (BOOL)_isExternalProtectionRequiredForPlayback;
- (BOOL)seekToDate:(id)arg1;
- (void)_quietlySetForwardPlaybackEndTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)_quietlySetReversePlaybackEndTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)_quietlySetContinuesPlayingDuringPrerollForSeek:(BOOL)arg1;
- (void)_quietlySetContinuesPlayingDuringPrerollForRateChange:(BOOL)arg1;
- (void)_setVideoCompositionFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)_setVideoCompositionRenderSize:(struct CGSize { float x1; float x2; })arg1;
- (void)_setVideoCompositionRenderScale:(float)arg1;
- (void)_setVideoCompositionInstructions:(id)arg1;
- (void)_setVideoCompositor:(id)arg1;
- (void)_quietlySetEQPreset:(int)arg1;
- (id)_playbackProperties;
- (void)_quietlySetPlaybackProperties:(id)arg1;
- (void)_quietlySetSoundCheckVolumeNormalization:(float)arg1;
- (void)_quietlySetVolumeAdjustment:(float)arg1;
- (void)_applyTrackSelectionsFromAlternateTrackGroupSPI;
- (void)_applyMediaSelectionOptions;
- (void)_setSyncLayersOnFigPlaybackItem;
- (void)_setPlayerConnection:(id)arg1;
- (void)_createPlayerConnection:(id)arg1 shouldAppendItem:(BOOL)arg2;
- (void)_makeNewAssetWithFigPlaybackItem;
- (void)_configurePlaybackItemForPlayerType:(int)arg1;
- (void)_quietlySetLimitReadAhead:(BOOL)arg1;
- (void)_quietlySetAlwaysMonitorsPlayability:(BOOL)arg1;
- (void)_applyInitialAudioMix;
- (void)_informObserversAboutAvailabilityOfTracks;
- (void)_setAssetWithFigPlaybackItem:(id)arg1;
- (id)_tracks;
- (void)_setTrackIDsForAssetWithFigPlaybackItem:(id)arg1;
- (void)_kickAssetObserversIfAppropriate;
- (void)_respondToBecomingReadyForBasicInspection;
- (void)_invokeReadyForEnqueueingHandlers;
- (BOOL)_canPlayFastForward;
- (BOOL)_canPlayFastReverse;
- (struct CGSize { float x1; float x2; })_presentationSize;
- (int)_CreateSeekID;
- (int)_cancelPendingSeekAndRegisterSeekCompletionHandler:(id)arg1;
- (id)_unregisterAndReturnRetainedSeekCompletionHandler;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })_forwardPlaybackEndTime;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })_reversePlaybackEndTime;
- (BOOL)_limitReadAhead;
- (BOOL)_alwaysMonitorsPlayability;
- (BOOL)_continuesPlayingDuringPrerollForSeek;
- (BOOL)_continuesPlayingDuringPrerollForRateChange;
- (void)_applyAudioMix;
- (id)_seekableTimeRanges;
- (id)_loadedTimeRanges;
- (id)_trackWithTrackID:(int)arg1;
- (void)_selectTrackWithID:(int)arg1 amongTrackIDs:(id)arg2;
- (void)_selectMediaOption:(id)arg1 inMediaSelectionGroup:(id)arg2 cacheIfAppropriate:(BOOL)arg3;
- (void)_setEnabledState:(BOOL)arg1 ofTrackID:(int)arg2;
- (void)_cacheMediaSelectionOption:(id)arg1 forMediaSelectionGroup:(id)arg2;
- (void)_selectMediaOption:(id)arg1 inAlternateTrackGroup:(id)arg2 cacheIfAppropriate:(BOOL)arg3;
- (void)_selectMediaOption:(id)arg1 inKeyValueGroup:(id)arg2 cacheIfAppropriate:(BOOL)arg3;
- (id)_selectedMediaOptionInAlternateTrackGroup:(id)arg1;
- (id)_selectedMediaOptionInKeyValueGroup:(id)arg1;
- (void)_setAssetToAssetWithFigPlaybackItemIfAppropriate;
- (BOOL)_isCurrentPlayerItem;
- (id)_playbackItemNotificationPayloadToError:(struct __CFDictionary { }*)arg1;
- (struct OpaqueFigCPEProtector { }*)_figCPEProtector;
- (BOOL)canDisplayExternalSubtitles;
- (void)displayExternalSubtitleString:(id)arg1 forced:(BOOL)arg2;
- (void)_setEQPreset:(int)arg1;
- (void)seekToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 completionHandler:(id)arg2;
- (void)_removeFPListeners;
- (void)_willAccessKVOForKey:(id)arg1;
- (void)_didAccessKVOForKey:(id)arg1;
- (void)_playerChangeStatusToFailedWithError:(id)arg1;
- (void)_setIsCurrentPlayerItem:(BOOL)arg1;
- (id)_playerConnection;
- (struct OpaqueFigPlaybackItem { }*)_figPlaybackItem;
- (void)_detachFromPlayer;
- (void)_removeFromItems;
- (void)_attachToPlayer:(id)arg1 forImmediateEnqueueing:(BOOL)arg2 shouldAppendItem:(BOOL)arg3;
- (void)_makeReadyForEnqueueingWithCompletionHandler:(id)arg1;
- (void)_insertAfterItem:(id)arg1;
- (void)_addFPListeners;
- (id)_propertyStorage;
- (id)_nextItem;
- (void)_changeStatusToFailedWithError:(id)arg1;
- (id)_previousItem;
- (void)seekToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)seekToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 toleranceBefore:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 toleranceAfter:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (void)seekToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 toleranceBefore:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 toleranceAfter:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 completionHandler:(id)arg4;
- (id)_fpNotificationNames;
- (void)_setTimedMetadata:(id)arg1;
- (BOOL)displaysExternalSubtitles;
- (BOOL)_hasEnabledVideoMedia;
- (id)asset;
- (id)videoComposition;
- (void)setVideoComposition:(id)arg1;
- (int)status;
- (id)error;
- (id)_URL;
- (id)tracks;
- (id)_weakReference;
- (id)initWithAsset:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })currentTime;
- (struct CGSize { float x1; float x2; })presentationSize;
- (id)_player;
- (id)_cachedValueForKey:(id)arg1;
- (struct dispatch_queue_s { }*)_stateDispatchQueue;
- (void)willChangeValueForKey:(id)arg1;
- (void)didChangeValueForKey:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)dealloc;
- (void)setMPAVItem:(id)arg1;
- (id)MPAVItem;
- (id)formatDetailsForTracks;

@end
