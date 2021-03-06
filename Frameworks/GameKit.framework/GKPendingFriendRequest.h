/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSString;

@interface GKPendingFriendRequest : NSObject  {
    NSString *_recipient;
    int _recipientKind;
    NSString *_originator;
    NSString *_originatorEmail;
    NSString *_requestID;
    NSString *_message;
    NSString *_handle;
    BOOL _shouldBadge;
    unsigned int _friendRequestCount;
    BOOL _purpleBuddyAccount;
}

@property(retain) NSString * recipient;
@property int recipientKind;
@property(retain) NSString * originator;
@property(retain) NSString * originatorEmail;
@property(retain) NSString * requestID;
@property(retain) NSString * message;
@property(retain) NSString * handle;
@property BOOL shouldBadge;
@property unsigned int friendRequestCount;
@property BOOL purpleBuddyAccount;

+ (id)pushDictionaryForQuery:(id)arg1;

- (BOOL)purpleBuddyAccount;
- (BOOL)shouldBadge;
- (int)recipientKind;
- (id)initWithURLQuery:(id)arg1;
- (unsigned int)friendRequestCount;
- (id)requestID;
- (id)originatorEmail;
- (id)originator;
- (id)initWithPushDictionary:(id)arg1;
- (void)setFriendRequestCount:(unsigned int)arg1;
- (void)setShouldBadge:(BOOL)arg1;
- (void)setRequestID:(id)arg1;
- (void)setOriginatorEmail:(id)arg1;
- (void)setOriginator:(id)arg1;
- (void)setRecipientKind:(int)arg1;
- (void)setRecipient:(id)arg1;
- (id)recipient;
- (void)setPurpleBuddyAccount:(BOOL)arg1;
- (id)message;
- (void)setMessage:(id)arg1;
- (void)setHandle:(id)arg1;
- (id)handle;
- (id)description;
- (void)dealloc;

@end
