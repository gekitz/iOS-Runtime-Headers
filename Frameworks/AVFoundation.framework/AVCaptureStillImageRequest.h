/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface AVCaptureStillImageRequest : NSObject <NSCopying> {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _sbufCompletionBlock;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _iosurfaceCompletionBlock;

    int _stillImageOrientation;
    BOOL _stillImageMirrored;
    struct CGSize { 
        float width; 
        float height; 
    } _previewImageSize;
    unsigned int _imageDataFormatType;
    BOOL _isHDRImage;
    BOOL _isEV0Image;
    BOOL _chromaNoiseReductionEnabled;
    BOOL _suspendsVideoProcessing;
}

@property BOOL suspendsVideoProcessing;
@property BOOL chromaNoiseReductionEnabled;
@property BOOL isEV0Image;
@property BOOL isHDRImage;
@property(copy) id iosurfaceCompletionBlock;
@property(copy) id sbufCompletionBlock;
@property int stillImageOrientation;
@property(getter=isStillImageMirrored) BOOL stillImageMirrored;
@property unsigned int imageDataFormatType;
@property struct CGSize { float width; float height; } previewImageSize;

+ (id)request;

- (void)setPreviewImageSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setImageDataFormatType:(unsigned long)arg1;
- (void)setStillImageMirrored:(BOOL)arg1;
- (void)setStillImageOrientation:(int)arg1;
- (void)setSbufCompletionBlock:(id)arg1;
- (void)setIosurfaceCompletionBlock:(id)arg1;
- (void)setIsHDRImage:(BOOL)arg1;
- (void)setIsEV0Image:(BOOL)arg1;
- (void)setChromaNoiseReductionEnabled:(BOOL)arg1;
- (void)setSuspendsVideoProcessing:(BOOL)arg1;
- (struct CGSize { float x1; float x2; })previewImageSize;
- (unsigned long)imageDataFormatType;
- (BOOL)isStillImageMirrored;
- (int)stillImageOrientation;
- (id)sbufCompletionBlock;
- (id)iosurfaceCompletionBlock;
- (BOOL)isHDRImage;
- (BOOL)isEV0Image;
- (BOOL)chromaNoiseReductionEnabled;
- (BOOL)suspendsVideoProcessing;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;

@end
