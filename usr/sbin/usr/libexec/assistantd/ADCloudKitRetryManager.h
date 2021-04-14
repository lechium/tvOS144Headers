//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface ADCloudKitRetryManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000001000e3a8c
- (void)cancelShareCreationTimer:(id)arg1;	// IMP=0x00000001000e39f0
- (void)cancelSubscriptionSetupTimerForZoneInfo:(id)arg1;	// IMP=0x00000001000e3954
- (void)cancelRecordZoneSetupTimerForZoneInfo:(id)arg1;	// IMP=0x00000001000e38b8
- (void)cancelSyncRetryTimerForZoneInfo:(id)arg1;	// IMP=0x00000001000e381c
- (void)cancelRateLimitTimerForZoneInfo:(id)arg1;	// IMP=0x00000001000e3780
- (_Bool)handleRateLimitedError:(id)arg1 forZoneInfo:(id)arg2 operationType:(long long)arg3;	// IMP=0x00000001000e362c
- (void)retryForType:(long long)arg1 zoneInfo:(id)arg2 error:(id)arg3;	// IMP=0x00000001000e353c
- (void)retryForTypeOnRetryManagerQueue:(long long)arg1 zoneInfo:(id)arg2 error:(id)arg3 retryAfterInterval:(double)arg4;	// IMP=0x00000001000e28f0
- (id)initWithQueue:(id)arg1;	// IMP=0x00000001000e2878

@end

