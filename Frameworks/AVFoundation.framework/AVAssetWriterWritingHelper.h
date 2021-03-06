/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVWeakReference;

@interface AVAssetWriterWritingHelper : AVAssetWriterHelper  {
    AVWeakReference *_weakReference;
    struct OpaqueFigAssetWriter { } *_figAssetWriter;
    BOOL _startSessionCalled;
}


- (void)finalize;
- (void)startSessionAtSourceTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)endSessionAtSourceTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)cancelWriting;
- (void)finishWriting;
- (id)initWithConfigurationState:(id)arg1;
- (id)initWithConfigurationState:(id)arg1 error:(id*)arg2;
- (void)_handleFailedNotificationWithError:(id)arg1;
- (void)_handleServerDiedNotification;
- (int)status;
- (void)dealloc;

@end
