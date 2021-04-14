//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MRAVDistantExternalDeviceClientProtocol-Protocol.h"
#import "MRAVDistantExternalDeviceServiceProtocol-Protocol.h"
#import "NSXPCListenerDelegate-Protocol.h"

@class MRAVDistantEndpoint, MRAVRoutingDiscoverySession, MRExternalOutputContextDataSource, MRTransportExternalDevice, NSArray, NSError, NSMutableSet, NSString, NSXPCListener, NSXPCListenerEndpoint;
@protocol OS_dispatch_queue;

@interface MRDAVHostedExternalDevice : NSObject <NSXPCListenerDelegate, MRAVDistantExternalDeviceServiceProtocol, MRAVDistantExternalDeviceClientProtocol>
{
    _Bool _useOutputDeviceCache;	// 8 = 0x8
    _Bool _tombstoned;	// 9 = 0x9
    NSArray *_subscribedPlayerPaths;	// 16 = 0x10
    MRTransportExternalDevice *_externalDevice;	// 24 = 0x18
    NSXPCListener *_xpcListener;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_serialQueue;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_externalDeviceCallbackQueue;	// 48 = 0x30
    NSMutableSet *_mutableExternalDeviceClients;	// 56 = 0x38
    MRExternalOutputContextDataSource *_externalOutputContext;	// 64 = 0x40
    MRAVDistantEndpoint *_endpoint;	// 72 = 0x48
    MRAVRoutingDiscoverySession *_silentDiscoverySession;	// 80 = 0x50
    NSError *_canMigrateToLocalEndpointError;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x000000010005802c
@property(retain, nonatomic) NSError *canMigrateToLocalEndpointError; // @synthesize canMigrateToLocalEndpointError=_canMigrateToLocalEndpointError;
@property(retain, nonatomic) MRAVRoutingDiscoverySession *silentDiscoverySession; // @synthesize silentDiscoverySession=_silentDiscoverySession;
@property(nonatomic) _Bool tombstoned; // @synthesize tombstoned=_tombstoned;
@property(nonatomic) _Bool useOutputDeviceCache; // @synthesize useOutputDeviceCache=_useOutputDeviceCache;
@property(readonly, nonatomic) MRAVDistantEndpoint *endpoint; // @synthesize endpoint=_endpoint;
@property(readonly, nonatomic) MRExternalOutputContextDataSource *externalOutputContext; // @synthesize externalOutputContext=_externalOutputContext;
@property(retain, nonatomic) NSMutableSet *mutableExternalDeviceClients; // @synthesize mutableExternalDeviceClients=_mutableExternalDeviceClients;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *externalDeviceCallbackQueue; // @synthesize externalDeviceCallbackQueue=_externalDeviceCallbackQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(retain, nonatomic) NSXPCListener *xpcListener; // @synthesize xpcListener=_xpcListener;
@property(readonly, nonatomic) MRTransportExternalDevice *externalDevice; // @synthesize externalDevice=_externalDevice;
@property(copy, nonatomic) NSArray *subscribedPlayerPaths; // @synthesize subscribedPlayerPaths=_subscribedPlayerPaths;
- (_Bool)_isEndpointsDesignatedGroupLeader:(id)arg1;	// IMP=0x0000000100057ec8
- (_Bool)_endpointIsSolo:(id)arg1;	// IMP=0x0000000100057ea0
- (_Bool)_endpointSupportsVolumeControl:(id)arg1;	// IMP=0x0000000100057dd4
- (_Bool)_endpointShouldPostVolumeNotifications:(id)arg1 outputDevice:(id)arg2;	// IMP=0x00000001000579f8
- (void)_onSerialQueue_reevaluateVolumeControlCapabilitiesForEndpoint:(id)arg1;	// IMP=0x000000010005743c
- (void)_postVolumeControlCapabilitiesDidChange:(unsigned int)arg1 endpoint:(id)arg2 outputDevice:(id)arg3;	// IMP=0x0000000100057098
- (void)_maybePostVolumeControlCapabilitiesDidChange:(unsigned int)arg1 outputDevice:(id)arg2;	// IMP=0x0000000100056f68
- (void)_postVolumeDidChange:(float)arg1 endpoint:(id)arg2 outputDevice:(id)arg3;	// IMP=0x0000000100056bc0
- (void)_maybePostVolumeDidChange:(float)arg1 outputDevice:(id)arg2;	// IMP=0x0000000100056a90
- (void)_resetExternalDevice:(id)arg1;	// IMP=0x000000010005694c
- (void)_reloadHostedExternalDeviceSubscribedPlayerPaths;	// IMP=0x0000000100056738
- (void)_reloadHostedExternalDeviceNotifications;	// IMP=0x00000001000564bc
- (void)_reloadHostedExternalDeviceCallbacks;	// IMP=0x000000010005611c
- (void)_reloadEndpoint;	// IMP=0x0000000100056030
- (void)registerForOutputContextNotifications:(id)arg1;	// IMP=0x0000000100055f78
- (void)_initializeExternalDevice:(id)arg1;	// IMP=0x0000000100055458
- (id)_externalDeviceClientPIDsSubscribedToNotification:(unsigned long long)arg1;	// IMP=0x0000000100055240
- (id)_mutableExternalDeviceClientsWithRegisteredCallbacks:(unsigned long long)arg1;	// IMP=0x0000000100054ff0
- (id)_allExternalDeviceClients;	// IMP=0x0000000100054ed8
- (id)_externalDeviceClientForConnection:(id)arg1;	// IMP=0x0000000100054c88
- (void)_externalDeviceClientDidInvalidate:(id)arg1;	// IMP=0x0000000100054b20
- (void)hostedExternalDeviceEndpointDidChange:(id)arg1;	// IMP=0x0000000100054880
- (void)hostedExternalDeviceVolumeCapabilitiesDidChange:(unsigned int)arg1 forEndpointWithIdentifier:(id)arg2 forOutputDeviceWithIdentifier:(id)arg3;	// IMP=0x0000000100054790
- (void)hostedExternalDeviceVolumeDidChange:(float)arg1 forEndpointWithIdentifier:(id)arg2 forOutputDeviceWithIdentifier:(id)arg3;	// IMP=0x00000001000545a4
- (void)hostedExternalDeviceDidReceiveCustomData:(id)arg1 withName:(id)arg2;	// IMP=0x00000001000543bc
- (void)hostedExternalDeviceNameDidChange:(id)arg1;	// IMP=0x000000010005420c
- (void)hostedExternalDeviceConnectionStateDidChange:(unsigned int)arg1 withError:(id)arg2;	// IMP=0x0000000100053fb4
- (void)outputContextDataSourceOutputDeviceDidChangeVolumeControlCapabilities:(id)arg1;	// IMP=0x0000000100053e44
- (void)outputContextDataSourceOutputDeviceDidChangeVolume:(id)arg1;	// IMP=0x0000000100053cd4
- (void)_processCanMigrateToLocalEndpointEvent:(id)arg1 error:(id)arg2;	// IMP=0x000000010005397c
- (void)_handleMaybeCanMigrateToLocalEndpointDidChange:(id)arg1;	// IMP=0x0000000100053404
- (void)_handleExternalDeviceConnectionDidChange:(id)arg1;	// IMP=0x0000000100053388
- (void)getPersonalOutputDevices:(CDUnknownBlockType)arg1;	// IMP=0x0000000100053300
- (void)sendButtonEventWithUsagePage:(unsigned int)arg1 usage:(unsigned int)arg2 down:(_Bool)arg3;	// IMP=0x00000001000532e4
- (void)pingWithTimeout:(double)arg1 callback:(CDUnknownBlockType)arg2;	// IMP=0x0000000100053114
- (void)sendCustomData:(id)arg1 withName:(id)arg2;	// IMP=0x0000000100052f7c
- (void)modifyByAddingDeviceUIDs:(id)arg1 removingDeviceUIDs:(id)arg2 settingDeviceUIDs:(id)arg3 addingClusterDeviceUIDs:(id)arg4 removingClusterDeviceUIDs:(id)arg5 settingClusterDeviceUIDs:(id)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x0000000100052d48
- (void)outputDeviceVolumeControlCapabilities:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100052b08
- (void)outputDeviceVolume:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100052898
- (void)setOutputDeviceVolume:(float)arg1 forOutputDevice:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000525d0
- (void)unpair;	// IMP=0x00000001000524b4
- (void)disconnect:(id)arg1;	// IMP=0x0000000100052370
- (void)connectWithOptions:(unsigned int)arg1 userInfo:(id)arg2;	// IMP=0x0000000100052100
- (void)setNotifications:(unsigned long long)arg1;	// IMP=0x0000000100051e54
- (unsigned long long)notifications;	// IMP=0x0000000100051dcc
- (void)setRegisteredCallbacks:(unsigned long long)arg1;	// IMP=0x0000000100051c70
- (unsigned long long)registeredCallbacks;	// IMP=0x0000000100051be8
- (void)getConnectionStateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100051b8c
- (void)getCustomOriginDataWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100051ae4
- (void)getExternalDeviceIsPairedWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100051a84
- (void)getExternalDeviceMetadataWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000518e4
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x000000010005122c
@property(readonly, nonatomic) NSArray *personalOutputDevices;
- (void)tombstone;	// IMP=0x0000000100050e14
- (id)externalDeviceClients;	// IMP=0x0000000100050cfc
@property(readonly, nonatomic) NSXPCListenerEndpoint *externalDeviceListenerEndpoint;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x0000000100050a64
- (id)initWithExternalDevice:(id)arg1;	// IMP=0x00000001000508e8

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
