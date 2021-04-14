//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class InstallAttributionDatabaseStore;
@protocol OS_dispatch_queue, StoreKitBagContract;

@interface InstallAttributionManager : NSObject
{
    id <StoreKitBagContract> _bagContract;	// 8 = 0x8
    InstallAttributionDatabaseStore *_databaseStore;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 24 = 0x18
}

+ (void)registerInstallAttributionDatabaseCleanTask;	// IMP=0x00000001001223dc
+ (void)registerInstallAttributionPingbackRetryTask;	// IMP=0x0000000100120e8c
+ (id)sharedManager;	// IMP=0x000000010011f5b8
- (void).cxx_destruct;	// IMP=0x0000000100122e58
- (void)_removeUnregisteredInstallAttributionPingbacksBeforeDate:(id)arg1;	// IMP=0x0000000100122d08
- (void)_removeInstallAttributionParamsBeforeDate:(id)arg1;	// IMP=0x0000000100122bb8
- (void)_cleanDatabase;	// IMP=0x0000000100122800
- (void)_registerInstallAttributionDatabaseCleanTaskIfNeeded;	// IMP=0x0000000100122700
- (void)_sendMaturePingbacksWithXPCActivity:(id)arg1;	// IMP=0x0000000100121248
- (void)_registerInstallAttributionPingbackRetryTaskIfNeeded;	// IMP=0x0000000100120d54
- (void)_incrementPingbackRetryCountForApp:(id)arg1;	// IMP=0x0000000100120bfc
- (void)_removePingbackForApp:(id)arg1;	// IMP=0x00000001001209f8
- (void)updatePingbackWithConversionValue:(id)arg1 forApp:(id)arg2;	// IMP=0x00000001001206b0
- (void)setPingbackRegisteredForApp:(id)arg1;	// IMP=0x0000000100120490
- (id)getPingbackForApp:(id)arg1;	// IMP=0x0000000100120340
- (void)addPingback:(id)arg1;	// IMP=0x000000010011fe8c
- (id)addParams:(id)arg1 overrideCampaignLimit:(_Bool)arg2;	// IMP=0x000000010011f8d4
- (id)getParamsForApp:(id)arg1;	// IMP=0x000000010011f76c
- (id)init;	// IMP=0x000000010011f654

@end
