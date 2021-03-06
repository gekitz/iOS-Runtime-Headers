/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKGameMatch;

@interface GKRecentMatchCellContentView : GKPlayerCellContentView  {
    GKGameMatch *_match;
    BOOL _matched;
}

@property(retain) GKGameMatch * match;
@property BOOL matched;

+ (id)recentMatchContentView;

- (void)setMatched:(BOOL)arg1;
- (BOOL)matched;
- (void)updateLines;
- (id)match;
- (void)setMatch:(id)arg1;
- (void)dealloc;

@end
