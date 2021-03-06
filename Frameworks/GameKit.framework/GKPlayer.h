/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSArray, NSString, GKGame, NSDate, GKPlayerInternal;

@interface GKPlayer : NSObject  {
    GKPlayerInternal *_internal;
    int _inviteStatus;
    NSArray *_friends;
    GKGame *_lastPlayedGame;
}

@property(retain) NSString * playerID;
@property(copy) NSString * alias;
@property(readonly) BOOL isFriend;
@property(retain) GKPlayerInternal * internal;
@property(readonly) unsigned int detailPieces;
@property(copy) NSString * status;
@property(readonly) NSString * firstName;
@property(readonly) NSString * lastName;
@property(readonly) NSString * email;
@property(readonly) NSArray * emails;
@property(readonly) NSDate * lastSeenDate;
@property(readonly) NSDate * lastPlayedDate;
@property(retain) GKGame * lastPlayedGame;
@property(readonly) NSString * cacheKey;
@property int inviteStatus;
@property(readonly) BOOL hasPhoto;
@property(readonly) unsigned int validPieces;
@property unsigned int numberOfFriends;
@property(readonly) struct { int x1; int x2; int x3; int x4; int x5; int x6; } stats;
@property(retain) NSArray * friends;

+ (void)loadPlayersForIdentifiers:(id)arg1 withCompletionHandler:(id)arg2;
+ (id)sharedCache;
+ (id)photoKeyForSize:(int)arg1;
+ (id)anonymousPlayer;
+ (id)unknownPlayer;
+ (void)loadPlayersForIdentifiers:(id)arg1 withPieces:(unsigned int)arg2 withCompletionHandler:(id)arg3;

- (id)friends;
- (void)setInviteStatus:(int)arg1;
- (int)inviteStatus;
- (id)sortName;
- (id)attributedDisplayName;
- (void)sendFriendRequestWithMessage:(id)arg1 withCompletionHandler:(id)arg2;
- (void)photoCountWithCompletionHandler:(id)arg1;
- (BOOL)hasPhoto;
- (void)loadProfilePieces:(unsigned int)arg1 withCompletionHandler:(id)arg2;
- (void)loadGamesPlayedDetailsWithCompletionHandler:(id)arg1;
- (void)loadGamesPlayed:(id)arg1;
- (void)loadRecentMatchesForGame:(id)arg1 block:(id)arg2;
- (void)loadFriendsAsPlayersWithCompletionHandler:(id)arg1;
- (void)loadFriendIDsWithCompletionHandler:(id)arg1;
- (void)declineFriendRequest:(id)arg1;
- (void)acceptFriendRequestForHandle:(id)arg1 withCompletionHandler:(id)arg2;
- (void)updateNamesFromAddressBook;
- (BOOL)isUnknownPlayer;
- (BOOL)isAnonymousPlayer;
- (void)loadPhotoForSize:(int)arg1 withCompletionHandler:(id)arg2;
- (id)emails;
- (id)email;
- (unsigned int)detailPieces;
- (struct { int x1; int x2; int x3; int x4; int x5; int x6; })stats;
- (id)displayNameWithIdentifiableName:(BOOL)arg1 quoteAlias:(BOOL)arg2;
- (id)attributedDisplayNameWithIdentifiableName:(BOOL)arg1;
- (id)quotedAlias:(id)arg1 withFont:(id)arg2 foreColor:(id)arg3 shadowColor:(id)arg4;
- (id)attributedIdentifiableName:(id)arg1 withFont:(id)arg2 foreColor:(id)arg3 shadowColor:(id)arg4;
- (id)identifiableNameIncludingSurname:(BOOL)arg1;
- (void)loadGamesPlayedIncludingInstalledGames:(BOOL)arg1 completionHandler:(id)arg2;
- (BOOL)isLocalPlayer;
- (void)loadCommonFriends:(BOOL)arg1 profilePieces:(unsigned int)arg2 asPlayersWithCompletionHandler:(id)arg3;
- (void)setFriends:(id)arg1;
- (void)postChangeNotification;
- (void)_postChangeNotification;
- (id)photoURLForSize:(int)arg1;
- (BOOL)isFriend;
- (void)setLastPlayedGame:(id)arg1;
- (id)lastPlayedGame;
- (id)internal;
- (id)initWithInternalRepresentation:(id)arg1;
- (void)setInternal:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (id)displayName;
- (id)cacheKey;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)description;
- (id)init;
- (void)dealloc;

@end
