/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSString;

@interface MPAlternateTrack : NSObject  {
    int _trackID;
    NSString *_languageCode;
    NSString *_name;
}

+ (id)threeCharCodesForEncodedISO639_2_T:(id)arg1;
+ (id)copyOffTrack;

- (id)initWithTrackID:(id)arg1 languageCode:(id)arg2 name:(id)arg3;
- (id)humanReadableLanguage;
- (int)compare:(id)arg1;
- (id)name;
- (id)languageCode;
- (int)trackID;
- (void)setName:(id)arg1;
- (id)description;
- (void)dealloc;

@end
