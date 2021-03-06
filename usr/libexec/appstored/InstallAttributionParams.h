//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface InstallAttributionParams : NSObject
{
    NSNumber *_appAdamId;	// 8 = 0x8
    NSString *_adNetworkId;	// 16 = 0x10
    NSNumber *_campaignId;	// 24 = 0x18
    NSString *_impressionId;	// 32 = 0x20
    NSNumber *_sourceAppAdamId;	// 40 = 0x28
    NSNumber *_timestamp;	// 48 = 0x30
    NSString *_attributionSignature;	// 56 = 0x38
    NSString *_version;	// 64 = 0x40
    NSNumber *_localTimestamp;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000100147bd4
@property(retain, nonatomic) NSNumber *localTimestamp; // @synthesize localTimestamp=_localTimestamp;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *attributionSignature; // @synthesize attributionSignature=_attributionSignature;
@property(retain, nonatomic) NSNumber *timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSNumber *sourceAppAdamId; // @synthesize sourceAppAdamId=_sourceAppAdamId;
@property(retain, nonatomic) NSString *impressionId; // @synthesize impressionId=_impressionId;
@property(retain, nonatomic) NSNumber *campaignId; // @synthesize campaignId=_campaignId;
@property(retain, nonatomic) NSString *adNetworkId; // @synthesize adNetworkId=_adNetworkId;
@property(retain, nonatomic) NSNumber *appAdamId; // @synthesize appAdamId=_appAdamId;

@end

