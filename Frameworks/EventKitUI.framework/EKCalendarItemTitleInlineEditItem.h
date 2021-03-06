/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class UIResponder, UITableViewCell;

@interface EKCalendarItemTitleInlineEditItem : EKCalendarItemEditItem <UITextFieldDelegate> {
    UITableViewCell *_titleCell;
    UITableViewCell *_locationCell;
    UIResponder *_selectedTextField;
    unsigned int _showsLocation : 1;
}

@property(retain) UIResponder * selectedResponder;


- (void)reset;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 replacementString:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (id)selectedResponder;
- (void)setSelectedResponder:(id)arg1;
- (id)_makeCell:(int)arg1;
- (void)addStylingToCell:(id)arg1 forSubitemAtIndex:(int)arg2;
- (int)numberOfSubitems;
- (id)selectedTextField;
- (float)defaultCellHeightForSubitemAtIndex:(int)arg1 forWidth:(float)arg2;
- (id)cellForSubitemAtIndex:(int)arg1;
- (BOOL)saveAndDismissWithForce:(BOOL)arg1;
- (id)initWithLocation:(BOOL)arg1;
- (id)init;
- (void)dealloc;
- (BOOL)isInline;

@end
