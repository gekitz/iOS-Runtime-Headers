/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@class NSData;

@interface MessageHeaders : NSObject <NSCopying> {
    NSData *_data;
    unsigned int _preferredEncoding;
}

+ (id)basicHeaders;
+ (id)uniqueHeaderKeyStringForString:(id)arg1;
+ (BOOL)isStructuredHeaderKey:(id)arg1;
+ (id)addressListFromEncodedString:(id)arg1;
+ (id)addressListFromEncodedString:(id)arg1 encoding:(unsigned long)arg2;
+ (id)encodedDataForAddressList:(id)arg1 splittingAtLength:(unsigned int)arg2 firstLineBuffer:(unsigned int)arg3;
+ (BOOL)shouldDecodeHeaderForKey:(id)arg1;

- (id)headersForKey:(id)arg1;
- (id)_capitalizedKeyForKey:(id)arg1;
- (id)initWithHeaderData:(id)arg1 encoding:(unsigned long)arg2;
- (id)copyAddressListForBcc;
- (id)copyFirstStringValueForKey:(id)arg1;
- (id)copyHeadersForKey:(id)arg1;
- (id)firstSenderAddress;
- (id)copyAddressListForTo;
- (id)copyAddressListForCc;
- (id)encodedHeaders;
- (id)copyAddressListForResentFrom;
- (id)copyAddressListForSender;
- (void)appendHeaderData:(id)arg1 andRecipients:(id)arg2;
- (unsigned long)preferredEncoding;
- (void)setPreferredEncoding:(unsigned long)arg1;
- (id)firstHeaderForKey:(id)arg1;
- (id)headerData;
- (BOOL)_isStructuredHeaderKey:(id)arg1;
- (id)_headerValueForKey:(id)arg1;
- (BOOL)hasHeaderForKey:(id)arg1;
- (id)copyEncodedStringForSender;
- (id)copyEncodedStringForTo;
- (id)copyEncodedStringForCc;
- (id)copyEncodedStringForBcc;
- (id)copyEncodedStringForResentFrom;
- (id)isoLatin1CharsetHint;
- (BOOL)messageIsFromEntourage;
- (id)_decodeHeaderKeysFromData:(id)arg1;
- (void)_setCapitalizedKey:(id)arg1 forKey:(id)arg2;
- (id)copyFirstNonDecodedHeaderForKey:(id)arg1;
- (unsigned long)_contentTypeEncoding;
- (id)copyDecodedStringFromHeaderData:(id)arg1 withRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (id)_copyHeaderValueForKey:(id)arg1 offset:(unsigned int*)arg2 decoded:(BOOL)arg3;
- (id)_copyHeaderValueForKey:(id)arg1;
- (id)_copyEncodedHeaderStringForKey:(id)arg1;
- (id)_copyAddressListForKey:(id)arg1;
- (id)copyFirstHeaderForKey:(id)arg1;
- (id)_headerValueForKey:(id)arg1 offset:(unsigned int*)arg2;
- (id)references;
- (id)mutableCopy;
- (id)copyAddressListForReplyTo;
- (id)allHeaderKeys;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)dealloc;

@end
