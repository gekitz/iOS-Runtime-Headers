/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class UIImage, EKEvent, NSArray;

@interface EKAttendeesListView : UITableView <UITableViewDelegate, UITableViewDataSource> {
    EKEvent *_event;
    NSArray *_attendees;
    id _attendeeDelegate;
    BOOL _shouldShowStatusImages;
    UIImage *_attendingImage;
    UIImage *_maybeImage;
    UIImage *_notAttendingImage;
    UIImage *_pendingImage;
}


- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)_imageForStatus:(int)arg1;
- (id)_pendingImage;
- (id)_notAttendingImage;
- (id)_maybeImage;
- (id)_attendingImage;
- (void)eventModified:(id)arg1;
- (void)loadAttendees;
- (void)setAttendeeDelegate:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 event:(id)arg2;
- (void)dealloc;

@end
