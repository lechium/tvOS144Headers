//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDSFoundation/IDSBaseMessage.h>

#import "NSCopying-Protocol.h"

@class NSData, NSString;

@interface IDSProfileMessage : IDSBaseMessage <NSCopying>
{
    NSData *_pushCert;	// 232 = 0xe8
    struct __SecKey *_pushKey;	// 240 = 0xf0
    struct __SecKey *_pushPublicKey;	// 248 = 0xf8
    NSData *_pushToken;	// 256 = 0x100
    NSString *_authToken;	// 264 = 0x108
    NSString *_profileID;	// 272 = 0x110
}

- (void).cxx_destruct;	// IMP=0x00000001001221a0
@property(copy, nonatomic) NSString *profileID; // @synthesize profileID=_profileID;
@property(copy, nonatomic) NSString *authToken; // @synthesize authToken=_authToken;
@property(copy, nonatomic) NSData *pushToken; // @synthesize pushToken=_pushToken;
@property(nonatomic) struct __SecKey *pushPublicKey; // @synthesize pushPublicKey=_pushPublicKey;
@property(nonatomic) struct __SecKey *pushPrivateKey; // @synthesize pushPrivateKey=_pushKey;
@property(copy, nonatomic) NSData *pushCertificate; // @synthesize pushCertificate=_pushCert;
- (void)handleResponseDictionary:(id)arg1;	// IMP=0x0000000100121ea8
- (id)additionalMessageHeaders;	// IMP=0x0000000100121bc4
- (id)additionalMessageHeadersForOutgoingPush;	// IMP=0x0000000100121848
- (_Bool)hasRequiredKeys:(id *)arg1;	// IMP=0x0000000100121694
- (long long)responseCommand;	// IMP=0x000000010012167c
- (long long)command;	// IMP=0x0000000100121664
- (_Bool)wantsBinaryPush;	// IMP=0x0000000100121644
- (_Bool)wantsCompressedBody;	// IMP=0x0000000100121624
- (_Bool)wantsHTTPHeaders;	// IMP=0x0000000100121604
- (_Bool)wantsBagKey;	// IMP=0x00000001001215e4
- (void)dealloc;	// IMP=0x00000001001213ac
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010012115c
- (id)init;	// IMP=0x0000000100120fcc

@end

