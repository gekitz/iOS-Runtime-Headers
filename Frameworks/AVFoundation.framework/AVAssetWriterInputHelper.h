/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSArray, NSString, AVAssetWriterInputConfigurationState, AVWeakReference, AVOutputSettings, NSDictionary;

@interface AVAssetWriterInputHelper : NSObject  {
    AVAssetWriterInputConfigurationState *_configurationState;
    AVWeakReference *_weakReferenceToAssetWriterInput;
}

@property(readonly) int status;
@property(readonly) NSString * mediaType;
@property(readonly) AVOutputSettings * outputSettings;
@property(retain) struct opaqueCMFormatDescription { }* sampleBufferFormatHint;
@property struct CGAffineTransform { float a; float b; float c; float d; float tx; float ty; } transform;
@property(copy) NSArray * metadata;
@property int mediaTimeScale;
@property(getter=isReadyForMoreMediaData,readonly) BOOL readyForMoreMediaData;
@property BOOL expectsMediaDataInRealTime;
@property(copy) NSDictionary * sourcePixelBufferAttributes;
@property(readonly) struct __CVPixelBufferPool { }* pixelBufferPool;
@property(retain) AVWeakReference * weakReferenceToAssetWriterInput;
@property(readonly) AVAssetWriterInputConfigurationState * configurationState;


- (void)setTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (void)setMetadata:(id)arg1;
- (id)metadata;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })transform;
- (void)setWeakReferenceToAssetWriterInput:(id)arg1;
- (struct opaqueCMFormatDescription { }*)sampleBufferFormatHint;
- (void)setSampleBufferFormatHint:(struct opaqueCMFormatDescription { }*)arg1;
- (int)mediaTimeScale;
- (void)setMediaTimeScale:(int)arg1;
- (struct __CVPixelBufferPool { }*)pixelBufferPool;
- (id)sourcePixelBufferAttributes;
- (void)setSourcePixelBufferAttributes:(id)arg1;
- (void)prepareToEndSession;
- (BOOL)prepareToFinishWritingReturningError:(id*)arg1;
- (void)transitionToTerminalStatus:(int)arg1;
- (BOOL)isReadyForMoreMediaData;
- (void)setExpectsMediaDataInRealTime:(BOOL)arg1;
- (void)requestMediaDataWhenReadyOnQueue:(struct dispatch_queue_s { }*)arg1 usingBlock:(id)arg2;
- (BOOL)appendSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (BOOL)appendPixelBuffer:(struct __CVBuffer { }*)arg1 withPresentationTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)markAsFinished;
- (void)transitionAssetWriterAndAllInputsToFailedStatusWithError:(id)arg1;
- (id)weakReferenceToAssetWriterInput;
- (id)initWithConfigurationState:(id)arg1;
- (id)configurationState;
- (BOOL)expectsMediaDataInRealTime;
- (id)outputSettings;
- (int)status;
- (id)mediaType;
- (void)dealloc;

@end
