/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSDictionary;

@interface PFUbiquityMergeConflict : NSMergeConflict  {
    NSDictionary *_ancestorSnapshot;
}

@property(retain) NSDictionary * ancestorSnapshot;


- (void)setAncestorSnapshot:(id)arg1;
- (id)initWithSource:(id)arg1 newVersion:(unsigned int)arg2 oldVersion:(unsigned int)arg3 cachedSnapshot:(id)arg4 persistedSnapshot:(id)arg5;
- (id)ancestorSnapshot;
- (void)dealloc;

@end
