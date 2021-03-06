/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSArray, NSString, NSLocale, AVWeakReference;

@interface AVAssetTrackInspector : AVFigObjectInspector <AVAsynchronousKeyValueLoading> {
    AVWeakReference *_weakReference;
}

@property(readonly) int trackID;
@property(readonly) NSString * mediaType;
@property(readonly) NSArray * formatDescriptions;
@property(getter=isPlayable,readonly) BOOL playable;
@property(getter=isEnabled,readonly) BOOL enabled;
@property(getter=isSelfContained,readonly) BOOL selfContained;
@property(readonly) long long totalSampleDataLength;
@property(readonly) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } timeRange;
@property(readonly) int naturalTimeScale;
@property(readonly) float estimatedDataRate;
@property(readonly) NSString * languageCode;
@property(readonly) NSString * extendedLanguageTag;
@property(readonly) NSLocale * locale;
@property(readonly) struct CGSize { float width; float height; } naturalSize;
@property(readonly) struct CGAffineTransform { float a; float b; float c; float d; float tx; float ty; } preferredTransform;
@property(readonly) int layer;
@property(readonly) float preferredVolume;
@property(readonly) float nominalFrameRate;
@property(copy,readonly) NSArray * segments;
@property(readonly) NSArray * commonMetadata;
@property(readonly) NSArray * availableMetadataFormats;
@property(getter=isExcludedFromAutoselectionInTrackGroup,readonly) BOOL excludedFromAutoselectionInTrackGroup;

+ (id)assetTrackInspectorWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long)arg3;

- (int)layer;
- (id)locale;
- (BOOL)isEnabled;
- (id)_initWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long)arg3;
- (id)formatDescriptions;
- (BOOL)isSelfContained;
- (long long)totalSampleDataLength;
- (BOOL)isExcludedFromAutoselectionInTrackGroup;
- (float)estimatedDataRate;
- (id)languageCode;
- (id)extendedLanguageTag;
- (float)nominalFrameRate;
- (id)segments;
- (id)segmentForTrackTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })samplePresentationTimeForTrackTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (float)preferredVolume;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })preferredTransform;
- (struct CGSize { float x1; float x2; })naturalSize;
- (int)naturalTimeScale;
- (id)mediaType;
- (int)trackID;
- (id)commonMetadata;
- (id)availableMetadataFormats;
- (id)metadataForFormat:(id)arg1;
- (BOOL)isPlayable;
- (id)_weakReference;
- (id)_initWithAsset:(id)arg1 trackID:(int)arg2;
- (id)_initWithAsset:(id)arg1 trackIndex:(long)arg2;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })timeRange;
- (int)statusOfValueForKey:(id)arg1 error:(id*)arg2;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)dealloc;

@end
