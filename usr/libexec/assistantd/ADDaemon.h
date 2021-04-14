//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSXPCListenerDelegate-Protocol.h"
#import "PSYSyncCoordinatorDelegate-Protocol.h"

@class ADClientLiteListener, ADExternalRequestListener, ADPeerLocationRemote, ADSiriConnectionRemote, ADSiriTetherListener, NSCountedSet, NSMutableSet, NSString, NSXPCListener;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface ADDaemon : NSObject <NSXPCListenerDelegate, PSYSyncCoordinatorDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSXPCListener *_analyticsListener;	// 16 = 0x10
    NSXPCListener *_analyticsObservationListener;	// 24 = 0x18
    NSXPCListener *_clientListener;	// 32 = 0x20
    NSXPCListener *_dictationListener;	// 40 = 0x28
    NSXPCListener *_settingsListener;	// 48 = 0x30
    NSXPCListener *_synapseSyncListener;	// 56 = 0x38
    NSXPCListener *_managedStorageListener;	// 64 = 0x40
    NSXPCListener *_securityListener;	// 72 = 0x48
    NSXPCListener *_notificationServiceListener;	// 80 = 0x50
    NSXPCListener *_audioSessionAssertionServiceListener;	// 88 = 0x58
    NSObject<OS_xpc_object> *_syncListener;	// 96 = 0x60
    ADExternalRequestListener *_externalRequestListener;	// 104 = 0x68
    ADClientLiteListener *_clientLiteListener;	// 112 = 0x70
    ADSiriTetherListener *_siriTetherListener;	// 120 = 0x78
    unsigned long long _lastSyncRequested;	// 128 = 0x80
    NSMutableSet *_syncReasonsQueued;	// 136 = 0x88
    _Bool _syncActivityRegistered;	// 144 = 0x90
    ADSiriConnectionRemote *_proxyRemote;	// 152 = 0x98
    ADPeerLocationRemote *_peerLocationManagerRemote;	// 160 = 0xa0
    _Bool _unlockedWorkQueueIsSuspended;	// 168 = 0xa8
    NSObject<OS_dispatch_queue> *_unlockedWorkQueue;	// 176 = 0xb0
    NSObject<OS_dispatch_queue> *_dictationListenerQueue;	// 184 = 0xb8
    NSCountedSet *_dictationPidSet;	// 192 = 0xc0
    struct MGNotificationTokenStruct *_mg_notification_token;	// 200 = 0xc8
}

+ (unsigned long long)processLaunchMachTime;	// IMP=0x000000010009f838
+ (double)processLaunchTime;	// IMP=0x000000010009f82c
+ (id)sharedDaemon;	// IMP=0x000000010009f770
- (void).cxx_destruct;	// IMP=0x00000001000a5898
- (void)_setupOfflineDictationStatusObserver;	// IMP=0x00000001000a5870
- (void)scheduleUnlockedWork:(CDUnknownBlockType)arg1;	// IMP=0x00000001000a5778
- (void)scheduleValidationRefreshForInterval:(double)arg1;	// IMP=0x00000001000a5774
- (void)unscheduleDestroyJob;	// IMP=0x00000001000a5770
- (void)scheduleDestroyJob;	// IMP=0x00000001000a576c
- (void)_syncForReason:(id)arg1 withCoalescing:(_Bool)arg2;	// IMP=0x00000001000a5454
- (void)syncForReason:(id)arg1 withCoalescing:(_Bool)arg2;	// IMP=0x00000001000a53a8
- (void)_syncCoalesced;	// IMP=0x00000001000a5198
- (void)_setupSessionLanguage;	// IMP=0x00000001000a5150
- (void)_daemonWillShutdown;	// IMP=0x00000001000a5044
- (void)_daemonDidLaunch;	// IMP=0x00000001000a4bd0
- (void)_setupAudioSessionAssertionAcquisitionService;	// IMP=0x00000001000a4b68
- (void)_setupCacheDelete;	// IMP=0x00000001000a4510
- (void)_setupNanoPreferences;	// IMP=0x00000001000a450c
- (void)_setupWirelessCoexManagerSubscription;	// IMP=0x00000001000a4508
- (void)_setupMemoryPressureObservation;	// IMP=0x00000001000a44e0
- (void)_setupMultiUserCloudSyncer;	// IMP=0x00000001000a44dc
- (void)_setupCloudKit;	// IMP=0x00000001000a4494
- (void)_setupHomeKit;	// IMP=0x00000001000a446c
- (void)syncCoordinator:(id)arg1 beginSyncSession:(id)arg2;	// IMP=0x00000001000a4254
- (void)_setupPairedSync;	// IMP=0x00000001000a41f8
- (void)_setupClientLiteListener;	// IMP=0x00000001000a41b4
- (void)_setupExternalRequestListener;	// IMP=0x00000001000a416c
- (void)_setupTetherListener;	// IMP=0x00000001000a4128
- (void)_registerForSyncNotifications;	// IMP=0x00000001000a3ff0
- (void)_enabledBitsChanged:(id)arg1;	// IMP=0x00000001000a3f9c
- (void)_setupSyncListener;	// IMP=0x00000001000a3dec
- (void)_setupMobileGestaltNotificationHandlers;	// IMP=0x00000001000a3cbc
- (void)_setupDistributedNotificationHandlers;	// IMP=0x00000001000a3a6c
- (void)_setupNotifyHandlers;	// IMP=0x00000001000a3498
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00000001000a3340
- (_Bool)_audioSessionAssertionServiceListenerShouldAcceptNewConnection:(id)arg1;	// IMP=0x00000001000a2ee4
- (void)_setupAudioSessionAssertionServiceListener;	// IMP=0x00000001000a2e74
- (_Bool)_notificationServiceListenerShouldAcceptNewConnection:(id)arg1;	// IMP=0x00000001000a2a78
- (void)_setupNotificationServiceListener;	// IMP=0x00000001000a29ec
- (_Bool)_securityListenerShouldAcceptNewConnection:(id)arg1;	// IMP=0x00000001000a2650
- (void)_setupSecurityListener;	// IMP=0x00000001000a25e0
- (_Bool)_analyticsObservationListenerShouldAcceptNewConnection:(id)arg1;	// IMP=0x00000001000a2214
- (void)_setupAnalyticsObservationListener;	// IMP=0x00000001000a21a4
- (_Bool)_analyticsListenerShouldAcceptNewConnection:(id)arg1;	// IMP=0x00000001000a1cf4
- (void)_setupAnalyticsListener;	// IMP=0x00000001000a1c28
- (void)_setupContextListener;	// IMP=0x00000001000a1c24
- (_Bool)_managedStorageListenerShouldAcceptNewConnection:(id)arg1;	// IMP=0x00000001000a196c
- (void)_setupManagedStorageListener;	// IMP=0x00000001000a18fc
- (_Bool)_synapseSyncListenerShouldAcceptNewConnection:(id)arg1;	// IMP=0x00000001000a149c
- (void)_bundleID:(id *)arg1 andPath:(id *)arg2 forPID:(int)arg3;	// IMP=0x00000001000a12b4
- (void)_setupSynapseSyncListener;	// IMP=0x00000001000a1244
- (void)_setupSettingsListener;	// IMP=0x00000001000a1190
- (_Bool)_settingsListenerShouldAcceptNewConnection:(id)arg1;	// IMP=0x00000001000a0e00
- (void)_setupDictationListener;	// IMP=0x00000001000a0d18
- (_Bool)_dictationListenerShouldAcceptNewConnection:(id)arg1;	// IMP=0x00000001000a0818
- (void)startUISpeechRequest;	// IMP=0x00000001000a07f8
- (void)startUIRequestWithInfo:(id)arg1;	// IMP=0x00000001000a073c
- (_Bool)_clientListenerShouldAcceptNewConnection:(id)arg1;	// IMP=0x00000001000a0170
- (void)_setupClientListener;	// IMP=0x00000001000a0080
- (id)_peerLocationService;	// IMP=0x000000010009ffa8
- (id)_proxyService;	// IMP=0x000000010009fed0
- (void)_setupIDSServices;	// IMP=0x000000010009fdd8
- (void)_setupRapportServices;	// IMP=0x000000010009fc50
- (void)_setupInternal;	// IMP=0x000000010009fb6c
- (void)keepAlive;	// IMP=0x000000010009fa64
- (void)shutdown;	// IMP=0x000000010009fa48
- (void)run;	// IMP=0x000000010009f9d8
- (void)dealloc;	// IMP=0x000000010009f8f0
- (id)init;	// IMP=0x000000010009f844

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

