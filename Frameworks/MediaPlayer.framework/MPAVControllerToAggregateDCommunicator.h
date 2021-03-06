/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPAVItem;

@interface MPAVControllerToAggregateDCommunicator : NSObject  {
    MPAVItem *_item;
    unsigned int _lastMediaType;
    double _playbackStartTime;
    BOOL _playbackStartTimeIsValid;
}


- (void)_updateLastMediaTypeForItem;
- (void)_stopPlaybackTimer;
- (void)_handleItemTypeAvailableNotification:(id)arg1;
- (void)_handleItemChangedNotification:(id)arg1;
- (void)_handlePlaybackStateChangedNotification:(id)arg1;
- (void)_startPlaybackTimer;
- (id)init;
- (void)dealloc;

@end
