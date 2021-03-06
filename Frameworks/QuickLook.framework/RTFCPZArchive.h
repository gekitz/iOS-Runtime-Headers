/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@class NSString, NSMutableDictionary, <RTFCPZArchiveInputStream>;

@interface RTFCPZArchive : NSObject  {
    NSMutableDictionary *mEntries;
    <RTFCPZArchiveInputStream> *mInput;
    NSString *mRootName;
}


- (void)readEntries;
- (id)readFilenameFromBuffer:(const char *)arg1 size:(unsigned long)arg2;
- (id)entryWithName:(id)arg1;
- (const char *)searchForEndOfCentralDirectory;
- (id)rootName;
- (id)initWithData:(id)arg1;
- (struct RTFCPZEndOfCentralDirectory { unsigned long long x1; unsigned long long x2; unsigned long long x3; })readEndOfCentralDirectory;
- (void)dealloc;

@end
