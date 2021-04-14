//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CBController, CBDaemonServer, CBDiscovery, CBSpatialInteractionSession, NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface CBDaemonXPCConnection : NSObject
{
    _Bool _spatialActivateResponded;	// 8 = 0x8
    NSMutableDictionary *_spatialDeviceMapMatched;	// 16 = 0x10
    NSMutableDictionary *_spatialDeviceMapUnmatched;	// 24 = 0x18
    NSMutableArray *_spatialPeers;	// 32 = 0x20
    _Bool _entitled;	// 40 = 0x28
    int _pid;	// 44 = 0x2c
    CBController *_activatedController;	// 48 = 0x30
    CBDiscovery *_activatedDiscovery;	// 56 = 0x38
    CBSpatialInteractionSession *_activatedSpatialInteractionSession;	// 64 = 0x40
    NSMutableDictionary *_deviceMap;	// 72 = 0x48
    CBDaemonServer *_daemon;	// 80 = 0x50
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 88 = 0x58
    NSObject<OS_xpc_object> *_xpcCnx;	// 96 = 0x60
    unsigned long long _xpcToken;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x000000010004b69c
@property(nonatomic) unsigned long long xpcToken; // @synthesize xpcToken=_xpcToken;
@property(retain, nonatomic) NSObject<OS_xpc_object> *xpcCnx; // @synthesize xpcCnx=_xpcCnx;
@property(nonatomic) int pid; // @synthesize pid=_pid;
@property(nonatomic) _Bool entitled; // @synthesize entitled=_entitled;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(retain, nonatomic) CBDaemonServer *daemon; // @synthesize daemon=_daemon;
@property(retain, nonatomic) NSMutableDictionary *deviceMap; // @synthesize deviceMap=_deviceMap;
@property(retain, nonatomic) CBSpatialInteractionSession *activatedSpatialInteractionSession; // @synthesize activatedSpatialInteractionSession=_activatedSpatialInteractionSession;
@property(retain, nonatomic) CBDiscovery *activatedDiscovery; // @synthesize activatedDiscovery=_activatedDiscovery;
@property(retain, nonatomic) CBController *activatedController; // @synthesize activatedController=_activatedController;
- (void)_xpcSpatialInteractionAOPDataReceived:(id)arg1;	// IMP=0x000000010004b4e8
- (void)_xpcPowerStateChanged:(long long)arg1;	// IMP=0x000000010004b46c
- (void)_xpcInquiryStateChanged:(int)arg1;	// IMP=0x000000010004b3f0
- (void)_xpcDiscoverableStateChanged:(int)arg1;	// IMP=0x000000010004b374
- (void)_xpcDeviceLost:(id)arg1;	// IMP=0x000000010004b2e8
- (void)_xpcDeviceFound:(id)arg1;	// IMP=0x000000010004b25c
- (void)_xpcAdvertisingAddressChanged;	// IMP=0x000000010004b12c
- (void)_spatialInteractionSystemOverrideChanged;	// IMP=0x000000010004b088
- (id)_spatialInteractionDecodePeerTokenRequest:(id)arg1 error:(id *)arg2;	// IMP=0x000000010004ae60
- (void)_spatialInteractionReevaluateDevices;	// IMP=0x000000010004aa84
- (void)_spatialInteractionDeviceLost:(id)arg1 removeUnmatched:(_Bool)arg2 reason:(const char *)arg3;	// IMP=0x000000010004a8e0
- (void)_spatialInteractionDeviceFound:(id)arg1 checkOnly:(_Bool)arg2;	// IMP=0x0000000100049cfc
- (void)_xpcCBSpatialInteractionSessionRemovePeerToken:(id)arg1;	// IMP=0x0000000100049698
- (void)_xpcCBSpatialInteractionSessionAddPeerToken:(id)arg1;	// IMP=0x0000000100048f88
- (void)_xpcCBSpatialInteractionSessionUpdate:(id)arg1;	// IMP=0x0000000100048bac
- (void)_xpcCBSpatialInteractionSessionActivate:(id)arg1;	// IMP=0x0000000100047fd0
- (void)_xpcCBDiscoveryActivate:(id)arg1;	// IMP=0x00000001000479bc
- (void)_xpcUpdateIdentities:(id)arg1;	// IMP=0x0000000100047528
- (void)_xpcSetPowerState:(id)arg1;	// IMP=0x0000000100047228
- (void)_xpcGetPowerState:(id)arg1;	// IMP=0x0000000100047050
- (void)_xpcDiagnosticShow:(id)arg1;	// IMP=0x0000000100046bb0
- (void)_xpcDiagnosticLog:(id)arg1;	// IMP=0x00000001000467d8
- (void)_xpcDiagnosticDiscovery;	// IMP=0x0000000100046238
- (void)_xpcDiagnosticAssertion;	// IMP=0x0000000100045f3c
- (void)_xpcDiagnosticAdvertiser;	// IMP=0x0000000100045a88
- (void)_xpcDiagnosticControl:(id)arg1;	// IMP=0x000000010004513c
- (void)_xpcModifyDevice:(id)arg1;	// IMP=0x0000000100044cb4
- (void)_xpcGetControllerInfo:(id)arg1;	// IMP=0x0000000100044a98
- (void)_xpcCBControllerActivate:(id)arg1;	// IMP=0x0000000100044578
- (void)_xpcSendReplyError:(id)arg1 request:(id)arg2;	// IMP=0x0000000100044420
- (void)_xpcSendMessage:(id)arg1;	// IMP=0x0000000100044380
- (void)_xpcConnectionRequest:(id)arg1;	// IMP=0x000000010004403c
- (void)xpcConnectionEvent:(id)arg1;	// IMP=0x0000000100043f0c
- (void)reportDeviceLost:(id)arg1;	// IMP=0x0000000100043e38
- (void)reportDeviceFound:(id)arg1;	// IMP=0x0000000100043c5c
- (_Bool)_entitledAndReturnError:(id *)arg1;	// IMP=0x0000000100043a88
- (void)aopMessageReceived:(id)arg1;	// IMP=0x0000000100043a20
- (void)invalidate;	// IMP=0x00000001000437e8
- (void)activate;	// IMP=0x000000010004376c
- (id)descriptionWithLevel:(int)arg1;	// IMP=0x0000000100042fe0
- (id)description;	// IMP=0x0000000100042fd0

@end

