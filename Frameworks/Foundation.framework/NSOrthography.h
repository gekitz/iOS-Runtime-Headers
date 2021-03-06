/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSString, NSDictionary;

@interface NSOrthography : NSObject <NSCopying, NSCoding> {
}

@property(readonly) NSString * dominantScript;
@property(readonly) NSDictionary * languageMap;

+ (id)orthographyWithDominantScript:(id)arg1 languageMap:(id)arg2;
+ (void)initialize;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (id)allLanguages;
- (id)dominantLanguageForScript:(id)arg1;
- (id)languagesForScript:(id)arg1;
- (id)allScripts;
- (id)dominantLanguage;
- (id)languageMap;
- (id)dominantScript;
- (unsigned int)orthographyFlags;
- (id)initWithDominantScript:(id)arg1 languageMap:(id)arg2;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)replacementObjectForPortCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
