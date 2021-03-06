/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class SSItemLookupRequest, NSArray;

@interface GKLoadStoreItemContext : NSObject <SSItemLookupRequestDelegate> {
    NSArray *_games;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionHandler;

    SSItemLookupRequest *_request;
}

@property(copy) NSArray * games;
@property(copy) id completionHandler;
@property(retain) SSItemLookupRequest * request;


- (void)itemLookupRequest:(id)arg1 didFindItems:(id)arg2;
- (id)games;
- (void)setGames:(id)arg1;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)setRequest:(id)arg1;
- (void)start;
- (void)setCompletionHandler:(id)arg1;
- (id)completionHandler;
- (id)request;
- (void)cancel;
- (void)dealloc;

@end
