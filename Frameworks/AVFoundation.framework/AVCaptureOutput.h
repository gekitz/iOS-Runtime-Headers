/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVCaptureOutputInternal, NSArray;

@interface AVCaptureOutput : NSObject  {
    AVCaptureOutputInternal *_outputInternal;
}

@property(readonly) NSArray * connections;


- (id)connections;
- (BOOL)canAddConnectionForMediaType:(id)arg1;
- (id)connectionWithMediaType:(id)arg1;
- (id)addConnection:(id)arg1 error:(id*)arg2;
- (void)removeConnection:(id)arg1;
- (id)firstEnabledConnectionForMediaType:(id)arg1;
- (void)handleNotification:(id)arg1 payload:(id)arg2;
- (int)changeSeed;
- (void)bumpChangeSeed;
- (id)notReadyError;
- (void)handleEnabledChangedForConnection:(id)arg1;
- (void)didStopForSession:(id)arg1 error:(id)arg2;
- (void)didStartForSession:(id)arg1;
- (id)liveConnections;
- (id)session;
- (void)setSession:(id)arg1;
- (id)_applyOverridesToCaptureOptions:(id)arg1;
- (id)init;
- (void)dealloc;

@end
