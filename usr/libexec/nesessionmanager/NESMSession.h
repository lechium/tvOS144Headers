//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NESMPowerManagerDelegate-Protocol.h"

@class NEConfiguration, NENetworkAgent, NEOnDemandRule, NEPolicySession, NESMPolicySession, NESMServer, NSArray, NSData, NSDate, NSError, NSMutableArray, NSNumber, NSString, NWMonitor, NWNetworkAgentRegistration, NWResolver;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_transaction, OS_xpc_object;

@interface NESMSession : NSObject <NESMPowerManagerDelegate>
{
    NSString *_description;	// 8 = 0x8
    int _lastStopReason;	// 16 = 0x10
    NSError *_lastDisconnectError;	// 24 = 0x18
    _Bool _isOnDemand;	// 32 = 0x20
    _Bool _restartPending;	// 33 = 0x21
    _Bool _disableOnDemand;	// 34 = 0x22
    _Bool _isDropPersistent;	// 35 = 0x23
    int _status;	// 36 = 0x24
    int _type;	// 40 = 0x28
    NSMutableArray *_clients;	// 48 = 0x30
    NSObject<OS_os_transaction> *_activeTransaction;	// 56 = 0x38
    NESMServer *_server;	// 64 = 0x40
    NEConfiguration *_configuration;	// 72 = 0x48
    NSData *_configurationSignature;	// 80 = 0x50
    NSArray *_configurationUserUUIDs;	// 88 = 0x58
    NSObject<OS_dispatch_queue> *_queue;	// 96 = 0x60
    NSObject<OS_dispatch_queue> *_messageQueue;	// 104 = 0x68
    NSNumber *_uid;	// 112 = 0x70
    NSNumber *_gid;	// 120 = 0x78
    unsigned long long _connectTime;	// 128 = 0x80
    long long _connectCount;	// 136 = 0x88
    long long _connectedCount;	// 144 = 0x90
    long long _disconnectedCount;	// 152 = 0x98
    unsigned long long _maxConnectTime;	// 160 = 0xa0
    NESMPolicySession *_policySession;	// 168 = 0xa8
    long long _failedConnectCountWithinInterval;	// 176 = 0xb0
    NSDate *_firstFailedConnectTime;	// 184 = 0xb8
    NSDate *_lastStatusChangeTime;	// 192 = 0xc0
    NSString *_auxiliaryDataKey;	// 200 = 0xc8
    NEPolicySession *_controlPolicySession;	// 208 = 0xd0
    NEPolicySession *_highPolicySession;	// 216 = 0xd8
    NWNetworkAgentRegistration *_networkAgentRegistration;	// 224 = 0xe0
    NENetworkAgent *_networkAgent;	// 232 = 0xe8
    NWMonitor *_onDemandMonitor;	// 240 = 0xf0
    NEOnDemandRule *_matchedRule;	// 248 = 0xf8
    NSMutableArray *_networkAgentInterfaces;	// 256 = 0x100
    NSArray *_registeredNetworkAgentInterfaces;	// 264 = 0x108
    long long _onDemandPauseLevelInternal;	// 272 = 0x110
    NSObject<OS_dispatch_source> *_onDemandPauseTimerSource;	// 280 = 0x118
    NSMutableArray *_staleOnDemandDNSKeys;	// 288 = 0x120
    NWResolver *_dnsRedirectionDetector;	// 296 = 0x128
    NSObject<OS_os_transaction> *_dnsRedirectionTransaction;	// 304 = 0x130
    NSString *_lastPrimaryInterface;	// 312 = 0x138
    NSMutableArray *_onDemandDomainCache;	// 320 = 0x140
    NSObject<OS_xpc_object> *_startMessage;	// 328 = 0x148
    long long _defaultDropType;	// 336 = 0x150
}

+ (struct __CFDictionary *)copyDefaultRouteCacheIsIPv6:(_Bool)arg1;	// IMP=0x0000000100093724
+ (struct __CFDictionary *)copyRouteCacheFromRoutes:(struct __CFArray *)arg1 isIPv6:(_Bool)arg2;	// IMP=0x0000000100093718
+ (id)sessionWithConfiguration:(id)arg1 andType:(int)arg2 andServer:(id)arg3;	// IMP=0x000000010008e2b8
- (void).cxx_destruct;	// IMP=0x0000000100093ea4
@property _Bool isDropPersistent; // @synthesize isDropPersistent=_isDropPersistent;
@property long long defaultDropType; // @synthesize defaultDropType=_defaultDropType;
@property _Bool disableOnDemand; // @synthesize disableOnDemand=_disableOnDemand;
@property(retain) NSObject<OS_xpc_object> *startMessage; // @synthesize startMessage=_startMessage;
@property _Bool restartPending; // @synthesize restartPending=_restartPending;
@property(retain) NSMutableArray *onDemandDomainCache; // @synthesize onDemandDomainCache=_onDemandDomainCache;
@property(retain) NSString *lastPrimaryInterface; // @synthesize lastPrimaryInterface=_lastPrimaryInterface;
@property(retain) NSObject<OS_os_transaction> *dnsRedirectionTransaction; // @synthesize dnsRedirectionTransaction=_dnsRedirectionTransaction;
@property(retain) NWResolver *dnsRedirectionDetector; // @synthesize dnsRedirectionDetector=_dnsRedirectionDetector;
@property(retain) NSMutableArray *staleOnDemandDNSKeys; // @synthesize staleOnDemandDNSKeys=_staleOnDemandDNSKeys;
@property NSObject<OS_dispatch_source> *onDemandPauseTimerSource; // @synthesize onDemandPauseTimerSource=_onDemandPauseTimerSource;
@property long long onDemandPauseLevelInternal; // @synthesize onDemandPauseLevelInternal=_onDemandPauseLevelInternal;
@property(retain) NSArray *registeredNetworkAgentInterfaces; // @synthesize registeredNetworkAgentInterfaces=_registeredNetworkAgentInterfaces;
@property(retain) NSMutableArray *networkAgentInterfaces; // @synthesize networkAgentInterfaces=_networkAgentInterfaces;
@property(retain) NEOnDemandRule *matchedRule; // @synthesize matchedRule=_matchedRule;
@property(retain) NWMonitor *onDemandMonitor; // @synthesize onDemandMonitor=_onDemandMonitor;
@property(retain) NENetworkAgent *networkAgent; // @synthesize networkAgent=_networkAgent;
@property(retain) NWNetworkAgentRegistration *networkAgentRegistration; // @synthesize networkAgentRegistration=_networkAgentRegistration;
@property(retain) NEPolicySession *highPolicySession; // @synthesize highPolicySession=_highPolicySession;
@property(retain) NEPolicySession *controlPolicySession; // @synthesize controlPolicySession=_controlPolicySession;
@property(retain) NSString *auxiliaryDataKey; // @synthesize auxiliaryDataKey=_auxiliaryDataKey;
@property(retain) NSDate *lastStatusChangeTime; // @synthesize lastStatusChangeTime=_lastStatusChangeTime;
@property(retain) NSDate *firstFailedConnectTime; // @synthesize firstFailedConnectTime=_firstFailedConnectTime;
@property long long failedConnectCountWithinInterval; // @synthesize failedConnectCountWithinInterval=_failedConnectCountWithinInterval;
@property(retain) NESMPolicySession *policySession; // @synthesize policySession=_policySession;
@property unsigned long long maxConnectTime; // @synthesize maxConnectTime=_maxConnectTime;
@property long long disconnectedCount; // @synthesize disconnectedCount=_disconnectedCount;
@property long long connectedCount; // @synthesize connectedCount=_connectedCount;
@property long long connectCount; // @synthesize connectCount=_connectCount;
@property unsigned long long connectTime; // @synthesize connectTime=_connectTime;
@property _Bool isOnDemand; // @synthesize isOnDemand=_isOnDemand;
@property(retain) NSNumber *gid; // @synthesize gid=_gid;
@property(retain, nonatomic, setter=setUID:) NSNumber *uid; // @synthesize uid=_uid;
@property(readonly) NSObject<OS_dispatch_queue> *messageQueue; // @synthesize messageQueue=_messageQueue;
@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain) NSArray *configurationUserUUIDs; // @synthesize configurationUserUUIDs=_configurationUserUUIDs;
@property(retain) NSData *configurationSignature; // @synthesize configurationSignature=_configurationSignature;
@property(retain) NEConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly) NESMServer *server; // @synthesize server=_server;
@property(readonly) int type; // @synthesize type=_type;
@property(nonatomic) int status; // @synthesize status=_status;
@property(retain) NSObject<OS_os_transaction> *activeTransaction; // @synthesize activeTransaction=_activeTransaction;
@property(readonly) NSMutableArray *clients; // @synthesize clients=_clients;
- (id)getIDSNetworkAgentDomain;	// IMP=0x0000000100093b54
- (_Bool)hasProviderWithBundleIdentifier:(id)arg1;	// IMP=0x0000000100093b4c
- (void)checkPluginInstalledWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100093b3c
- (void)startWithCommand:(id)arg1 isOnDemand:(_Bool)arg2;	// IMP=0x00000001000938f4
- (void)invalidate;	// IMP=0x00000001000938e0
- (void)handleCaptiveNetworkPluginsChanged;	// IMP=0x00000001000938dc
- (void)handleNetworkDetectionNotification:(int)arg1;	// IMP=0x00000001000938d8
- (void)handleInstalledAppsChanged;	// IMP=0x00000001000938d4
- (void)handleNetworkConfigurationChange:(long long)arg1;	// IMP=0x00000001000938d0
@property(readonly) _Bool isActive;
@property(readonly) NSString *pluginType;
- (void)stopIfNecessaryWithReason:(int)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010009365c
- (void)stopIfNecessaryWithReason:(int)arg1;	// IMP=0x0000000100093338
- (void)uninstall;	// IMP=0x0000000100093334
- (void)uninstallOnQueue;	// IMP=0x00000001000932a8
- (void)installPended;	// IMP=0x00000001000932a4
- (void)installPendedOnQueue;	// IMP=0x0000000100093218
- (void)install;	// IMP=0x0000000100093214
- (void)installWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010009311c
- (_Bool)handleUpdateConfiguration:(id)arg1;	// IMP=0x0000000100092f38
- (void)handleUpdateConfiguration:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100092600
@property(readonly) int SCNCStatus;
- (void)setupFromAuxiliaryData;	// IMP=0x0000000100092480
@property(retain) NSError *lastDisconnectError;
@property int lastStopReason;
- (_Bool)handleAgentClientConnection:(id)arg1 WithMessage:(id)arg2;	// IMP=0x0000000100092088
- (_Bool)shouldBeIdleForStatus:(int)arg1;	// IMP=0x0000000100091700
- (void)notifyChangedExtendedStatus;	// IMP=0x000000010009158c
- (void)prepareNetwork;	// IMP=0x0000000100091380
- (void)satisfyPathResult:(id)arg1;	// IMP=0x00000001000912b8
- (void)handleNetworkPrepareResult:(id)arg1;	// IMP=0x00000001000911c4
- (id)copyExtendedStatus;	// IMP=0x0000000100090e7c
- (void)handleSendInfoMessage:(id)arg1 withType:(int)arg2;	// IMP=0x0000000100090e78
- (void)handleGetInfoMessage:(id)arg1 withType:(int)arg2;	// IMP=0x0000000100090e74
- (void)handleSecuritySessionInfoRequest:(id)arg1;	// IMP=0x0000000100090e70
- (void)handleChangeEventForFallback:(_Bool)arg1;	// IMP=0x0000000100090e6c
- (void)handleChangeEventForFallbackInterfaces:(id)arg1;	// IMP=0x0000000100090e68
- (void)handleChangeEventForInterface:(id)arg1 newFlags:(unsigned long long)arg2 previousFlags:(unsigned long long)arg3;	// IMP=0x0000000100090bb8
- (void)handleDeviceUnlock;	// IMP=0x0000000100090bb4
- (void)handleDeviceLock;	// IMP=0x0000000100090bb0
- (void)handleUserLogin;	// IMP=0x0000000100090bac
- (void)handleUserLogout;	// IMP=0x0000000100090ba8
- (void)handleUserSwitch;	// IMP=0x0000000100090ba4
- (void)handleWakeup;	// IMP=0x0000000100090ba0
- (void)handleSleepTime:(double)arg1;	// IMP=0x0000000100090b9c
- (_Bool)handleSleep;	// IMP=0x0000000100090b94
- (_Bool)canSleep;	// IMP=0x0000000100090b8c
- (void)handleEstablishIPCMessage:(id)arg1;	// IMP=0x0000000100090b88
- (void)handleStopMessageWithReason:(int)arg1;	// IMP=0x0000000100090b20
- (void)handleStartMessage:(id)arg1;	// IMP=0x00000001000906f4
- (_Bool)startMessageStopCurrentSession:(id)arg1;	// IMP=0x000000010009067c
- (_Bool)startMessageIsOnDemand:(id)arg1;	// IMP=0x0000000100090604
- (void)handleGetStatusMessage:(id)arg1;	// IMP=0x0000000100090574
- (void)handleInitializeState;	// IMP=0x0000000100090570
- (void)handleCommand:(id)arg1 fromClient:(id)arg2;	// IMP=0x000000010008fc34
- (void)registerSession:(id)arg1 fromClient:(id)arg2;	// IMP=0x000000010008f8dc
- (void)removeAllClients;	// IMP=0x000000010008f6a8
- (void)addClientConnection:(id)arg1;	// IMP=0x000000010008f0e4
- (id)description;	// IMP=0x000000010008f0dc
- (void)dealloc;	// IMP=0x000000010008ef80
- (id)initWithConfiguration:(id)arg1 andServer:(id)arg2;	// IMP=0x000000010008ef1c
- (id)initWithConfiguration:(id)arg1 andServer:(id)arg2 sessionQueue:(id)arg3 messageQueue:(id)arg4;	// IMP=0x000000010008ecbc
- (void)uninstallStaleDNSConfigurations;	// IMP=0x0000000100079aa0
- (int)installDNSServers:(id)arg1 forService:(id)arg2;	// IMP=0x00000001000797a4
- (void)storeCurrentDNSConfigurationsForServiceID:(id)arg1;	// IMP=0x0000000100079668
- (int)nextDNSServiceID;	// IMP=0x0000000100079628
- (void)setOnDemandPauseLevel:(long long)arg1;	// IMP=0x00000001000792a0
- (long long)onDemandPauseLevel;	// IMP=0x0000000100079294
- (void)handlePrimaryInterfaceChange;	// IMP=0x0000000100079288
- (void)removeOnDemandObserver;	// IMP=0x00000001000791e8
- (void)resetOnDemandConfigurationForce:(_Bool)arg1;	// IMP=0x0000000100078a98
- (id)copyDisconnectRulesFromRules:(id)arg1;	// IMP=0x00000001000789c4
@property(readonly) _Bool isDisconnectOnDemandEnabled;
@property(readonly) _Bool isOnDemandEnabled;
- (id)networkDescriptionsForOnDemandRules;	// IMP=0x00000001000781c4
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000100077920
- (void)setupDomainCacheForEvaluateConnectionRule:(id)arg1;	// IMP=0x0000000100076c6c
- (void)updateDomainCache;	// IMP=0x0000000100076ab4
- (void)startDNSRedirectionDetection;	// IMP=0x00000001000765ac
- (void)removeDNSRedirectionDetector;	// IMP=0x000000010007650c
- (void)clearDomainCache;	// IMP=0x00000001000763f0
- (void)resetOnDemandPolicies;	// IMP=0x0000000100075a3c
- (id)fetchCriticalOnDemandDomains;	// IMP=0x0000000100075990
- (void)clearNetworkAgentInterfaceNames;	// IMP=0x0000000100075870
- (void)removeNetworkAgentInterfaceName:(id)arg1;	// IMP=0x0000000100075714
- (void)addNetworkAgentInterfaceName:(id)arg1;	// IMP=0x0000000100075524
- (void)resetNetworkAgent;	// IMP=0x0000000100073ecc
- (void)removeNetworkAgent;	// IMP=0x0000000100073d80
- (void)removeOnDemandTimerSource;	// IMP=0x0000000100073cf4
- (void)resetNetworkAgentFileHandle;	// IMP=0x00000001000736c8
- (void)setupNetworkAgent;	// IMP=0x0000000100072ccc
- (void)setAssertionHandlersOnAgent:(id)arg1;	// IMP=0x0000000100072988
- (void)setStartHandlerOnAgent:(id)arg1;	// IMP=0x0000000100072744

@end

