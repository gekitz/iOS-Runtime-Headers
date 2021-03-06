/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class NSSet, UITableView, NSIndexPath, EKEventStore, <EKCalendarChooserDelegate>, <EKStyleProvider>, NSMutableSet, NSMutableDictionary, NSArray;

@interface EKCalendarChooser : UIViewController  {
    EKEventStore *_eventStore;
    int _style;
    int _chooserMode;
    UITableView *_tableView;
    <EKCalendarChooserDelegate> *_delegate;
    NSArray *_groups;
    NSMutableDictionary *_storeGroupMap;
    NSIndexPath *_checkedRow;
    <EKStyleProvider> *_styleProvider;
    struct { 
        unsigned int listIsFlat : 1; 
        unsigned int showAll : 1; 
        unsigned int showColors : 1; 
        unsigned int allSelected : 1; 
        unsigned int allowsRotation : 1; 
        unsigned int allowsEdit : 1; 
        unsigned int showsDoneButton : 1; 
        unsigned int showsCancelButton : 1; 
        unsigned int showsWritableCalendarsOnly : 1; 
        unsigned int showsRefreshButton : 1; 
    } _flags;
    NSMutableSet *_selectedCalendars;
    int _entityType;
}

@property int selectionStyle;
@property <EKCalendarChooserDelegate> * delegate;
@property BOOL showsDoneButton;
@property BOOL showsCancelButton;
@property(copy) NSSet * selectedCalendars;
@property int chooserMode;
@property int entityType;
@property(retain) EKEventStore * eventStore;
@property(retain) UITableView * tableView;
@property(retain) NSArray * groups;
@property(retain) NSMutableDictionary * storeGroupMap;
@property(retain) NSIndexPath * checkedRow;
@property(retain) <EKStyleProvider> * styleProvider;
@property struct { unsigned int x1 : 1; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 1; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 1; unsigned int x10 : 1; } flags;
@property(retain) NSMutableSet * selectedCalendarSet;


- (void)setFlags:(struct { unsigned int x1 : 1; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 1; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 1; unsigned int x10 : 1; })arg1;
- (void)setDelegate:(id)arg1;
- (int)entityType;
- (id)eventStore;
- (void)setEventStore:(id)arg1;
- (void)done:(id)arg1;
- (BOOL)showsCancelButton;
- (void)setShowsCancelButton:(BOOL)arg1;
- (int)selectionStyle;
- (id)tableView;
- (struct { unsigned int x1 : 1; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 1; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 1; unsigned int x10 : 1; })flags;
- (void)viewDidUnload;
- (void)loadView;
- (void)viewDidLoad;
- (struct CGSize { float x1; float x2; })contentSizeForViewInPopover;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)setSelectionStyle:(int)arg1;
- (float)marginForTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setTableView:(id)arg1;
- (id)delegate;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)setEntityType:(int)arg1;
- (void)setSelectedCalendarSet:(id)arg1;
- (id)selectedCalendarSet;
- (id)checkedRow;
- (void)setStoreGroupMap:(id)arg1;
- (id)storeGroupMap;
- (void)setGroups:(id)arg1;
- (void)calendarEditor:(id)arg1 didCompleteWithAction:(int)arg2;
- (BOOL)_tableShouldDisplayAllCalendarButtons;
- (BOOL)showsWritableCalendarsOnly;
- (void)setShowsWritableCalendarsOnly:(BOOL)arg1;
- (void)setShowsRefreshButton:(BOOL)arg1;
- (BOOL)showsRefreshButton;
- (int)chooserMode;
- (void)setChooserMode:(int)arg1;
- (BOOL)allowsEdit;
- (void)setAllowsEdit:(BOOL)arg1;
- (void)setAllowsRotation:(BOOL)arg1;
- (id)initWithSelectionStyle:(int)arg1 displayStyle:(int)arg2 eventStore:(id)arg3;
- (void)_selectCalendar:(id)arg1 selected:(BOOL)arg2;
- (void)_selectAllCalendarsAndStores:(BOOL)arg1;
- (void)_selectGroup:(id)arg1 selected:(BOOL)arg2;
- (BOOL)_isEllipsisCellForGroup:(id)arg1 rowIndex:(int)arg2;
- (BOOL)_tableShouldDisplayAllCellForGroup:(id)arg1;
- (id)_stringForSharedCalendar:(id)arg1;
- (BOOL)_tableShouldDisplayNewCalendarCellForGroup:(id)arg1;
- (void)setCheckedRow:(id)arg1;
- (id)_indexPathForCalendar:(id)arg1 source:(id)arg2;
- (void)_applySelection;
- (void)_populateGroupsForCalendars:(id)arg1;
- (id)_groupForSource:(id)arg1;
- (int)_numSelectedGroups;
- (id)_filterCalendars:(id)arg1;
- (void)_restoreSelection:(id)arg1 newCalendars:(id)arg2;
- (id)_saveSelection;
- (BOOL)_calendarAvailableForEditing:(id)arg1;
- (BOOL)_tableShouldDisplayAllCalendarsSection;
- (void)refresh:(id)arg1;
- (void)_setCalendars:(id)arg1;
- (id)_loadCalendars;
- (void)calendarsChanged:(id)arg1;
- (id)selectedCalendars;
- (void)setSelectedCalendars:(id)arg1;
- (id)initWithSelectionStyle:(int)arg1 displayStyle:(int)arg2 entityType:(int)arg3 eventStore:(id)arg4;
- (id)selectedCalendar;
- (void)setSelectedCalendar:(id)arg1;
- (void)setShowsDoneButton:(BOOL)arg1;
- (BOOL)showsDoneButton;
- (BOOL)allowsRotation;
- (void)cancel:(id)arg1;
- (void)dealloc;
- (id)groups;
- (void)setStyleProvider:(id)arg1;
- (id)styleProvider;

@end
