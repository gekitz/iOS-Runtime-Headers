/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPMusicPlayerControllerServerInternal, MPAVController;

@interface MPMusicPlayerControllerServer : NSObject  {
    MPMusicPlayerControllerServerInternal *_internal;
}

@property(readonly) MPAVController * player;

+ (BOOL)isMusicPlayerControllerServerRunning;
+ (void)startMusicPlayerControllerServerWithDelegate:(id)arg1;
+ (void)initialize;
+ (id)sharedInstance;

- (void)_runMigServer;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)player;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end
