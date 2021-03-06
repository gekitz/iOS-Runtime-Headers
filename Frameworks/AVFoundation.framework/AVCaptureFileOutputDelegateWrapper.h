/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class <AVCaptureFileOutputRecordingDelegate><AVCaptureFileOutputPauseResumeDelegate>, NSString, NSArray, NSURL;

@interface AVCaptureFileOutputDelegateWrapper : NSObject  {
    <AVCaptureFileOutputRecordingDelegate><AVCaptureFileOutputPauseResumeDelegate> *_delegate;
    NSURL *_outputFileURL;
    BOOL _receivedDidStartRecording;
    BOOL _receivedDidStopRecording;
    NSString *_didStopRecordingReason;
    NSArray *_metadata;
    NSArray *_connections;
}

@property(readonly) NSArray * connections;
@property(retain) NSArray * metadata;
@property(copy) NSString * didStopRecordingReason;
@property BOOL receivedDidStopRecording;
@property BOOL receivedDidStartRecording;
@property(readonly) NSURL * outputFileURL;
@property(readonly) <AVCaptureFileOutputRecordingDelegate><AVCaptureFileOutputPauseResumeDelegate> * delegate;

+ (id)wrapperWithURL:(id)arg1 delegate:(id)arg2 connections:(id)arg3;

- (id)connections;
- (void)setMetadata:(id)arg1;
- (id)metadata;
- (id)delegate;
- (id)didStopRecordingReason;
- (void)setDidStopRecordingReason:(id)arg1;
- (BOOL)receivedDidStopRecording;
- (void)setReceivedDidStopRecording:(BOOL)arg1;
- (BOOL)receivedDidStartRecording;
- (void)setReceivedDidStartRecording:(BOOL)arg1;
- (id)outputFileURL;
- (id)initWithURL:(id)arg1 delegate:(id)arg2 connections:(id)arg3;
- (void)dealloc;

@end
