//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DataArk;

@interface MACollectionInterface : NSObject
{
    _Bool _collectionLibraryLoaded;	// 8 = 0x8
    struct __SecKey *_signingKey;	// 16 = 0x10
    DataArk *_dark;	// 24 = 0x18
}

+ (id)copyIngestURL;	// IMP=0x000000010000de58
@property(readonly, nonatomic) DataArk *dark; // @synthesize dark=_dark;
@property(nonatomic) _Bool collectionLibraryLoaded; // @synthesize collectionLibraryLoaded=_collectionLibraryLoaded;
- (_Bool)processSUInfo:(id)arg1 withError:(id *)arg2;	// IMP=0x000000010000fee4
- (id)copyIngestData:(id *)arg1;	// IMP=0x000000010000eee8
- (id)copyIngestHeaders:(id)arg1 withError:(id *)arg2;	// IMP=0x000000010000eb70
- (id)signatureForData:(id)arg1 error:(id *)arg2;	// IMP=0x000000010000ea78
- (id)signingKeyPublicKeyWithError:(id *)arg1;	// IMP=0x000000010000e970
- (id)collectPCRT:(id *)arg1;	// IMP=0x000000010000e77c
- (id)collectSIK:(id *)arg1;	// IMP=0x000000010000e340
- (id)collectSigningAttestation:(id *)arg1;	// IMP=0x000000010000e1e0
@property(readonly) struct __SecKey *signingKey; // @synthesize signingKey=_signingKey;
- (void)dealloc;	// IMP=0x000000010000de08
- (id)initWithContext:(id)arg1;	// IMP=0x000000010000dd90

@end
