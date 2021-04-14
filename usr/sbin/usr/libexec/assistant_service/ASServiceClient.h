//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AFProviderService-Protocol.h"
#import "ASServicesMonitorDelegate-Protocol.h"
#import "ASSyncConnectionDelegate-Protocol.h"

@class ASServicesMonitor, NSString, NSXPCConnection;

@interface ASServiceClient : NSObject <ASSyncConnectionDelegate, ASServicesMonitorDelegate, AFProviderService>
{
    NSXPCConnection *_connection;	// 8 = 0x8
    ASServicesMonitor *_servicesMonitor;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001000079bc
- (id)synchronousProviderServiceDelegateWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000079b0
- (id)providerServiceDelegateWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000079a4
- (oneway void)preheatBundleForServicePath:(id)arg1;	// IMP=0x0000000100007474
- (oneway void)clearDomainObjectsForServicePath:(id)arg1 className:(id)arg2;	// IMP=0x0000000100007288
- (_Bool)_classInstancesSufficientlyRespondToSyncSelectors:(Class)arg1;	// IMP=0x00000001000071e8
- (oneway void)fetchCurrentSyncSnapshotForServicePath:(id)arg1 className:(id)arg2 key:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100006df0
- (oneway void)reloadServiceBundleAtPath:(id)arg1;	// IMP=0x0000000100006d08
- (oneway void)runMaintenanceWorkForServicePath:(id)arg1 className:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100006958
- (oneway void)beginSyncForServicePath:(id)arg1 className:(id)arg2 requestUUID:(id)arg3 info:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x000000010000652c
- (oneway void)doCommandForServicePath:(id)arg1 className:(id)arg2 infoDictionary:(id)arg3 executionInfo:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x0000000100005520
- (void)barrierWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010000545c
- (id)_synchronousProviderServiceDelegateWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000052ac
- (id)_providerServiceDelegateWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000050ec
- (id)initWithConnection:(id)arg1 servicesMonitor:(id)arg2;	// IMP=0x0000000100004fe4
- (_Bool)sendSyncChunksWithPreAnchor:(id)arg1 postAnchor:(id)arg2 updates:(id)arg3 deletes:(id)arg4 validity:(id)arg5 forRequestUUID:(id)arg6;	// IMP=0x0000000100009364
- (void)serviceMonitorWillCrashAssistantServiceDueToPluginAtPath:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100009550

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
