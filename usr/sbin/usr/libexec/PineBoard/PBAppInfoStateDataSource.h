//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BBObserverDelegate-Protocol.h"
#import "FBSApplicationDataStoreObserver-Protocol.h"
#import "PBAppInfoStoreDynamicStateDataSource-Protocol.h"
#import "UISApplicationStateServiceDelegate-Protocol.h"

@class BBObserver, FBSApplicationDataStoreMonitor, NSMutableDictionary, NSMutableSet, NSString, UISApplicationStateService;
@protocol OS_dispatch_queue;

@interface PBAppInfoStateDataSource : NSObject <BBObserverDelegate, FBSApplicationDataStoreObserver, UISApplicationStateServiceDelegate, PBAppInfoStoreDynamicStateDataSource>
{
    NSObject<OS_dispatch_queue> *_accessQueue;	// 8 = 0x8
    NSMutableSet *_queue_bundleIdentifiersWithTerminationAssertions;	// 16 = 0x10
    NSMutableDictionary *_queue_appStateByBundleIdentifier;	// 24 = 0x18
    FBSApplicationDataStoreMonitor *_monitor;	// 32 = 0x20
    BBObserver *_bbObserver;	// 40 = 0x28
    UISApplicationStateService *_uiAppStateService;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000001001f59f8
@property(readonly, nonatomic) UISApplicationStateService *uiAppStateService; // @synthesize uiAppStateService=_uiAppStateService;
@property(readonly, nonatomic) BBObserver *bbObserver; // @synthesize bbObserver=_bbObserver;
@property(readonly, nonatomic) FBSApplicationDataStoreMonitor *monitor; // @synthesize monitor=_monitor;
@property(readonly, nonatomic) NSMutableDictionary *queue_appStateByBundleIdentifier; // @synthesize queue_appStateByBundleIdentifier=_queue_appStateByBundleIdentifier;
@property(readonly, nonatomic) NSMutableSet *queue_bundleIdentifiersWithTerminationAssertions; // @synthesize queue_bundleIdentifiersWithTerminationAssertions=_queue_bundleIdentifiersWithTerminationAssertions;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // @synthesize accessQueue=_accessQueue;
- (id)_queueDeleteStateForBundleIdentifier:(id)arg1;	// IMP=0x00000001001f57b0
- (id)_queueAppStateForBundleIdentifier:(id)arg1;	// IMP=0x00000001001f56a8
- (void)setNeedsUpdate;	// IMP=0x00000001001f556c
- (id)dataSourceForApplicationBundleIdentifier:(id)arg1;	// IMP=0x00000001001f54e0
- (void)dataStoreMonitor:(id)arg1 didInvalidateApplication:(id)arg2;	// IMP=0x00000001001f5460
- (void)dataStoreMonitor:(id)arg1 didUpdateApplication:(id)arg2 forKey:(id)arg3;	// IMP=0x00000001001f5394
- (void)observer:(id)arg1 noteServerConnectionStateChanged:(_Bool)arg2;	// IMP=0x00000001001f51f8
- (void)observer:(id)arg1 updateSectionInfo:(id)arg2;	// IMP=0x00000001001f50ec
- (void)_updateBadgeEnabledWithInfos:(id)arg1;	// IMP=0x00000001001f4d8c
- (void)invalidateStateForApplicationWithBundleIdentifier:(id)arg1;	// IMP=0x00000001001f4c58
- (void)setCacheDeleting:(_Bool)arg1 forApplicationWithBundleIdentifier:(id)arg2;	// IMP=0x00000001001f49e4
- (void)setRecentlyUpdated:(_Bool)arg1 forApplicationWithBundleIdentifier:(id)arg2;	// IMP=0x00000001001f481c
- (void)setBadgeEnabled:(_Bool)arg1 forApplicationWithBundleIdentifier:(id)arg2;	// IMP=0x00000001001f4654
- (void)setBadgeValue:(id)arg1 forApplicationWithBundleIdentifier:(id)arg2;	// IMP=0x00000001001f43a0
- (_Bool)isApplicationCacheDeleting:(id)arg1;	// IMP=0x00000001001f41d4
- (_Bool)isApplicationRecentlyUpdated:(id)arg1;	// IMP=0x00000001001f3fe8
- (_Bool)isBadgeEnabledForApplication:(id)arg1;	// IMP=0x00000001001f3dfc
- (id)badgeValueForApplication:(id)arg1;	// IMP=0x00000001001f3b4c
- (void)dealloc;	// IMP=0x00000001001f3aa8
- (id)init;	// IMP=0x00000001001f3758

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

