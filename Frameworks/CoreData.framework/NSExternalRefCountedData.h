/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSExternalRefCountedData : NSObject  {
    int _cd_rc;
    int _externalReferenceCount;
    struct _externalRefFlags_st { 
        unsigned int _invalidToOnes : 1; 
        unsigned int _hasTemporaryID : 1; 
        unsigned int _backgroundDealloc : 1; 
        unsigned int _reservedFlags : 1; 
        unsigned int _virtualfk_count : 14; 
        unsigned int _ordkey_count : 14; 
    } _externalRefFlags;
    id _toManyMap;
    double _birth;
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (void)incrementRefCount;
- (int)decrementRefCount;
- (int)externalReferenceCount;
- (void)incrementExternalReferenceCount:(int)arg1;
- (unsigned int)optionsForKey:(id)arg1;
- (id)relatedIDsForKey:(id)arg1;
- (double)timestampForKey:(id)arg1;
- (void)setRelatedIDs:(id)arg1 forKey:(id)arg2 options:(unsigned int)arg3 andTimestamp:(double)arg4;
- (id)relationshipCaches;
- (id)initWithOptions:(unsigned int)arg1 andTimestamp:(double)arg2;
- (void)setRelationshipCaches:(id)arg1;
- (unsigned int)options;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (double)timestamp;
- (void)setTimestamp:(double)arg1;
- (unsigned int)retainCount;
- (id)retain;
- (void)release;
- (void)dealloc;

@end
