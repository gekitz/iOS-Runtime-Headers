/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKPlayer, GKGame;

@interface GKGetLastScoreTimeScopeRequest : GKDataRequest  {
    GKGame *_game;
    GKPlayer *_player;
    int _timeScope;
}

@property(retain) GKGame * game;
@property(retain) GKPlayer * player;
@property(readonly) int timeScope;


- (void)handleResponseFromServer:(id)arg1;
- (id)game;
- (void)setGame:(id)arg1;
- (int)timeScope;
- (void)setPlayer:(id)arg1;
- (id)key;
- (id)request;
- (id)player;
- (void)dealloc;

@end
