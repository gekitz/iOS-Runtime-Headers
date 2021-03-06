/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSEntityDescription;

@interface NSTemporaryObjectID : NSManagedObjectID  {
    int _cd_rc;
    int _counter;
    NSEntityDescription *_entity;
}

+ (Class)classForStore:(id)arg1;
+ (unsigned int)allocateBatch:(id*)arg1 forEntity:(id)arg2 count:(unsigned int)arg3;
+ (id)initWithEntity:(id)arg1;
+ (void)_storeDeallocated;
+ (id)_retain_1;
+ (void)_release_1;
+ (id)initWithEntity:(id)arg1 andUUIDString:(id)arg2;
+ (void)setObjectStoreIdentifier:(id)arg1;
+ (BOOL)accessInstanceVariablesDirectly;
+ (int)version;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (void)initialize;
+ (id)retain;
+ (id)alloc;
+ (void)release;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (void)finalize;
- (id)initWithEntity:(id)arg1;
- (BOOL)_isPersistentStoreAlive;
- (id)URIRepresentation;
- (id)initWithEntity:(id)arg1 andUUIDString:(id)arg2;
- (void)_setPersistentStore:(id)arg1;
- (id)_storeIdentifier;
- (id)_referenceData;
- (id)_retainedURIString;
- (id)entity;
- (id)persistentStore;
- (BOOL)isTemporaryID;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (unsigned int)retainCount;
- (id)retain;
- (void)release;
- (void)dealloc;

@end
