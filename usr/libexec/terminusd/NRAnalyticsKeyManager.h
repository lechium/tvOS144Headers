//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NRAnalytics.h"

@interface NRAnalyticsKeyManager : NRAnalytics
{
    _Bool _queryKeysSuccess;	// 16 = 0x10
    unsigned long long _queryKeysStart;	// 24 = 0x18
    unsigned long long _queryKeysEnd;	// 32 = 0x20
}

@property(nonatomic) _Bool queryKeysSuccess; // @synthesize queryKeysSuccess=_queryKeysSuccess;
@property(nonatomic) unsigned long long queryKeysEnd; // @synthesize queryKeysEnd=_queryKeysEnd;
@property(nonatomic) unsigned long long queryKeysStart; // @synthesize queryKeysStart=_queryKeysStart;
- (void)submit;	// IMP=0x000000010009c9a8

@end

