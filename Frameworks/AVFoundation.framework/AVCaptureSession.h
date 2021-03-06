/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSArray, AVCaptureSessionInternal, NSString;

@interface AVCaptureSession : NSObject  {
    AVCaptureSessionInternal *_internal;
}

@property(copy) NSString * sessionPreset;
@property(readonly) NSArray * inputs;
@property(readonly) NSArray * outputs;
@property(getter=isRunning,readonly) BOOL running;
@property(getter=isInterrupted,readonly) BOOL interrupted;

+ (void)initialize;
+ (id)avCaptureSessionPlist;

- (BOOL)isRunning;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (struct OpaqueFigRecorder { }*)recorder;
- (void)setSessionPreset:(id)arg1;
- (void)beginConfiguration;
- (void)commitConfiguration;
- (id)inputWithClass:(Class)arg1;
- (void)addInputWithNoConnections:(id)arg1;
- (void)addOutputWithNoConnections:(id)arg1;
- (void)removeVideoPreviewLayer;
- (void)setVideoPreviewLayer:(id)arg1;
- (BOOL)canAddConnection:(id)arg1;
- (void)addConnection:(id)arg1;
- (BOOL)isInterrupted;
- (void)startRunning;
- (void)stopRunning;
- (void)videoPreviewLayerPropertiesChanged;
- (void)_beginSessionUpdates;
- (id)videoPreviewLayer;
- (void)_beginConfiguration;
- (void)removeInput:(id)arg1;
- (void)removeOutput:(id)arg1;
- (void)_teardownFigRecorder;
- (BOOL)canSetSessionPreset:(id)arg1;
- (void)_rebuildInternalCaptureOptions;
- (void)_commitConfiguration;
- (void)_endSessionUpdates;
- (BOOL)_canAddInput:(id)arg1 failureReason:(id*)arg2;
- (void)_addInputWithNoConnections:(id)arg1;
- (id)_connectionsForNewInputPort:(id)arg1;
- (void)_addConnection:(id)arg1;
- (id)_liveConnections;
- (void)_removeConnectionsForInputPort:(id)arg1;
- (void)_removeVideoPreviewLayerConnectionsForInputPort:(id)arg1;
- (BOOL)_canAddOutput:(id)arg1 failureReason:(id*)arg2;
- (void)_addOutputWithNoConnections:(id)arg1;
- (id)_connectionsForNewOutput:(id)arg1;
- (void)_removeConnection:(id)arg1;
- (BOOL)_canAddConnection:(id)arg1 failureReason:(id*)arg2;
- (void)_setRunning:(BOOL)arg1;
- (BOOL)isBeingConfigured;
- (void)_doWillStart;
- (id)_stopError;
- (void)_postRuntimeError:(id)arg1;
- (BOOL)isPreviewing;
- (BOOL)_buildAndRunGraph;
- (BOOL)_stopPreviewing;
- (void)_rebuildGraph;
- (id)_createCaptureOptionsForPreset:(id)arg1 audioDevice:(id)arg2 videoDevice:(id)arg3 errorStatus:(int*)arg4;
- (void)_excludeOutputsForCaptureOptions:(id)arg1;
- (BOOL)_sessionHasEnabledMovieFileOutput;
- (id)_addFastSwitchOptionsToCaptureOptions:(id)arg1 forDevice:(id)arg2 preset:(id)arg3;
- (long)_createRecorderIfNeeded;
- (id)_figRecorderOptionsForPreset:(id)arg1 audioDevice:(id)arg2 videoDevice:(id)arg3;
- (BOOL)_figRecorderOldOptionsAreEqual:(id)arg1 toNewOptions:(id)arg2 livesourceOptionsAreEqual:(BOOL*)arg3;
- (BOOL)_startPreviewing;
- (void)_stopAndTearDownGraph;
- (id)_currentVideoDevice;
- (void)_setInterrupted:(BOOL)arg1;
- (void)_doDidStart;
- (id)_errorForFigRecorderNotification:(id)arg1;
- (void)_doDidStop:(id)arg1;
- (void)_doDidStartSources;
- (void)_handleNotification:(id)arg1 payload:(id)arg2;
- (void)removeConnection:(id)arg1;
- (id)sessionPreset;
- (id)captureOptions;
- (long)_stopRecording;
- (id)_applyOverridesToCaptureOptions:(id)arg1;
- (long)_startRecording;
- (id)outputWithClass:(Class)arg1;
- (id)inputs;
- (BOOL)canAddInput:(id)arg1;
- (void)addInput:(id)arg1;
- (BOOL)canAddOutput:(id)arg1;
- (void)addOutput:(id)arg1;
- (id)outputs;
- (id)description;
- (id)init;
- (void)dealloc;

@end
