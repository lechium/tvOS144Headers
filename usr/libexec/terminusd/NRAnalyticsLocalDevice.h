//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NRAnalytics.h"

@interface NRAnalyticsLocalDevice : NRAnalytics
{
    _Bool _deviceRegistrationSuccess;	// 16 = 0x10
    _Bool _devicePairedWithOOBKey;	// 17 = 0x11
    unsigned long long _deviceRegistrationStart;	// 24 = 0x18
    unsigned long long _deviceRegistrationEnd;	// 32 = 0x20
}

@property(nonatomic) _Bool devicePairedWithOOBKey; // @synthesize devicePairedWithOOBKey=_devicePairedWithOOBKey;
@property(nonatomic) _Bool deviceRegistrationSuccess; // @synthesize deviceRegistrationSuccess=_deviceRegistrationSuccess;
@property(nonatomic) unsigned long long deviceRegistrationEnd; // @synthesize deviceRegistrationEnd=_deviceRegistrationEnd;
@property(nonatomic) unsigned long long deviceRegistrationStart; // @synthesize deviceRegistrationStart=_deviceRegistrationStart;
- (void)submit;	// IMP=0x000000010009c6e8

@end
