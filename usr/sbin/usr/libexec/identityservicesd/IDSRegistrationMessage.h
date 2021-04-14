//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FTServices/FTIDSMessage.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSData, NSDictionary, NSNumber, NSString;

@interface IDSRegistrationMessage : FTIDSMessage <NSCopying>
{
    NSData *_validationData;	// 232 = 0xe8
    NSArray *_responseServices;	// 240 = 0xf0
    NSString *_language;	// 248 = 0xf8
    NSArray *_services;	// 256 = 0x100
    NSString *_hardwareVersion;	// 264 = 0x108
    NSString *_osVersion;	// 272 = 0x110
    NSString *_softwareVersion;	// 280 = 0x118
    NSDictionary *_privateDeviceData;	// 288 = 0x120
    NSString *_deviceName;	// 296 = 0x128
    NSNumber *_responseHBI;	// 304 = 0x130
    NSData *_deviceScore;	// 312 = 0x138
    NSString *_deviceScoreNonce;	// 320 = 0x140
}

- (void).cxx_destruct;	// IMP=0x0000000100305228
@property(copy) NSString *deviceScoreNonce; // @synthesize deviceScoreNonce=_deviceScoreNonce;
@property(copy) NSData *deviceScore; // @synthesize deviceScore=_deviceScore;
@property(copy) NSNumber *responseHBI; // @synthesize responseHBI=_responseHBI;
@property(copy) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property(copy) NSDictionary *privateDeviceData; // @synthesize privateDeviceData=_privateDeviceData;
@property(copy) NSString *softwareVersion; // @synthesize softwareVersion=_softwareVersion;
@property(copy) NSString *osVersion; // @synthesize osVersion=_osVersion;
@property(copy) NSString *hardwareVersion; // @synthesize hardwareVersion=_hardwareVersion;
@property(copy) NSArray *services; // @synthesize services=_services;
@property(copy) NSString *language; // @synthesize language=_language;
@property(copy) NSArray *responseServices; // @synthesize responseServices=_responseServices;
@property(copy) NSData *validationData; // @synthesize validationData=_validationData;
- (void)handleResponseDictionary:(id)arg1;	// IMP=0x0000000100304b58
- (double)anisetteHeadersTimeout;	// IMP=0x0000000100304b40
- (id)nonStandardMessageHeadersForOutgoingPush;	// IMP=0x0000000100304b24
- (id)messageBody;	// IMP=0x0000000100304600
- (id)requiredKeys;	// IMP=0x0000000100304510
- (_Bool)isMultipleAuthCertCapable;	// IMP=0x00000001003044f0
- (id)bagKey;	// IMP=0x00000001003044d4
- (_Bool)requiresPushTokenKeys;	// IMP=0x00000001003044b4
- (_Bool)hasRequiredKeys:(id *)arg1;	// IMP=0x00000001003043b0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100303f58

@end

