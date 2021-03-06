/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableDictionary, NSString, DOMElement, DOMHTMLInputElement;

@interface UIWebFormCompletionController : NSObject  {
    DOMHTMLInputElement *_element;
    NSString *_fieldName;
    DOMElement *_form;
    BOOL _isLoginForm;
    NSMutableDictionary *_items;
}

+ (BOOL)credentialIsNeverSaveMarker:(id)arg1;
+ (void)preFillInWebFrame:(id)arg1;
+ (BOOL)autoFillInWebView:(id)arg1;
+ (void)frame:(id)arg1 sourceFrame:(id)arg2 willSubmitForm:(id)arg3 withValues:(id)arg4 submissionListener:(id)arg5;
+ (void)clearPreviousDataDatabase;
+ (void)clearPreviousDataForDomain:(id)arg1;
+ (id)domainsWithPreviousData;
+ (void)clearAutoFillStateForFrame:(id)arg1;
+ (id)preFillForm:(id)arg1 inFrame:(id)arg2;
+ (BOOL)_autoFillPasswordInFrame:(id)arg1 autoFiller:(id)arg2;
+ (id)currentOrFirstFrameAndForm:(id*)arg1 inWebView:(id)arg2;
+ (id)firstFormInFrame:(id)arg1;
+ (id)currentFormInFrame:(id)arg1;
+ (id)_credentialMatchesForString:(id)arg1 frame:(id)arg2;
+ (id)_matchesForString:(id)arg1 frame:(id)arg2 fieldName:(id)arg3 control:(id)arg4;
+ (void)_reapABMarker:(id)arg1 forFrame:(id)arg2 fieldName:(id)arg3;
+ (void)_addABMatchesToArray:(id)arg1 forString:(id)arg2 atABPointer:(id)arg3;
+ (void)_addPreviousDataMatchesToArray:(id)arg1 forString:(id)arg2 frame:(id)arg3 fieldName:(id)arg4;
+ (unsigned int)_indexOfMarkerInMatches:(id)arg1 matchingABMatch:(id)arg2;
+ (id)_abValuesForProperty:(id)arg1 key:(id)arg2 label:(id)arg3;
+ (id)_abValuesForPerson:(void*)arg1 property:(id)arg2 propertyID:(int)arg3 key:(id)arg4 label:(id)arg5;
+ (id)_abMultiValuesForPerson:(void*)arg1 property:(id)arg2 property:(int)arg3 key:(id)arg4 label:(id)arg5;
+ (void)_frame:(id)arg1 sourceFrame:(id)arg2 willSubmitRegularForm:(id)arg3 withValues:(id)arg4;
+ (BOOL)_frame:(id)arg1 sourceFrame:(id)arg2 willSubmitLoginForm:(id)arg3 withValues:(id)arg4 autoFiller:(id)arg5 submissionListener:(id)arg6;
+ (BOOL)shouldSaveFormData;
+ (void)alertPrompt:(id)arg1 clickedButtonAtIndex:(int)arg2;
+ (BOOL)shouldSaveUsernamesAndPasswords;
+ (void)_saveCompletionDBSoon;
+ (void)_loadCompletionDB;
+ (void)_saveCompletionDB:(id)arg1;
+ (void)_pruneCompletionDB;
+ (void)_appWillTerminate:(id)arg1;
+ (id)_cryptData:(id)arg1 encode:(BOOL)arg2;
+ (BOOL)passwordCompletionEnabled;
+ (BOOL)addressBookCompletionEnabled;
+ (BOOL)previousDataCompletionEnabled;
+ (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
+ (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;

- (void)autoFillWithElementValue;
- (BOOL)currentTextChangeIsProgrammatic;
- (void)sourceFieldTextDidEndEditing;
- (BOOL)showsListForSingleListItem;
- (BOOL)returnPerformsActionWhenShowingList;
- (BOOL)leavingFieldReflectsSelectedListItem;
- (id)reflectedStringForActivatedListItem:(id)arg1;
- (id)reflectedStringForHighlightedListItem:(id)arg1;
- (void)reflectFinalSelectedListItem:(id)arg1;
- (void)reflectSelectedListItem:(id)arg1;
- (BOOL)shouldSuppressAutocomplete;
- (BOOL)doSourceFieldCommandBySelector:(SEL)arg1;
- (void)sourceFieldTextDidChange;
- (id)initWithDOMElement:(id)arg1 webFrame:(id)arg2;
- (id)computeListItemsAndInitiallySelectedIndex:(unsigned int*)arg1 withQueryString:(id)arg2;
- (void)abortCompletion;
- (id)queryString;
- (void)autoFillCommand:(id)arg1;
- (id)selectedListItem:(id)arg1;
- (id)unsortedListItemsWithQueryString:(id)arg1;
- (BOOL)hasCurrentSuggestions;
- (struct { id x1; unsigned int x2; })suggestionsForString:(id)arg1 inputIndex:(unsigned int)arg2;
- (void)acceptedAutoFillWord:(id)arg1;
- (id)webFrame;
- (void)dealloc;

@end
