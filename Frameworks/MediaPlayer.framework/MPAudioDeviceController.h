/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSDictionary, NSString, NSArray;

@interface MPAudioDeviceController : NSObject <UIAlertViewDelegate> {
    NSString *_category;
    id _delegate;
    BOOL _fakeRouteAvailable;
    NSArray *_pickableRoutes;
    NSDictionary *_pickedRoute;
    BOOL _pickedRouteHasVolumeControl;
    BOOL _pickedRouteHasVolumeControlIsValid;
}

@property BOOL routeDiscoveryEnabled;

+ (BOOL)routeDiscoveryEnabled;
+ (void)setRouteDiscoveryEnabled:(BOOL)arg1;

- (void)_sendFakeRouteChange;
- (BOOL)pickRouteAtIndex:(unsigned int)arg1;
- (BOOL)routeRequiresPasswordAtIndex:(unsigned int)arg1;
- (id)routeDescriptionAtIndex:(unsigned int)arg1;
- (void)restorePickedRoute;
- (BOOL)pickBestDeviceRoute;
- (BOOL)pickHandsetRoute;
- (BOOL)pickSpeakerRoute;
- (unsigned int)numberOfAudioRoutes;
- (BOOL)airtunesRouteIsPicked;
- (BOOL)handsetRouteIsPicked;
- (BOOL)receiverRouteIsPicked;
- (BOOL)speakerRouteIsPicked;
- (BOOL)routeOtherThanHandsetAndSpeakerIsAvailable;
- (void)_mediaServerDied;
- (void)_portStatusDidChangeNotification:(id)arg1;
- (void)_pickableRoutesChangedNotification:(id)arg1;
- (BOOL)routeDiscoveryEnabled;
- (BOOL)_routeIsDisplayPort:(id)arg1;
- (BOOL)_pickRoute:(id)arg1 withPassword:(id)arg2;
- (BOOL)_routeIsHeadphones:(id)arg1;
- (BOOL)_pickRoute:(id)arg1;
- (BOOL)_routeIsWireless:(id)arg1;
- (BOOL)_routeIsReceiver:(id)arg1;
- (id)_pickedRoute;
- (BOOL)_routeIsSpeaker:(id)arg1;
- (BOOL)_routeIsHandset:(id)arg1;
- (id)_pickableRoutes;
- (id)routeNameAtIndex:(unsigned int)arg1 isPicked:(BOOL*)arg2;
- (void)clearCachedRoutes;
- (void)_registerForAVControllerNotifications;
- (BOOL)pickRouteAtIndex:(unsigned int)arg1 withPassword:(id)arg2;
- (int)indexOfPickedRoute;
- (void)determinePickableRoutesWithCompletionHandler:(id)arg1;
- (void)setRouteDiscoveryEnabled:(BOOL)arg1;
- (BOOL)routeOtherThanHandsetIsAvailable;
- (BOOL)wirelessRouteIsPicked;
- (id)routeTypeAtIndex:(unsigned int)arg1;
- (id)pickedRouteDescription;
- (id)nameOfPickedRoute;
- (BOOL)volumeControlIsAvailable;
- (void)setDelegate:(id)arg1;
- (void)setCategory:(id)arg1;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (id)init;
- (void)dealloc;

@end
