/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Twitter.framework/Twitter
 */

@class NSCache, TWSessionInternal, NSLock, NSMutableArray;

@interface TWSession : NSObject <XPCProxyTarget> {
    TWSessionInternal *_internal;
    id _locationInformationChangedBlock;
    id _connectionResetBlock;
    NSCache *_profileImageCache;
    NSLock *_inFlightSessionCallInfosLock;
    NSMutableArray *_inFlightSessionCallInfos;
}

@property(copy) id connectionResetBlock;
@property(copy) id locationInformationChangedBlock;


- (void)setClientInfo:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)setConnectionResetBlock:(id)arg1;
- (id)connectionResetBlock;
- (void)setLocationInformationChangedBlock:(id)arg1;
- (id)locationInformationChangedBlock;
- (void)showTwitterSettingsIfNeeded;
- (void)setPermission:(int)arg1 forBundleIdentifier:(id)arg2;
- (void)acceptLocationUpdate:(id)arg1;
- (void)sendStatus:(id)arg1 completion:(id)arg2;
- (void)fetchGeotagStatus:(id)arg1;
- (void)setOverrideGeotagInfo:(id)arg1;
- (void)setGeotagStatus:(int)arg1;
- (void)fetchRelationshipWithScreenName:(id)arg1 completion:(id)arg2;
- (void)fetchCurrentImageLimits:(id)arg1;
- (void)fetchCurrentTCoLength:(id)arg1;
- (void)recordsMatchingPrefixString:(id)arg1 completion:(id)arg2;
- (void)fetchProfileImageDataForScreenName:(id)arg1 completion:(id)arg2;
- (void)fetchRecordForScreenName:(id)arg1 completion:(id)arg2;
- (void)fetchSessionInfo:(id)arg1;
- (void)setActiveAccountIdentifier:(id)arg1;
- (void)fetchPermissionForBundleIdentifier:(id)arg1 completion:(id)arg2;
- (void)fetchKnownBundleIdentifiers:(id)arg1;
- (void)recordAndIssueCallInfo:(id)arg1;
- (void)fetchPermission:(id)arg1;
- (void)completedRemoteProxyCall:(id)arg1;
- (id)emptyCallInfo;
- (id)currentSessionProxy;
- (void)buildTwitterdSession;
- (void)noteTwitterdSessionProxyInterrupted;
- (void)tearDownTwitterdSession;
- (id)proxy:(id)arg1 detailedSignatureForSelector:(SEL)arg2;

@end
