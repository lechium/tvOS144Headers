//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface ActivityManager : NSObject
{
    NSObject<OS_dispatch_queue> *_calloutQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
}

+ (long long)_activityTypeForName:(id)arg1;	// IMP=0x00000001002e42ac
+ (id)_activityNameForType:(long long)arg1;	// IMP=0x00000001002e41fc
+ (id)activityShortNameForType:(long long)arg1;	// IMP=0x00000001002e2b50
+ (id)sharedInstance;	// IMP=0x00000001002e2ab4
- (void).cxx_destruct;	// IMP=0x00000001002e634c
- (void)_setupActivities;	// IMP=0x00000001002e6154
- (void)_runXPCActivityIfNeeded:(id)arg1 withActivityName:(id)arg2;	// IMP=0x00000001002e6098
- (void)_registerActivity:(long long)arg1 activityShortName:(id)arg2 criteria:(id)arg3 reason:(id)arg4;	// IMP=0x00000001002e5e5c
- (id)_nextPostDateForActivity:(id)arg1 validatedRefreshInterval:(long long)arg2;	// IMP=0x00000001002e5cd4
- (void)_handleWakeupForActivity:(id)arg1;	// IMP=0x00000001002e57a4
- (void)_addRepeatingDailyActivity:(long long)arg1 requiresNetwork:(_Bool)arg2 reason:(id)arg3;	// IMP=0x00000001002e53a8
- (void)_addOcelotResetPayoutActivityWithReason:(id)arg1;	// IMP=0x00000001002e4d88
- (id)_addIntervalActivity:(long long)arg1 activityShortName:(id)arg2 scheduledDate:(id)arg3 refreshInverval:(long long)arg4 forceReset:(_Bool)arg5 reason:(id)arg6;	// IMP=0x00000001002e49c4
- (void)_addActivityType:(long long)arg1 reason:(id)arg2 forceReset:(_Bool)arg3;	// IMP=0x00000001002e4440
- (void)unregisterActivity:(id)arg1 withReason:(id)arg2;	// IMP=0x00000001002e4008
- (void)unregisterActivity:(long long)arg1;	// IMP=0x00000001002e3e78
- (void)resetActivity:(long long)arg1 reason:(id)arg2 forceReset:(_Bool)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x00000001002e3bac
- (void)resetActivity:(long long)arg1 reason:(id)arg2;	// IMP=0x00000001002e3b98
- (void)registerActivity:(long long)arg1 activityShortName:(id)arg2 scheduledDate:(id)arg3 withReason:(id)arg4;	// IMP=0x00000001002e3b08
- (void)registerActivity:(id)arg1 withReason:(id)arg2;	// IMP=0x00000001002e2f50
- (id)nextOcelotPayoutResetDate;	// IMP=0x00000001002e2dc0
- (_Bool)isActivityEnabled:(long long)arg1;	// IMP=0x00000001002e2c94
- (void)handleWakeWithName:(id)arg1;	// IMP=0x00000001002e2bfc
- (id)init;	// IMP=0x00000001002e29cc

@end
