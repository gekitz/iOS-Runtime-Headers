/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableDictionary;

@interface ECCurrencyConverter : NSObject  {
    NSMutableDictionary *mXlToLassoCurrencyCode;
    NSMutableDictionary *mLassoToXlCurrencyCode;
    NSMutableDictionary *mXlAccountingFormat;
    NSMutableDictionary *mXlToLassoCurrencyCodeBySymbol;
}

+ (id)currencyConverter;

- (id)lassoCurrencyCodeFromXl:(id)arg1;
- (id)xlCurrencyCodeFromLasso:(id)arg1;
- (int)xlAccountFormatFromLasso:(id)arg1;
- (void)populateDictionaries;
- (id)lassoCurrencyCodeForDollar;
- (void)dealloc;

@end
