/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPAVItem, NSMutableDictionary, NSDictionary;

@interface MPAlternateTracks : NSObject  {
    MPAVItem *_item;
    NSDictionary *_alternateTracks;
    NSMutableDictionary *_trackChangeDictionary;
}

@property(getter=isLoaded,readonly) BOOL loaded;


- (unsigned int)trackCountForTypes:(unsigned int)arg1;
- (BOOL)hasTracksForTypes:(unsigned int)arg1;
- (void)setTrack:(id)arg1 forType:(unsigned int)arg2;
- (id)currentTrackForType:(unsigned int)arg1;
- (id)initWithItem:(id)arg1;
- (void)commitTrackChanges;
- (id)_keyForTrackType:(unsigned int)arg1;
- (void)beginTrackChanges;
- (unsigned int)indexOfCurrentTrackForType:(unsigned int)arg1;
- (id)tracksForType:(unsigned int)arg1;
- (BOOL)isLoaded;
- (void)reloadData;
- (void)dealloc;

@end
