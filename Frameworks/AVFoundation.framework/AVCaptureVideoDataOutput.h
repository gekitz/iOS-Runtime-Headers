/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVCaptureVideoDataOutputInternal, NSArray, <AVCaptureVideoDataOutputSampleBufferDelegate>, NSDictionary;

@interface AVCaptureVideoDataOutput : AVCaptureOutput  {
    AVCaptureVideoDataOutputInternal *_internal;
}

@property(readonly) <AVCaptureVideoDataOutputSampleBufferDelegate> * sampleBufferDelegate;
@property(readonly) struct dispatch_queue_s { }* sampleBufferCallbackQueue;
@property(copy) NSDictionary * videoSettings;
@property(readonly) NSArray * availableVideoCVPixelFormatTypes;
@property(readonly) NSArray * availableVideoCodecTypes;
@property struct { long long value; int timescale; unsigned int flags; long long epoch; } minFrameDuration;
@property BOOL alwaysDiscardsLateVideoFrames;

+ (void)initialize;

- (void)setVideoSettings:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })minFrameDuration;
- (void)setMinFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setAlwaysDiscardsLateVideoFrames:(BOOL)arg1;
- (id)availableVideoCVPixelFormatTypes;
- (id)availableVideoCodecTypes;
- (BOOL)alwaysDiscardsLateVideoFrames;
- (void)_AVCaptureVideoDataOutput_VideoDataBecameReady;
- (id)addConnection:(id)arg1 error:(id*)arg2;
- (void)setSampleBufferDelegate:(id)arg1 queue:(struct dispatch_queue_s { }*)arg2;
- (id)connectionMediaTypes;
- (void)handleEnabledChangedForConnection:(id)arg1;
- (void)didStopForSession:(id)arg1 error:(id)arg2;
- (void)didStartForSession:(id)arg1;
- (BOOL)isTheOnlyDataOutput;
- (void)setSession:(id)arg1;
- (id)_applyOverridesToCaptureOptions:(id)arg1;
- (id)sampleBufferDelegate;
- (struct dispatch_queue_s { }*)sampleBufferCallbackQueue;
- (id)videoSettings;
- (id)init;
- (void)dealloc;

@end
