//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "AppUsageBaseManager.h"

@class NSNumber, NSObject, NSString, TaskQueue, UnfairLock;
@protocol OS_dispatch_queue;

@interface OcelotManager : AppUsageBaseManager
{
    int _appStoreCacheUpdatedNotificationToken;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_backgroundQueue;	// 16 = 0x10
    NSNumber *_cachedSubscribedAccountID;	// 24 = 0x18
    NSNumber *_cachedSubscribedState;	// 32 = 0x20
    NSString *_cachedSubscribedStateString;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_calloutQueue;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_distNotificationQueue;	// 64 = 0x40
    NSString *_hardwareFamily;	// 72 = 0x48
    NSString *_hardwareModel;	// 80 = 0x50
    _Bool _isRetailDemoMode;	// 88 = 0x58
    UnfairLock *_lock;	// 96 = 0x60
    NSString *_os;	// 104 = 0x68
    NSString *_osBuild;	// 112 = 0x70
    NSObject<OS_dispatch_queue> *_sbsyncQueue;	// 120 = 0x78
    TaskQueue *_taskQueue;	// 128 = 0x80
    NSObject<OS_dispatch_queue> *_topAppsQueue;	// 136 = 0x88
    NSObject<OS_dispatch_queue> *_upsellQueue;	// 144 = 0x90
}

+ (id)sharedInstance;	// IMP=0x00000001000bce4c
- (void).cxx_destruct;	// IMP=0x00000001000cb7dc
- (void)_updateCachedAppSubscriptionEntitlement:(id)arg1 logKey:(id)arg2;	// IMP=0x00000001000cb380
- (void)_updateLaunchdWakeupFileForMacOS;	// IMP=0x00000001000cb088
- (void)_topLaunchesForAccount:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001000c9f38
- (void)_terminateArcadeApps;	// IMP=0x00000001000c995c
- (id)_topLaunchesForAccountCachePath;	// IMP=0x00000001000c98d0
- (id)_topAppsDictionary;	// IMP=0x00000001000c96b0
- (id)_targetBundleIDs;	// IMP=0x00000001000c969c
- (id)_subscriptionStateForEntitlement:(id)arg1;	// IMP=0x00000001000c9664
- (id)_subscriptionState;	// IMP=0x00000001000c95e0
- (_Bool)_sbsyncIfHasAppsWithReason:(id)arg1 skipAppCheck:(_Bool)arg2 outError:(id *)arg3;	// IMP=0x00000001000c8fbc
- (void)_resetWithReason:(id)arg1 resetActivity:(_Bool)arg2 context:(id)arg3;	// IMP=0x00000001000c8d30
- (void)_resetDB:(id)arg1;	// IMP=0x00000001000c837c
- (void)_refreshAccountEventsIfNeeded;	// IMP=0x00000001000c7cf4
- (void)_recordLaunchEventsForContext:(id)arg1;	// IMP=0x00000001000c7948
- (void)_recordInternalEventsForBundleIDs:(id)arg1 eventType:(unsigned char)arg2 installType:(unsigned char)arg3 context:(id)arg4;	// IMP=0x00000001000c78f8
- (void)_recordExternalAppEvents:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001000c72ec
- (id)qualifiedEventsForWeekeStartingWithDate:(id)arg1 context:(id)arg2;	// IMP=0x00000001000c6d34
- (id)_payoutEvents:(id)arg1;	// IMP=0x00000001000c5bfc
- (void)_postMetrics:(id)arg1;	// IMP=0x00000001000c54d4
- (void)_logOcelotAppLaunchability;	// IMP=0x00000001000c5204
- (void)_initializeAcountState;	// IMP=0x00000001000c5060
- (void)_handleAppSubscriptionChange:(id)arg1 logKey:(id)arg2;	// IMP=0x00000001000c44a8
- (void)_handleRepairBundleIDNotification:(id)arg1;	// IMP=0x00000001000c3d20
- (_Bool)_isSubscribedToArcadeIgnoringMemoryCache:(_Bool)arg1 logKey:(id)arg2 ignoresFsEntitlementCache:(_Bool)arg3 timeout:(double)arg4 outError:(id *)arg5;	// IMP=0x00000001000c3c68
- (void)_initializeNetworkDependentBits:(id)arg1;	// IMP=0x00000001000c3b88
- (void)_handleNetworkStateDidChangeNotification:(id)arg1;	// IMP=0x00000001000c39e0
- (id)_getAppStoreSubscriptionEntitlementWithTimeout:(double)arg1 outError:(id *)arg2;	// IMP=0x00000001000c35ac
- (void)_getAppEventsWithAppUsageType:(long long)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001000c3218
- (void)_flushMetricsWithReason:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000c2f8c
- (void)_ensureDeviceIDIsValid;	// IMP=0x00000001000c2ae4
- (id)_deRezzedDateForLaunchDate:(id)arg1;	// IMP=0x00000001000c2a34
- (id)_createLaunchMetricsEventForAppEvent:(id)arg1 context:(id)arg2;	// IMP=0x00000001000c222c
- (void)_cleanup:(id)arg1 reason:(id)arg2;	// IMP=0x00000001000c213c
- (id)_allOcelotAppEvents:(id)arg1;	// IMP=0x00000001000c17f0
- (id)_activeAccountIDForAppEvent:(id)arg1 context:(id)arg2 withAccountEvents:(id)arg3;	// IMP=0x00000001000c1424
- (void)refreshAppMetadata;	// IMP=0x00000001000c128c
- (id)getLaunchAppEventsWithContext:(id)arg1;	// IMP=0x00000001000c0dc0
- (_Bool)isCandidateAppProxy:(id)arg1 isMetadataLookup:(_Bool)arg2;	// IMP=0x00000001000c0d60
- (void)decorateMetricsEvent:(id)arg1 context:(id)arg2;	// IMP=0x00000001000c0a04
- (id)createMetricsEventsForEventType:(unsigned char)arg1 context:(id)arg2;	// IMP=0x00000001000c0700
- (void)topAppsForAccount:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001000c0620
- (void)terminateArcadeApps;	// IMP=0x00000001000c0614
- (void)showOcelotUpsellForItemID:(id)arg1 relaunchOptions:(id)arg2;	// IMP=0x00000001000c0408
- (_Bool)showingUpsellDialog;	// IMP=0x00000001000c0400
@property(readonly, nonatomic) _Bool shouldPostOcelotMetrics;
- (void)setupWithReason:(id)arg1;	// IMP=0x00000001000bff78
- (void)sendSummaryMetricsWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001000bfce4
- (void)sendPayoutMetricsWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001000bfa50
- (void)sbsyncWithReason:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001000bf8d0
- (void)sbsyncManuallyWithReason:(id)arg1 duration:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000001000bf4a4
- (void)sbsyncIfSubscribedWithAccount:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001000bef2c
- (void)resetPayoutWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001000bec74
- (void)resetPayoutForDuetWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001000bea24
- (void)resetMetricsWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001000be820
- (void)recordSummaryMetricsWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001000be5cc
- (void)recordPayoutMetricsWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001000be378
- (void)recordInstalledApps:(id)arg1 installType:(unsigned char)arg2;	// IMP=0x00000001000bdeac
- (void)recordLaunchesWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001000bdc84
- (void)recordDeletedApps:(id)arg1;	// IMP=0x00000001000bd9c0
- (void)recordAppEvent:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001000bd740
- (_Bool)isSubscribedToArcade:(_Bool)arg1 timeout:(double)arg2 outError:(id *)arg3;	// IMP=0x00000001000bd584
@property(readonly, nonatomic) _Bool isSubscribedToOcelot;
- (void)handleAppStoreSubscriptionChange:(id)arg1 logKey:(id)arg2;	// IMP=0x00000001000bd488
- (void)getAppSummaryEventsWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001000bd2dc
- (void)getAppPayoutEventsWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001000bd128
- (void)flushMetricsWithReason:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000bcff0
- (long long)arcadeAppCount;	// IMP=0x00000001000bcee8
- (id)init;	// IMP=0x00000001000bc880

@end

