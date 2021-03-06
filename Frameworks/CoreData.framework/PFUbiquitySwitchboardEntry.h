/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSURL, NSMutableDictionary, NSString, _PFUbiquityRecordsImporter, _PFUbiquityRecordsExporter;

@interface PFUbiquitySwitchboardEntry : NSObject  {
    _PFUbiquityRecordsImporter *_importer;
    _PFUbiquityRecordsExporter *_exporter;
    NSString *_localPeerID;
    NSURL *_ubiquityRootURL;
    unsigned int _activeStoreCount;
    NSMutableDictionary *_registeredCoordinators;
}

@property(readonly) _PFUbiquityRecordsExporter * exporter;
@property(readonly) _PFUbiquityRecordsImporter * importer;
@property(readonly) NSURL * ubiquityRootURL;
@property(readonly) NSString * localPeerID;
@property unsigned int activeStoreCount;


- (unsigned int)activeStoreCount;
- (void)setActiveStoreCount:(unsigned int)arg1;
- (id)exporter;
- (void)registerPersistentStoreCoordinator:(id)arg1 forPersistentStoreWithName:(id)arg2;
- (void)unregisterPersistentStoreCoordinator:(id)arg1;
- (id)createSetOfPersistentStoreCoordinatorsRegisteredForStoreName:(id)arg1;
- (id)createSetOfActiveStoreNames;
- (id)localPeerID;
- (id)ubiquityRootURL;
- (id)initWithLocalPeerID:(id)arg1 andUbiquityRootLocation:(id)arg2;
- (id)importer;
- (id)description;
- (id)init;
- (void)dealloc;

@end
