/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSURL, AVCaptureFileOutputInternal;

@interface AVCaptureFileOutput : AVCaptureOutput  {
    AVCaptureFileOutputInternal *_fileOutputInternal;
}

@property(readonly) NSURL * outputFileURL;
@property(getter=isRecording,readonly) BOOL recording;
@property(readonly) struct { long long value; int timescale; unsigned int flags; long long epoch; } recordedDuration;
@property(readonly) long long recordedFileSize;
@property struct { long long value; int timescale; unsigned int flags; long long epoch; } maxRecordedDuration;
@property long long maxRecordedFileSize;
@property long long minFreeDiskSpaceLimit;

+ (void)initialize;

- (void)stopRecording;
- (void)startRecordingToOutputFileURL:(id)arg1 recordingDelegate:(id)arg2;
- (BOOL)isRecordingPaused;
- (void)pauseRecording;
- (void)resumeRecording;
- (void)setPausesRecordingOnInterruption:(BOOL)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })recordedDuration;
- (long long)recordedFileSize;
- (void)setMaxRecordedDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setMaxRecordedFileSize:(long long)arg1;
- (void)setMinFreeDiskSpaceLimit:(long long)arg1;
- (id)outputFileURL;
- (BOOL)pausesRecordingOnInterruption;
- (long long)minFreeDiskSpaceLimit;
- (long long)maxRecordedFileSize;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })maxRecordedDuration;
- (BOOL)isRecording;
- (id)init;
- (void)dealloc;

@end
