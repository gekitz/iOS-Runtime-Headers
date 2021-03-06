/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class <GKTableViewControllerDataSource>, GKMultiColumnTableViewCell, UIView<GKTableViewCellContents>;

@interface GKTableViewControllerV2 : GKTableViewController <UIGestureRecognizerDelegate> {
    double _selectGestureStartTime;
    BOOL _isStoreDemoModeEnabled;
    float _columnSeparatorWidth;
    GKMultiColumnTableViewCell *_selectedCell;
    unsigned int _selectedColumn;
    BOOL _scrollDisabledForConfirmation;
    <GKTableViewControllerDataSource> *_sectionDataSource;
    <GKTableViewControllerDataSource> *_retainedSectionDataSource;
    UIView<GKTableViewCellContents> *_editingContentView;
}

@property float columnSeparatorWidth;
@property <GKTableViewControllerDataSource> * sectionDataSource;
@property(retain) <GKTableViewControllerDataSource> * retainedSectionDataSource;
@property(retain) GKMultiColumnTableViewCell * selectedCell;
@property(retain) UIView<GKTableViewCellContents> * editingContentView;
@property unsigned int selectedColumn;
@property BOOL scrollDisabledForConfirmation;


- (id)retainedSectionDataSource;
- (void)didShowMoreRowsForTableView:(id)arg1 section:(int)arg2;
- (id)visibleContentViews;
- (void)selectColumnInCell:(id)arg1;
- (void)deleteConfirmationWasTouched:(id)arg1;
- (id)swipeConfirmationButtonForView:(id)arg1 withTitle:(id)arg2;
- (void)setScrollDisabledForConfirmation:(BOOL)arg1;
- (BOOL)scrollDisabledForConfirmation;
- (void)setEditingContentView:(id)arg1;
- (id)editingContentView;
- (void)handleHorizontalSwipeGesture:(id)arg1;
- (void)tableView:(id)arg1 prepareContentViewsForCell:(id)arg2 atIndexPath:(id)arg3;
- (id)tableView:(id)arg1 indexPathWithColumnForCell:(id)arg2 withIndexPath:(id)arg3 atPoint:(struct CGPoint { float x1; float x2; })arg4;
- (int)columnCountForTableView:(id)arg1 rowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 refreshCellAtIndexPath:(id)arg2;
- (void)cancelSwipeToDeleteConfirmation;
- (void)loadingDidCompleteWithContext:(unsigned long long)arg1 error:(id)arg2;
- (unsigned long long)loadingWillBegin;
- (void)prepareDataSource;
- (id)contentsAtIndexPaths:(id)arg1 inTableView:(id)arg2;
- (void)prepareExpensiveVisibleContents;
- (void)setColumnSeparatorWidth:(float)arg1;
- (float)columnSeparatorWidth;
- (void)reloadView;
- (id)sectionDataSource;
- (void)setRetainedSectionDataSource:(id)arg1;
- (id)visibleContentViewsForTableView:(id)arg1;
- (void)setSectionDataSource:(id)arg1;
- (void)_gkUpdateContentsWithCompletionHandlerAndError:(id)arg1;
- (void)_gkResetContents;
- (id)selectedCell;
- (unsigned int)selectedColumn;
- (void)setSelectedCell:(id)arg1;
- (void)setSelectedColumn:(unsigned int)arg1;
- (id)initWithStyle:(int)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)init;
- (void)dealloc;

@end
