/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSMutableAttributedString;

@interface NSMutableStringProxyForMutableAttributedString : NSMutableString  {
    NSMutableAttributedString *mutableAttributedString;
}


- (void)finalize;
- (id)initWithMutableAttributedString:(id)arg1;
- (void)getCharacters:(unsigned short*)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 withString:(id)arg2;
- (unsigned short)characterAtIndex:(unsigned int)arg1;
- (unsigned int)length;
- (void)dealloc;

@end
