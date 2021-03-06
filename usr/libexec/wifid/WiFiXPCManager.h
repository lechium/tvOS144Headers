//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CWFXPCManagerDelegate-Protocol.h"

@class CWFXPCManager, NSOperationQueue, NSString;

@interface WiFiXPCManager : NSObject <CWFXPCManagerDelegate>
{
    struct __WiFiManager *_managerRef;	// 8 = 0x8
    CWFXPCManager *_XPCManager;	// 16 = 0x10
    NSOperationQueue *_wifiManagerQueue;	// 24 = 0x18
}

+ (id)sharedXPCManager;	// IMP=0x00000001000ee108
- (void)XPCManager:(id)arg1 invalidatedXPCConnection:(id)arg2;	// IMP=0x00000001000ef000
- (void)XPCManager:(id)arg1 XPCConnection:(id)arg2 canceledXPCRequestsWithUUID:(id)arg3;	// IMP=0x00000001000eeffc
- (void)XPCManager:(id)arg1 XPCConnection:(id)arg2 receivedXPCRequest:(id)arg3;	// IMP=0x00000001000eec78
- (void)associationDoneWithNetwork:(struct __WiFiNetwork *)arg1 error:(int)arg2 interfaceName:(id)arg3;	// IMP=0x00000001000eeb14
- (void)willAssociateWithNetwork:(struct __WiFiNetwork *)arg1 isAutoJoin:(_Bool)arg2 interfaceName:(id)arg3;	// IMP=0x00000001000ee99c
- (void)autoJoinEndedWithResult:(_Bool)arg1 interfaceName:(id)arg2;	// IMP=0x00000001000ee84c
- (void)autoJoinUpdatedWithState:(long long)arg1 interfaceName:(id)arg2;	// IMP=0x00000001000ee6fc
- (void)autoJoinStartedWithTrigger:(long long)arg1 interfaceName:(id)arg2;	// IMP=0x00000001000ee5ac
- (void)sendWoWDidChangeEventWithInterfaceName:(id)arg1;	// IMP=0x00000001000ee500
- (_Bool)isDisableAutoJoinActivityRegistered;	// IMP=0x00000001000ee4f0
- (_Bool)isWoWActivityRegistered;	// IMP=0x00000001000ee4e0
- (_Bool)isWiFiBoundActivityRegistered;	// IMP=0x00000001000ee4d0
- (_Bool)isForegroundActivityRegistered;	// IMP=0x00000001000ee4c0
- (_Bool)isBackgroundActivityRegistered;	// IMP=0x00000001000ee4b0
- (_Bool)isQuiesceWiFiActivityRegistered;	// IMP=0x00000001000ee4a0
- (void)invalidate;	// IMP=0x00000001000ee490
- (void)activate;	// IMP=0x00000001000ee344
- (struct __WiFiManager *)getWiFiManager;	// IMP=0x00000001000ee33c
- (void)setWiFiManager:(struct __WiFiManager *)arg1;	// IMP=0x00000001000ee2f0
- (void)dealloc;	// IMP=0x00000001000ee264
- (id)init;	// IMP=0x00000001000ee16c
- (_Bool)__isActivityRegisteredWithType:(long long)arg1;	// IMP=0x00000001000edfdc
- (void)__handleActivity:(id)arg1;	// IMP=0x00000001000edea4
- (void)__setRangeable:(id)arg1;	// IMP=0x00000001000edb74
- (void)__performRanging:(id)arg1;	// IMP=0x00000001000ed304
- (void)__performANQP:(id)arg1;	// IMP=0x00000001000ecda4
- (void)__performScan:(id)arg1 XPCConnection:(id)arg2;	// IMP=0x00000001000ec3d4
- (void)__associate:(id)arg1 XPCConnection:(id)arg2;	// IMP=0x00000001000ebeac
- (void)__disassociate:(id)arg1;	// IMP=0x00000001000ebd40
- (void)__setPower:(id)arg1 XPCConnection:(id)arg2;	// IMP=0x00000001000ebbdc
- (void)__removeKnownNetworkProfile:(id)arg1;	// IMP=0x00000001000eba48
- (void)__updateKnownNetworkProfile:(id)arg1;	// IMP=0x00000001000eb8ec
- (void)__addKnownNetworkProfile:(id)arg1;	// IMP=0x00000001000eb5c4
- (void)__getSystemAWDLPeerTrafficRegistrations:(id)arg1;	// IMP=0x00000001000eb300
- (void)__setAWDLPeerTrafficRegistration:(id)arg1 XPCConnection:(id)arg2;	// IMP=0x00000001000eb154
- (id)__infoFromAWDLPeerTrafficRegistration:(id)arg1;	// IMP=0x00000001000ead60
- (id)__AWDLPeerTrafficRegistrationFromInfo:(id)arg1;	// IMP=0x00000001000ea9c0
- (void)__stopAWDLPeerAssistedDiscovery:(id)arg1;	// IMP=0x00000001000ea7c8
- (void)__startAWDLPeerAssistedDiscovery:(id)arg1;	// IMP=0x00000001000ea1bc
- (void)__setThermalIndex:(id)arg1;	// IMP=0x00000001000ea0d8
- (void)__getThermalIndex:(id)arg1;	// IMP=0x00000001000ea018
- (void)__getKnownNetworkProfiles:(id)arg1;	// IMP=0x00000001000e9d8c
- (void)__getCurrentNetworkProfile:(id)arg1;	// IMP=0x00000001000e9c00
- (void)__getCurrentScanResult:(id)arg1;	// IMP=0x00000001000e9b44
- (void)__getDeviceUUID:(id)arg1;	// IMP=0x00000001000e9a64
- (struct __WiFiNetwork *)__currentNetwork;	// IMP=0x00000001000e99a8
- (struct __WiFiNetwork *)__sessionBasedNetwork;	// IMP=0x00000001000e9984
- (struct __WiFiDeviceManager *)__deviceManagerWithInterfaceName:(id)arg1;	// IMP=0x00000001000e98a0
- (id)__supportedRequestTypes;	// IMP=0x00000001000e9894

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

