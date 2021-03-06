/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSSet, NSString, NSData, NSDictionary, PFUbiquityLocation, NSURL;

@interface PFUbiquityStoreMetadata : NSManagedObject  {
}

@property(retain) NSDictionary * storeOptions;
@property(readonly) NSURL * ubiquityRootURL;
@property(readonly) PFUbiquityLocation * ubiquityRootLocation;
@property(retain) NSSet * peerStates;
@property(retain) NSSet * transactionEntries;
@property(retain) NSString * modelVersionHashString;
@property(retain) NSString * ubiquityRelativePath;
@property(retain) NSString * storeIdentifier;
@property(retain) NSString * ubiquityRootURLString;
@property(retain) NSString * storeType;
@property(retain) NSString * ubiquityName;
@property(retain) NSString * storeURLString;
@property(retain) NSData * storeOptionsBinaryPlistData;

+ (id)baselineStoreURLForUbiquityName:(id)arg1 andUbiquityLogURL:(id)arg2;
+ (id)baselineModelURLForUbiquityName:(id)arg1 andUbiquityLogURL:(id)arg2;
+ (id)baselineGCModelURLForUbiquityName:(id)arg1 andUbiquityLogURL:(id)arg2;
+ (id)baselineMetaFileURLForUbiquityName:(id)arg1 andUbiquityLogURL:(id)arg2;
+ (BOOL)isBaselineRootURL:(id)arg1;
+ (id)baselineRootDirectoryForUbiquityName:(id)arg1 andUbiquityLogURL:(id)arg2;
+ (id)allStoreMetadataInManagedObjectContext:(id)arg1;
+ (id)metadataForStoreWithName:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)addMetadataForPersistentStore:(id)arg1 withLocalPeerID:(id)arg2 inManagedObjectContext:(id)arg3;

- (void)loadFromBaselineMetadata:(id)arg1 withLocalPeerID:(id)arg2;
- (id)createPeerStatesDictionaryForBaseline;
- (id)createPeerRangesForBaselineWithLocalPeerID:(id)arg1;
- (id)peerStoreURLForPeerIdentifier:(id)arg1;
- (id)peerStateForPeerID:(id)arg1;
- (id)storeOptions;
- (id)peerURLForPeerIdentifier:(id)arg1;
- (id)ubiquityRootLocation;
- (id)ubiquityRootURL;
- (id)initWithUbiquityName:(id)arg1 andUbiquityRootLocation:(id)arg2 insertIntoManagedObjectContext:(id)arg3;
- (void)setStoreOptions:(id)arg1;
- (void)updateWithStore:(id)arg1;

@end
