/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSDictionary;

@interface GKSetupAccountRequest : GKDataRequest  {
    NSDictionary *_parameters;
}

@property(retain) NSDictionary * parameters;


- (void)setParameters:(id)arg1;
- (id)parameters;
- (BOOL)authenticationRequired;
- (BOOL)shouldProcessInBackground;
- (id)key;
- (id)request;
- (void)dealloc;

@end
