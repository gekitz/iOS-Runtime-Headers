/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVAsset, NSArray;

@interface AVMediaSelectionTrackGroup : AVMediaSelectionGroup  {
    AVAsset *_asset;
    NSArray *_trackIDs;
    NSArray *_options;
    BOOL _allowsEmptySelection;
}


- (id)options;
- (id)mediaSelectionOptionWithPropertyList:(id)arg1;
- (id)initWithAsset:(id)arg1 alternateTrackIDs:(id)arg2;
- (BOOL)_isAlternateTrackGroup;
- (BOOL)allowsEmptySelection;
- (id)_optionForTrackID:(int)arg1 displaysNonForcedSubtitles:(BOOL)arg2;
- (id)asset;
- (id)trackIDs;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;

@end
