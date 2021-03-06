/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AppStoreUI.framework/AppStoreUI
 */

@class SUStructuredPage, ASUpdatePageView;

@interface ASUpdatePageViewController : SUViewController <ISURLOperationDelegate> {
    SUStructuredPage *_page;
    ASUpdatePageView *_pageView;
}


- (void)viewDidAppear:(BOOL)arg1;
- (void)loadView;
- (id)_applicationIcon;
- (id)_newApplicationIconOperationForItemImage:(id)arg1;
- (id)_activeItem;
- (id)_applicationIconURL;
- (void)_updatePageView;
- (id)_itemArtworkImage;
- (id)init;
- (void)dealloc;
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;
- (void)reloadWithStorePage:(id)arg1 forURL:(id)arg2;

@end
