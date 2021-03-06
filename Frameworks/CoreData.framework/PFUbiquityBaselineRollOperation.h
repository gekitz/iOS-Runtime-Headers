/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSManagedObjectModel, NSString, PFUbiquityLocation;

@interface PFUbiquityBaselineRollOperation : NSOperation  {
    NSString *_localPeerID;
    NSString *_storeName;
    NSManagedObjectModel *_model;
    PFUbiquityLocation *_ubiquityRootLocation;
}

@property(readonly) NSManagedObjectModel * model;
@property(readonly) PFUbiquityLocation * ubiquityRootLocation;
@property(readonly) NSString * storeName;
@property(readonly) NSString * localPeerID;


- (id)initWithStore:(id)arg1 andLocalPeerID:(id)arg2;
- (id)localPeerID;
- (id)storeName;
- (id)ubiquityRootLocation;
- (id)model;
- (BOOL)isEqual:(id)arg1;
- (void)main;
- (void)dealloc;

@end
