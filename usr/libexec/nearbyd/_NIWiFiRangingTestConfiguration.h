//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NIConfiguration.h"

@class NIDiscoveryToken, NSDictionary;

@interface _NIWiFiRangingTestConfiguration : NIConfiguration
{
    NIDiscoveryToken *_peerDiscoveryToken;	// 8 = 0x8
    NSDictionary *_parameters;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100156c04
- (void).cxx_destruct;	// IMP=0x00000001001571c0
@property(readonly, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(readonly, copy, nonatomic) NIDiscoveryToken *peerDiscoveryToken; // @synthesize peerDiscoveryToken=_peerDiscoveryToken;
- (id)descriptionInternal;	// IMP=0x000000010015708c
- (id)description;	// IMP=0x0000000100156fc0
- (unsigned long long)hash;	// IMP=0x0000000100156f64
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100156dfc
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100156c0c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100156b44
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100156af4
- (id)initWithDiscoveryToken:(id)arg1 wifiRangingParameters:(id)arg2;	// IMP=0x0000000100156a20

@end

