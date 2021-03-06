/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSDate, NSString;

@interface GKTurnBasedParticipantInternal : GKInternalRepresentation  {
    NSString *_sessionID;
    NSDate *_lastTurnDate;
    NSString *_playerID;
    NSString *_invitedBy;
    NSString *_inviteMessage;
    NSString *_status;
    int _matchOutcome;
    int _order;
}

@property(retain) NSString * sessionID;
@property(retain) NSDate * lastTurnDate;
@property(retain) NSString * playerID;
@property(retain) NSString * invitedBy;
@property(retain) NSString * inviteMessage;
@property(retain) NSString * status;
@property int matchOutcome;
@property int order;

+ (id)codedPropertyKeys;

- (void)setOrder:(int)arg1;
- (void)setInvitedBy:(id)arg1;
- (void)setLastTurnDate:(id)arg1;
- (void)setMatchOutcome:(int)arg1;
- (int)order;
- (int)matchOutcome;
- (id)invitedBy;
- (id)lastTurnDate;
- (id)inviteMessage;
- (void)setInviteMessage:(id)arg1;
- (void)setStatus:(id)arg1;
- (id)playerID;
- (void)setPlayerID:(id)arg1;
- (id)status;
- (id)sessionID;
- (void)setSessionID:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;

@end
