//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CSEventMonitor.h"

@interface CSGestureMonitor : CSEventMonitor
{
    unsigned long long _wakeGestureTimestamp;	// 8 = 0x8
    unsigned long long _dismissalTimestamp;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x0000000100052ca0
@property(nonatomic) unsigned long long dismissalTimestamp; // @synthesize dismissalTimestamp=_dismissalTimestamp;
@property(nonatomic) unsigned long long wakeGestureTimestamp; // @synthesize wakeGestureTimestamp=_wakeGestureTimestamp;
- (_Bool)isTriggerHandheld;	// IMP=0x0000000100052ca8

@end

