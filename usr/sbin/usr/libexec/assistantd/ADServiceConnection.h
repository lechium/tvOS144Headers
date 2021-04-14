//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ADServiceStatistics, NSCountedSet, NSDictionary, NSMutableDictionary, NSString, NSXPCConnection;
@protocol ADServiceConnectionDelegate, OS_dispatch_queue;

@interface ADServiceConnection : NSObject
{
    NSObject<OS_dispatch_queue> *_targetQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_syncQueue;	// 16 = 0x10
    NSString *_identifier;	// 24 = 0x18
    NSString *_path;	// 32 = 0x20
    NSXPCConnection *_connection;	// 40 = 0x28
    _Bool _serviceLoaded;	// 48 = 0x30
    ADServiceStatistics *_stats;	// 56 = 0x38
    NSDictionary *_commandMap;	// 64 = 0x40
    NSDictionary *_anchorKeyClassMap;	// 72 = 0x48
    NSString *_domainObjectClearingClassName;	// 80 = 0x50
    NSString *_maintenanceClassName;	// 88 = 0x58
    _Bool _preheated;	// 96 = 0x60
    NSMutableDictionary *_watchdogTimersByUUID;	// 104 = 0x68
    NSCountedSet *_suspendedWatchdogTimerUUIDs;	// 112 = 0x70
    id <ADServiceConnectionDelegate> _delegate;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x00000001001dc430
@property(nonatomic) __weak id <ADServiceConnectionDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)_getTimeoutSuspendedWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000001001dc2ac
- (void)_handleCommand:(id)arg1 executionInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001001dc0fc
- (void)_getStarkModeWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000001001dbfa4
- (void)_getCarDNDModeWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000001001dbe5c
- (void)_getLockStateWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000001001dbd04
- (void)_openURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001dbba8
- (CDUnknownBlockType)_stopTimersWithContinuation;	// IMP=0x00000001001db53c
- (void)reloadServiceBundleAtPath:(id)arg1;	// IMP=0x00000001001db4d0
- (void)invalidate;	// IMP=0x00000001001db424
- (void)runMaintenanceWorkWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001001db320
- (void)preheatServiceBundle;	// IMP=0x00000001001db2c4
- (void)sendClearDomainObjects;	// IMP=0x00000001001db26c
- (void)sendFetchSyncSnapshotForInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001daf90
- (void)sendBeginSyncWithInfo:(id)arg1 chunkHandler:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001001da814
- (id)_syncClassForAnchorKey:(id)arg1;	// IMP=0x00000001001da804
- (void)sendClientBoundCommand:(id)arg1 domain:(id)arg2 executionContext:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x00000001001d9ac4
- (double)_timeoutForCommand:(id)arg1;	// IMP=0x00000001001d999c
- (void)_removeTimerForUUID:(id)arg1;	// IMP=0x00000001001d98f0
- (void)_addWatchdogTimer:(id)arg1 forUUID:(id)arg2;	// IMP=0x00000001001d980c
- (id)_bundleClassForDomain:(id)arg1 commandName:(id)arg2;	// IMP=0x00000001001d976c
- (id)_providerServiceDelegate;	// IMP=0x00000001001d9718
- (id)_providerServiceWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001001d9698
- (id)_providerService;	// IMP=0x00000001001d9644
- (id)_connection;	// IMP=0x00000001001d92c4
- (void)dealloc;	// IMP=0x00000001001d9274
- (id)initWithIdentifier:(id)arg1 path:(id)arg2 commandMap:(id)arg3 anchorMap:(id)arg4 clearingClass:(id)arg5 maintenanceClass:(id)arg6 queue:(id)arg7;	// IMP=0x00000001001d9024

@end

