/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVAssetInspector, NSMutableArray, AVAssetCache, NSURL;

@interface AVAssetMakeReadyForInspectionLoader : AVAssetInspectorLoader  {
    AVAssetInspector *_assetInspector;
    AVAssetCache *_assetCache;
    BOOL _shouldMatchDataInCacheByURLPathComponentOnly;
    BOOL _shouldMatchDataInCacheByURLWithoutQueryComponent;
    NSURL *_downloadDestinationURL;
    struct OpaqueFigFormatReader { } *_formatReader;
    struct OpaqueFigSimpleMutex { } *_loadingMutex;
    NSMutableArray *_keysAwaitingCompletion;
    int _status;
    int _basicInspectionFailureCode;
    NSURL *_URL;
}

@property(readonly) NSURL * downloadDestinationURL;
@property(readonly) BOOL shouldMatchDataInCacheByURLWithoutQueryComponent;
@property(readonly) BOOL shouldMatchDataInCacheByURLPathComponentOnly;
@property(readonly) AVAssetCache * assetCache;
@property(readonly) NSURL * URL;


- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (void)finalize;
- (id)initWithURL:(id)arg1;
- (id)URL;
- (BOOL)_providesAccurateTiming;
- (void)_setStatus:(int)arg1 figErrorCode:(long)arg2;
- (struct OpaqueFigFormatReader { }*)_copyFormatReaderFromFigObjectWithFigErrorCode:(int*)arg1;
- (id)_dictionaryOfSpecialGettersForKeyValueStatus;
- (int)_statusOfValueWhileMutexLockedForKey:(id)arg1 error:(id*)arg2;
- (BOOL)_statusOfValuesIsTerminalWhileMutexLockedForKeys:(id)arg1;
- (BOOL)_inspectionRequiresAFormatReader;
- (BOOL)_updateStatusWhileMutexLocked:(int)arg1 figErrorCode:(long)arg2;
- (id)_getAndPruneCompletionsWhileMutexLocked;
- (id)_dictionaryOfSpecialLoadingMethodsForKeys;
- (id)_loadValuesUsingDefaultLoadingMethodWhileMutexLockedForKeys:(id)arg1;
- (id)_loadValuesWhileMutexLockedForKeys:(id)arg1;
- (id)_statusOfValueForKeyThatIsAlwaysLoaded;
- (struct OpaqueFigSimpleMutex { }*)_loadingMutex;
- (int)_status;
- (BOOL)_isStreaming;
- (struct OpaqueFigPlaybackItem { }*)_playbackItem;
- (id)lyrics;
- (void)_serverHasDied;
- (BOOL)hasProtectedContent;
- (BOOL)isPlayable;
- (BOOL)isExportable;
- (BOOL)isReadable;
- (BOOL)isComposable;
- (id)assetInspector;
- (struct OpaqueFigFormatReader { }*)_formatReader;
- (id)chapterGroupInfo;
- (id)assetCache;
- (BOOL)shouldMatchDataInCacheByURLPathComponentOnly;
- (BOOL)shouldMatchDataInCacheByURLWithoutQueryComponent;
- (id)downloadDestinationURL;
- (int)statusOfValueForKey:(id)arg1 error:(id*)arg2;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(id)arg2;
- (void)cancelLoading;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;

@end
