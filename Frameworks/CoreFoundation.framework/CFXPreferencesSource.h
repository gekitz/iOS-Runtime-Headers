/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface CFXPreferencesSource : NSObject  {
    struct __CFDictionary { } *_dict;
    long _generationCount;
    BOOL _disabled;
}


- (unsigned char)synchronize;
- (void)finalize;
- (void)setValue:(void*)arg1 forKey:(struct __CFString { }*)arg2;
- (long)generationCount;
- (void)setDisabled:(BOOL)arg1;
- (struct __CFDictionary { }*)copyDictionary;
- (struct __CFArray { }*)copyKeyList;
- (void*)getValueForKey:(struct __CFString { }*)arg1;
- (id)init;
- (void)dealloc;

@end
