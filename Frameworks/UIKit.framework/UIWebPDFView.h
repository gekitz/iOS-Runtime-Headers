/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class WebPDFViewPlaceholder, NSArray, UIPDFDocument, NSMutableArray, NSObject<UIWebPDFViewDelegate>, NSString, NSURL, UIColor, UITapGestureRecognizer;

@interface UIWebPDFView : UIView <WebPDFViewPlaceholderDelegate, UIPopoverControllerDelegate, UIGestureRecognizerDelegate> {
    NSMutableArray *_backingLayerImageViews;
    struct CGPDFDocument { } *_cgPDFDocument;
    UIPDFDocument *_document;
    BOOL _hasScheduledCacheUpdate;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _documentBounds;
    NSObject<UIWebPDFViewDelegate> *_pdfDelegate;
    BOOL _delegateRespondsToDidScroll;
    UITapGestureRecognizer *_tapGestureRecognizer;
    NSURL *_documentURL;
    BOOL _rotating;
    BOOL _zooming;
    BOOL _inDidZoom;
    float _initialZoomScale;
    struct CGAffineTransform { 
        float a; 
        float b; 
        float c; 
        float d; 
        float tx; 
        float ty; 
    } _documentTransform;
    float _documentScale;
    int _ignoreContentOffsetChanges;
    struct CGPoint { 
        float x; 
        float y; 
    } _contentOffsetAtScrollStart;
    NSMutableArray *_pageViews;
    struct _IndexPair { 
        int first; 
        int last; 
    } _installedPageIndices;
    WebPDFViewPlaceholder *pdfPlaceHolderView;
    BOOL hidePageViewsUntilReadyToRender;
    UIColor *backgroundColorForUnRenderedContent;
    BOOL hideActivityIndicatorForUnRenderedContent;
    NSString *documentPassword;
    NSArray *pageRects;
}

@property NSObject<UIWebPDFViewDelegate> * pdfDelegate;
@property(retain) NSURL * documentURL;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } documentBounds;
@property(readonly) unsigned int totalPages;
@property(readonly) struct CGPDFDocument { }* cgPDFDocument;
@property(readonly) UIPDFDocument * document;
@property WebPDFViewPlaceholder * pdfPlaceHolderView;
@property float initialZoomScale;
@property(retain) UIColor * backgroundColorForUnRenderedContent;
@property BOOL hideActivityIndicatorForUnRenderedContent;
@property BOOL hidePageViewsUntilReadyToRender;
@property int ignoreContentOffsetChanges;
@property struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; } documentTransform;
@property(retain) NSString * documentPassword;
@property(readonly) float documentScale;
@property(retain) NSArray * pageRects;

+ (void)setAsPDFDocRepAndView;

- (void)setHideActivityIndicatorForUnRenderedContent:(BOOL)arg1;
- (BOOL)hideActivityIndicatorForUnRenderedContent;
- (id)backgroundColorForUnRenderedContent;
- (void)setHidePageViewsUntilReadyToRender:(BOOL)arg1;
- (BOOL)hidePageViewsUntilReadyToRender;
- (int)ignoreContentOffsetChanges;
- (float)documentScale;
- (void)setDocumentTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })documentTransform;
- (void)setInitialZoomScale:(float)arg1;
- (float)initialZoomScale;
- (id)pdfDelegate;
- (id)documentURL;
- (void)didTouch:(id)arg1 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 withAnnotationDictionary:(struct CGPDFDictionary { }*)arg3;
- (void)resetZoom:(id)arg1;
- (void)zoom:(id)arg1 to:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 kind:(int)arg3;
- (BOOL)_tryToUnlockDocumentWithPassword:(id)arg1;
- (void)snapshotComplete;
- (void)prepareForSnapshot;
- (id)_addPageAtIndex:(unsigned int)arg1;
- (id)initWithWebPDFViewPlaceholder:(id)arg1;
- (BOOL)_hasPageRects;
- (void)setPdfDelegate:(id)arg1;
- (void)setIgnoreContentOffsetChanges:(int)arg1;
- (struct CGPDFDocument { }*)cgPDFDocument;
- (void)didCompleteLayout;
- (void)viewWillClose;
- (id)_pageWithSelection;
- (BOOL)_checkIfDocumentNeedsUnlock;
- (id)documentPassword;
- (void)_recreateUIPDFDocument;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_viewportBoundsInUIViewCoords;
- (void)ensureCorrectPagesAreInstalled;
- (void)_scheduleRemovePageViewsNotInViewCoordsRect;
- (void)_addSubViewsInViewCoordsBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_removePageViewsNotInCurrentViewCoordsRect;
- (void)_removePageViewsNotInViewCoordsRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_viewCachingBoundsInUIViewCoords;
- (id)_installViewAtIndex:(int)arg1 inFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (struct _IndexPair { int x1; int x2; })_addForwardSubViewsInDocCoordsBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withPageRects:(id)arg2 usingIndices:(struct _IndexPair { int x1; int x2; })arg3;
- (struct _IndexPair { int x1; int x2; })_addBackwardSubViewsInDocCoordsBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withPageRects:(id)arg2 usingIndices:(struct _IndexPair { int x1; int x2; })arg3;
- (id)viewAtIndex:(int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_viewportBoundsInUIVIewCoordsWithView:(id)arg1;
- (id)viewportView;
- (void)_removeBackgroundImageObserverIfNeeded:(id)arg1;
- (void)setDocumentPassword:(id)arg1;
- (void)setDocumentURL:(id)arg1;
- (void)setPageRects:(id)arg1;
- (void)willScroll:(id)arg1;
- (void)didZoom:(id)arg1;
- (void)willZoom:(id)arg1;
- (void)_tapGestureRecognized:(id)arg1;
- (id)pdfPlaceHolderView;
- (void)setPdfPlaceHolderView:(id)arg1;
- (void)setBackgroundColorForUnRenderedContent:(id)arg1;
- (id)uiPDFDocument;
- (unsigned int)firstVisiblePageNumber;
- (id)_selection;
- (id)document;
- (void)didReceiveMemoryWarning:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)pageRects;
- (unsigned int)totalPages;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })documentBounds;
- (void)didRotate:(id)arg1;
- (void)willRotate:(id)arg1;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)_define:(id)arg1;
- (void)clearSelection;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)_didScroll;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)dealloc;

@end
