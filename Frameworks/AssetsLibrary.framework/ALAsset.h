/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AssetsLibrary.framework/AssetsLibrary
 */

@class ALAsset, ALAssetPrivate;

@interface ALAsset : NSObject  {
    id _internal;
}

@property(readonly) ALAsset * originalAsset;
@property(getter=isEditable,readonly) BOOL editable;
@property(retain) ALAssetPrivate * internal;


- (id)internal;
- (void)setInternal:(id)arg1;
- (id)defaultRepresentation;
- (id)valueForProperty:(id)arg1;
- (BOOL)isEditable;
- (BOOL)isValid;
- (void)setVideoAtPath:(id)arg1 completionBlock:(id)arg2;
- (void)setImageData:(id)arg1 metadata:(id)arg2 completionBlock:(id)arg3;
- (void)writeModifiedVideoAtPathToSavedPhotosAlbum:(id)arg1 completionBlock:(id)arg2;
- (void)writeModifiedImageDataToSavedPhotosAlbum:(id)arg1 metadata:(id)arg2 completionBlock:(id)arg3;
- (struct CGImage { }*)aspectRatioThumbnail;
- (id)representationForUTI:(id)arg1;
- (id)_typeAsString;
- (id)initWithManagedAsset:(id)arg1 library:(id)arg2;
- (id)originalAsset;
- (id)_uuid;
- (id)description;
- (void)dealloc;
- (struct CGImage { }*)thumbnail;

@end
