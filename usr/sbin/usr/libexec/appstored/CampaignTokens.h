//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CampaignTokens : NSObject
{
    NSString *_affiliateToken;	// 8 = 0x8
    NSString *_campaign;	// 16 = 0x10
    NSString *_campaignToken;	// 24 = 0x18
    NSString *_providerToken;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000001002cd100
@property(readonly, nonatomic) NSString *providerToken; // @synthesize providerToken=_providerToken;
@property(readonly, nonatomic) NSString *campaignToken; // @synthesize campaignToken=_campaignToken;
@property(readonly, nonatomic) NSString *campaign; // @synthesize campaign=_campaign;
@property(readonly, nonatomic) NSString *affiliateToken; // @synthesize affiliateToken=_affiliateToken;
- (void)_parseTokens:(id)arg1;	// IMP=0x00000001002ccda4
- (id)initWithURL:(id)arg1;	// IMP=0x00000001002ccd30

@end
