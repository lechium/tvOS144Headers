//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString, NSURL;

@interface InstallAttributionPingback : NSObject
{
    NSNumber *_appAdamId;	// 8 = 0x8
    NSString *_transactionId;	// 16 = 0x10
    NSNumber *_campaignId;	// 24 = 0x18
    NSString *_adNetworkId;	// 32 = 0x20
    NSString *_attributionSignature;	// 40 = 0x28
    NSURL *_pingbackUrl;	// 48 = 0x30
    long long _retryCount;	// 56 = 0x38
    NSNumber *_localTimestamp;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000001001a73e8
@property(readonly, nonatomic) NSNumber *localTimestamp; // @synthesize localTimestamp=_localTimestamp;
@property(readonly, nonatomic) long long retryCount; // @synthesize retryCount=_retryCount;
@property(readonly, nonatomic) NSURL *pingbackUrl; // @synthesize pingbackUrl=_pingbackUrl;
@property(readonly, nonatomic) NSString *attributionSignature; // @synthesize attributionSignature=_attributionSignature;
@property(readonly, nonatomic) NSString *adNetworkId; // @synthesize adNetworkId=_adNetworkId;
@property(readonly, nonatomic) NSNumber *campaignId; // @synthesize campaignId=_campaignId;
@property(readonly, nonatomic) NSString *transactionId; // @synthesize transactionId=_transactionId;
@property(readonly, nonatomic) NSNumber *appAdamId; // @synthesize appAdamId=_appAdamId;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001001a6fe4
- (id)description;	// IMP=0x00000001001a6f8c
- (id)initWithAppAdamId:(id)arg1 transactionId:(id)arg2 campaignId:(id)arg3 adNetworkId:(id)arg4 attributionSignature:(id)arg5 pingbackUrl:(id)arg6 retryCount:(long long)arg7 localTimestamp:(id)arg8;	// IMP=0x00000001001a6b6c

@end

