/* Generated by RuntimeBrowser.
   Image: /usr/lib/libmecabra.dylib
 */

@class NSString;

@interface MecabraFacemarkCandidate : NSObject  {
    NSString *_string;
    NSString *_category;
}

@property(readonly) NSString * category;
@property(readonly) NSString * string;

+ (id)copyFacemarkCandidatesForLocale:(id)arg1;

- (id)initWithString:(id)arg1 category:(id)arg2;
- (id)category;
- (id)string;
- (void)dealloc;

@end
