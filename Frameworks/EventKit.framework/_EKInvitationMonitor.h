/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class NSDate, PCPersistentTimer;

@interface _EKInvitationMonitor : NSObject  {
    BOOL _running;
    PCPersistentTimer *_timer;
    NSDate *_nextFireTime;
    struct dispatch_queue_s { } *_queue;
    int _lastCount;
    BOOL _notifyUnalerted;
    BOOL _initialCheck;
}

@property(readonly) unsigned int unreadCount;
@property BOOL notifyUnalerted;


- (unsigned int)unreadCount;
- (void)start;
- (void)setNotifyUnalerted:(BOOL)arg1;
- (BOOL)notifyUnalerted;
- (void)_checkforUnalertedEvents:(id)arg1;
- (void)adjust;
- (void)_timerFired;
- (void)_resetTimer:(id)arg1;
- (void)_checkForUpdates:(id)arg1;
- (void)_databaseChanged;
- (BOOL)_isDataProtected;
- (id)initWithEventStore:(id)arg1;
- (void)_protectedDataDidBecomeAvailable;
- (void)_protectedDataWillBecomeUnavailable;
- (void)stop;
- (void)dealloc;

@end
