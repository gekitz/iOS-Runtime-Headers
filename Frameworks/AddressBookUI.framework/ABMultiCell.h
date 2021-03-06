/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class ABMultiCellContentView;

@interface ABMultiCell : ABChameleonCell  {
    ABMultiCellContentView *_abMultiCellContentView;
    BOOL _editingDisabled;
}

@property(retain) ABMultiCellContentView * multiCellContentView;
@property(getter=isEditingDisabled) BOOL editingDisabled;


- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (BOOL)isEditingDisabled;
- (void)_addMultiCellContentViewIfNeeded;
- (BOOL)_shouldSwallowTouches:(id)arg1 withEvent:(id)arg2;
- (void)setEditingDisabled:(BOOL)arg1;
- (void)setMultiCellContentView:(id)arg1;
- (void)setAbCellStyle:(int)arg1;
- (id)multiCellContentView;

@end
