//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FTServices/FTIDSMessage.h>

@class NSData, NSDate, NSNumber, NSString;

@interface IDSProvisionTemporaryPhoneMessage : FTIDSMessage
{
    NSString *_profileID;	// 232 = 0xe8
    NSString *_authToken;	// 240 = 0xf0
    NSString *_countryCode;	// 248 = 0xf8
    NSString *_networkCode;	// 256 = 0x100
    NSNumber *_responseStatus;	// 264 = 0x108
    NSData *_responseCertificate;	// 272 = 0x110
    NSDate *_responseCertificateExpiration;	// 280 = 0x118
}

- (void).cxx_destruct;	// IMP=0x00000001001bd270
@property(copy) NSDate *responseCertificateExpiration; // @synthesize responseCertificateExpiration=_responseCertificateExpiration;
@property(copy) NSData *responseCertificate; // @synthesize responseCertificate=_responseCertificate;
@property(copy) NSNumber *responseStatus; // @synthesize responseStatus=_responseStatus;
@property(copy) NSString *networkCode; // @synthesize networkCode=_networkCode;
@property(copy) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(copy) NSString *authToken; // @synthesize authToken=_authToken;
@property(copy) NSString *profileID; // @synthesize profileID=_profileID;
- (void)handleResponseDictionary:(id)arg1;	// IMP=0x00000001001bca70
- (id)additionalMessageHeaders;	// IMP=0x00000001001bc82c
- (id)messageBody;	// IMP=0x00000001001bc538
- (id)requiredKeys;	// IMP=0x00000001001bc494
- (id)bagKey;	// IMP=0x00000001001bc478
- (long long)responseCommand;	// IMP=0x00000001001bc460
- (long long)command;	// IMP=0x00000001001bc448
- (_Bool)wantsBinaryPush;	// IMP=0x00000001001bc428
- (_Bool)wantsCompressedBody;	// IMP=0x00000001001bc408
- (_Bool)wantsHTTPHeaders;	// IMP=0x00000001001bc3e8
- (_Bool)wantsBagKey;	// IMP=0x00000001001bc3c8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001001bc15c
- (void)addPhoneAuthenticationCertificate:(id)arg1 withUserID:(id)arg2;	// IMP=0x00000001001bc01c
- (id)init;	// IMP=0x00000001001bbea8

@end

