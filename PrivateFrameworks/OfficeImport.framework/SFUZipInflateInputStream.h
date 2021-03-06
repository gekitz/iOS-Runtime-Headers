/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class <SFUBufferedInputStream>;

@interface SFUZipInflateInputStream : NSObject <SFUInputStream> {
    struct z_stream_s { 
        char *next_in; 
        unsigned int avail_in; 
        unsigned int total_in; 
        char *next_out; 
        unsigned int avail_out; 
        unsigned int total_out; 
        char *msg; 
        struct internal_state {} *state; 
        int (*zalloc)(); 
        int (*zfree)(); 
        void *opaque; 
        int data_type; 
        unsigned int adler; 
        unsigned int reserved; 
    } mStream;
    long long mOffset;
    <SFUBufferedInputStream> *mInput;
    char *mOutBuffer;
    unsigned int mOutBufferSize;
    BOOL mReachedEnd;
    BOOL mIsFromZip;
    unsigned int mCalculatedCrc;
    unsigned int mCheckCrc;
}


- (long long)totalCompressedBytesConsumed;
- (void)setupInflateStream;
- (id)initWithOffset:(long long)arg1 end:(long long)arg2 uncompressedSize:(unsigned long long)arg3 crc:(unsigned long)arg4 dataRepresentation:(id)arg5;
- (id)initWithInput:(id)arg1;
- (id)closeLocalStream;
- (unsigned long)readToOwnBuffer:(const char **)arg1 size:(unsigned long)arg2;
- (BOOL)canSeek;
- (void)seekToOffset:(long long)arg1;
- (unsigned long)readToBuffer:(char *)arg1 size:(unsigned long)arg2;
- (void)disableSystemCaching;
- (void)enableSystemCaching;
- (void)close;
- (long long)offset;
- (void)dealloc;

@end
