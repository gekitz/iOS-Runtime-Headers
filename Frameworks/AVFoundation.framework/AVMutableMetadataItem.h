/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVMutableMetadataItemInternal, NSString, <NSObject><NSCopying>, NSLocale, NSDictionary;

@interface AVMutableMetadataItem : AVMetadataItem  {
    AVMutableMetadataItemInternal *_mutablePriv;
}

@property(copy) <NSObject><NSCopying> * key;
@property(copy) NSString * keySpace;
@property(copy) NSLocale * locale;
@property struct { long long value; int timescale; unsigned int flags; long long epoch; } time;
@property struct { long long value; int timescale; unsigned int flags; long long epoch; } duration;
@property(copy) <NSObject><NSCopying> * value;
@property(copy) NSDictionary * extraAttributes;

+ (id)metadataItem;

- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (void)setDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setKey:(id)arg1;
- (id)key;
- (id)locale;
- (void)setLocale:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })time;
- (void)setTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)value;
- (void)setValue:(id)arg1;
- (id)keySpace;
- (void)setKeySpace:(id)arg1;
- (void)setExtraAttributes:(id)arg1;
- (id)extraAttributes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
