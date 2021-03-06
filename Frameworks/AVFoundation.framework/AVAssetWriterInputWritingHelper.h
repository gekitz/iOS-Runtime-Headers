/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVFigAssetWriterTrack, AVAssetWriterInputMediaDataRequester;

@interface AVAssetWriterInputWritingHelper : AVAssetWriterInputHelper  {
    AVFigAssetWriterTrack *_assetWriterTrack;
    AVAssetWriterInputMediaDataRequester *_mediaDataRequester;
    struct __CVPixelBufferPool { } *_pixelBufferPool;
}

@property(getter=_assetWriterTrack,readonly) AVFigAssetWriterTrack * assetWriterTrack;

+ (id)keyPathsForValuesAffectingReadyForMoreMediaData;

- (void)finalize;
- (struct __CVPixelBufferPool { }*)pixelBufferPool;
- (id)initWithConfigurationState:(id)arg1 assetWriterTrack:(id)arg2 error:(id*)arg3;
- (void)prepareToEndSession;
- (BOOL)prepareToFinishWritingReturningError:(id*)arg1;
- (void)transitionToTerminalStatus:(int)arg1;
- (BOOL)isReadyForMoreMediaData;
- (void)requestMediaDataWhenReadyOnQueue:(struct dispatch_queue_s { }*)arg1 usingBlock:(id)arg2;
- (BOOL)appendSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (BOOL)appendPixelBuffer:(struct __CVBuffer { }*)arg1 withPresentationTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)markAsFinished;
- (id)_assetWriterTrack;
- (id)initWithConfigurationState:(id)arg1;
- (int)status;
- (void)dealloc;

@end
