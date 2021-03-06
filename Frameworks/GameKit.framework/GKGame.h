/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKLoadStoreItemContext, NSNumber, NSString, SSItem, NSDictionary, GKGameInternal;

@interface GKGame : NSObject  {
    GKGameInternal *_internal;
    SSItem *_storeItem;
    BOOL _sandboxed;
    GKLoadStoreItemContext *_storeItemLoadContext;
}

@property(getter=isInstalled,readonly) BOOL installed;
@property(getter=isDownloading,readonly) BOOL downloading;
@property(retain) GKGameInternal * internal;
@property(getter=isPrerendered) BOOL prerendered;
@property(getter=isSandboxed) BOOL sandboxed;
@property(readonly) NSDictionary * gameDescriptor;
@property(readonly) NSNumber * adamID;
@property(readonly) NSNumber * externalVersion;
@property(readonly) NSString * bundleIdentifier;
@property(readonly) NSString * bundleVersion;
@property(readonly) NSString * cacheKey;
@property(readonly) NSString * name;
@property(readonly) NSString * defaultCategory;
@property(retain) SSItem * storeItem;
@property(readonly) struct GKGameInfo { BOOL x1; BOOL x2; BOOL x3; BOOL x4; unsigned int x5; unsigned int x6; unsigned int x7; } gameInfo;
@property(retain) GKLoadStoreItemContext * storeItemLoadContext;

+ (void)removeHistoryForGameWithBundleIdentifier:(id)arg1 completionHandler:(id)arg2;
+ (id)defaultGameIconWithStyle:(int)arg1;
+ (void)loadStoreItemsForGames:(id)arg1 withCompletionHandler:(id)arg2;
+ (void)updateGames:(id)arg1 withCompletionHandler:(id)arg2;
+ (BOOL)isGameCenter;
+ (id)currentGame;

- (BOOL)isDownloading;
- (BOOL)isInstalled;
- (void)setSandboxed:(BOOL)arg1;
- (BOOL)isSandboxed;
- (void)setStoreItem:(id)arg1;
- (void)loadRecentFriendPlayersWithCompletionHandler:(id)arg1;
- (void)loadStoreItemWithCompletionHandler:(id)arg1;
- (void)loadIconForStyle:(int)arg1 withCompletionHandler:(id)arg2;
- (id)cachedIconForStyle:(int)arg1;
- (id)loadAndRenderIconForStyle:(int)arg1 withImageBrush:(id)arg2 completionHandler:(id)arg3;
- (id)storeItemLoadContext;
- (void)setStoreItemLoadContext:(id)arg1;
- (id)storeItem;
- (id)imageSourceForIconStyle:(int)arg1;
- (id)_imageURLForIconStyle:(int)arg1;
- (id)gameDescriptor;
- (struct GKGameInfo { BOOL x1; BOOL x2; BOOL x3; BOOL x4; unsigned int x5; unsigned int x6; unsigned int x7; })gameInfo;
- (id)internal;
- (id)initWithInternalRepresentation:(id)arg1;
- (void)setInternal:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (id)cacheKey;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)dealloc;

@end
