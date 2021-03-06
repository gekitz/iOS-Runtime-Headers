/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPPlaceholderArtwork : NSObject  {
}

+ (id)noArtPlaceholderImageForMediaType:(int)arg1 withFormat:(unsigned int)arg2;
+ (id)noArtPlaceholderImageForMediaType:(int)arg1;
+ (id)scaledNoArtPlaceholderMusicImageWithFormat:(unsigned int)arg1;
+ (id)scaledNoArtPlaceholderVideoImageWithFormat:(unsigned int)arg1;
+ (id)scaledNoArtPlaceholderAudioBookImageWithFormat:(unsigned int)arg1;
+ (id)scaledNoArtPlaceholderPodcastImageWithFormat:(unsigned int)arg1;
+ (struct CGSize { float x1; float x2; })unscaledArtworkSizeForFormatID:(unsigned int)arg1;
+ (id)wildcatNoArtPlaceholderMusicImage;
+ (id)wildcatNoArtPlaceholderVideoImage;
+ (id)wildcatNoArtPlaceholderAudioBookImage;
+ (id)wildcatNoArtPlaceholderPodcastImage;
+ (id)wildcatNoArtPlaceholderImageForMediaType:(int)arg1;
+ (id)noArtPlaceholderVideoImage;
+ (id)noArtPlaceholderAudioBookImage;
+ (id)noArtPlaceholderPodcastImage;
+ (id)scaleImage:(id)arg1 withFormat:(unsigned int)arg2;
+ (id)noArtPlaceholderMusicImage;
+ (unsigned int)currentScreenFormatIDFrom1XFormatID:(unsigned int)arg1;

- (BOOL)isPlaceholder:(id)arg1;

@end
