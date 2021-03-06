/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSString, NSDictionary;

@interface PFUbiquityBaselineMetadata : NSObject <NSCoding> {
    NSString *_storeName;
    NSString *_authorPeerID;
    NSString *_modelVersionHash;
    NSDictionary *_peerStates;
    NSDictionary *_peerRanges;
}

@property(readonly) NSDictionary * peerRanges;
@property(readonly) NSDictionary * peerStates;
@property(readonly) NSString * modelVersionHash;
@property(readonly) NSString * authorPeerID;
@property(readonly) NSString * storeName;


- (void)_migrateToModelVersionHash:(id)arg1;
- (id)authorPeerID;
- (id)initWithStoreMetadata:(id)arg1 forLocalPeerID:(id)arg2;
- (id)peerRanges;
- (id)modelVersionHash;
- (id)storeName;
- (id)peerStates;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)init;
- (void)dealloc;

@end
