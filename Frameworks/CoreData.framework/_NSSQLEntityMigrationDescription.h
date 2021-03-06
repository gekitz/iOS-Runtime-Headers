/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSMutableDictionary, NSSQLEntity, NSMutableArray, NSEntityMapping;

@interface _NSSQLEntityMigrationDescription : NSObject  {
    NSEntityMapping *_entityMapping;
    NSMutableDictionary *_sqlValuesByColumnName;
    NSMutableDictionary *_sourceEntitiesByToOneWithNewEntityKey;
    NSSQLEntity *_dstEntity;
    NSSQLEntity *_srcEntity;
    int _migrationType;
    NSMutableArray *_addedManyToManys;
    NSMutableArray *_removedManyToManys;
    NSMutableArray *_transformedManyToManys;
    NSMutableArray *_processedTransforms;
    NSMutableArray *_pendingTransforms;
}

@property(readonly) int migrationType;
@property(readonly) NSEntityMapping * entityMapping;
@property(readonly) NSSQLEntity * destinationEntity;
@property(readonly) NSSQLEntity * sourceEntity;


- (id)initWithEntityMapping:(id)arg1 sourceEntity:(id)arg2 destinationEntity:(id)arg3;
- (id)sourceEntitiesByToOneWithNewEntityKey;
- (id)sqlValueForColumnName:(id)arg1 migrationContext:(struct _NSSQLMigrationContext { id x1; })arg2;
- (id)addedManyToManys;
- (id)removedManyToManys;
- (id)transformedManyToManys;
- (id)nextPropertyTransform;
- (int)migrationType;
- (void)_populateSQLValuesByPropertyFromTransforms:(id)arg1 migrationContext:(struct _NSSQLMigrationContext { id x1; })arg2;
- (void)_populateSQLValuesForVirtualToOnesWithMigrationContext:(struct _NSSQLMigrationContext { id x1; })arg1;
- (id)entityMapping;
- (void)_populateSQLValuesForDestinationToOne:(id)arg1 fromSourceToOne:(id)arg2;
- (id)_unmappedRelationshipForFormerlyVirtualToOne:(id)arg1 migrationContext:(struct _NSSQLMigrationContext { id x1; })arg2;
- (void)_generateSQLValueMappingsWithMigrationContext:(struct _NSSQLMigrationContext { id x1; })arg1;
- (id)sourceEntity;
- (id)destinationEntity;
- (void)dealloc;

@end
