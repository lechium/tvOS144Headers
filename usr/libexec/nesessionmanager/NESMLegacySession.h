//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NESMSession.h"

@class NEVPNProtocol, NSArray, NSDictionary, NSString;

@interface NESMLegacySession : NESMSession
{
    int _sessionType;	// 8 = 0x8
    NEVPNProtocol *_protocol;	// 16 = 0x10
    struct _ne_sm_bridge *_bridge;	// 24 = 0x18
    NSArray *_agentPIDs;	// 32 = 0x20
    NSDictionary *_userOptions;	// 40 = 0x28
}

+ (id)parseRoutingTableMessage:(const struct rt_msghdr2 *)arg1 forInterfaceName:(const char *)arg2;	// IMP=0x000000010005f98c
- (void).cxx_destruct;	// IMP=0x00000001000620f8
@property(retain) NSDictionary *userOptions; // @synthesize userOptions=_userOptions;
@property(retain) NSArray *agentPIDs; // @synthesize agentPIDs=_agentPIDs;
@property struct _ne_sm_bridge *bridge; // @synthesize bridge=_bridge;
@property int sessionType; // @synthesize sessionType=_sessionType;
@property(retain) NEVPNProtocol *protocol; // @synthesize protocol=_protocol;
- (void)handleInitializeState;	// IMP=0x0000000100061d2c
- (void)handleInstalledAppsChanged;	// IMP=0x00000001000618dc
- (void)handleDeviceUnlock;	// IMP=0x0000000100061800
- (void)handleDeviceLock;	// IMP=0x0000000100061724
- (void)handleUserSwitch;	// IMP=0x0000000100061648
- (void)handleUserLogout;	// IMP=0x000000010006156c
- (_Bool)handleUpdateConfiguration:(id)arg1;	// IMP=0x00000001000612c0
- (void)uninstall;	// IMP=0x0000000100061090
- (void)install;	// IMP=0x00000001000607ec
- (void)applyTunnelRouteEnforcementPoliciesForInterfaceName:(id)arg1;	// IMP=0x0000000100060584
- (id)getPIDsFromBridge;	// IMP=0x0000000100060314
- (id)getIncludedRoutesFromDynamicStore;	// IMP=0x00000001000600cc
- (id)getIncludedRoutesFromRoutingTableForInterfaceName:(const char *)arg1;	// IMP=0x000000010005fd3c
- (void)updateDNSSkipPoliciesForInterfaceName:(id)arg1;	// IMP=0x000000010005f838
- (void)handleGetInfoMessage:(id)arg1 withType:(int)arg2;	// IMP=0x000000010005f43c
- (void)handleSecuritySessionInfoRequest:(id)arg1;	// IMP=0x000000010005f2b0
- (void)handleChangeEventForInterface:(id)arg1 newFlags:(unsigned long long)arg2 previousFlags:(unsigned long long)arg3;	// IMP=0x000000010005ec28
- (void)handleWakeup;	// IMP=0x000000010005eaec
- (void)handleSleepTime:(double)arg1;	// IMP=0x000000010005ea1c
- (_Bool)handleSleep;	// IMP=0x000000010005e920
- (void)handleStopMessageWithReason:(int)arg1;	// IMP=0x000000010005e804
- (void)handleStartMessage:(id)arg1;	// IMP=0x000000010005e07c
- (id)addDecryptedPasswordsToOptions:(id)arg1;	// IMP=0x000000010005d974
- (void)performBlockOnMainRunLoop:(CDUnknownBlockType)arg1;	// IMP=0x000000010005d92c
- (void)handleDisposable;	// IMP=0x000000010005d884
- (id)copyIPv4Dictionary;	// IMP=0x000000010005d7b4
- (id)copyDNSDictionary;	// IMP=0x000000010005d6e4
- (_Bool)hasDNSInstalled;	// IMP=0x000000010005d600
- (_Bool)hasProxiesInstalled;	// IMP=0x000000010005d4bc
@property(readonly) NSString *interfaceName;
- (void)dealloc;	// IMP=0x000000010005d140
- (int)type;	// IMP=0x000000010005d134
- (id)initWithConfiguration:(id)arg1 andServer:(id)arg2 andProtocol:(id)arg3 andSessionType:(int)arg4;	// IMP=0x000000010005ce38

@end

