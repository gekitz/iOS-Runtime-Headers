/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSNumber, NSSQLEntity, NSMutableArray, NSMutableDictionary;

@interface _NSSQLTableMigrationDescription : NSObject  {
    NSSQLEntity *_rootEntity;
    NSSQLEntity *_sourceRootEntity;
    int _migrationType;
    NSMutableArray *_addedEntityMigrations;
    NSMutableArray *_removedEntityMigrations;
    NSMutableArray *_copiedEntityMigrations;
    NSMutableArray *_transformedEntityMigrations;
    NSMutableDictionary *_migrationByEntity;
    NSMutableArray *_addedManyToManys;
    NSMutableArray *_removedManyToManys;
    NSMutableArray *_transformedManyToManys;
    NSMutableDictionary *_tempTableNames;
    NSNumber *_hasTransformedTableSchema;
}

@property(readonly) NSSQLEntity * rootEntity;
@property(readonly) int migrationType;


- (id)initWithRootEntity:(id)arg1 migrationType:(int)arg2;
- (void)addEntityMigrationDescription:(id)arg1;
- (void)appendStatementsToPrepareForMigration:(id)arg1 migrationContext:(struct _NSSQLMigrationContext { id x1; })arg2;
- (void)appendStatementsToPerformMigration:(id)arg1 migrationContext:(struct _NSSQLMigrationContext { id x1; })arg2;
- (void)appendStatementsToCompleteMigration:(id)arg1 migrationContext:(struct _NSSQLMigrationContext { id x1; })arg2;
- (id)_sourceRootEntity;
- (BOOL)_hasTransformedTableSchema;
- (id)_tempNameForTableName:(id)arg1;
- (id)createInsertStatementForEntityMigration:(id)arg1 migrationContext:(struct _NSSQLMigrationContext { id x1; })arg2;
- (id)createFEKUpdateStatementsForEntityMigration:(id)arg1 migrationContext:(struct _NSSQLMigrationContext { id x1; })arg2;
- (id)createUpdateStatementForEntityMigration:(id)arg1 migrationContext:(struct _NSSQLMigrationContext { id x1; })arg2;
- (id)newCopyAndInsertStatementForToOne:(id)arg1 toManyToMany:(id)arg2 fromTableName:(id)arg3 invertColumns:(BOOL)arg4 migrationContext:(struct _NSSQLMigrationContext { id x1; })arg5;
- (id)_retainedRemovedSubEntitiesOfEntity:(id)arg1;
- (id)_transformedManyToManys;
- (id)_removedManyToManys;
- (id)_addedManyToManys;
- (int)migrationType;
- (id)rootEntity;
- (void)dealloc;

@end
