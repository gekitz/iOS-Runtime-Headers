/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSURL;

@interface GKLoadImageRequest : GKDataRequest  {
    NSURL *_url;
}

@property(retain) NSURL * url;


- (BOOL)authenticationRequired;
- (id)header;
- (id)demarshalResponseData:(id)arg1;
- (id)key;
- (void)setUrl:(id)arg1;
- (id)url;
- (id)request;
- (void)dealloc;

@end
