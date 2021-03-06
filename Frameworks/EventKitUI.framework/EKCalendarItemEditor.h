/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class <EKCalendarItemEditorDelegate>, UIResponder, UIActionSheet, EKCalendarItem, EKEventStore, EKCalendarItemEditItem, NSArray;

@interface EKCalendarItemEditor : UITableViewController <EKCalendarItemEditItemDelegate, UIActionSheetDelegate> {
    NSArray *_editItems;
    EKEventStore *_store;
    id _revertState;
    EKCalendarItem *_calendarItem;
    NSArray *_currentItems;
    UIActionSheet *_alertSheet;
    <EKCalendarItemEditorDelegate> *_editorDelegate;
    EKCalendarItemEditItem *_currentEditItem;
    BOOL _scrollToNotes;
    UIResponder *_responderToRestoreOnAppearence;
    int _visibleSectionToRestoreOnAppearence;
    BOOL _giveTitleCellKeyboardFocus;
    int _editItemVisibility;
    BOOL _isIgnoringCellHeightChange;
    BOOL _needsCellHeightChange;
    BOOL _showsTimeZone;
}

@property <EKCalendarItemEditorDelegate> * editorDelegate;
@property(retain) EKEventStore * store;
@property(retain) EKCalendarItem * calendarItem;
@property BOOL scrollToNotes;
@property(retain) UIResponder * responderToRestoreOnAppearence;
@property int visibleSectionToRestoreOnAppearence;
@property BOOL showsTimeZone;
@property(readonly) EKCalendarItemEditItem * currentEditItem;


- (void)setStore:(id)arg1;
- (id)store;
- (void)done:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidUnload;
- (void)loadView;
- (void)viewDidLoad;
- (struct CGSize { float x1; float x2; })contentSizeForViewInPopover;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (void)tableViewDidFinishReload:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)didReceiveMemoryWarning;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)currentEditItem;
- (void)setScrollToNotes:(BOOL)arg1;
- (void)setEditorDelegate:(id)arg1;
- (id)editorDelegate;
- (void)deleteClicked:(id)arg1;
- (void)refreshStartAndEndDates;
- (BOOL)saveWithSpan:(int)arg1 animated:(BOOL)arg2;
- (void)handleTapOutside;
- (unsigned int)indexOfEditItemInVisibleItems:(id)arg1;
- (int)editItemVisibility;
- (void)setEditItemVisibility:(int)arg1 animated:(BOOL)arg2;
- (void)setCalendarItem:(id)arg1;
- (id)defaultAlertTitleForEditItem:(id)arg1;
- (id)viewControllerForEditItem:(id)arg1;
- (void)editItemRequiresHeightChange:(id)arg1;
- (void)editItem:(id)arg1 wantsKeyboardPinned:(BOOL)arg2;
- (void)editItemTextChanged:(id)arg1;
- (void)editItemDidEndEditing:(id)arg1;
- (void)editItemDidCommit:(id)arg1;
- (void)editItemDidStartEditing:(id)arg1;
- (void)_performDelete:(int)arg1;
- (void)_deleteSheetButtonPressed:(int)arg1;
- (void)_detachSheetButtonPressed:(int)arg1;
- (void)_cancelSheetButtonPressed:(int)arg1;
- (void)_deleteRecurringSheetButtonPressed:(int)arg1;
- (id)defaultTitleForCalendarItem;
- (id)calendarItem;
- (id)_viewForSheet;
- (void)customizeActionSheet:(id)arg1;
- (id)_nameForDeleteButton;
- (BOOL)allowsDeletingFutureOccurrences;
- (id)defaultAlertTitle;
- (void)_reallyHandleCellHeightChange;
- (void)_copyEventForPossibleRevert;
- (void)setupDeleteButton;
- (void)prepareEditItems;
- (void)_setCalendarItemOnEditItems;
- (void)_pinKeyboard:(BOOL)arg1;
- (void)completeWithAction:(int)arg1 animated:(BOOL)arg2;
- (void)_revertEvent;
- (void)_keyboardWillHide;
- (id)notificationNamesForLocaleChange;
- (id)preferredTitle;
- (id)responderToRestoreOnAppearence;
- (void)setVisibleSectionToRestoreOnAppearence:(int)arg1;
- (int)visibleSectionToRestoreOnAppearence;
- (BOOL)scrollToNotes;
- (void)setResponderToRestoreOnAppearence:(id)arg1;
- (void)_updateCurrentEditItemsFromVisibility:(int)arg1 toVisibility:(int)arg2 animated:(BOOL)arg3;
- (void)_configureVisibleItems;
- (void)_tableViewDidUpdateHeights;
- (void)_tableViewWillUpdateHeights;
- (id)_editItems;
- (void)tableViewDidStartReload:(id)arg1;
- (BOOL)_canDetachSingleOccurrence;
- (void)setShowsTimeZone:(BOOL)arg1;
- (BOOL)showsTimeZone;
- (BOOL)_performSave:(int)arg1 animated:(BOOL)arg2;
- (void)_presentDetachSheet;
- (void)setupForEvent;
- (void)_localeChanged;
- (void)cancel:(id)arg1;
- (id)init;
- (void)dealloc;

@end
