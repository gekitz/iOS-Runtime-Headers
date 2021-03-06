/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKPlayer, NSArray;

@interface GKGetGameRecordsRequest : GKDataRequest  {
    NSArray *_games;
    GKPlayer *_player;
}

@property(retain) NSArray * games;
@property(retain) GKPlayer * player;


- (id)games;
- (void)setGames:(id)arg1;
- (void)setPlayer:(id)arg1;
- (id)key;
- (id)request;
- (id)player;
- (void)dealloc;

@end
