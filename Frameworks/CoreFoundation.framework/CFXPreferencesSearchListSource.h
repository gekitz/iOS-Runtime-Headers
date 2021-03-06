/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface CFXPreferencesSearchListSource : CFXPreferencesSource  {
    struct __CFArray { } *_sourceList;
}


- (unsigned char)synchronize;
- (void)setValue:(void*)arg1 forKey:(struct __CFString { }*)arg2;
- (long)generationCount;
- (void)removeSource:(id)arg1;
- (void)addSource:(id)arg1;
- (void)synchronizeInBackgroundWithCompletionBlock:(id)arg1;
- (void)_removeValueForKey:(struct __CFString { }*)arg1;
- (struct __CFDictionary { }*)copyDictionary;
- (struct __CFArray { }*)copyKeyList;
- (void*)getValueForKey:(struct __CFString { }*)arg1;
- (id)init;
- (void)dealloc;

@end
