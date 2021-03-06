/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSSQLForeignKey;

@interface NSSQLForeignEntityKey : NSSQLColumn  {
    NSSQLForeignKey *_foreignKey;
}


- (id)initForReadOnlyFetchingOfEntity:(id)arg1 toOneRelationship:(id)arg2;
- (void)setFKForReadOnlyFetch:(id)arg1;
- (id)initWithEntity:(id)arg1 foreignKey:(id)arg2;
- (id)toOneRelationship;
- (id)initWithEntity:(id)arg1 propertyDescription:(id)arg2;
- (id)foreignKey;
- (void)dealloc;

@end
