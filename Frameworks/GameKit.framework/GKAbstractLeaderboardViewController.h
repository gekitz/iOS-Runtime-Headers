/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class UISegmentedControl, GKGame, GKLeaderboardViewController, GKPlayer, GKSparseLeaderboard, GKLeaderboardDataSource, UIView, <GKLeaderboardViewControllerDelegate>, NSString, GKUITheme, <GKLeaderboardViewControllerPrivateDelegate>;

@interface GKAbstractLeaderboardViewController : GKTableViewControllerV2 <GKLeaderboardDelegate> {
    GKGame *_game;
    GKPlayer *_player;
    NSString *_categoryID;
    int _timeScope;
    UIView *_scopeControlContainer;
    UISegmentedControl *_portraitScopeControl;
    UISegmentedControl *_landscapeScopeControl;
    GKLeaderboardDataSource *_leaderboardDataSource;
    <GKLeaderboardViewControllerPrivateDelegate> *_delegate;
    GKUITheme *_theme;
    BOOL _allowsFriendSelection;
    BOOL _translucentNavBar;
    GKSparseLeaderboard *_friendLeaderboard;
    GKSparseLeaderboard *_globalLeaderboard;
    <GKLeaderboardViewControllerDelegate> *_leaderboardDelegate;
    GKLeaderboardViewController *_controllerForDelegate;
    int _navbarStyle;
    NSString *_localizedLeaderboardTitle;
}

@property(retain) GKLeaderboardDataSource * leaderboardDataSource;
@property <GKLeaderboardViewControllerPrivateDelegate> * delegate;
@property int timeScope;
@property(retain) NSString * categoryID;
@property(retain) GKPlayer * player;
@property(retain) GKGame * game;
@property(readonly) GKUITheme * theme;
@property BOOL allowsFriendSelection;
@property BOOL translucentNavBar;
@property int navbarStyle;
@property(retain) GKSparseLeaderboard * friendLeaderboard;
@property(retain) GKSparseLeaderboard * globalLeaderboard;
@property(retain) NSString * localizedLeaderboardTitle;
@property <GKLeaderboardViewControllerDelegate> * leaderboardDelegate;
@property GKLeaderboardViewController * controllerForDelegate;
@property(retain) UIView * scopeControlContainer;
@property(retain) UISegmentedControl * portraitScopeControl;
@property(retain) UISegmentedControl * landscapeScopeControl;


- (void)setLandscapeScopeControl:(id)arg1;
- (id)landscapeScopeControl;
- (void)setPortraitScopeControl:(id)arg1;
- (id)portraitScopeControl;
- (void)setScopeControlContainer:(id)arg1;
- (id)scopeControlContainer;
- (id)friendLeaderboard;
- (void)setupScopeContainer:(id)arg1;
- (BOOL)translucentNavBar;
- (void)_timeFilterSegmentedControlChanged:(id)arg1;
- (void)setTranslucentNavBar:(BOOL)arg1;
- (void)setGlobalLeaderboard:(id)arg1;
- (void)setFriendLeaderboard:(id)arg1;
- (void)reloadScoresWithCompletionHandlerAndError:(id)arg1;
- (id)localizedLeaderboardTitle;
- (id)globalLeaderboard;
- (void)setCategoryID:(id)arg1 timeScope:(int)arg2;
- (void)updateCategorySubtitle;
- (void)setAllowsFriendSelection:(BOOL)arg1;
- (BOOL)allowsFriendSelection;
- (Class)dataSourceClass;
- (id)leaderboardDataSource;
- (void)setLeaderboardDataSource:(id)arg1;
- (void)prepareDataSource;
- (void)updateNavbarButtons;
- (int)navbarStyle;
- (void)setLocalizedLeaderboardTitle:(id)arg1;
- (id)controllerForDelegate;
- (void)layoutSubviewsForOrientation:(int)arg1;
- (void)donePressed:(id)arg1;
- (void)playTapped;
- (void)_gkUpdateContentsWithCompletionHandlerAndError:(id)arg1;
- (void)_gkResetContents;
- (id)theme;
- (void)authenticatedStatusChanged;
- (void)setControllerForDelegate:(id)arg1;
- (void)setLeaderboardDelegate:(id)arg1;
- (id)leaderboardDelegate;
- (void)setNavbarStyle:(int)arg1;
- (id)initWithGame:(id)arg1;
- (id)game;
- (void)setCategoryID:(id)arg1;
- (void)leaderboardDidFinishLoading:(id)arg1;
- (void)setGame:(id)arg1;
- (void)leaderboardDidBeginLoading:(id)arg1;
- (int)timeScope;
- (void)setTimeScope:(int)arg1;
- (id)categoryID;
- (void)setPlayer:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (float)marginForTableView:(id)arg1;
- (id)delegate;
- (id)player;
- (void)dealloc;

@end
