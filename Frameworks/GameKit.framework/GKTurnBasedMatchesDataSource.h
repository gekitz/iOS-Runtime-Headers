/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSMutableDictionary, GKTurnBasedMatchesSection, NSMutableArray, GKGameDetailHeaderSection;

@interface GKTurnBasedMatchesDataSource : GKSectionArrayDataSource  {
    GKGameDetailHeaderSection *_headerSection;
    GKTurnBasedMatchesSection *_invitationSection;
    GKTurnBasedMatchesSection *_yourTurnSection;
    GKTurnBasedMatchesSection *_otherTurnSection;
    GKTurnBasedMatchesSection *_finishedSection;
    NSMutableArray *_matchIDs;
    NSMutableDictionary *_players;
}

@property(retain) GKGameDetailHeaderSection * headerSection;
@property(retain) GKTurnBasedMatchesSection * invitationSection;
@property(retain) GKTurnBasedMatchesSection * yourTurnSection;
@property(retain) GKTurnBasedMatchesSection * otherTurnSection;
@property(retain) GKTurnBasedMatchesSection * finishedSection;
@property(retain) NSMutableArray * matchIDs;
@property(retain) NSMutableDictionary * players;
@property(readonly) int loadedMatchCount;


- (void)setFinishedSection:(id)arg1;
- (id)finishedSection;
- (void)setOtherTurnSection:(id)arg1;
- (id)otherTurnSection;
- (void)setYourTurnSection:(id)arg1;
- (id)yourTurnSection;
- (void)setInvitationSection:(id)arg1;
- (id)invitationSection;
- (void)setHeaderSection:(id)arg1;
- (id)headerSection;
- (void)loadMatchDetailsWithCompletionHandler:(id)arg1;
- (int)loadedMatchCount;
- (void)matchIDsLoaded:(id)arg1;
- (void)matchesLoaded:(id)arg1 withCompletionHandler:(id)arg2;
- (void)loadPlayersForMatches:(id)arg1 withCompletionHandler:(id)arg2;
- (id)matchIDs;
- (void)setMatchIDs:(id)arg1;
- (void)tableView:(id)arg1 updateStatusViewAfterLoading:(id)arg2 withError:(id)arg3;
- (void)tableView:(id)arg1 updateStatusViewBeforeLoading:(id)arg2;
- (void)refreshDataWithCompletionHandlerAndError:(id)arg1;
- (void)setPlayers:(id)arg1;
- (id)players;
- (id)description;
- (id)init;
- (void)dealloc;

@end
