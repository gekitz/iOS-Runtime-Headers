/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADColor;

@interface OADSolidFill : OADFill  {
    OADColor *mColor;
    BOOL mIsColorOverridden;
}

+ (id)whiteFill;
+ (id)defaultProperties;
+ (id)blackFill;

- (void)setStyleColor:(id)arg1;
- (BOOL)isColorOverridden;
- (id)initWithDefaults;
- (id)color;
- (void)setColor:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;

@end
