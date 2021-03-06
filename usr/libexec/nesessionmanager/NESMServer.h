//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NESMPowerManagerDelegate-Protocol.h"
#import "NESMSessionDelegate-Protocol.h"

@class NESMPowerManager, NESMSession, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, NSUUID, NWInterface, NWPathEvaluator;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_xpc_object;

@interface NESMServer : NSObject <NESMPowerManagerDelegate, NESMSessionDelegate>
{
    _Bool _receivedFileHandles;	// 8 = 0x8
    _Bool _providerManagerStarted;	// 9 = 0x9
    _Bool _nwiInitialized;	// 10 = 0xa
    _Bool _powerManagerInitialized;	// 11 = 0xb
    _Bool _userEventInitialized;	// 12 = 0xc
    _Bool _fallbackEnabled;	// 13 = 0xd
    int _sleepAckCount;	// 16 = 0x10
    int _NWINotifyToken;	// 20 = 0x14
    int _userEventNotifyToken;	// 24 = 0x18
    int _configNWINotifyToken;	// 28 = 0x1c
    int _configDNSNotifyToken;	// 32 = 0x20
    int _configProxyNotifyToken;	// 36 = 0x24
    int _infoNotifyToken;	// 40 = 0x28
    long long _primaryPathStatus;	// 48 = 0x30
    long long _cellularPathStatus;	// 56 = 0x38
    NWInterface *_primaryPhysicalInterface;	// 64 = 0x40
    NWInterface *_primaryCellularInterface;	// 72 = 0x48
    NWInterface *_primaryWiFiInterface;	// 80 = 0x50
    NSDictionary *_savedInterfaceInfo;	// 88 = 0x58
    NSArray *_currentCaptiveNetworkPlugins;	// 96 = 0x60
    NSObject<OS_dispatch_queue> *_queue;	// 104 = 0x68
    NSObject<OS_xpc_object> *_listener;	// 112 = 0x70
    NSObject<OS_xpc_object> *_flowDivertTokenListener;	// 120 = 0x78
    NSObject<OS_xpc_object> *_contentFilterClientListener;	// 128 = 0x80
    NSMutableDictionary *_sessions;	// 136 = 0x88
    NSMutableDictionary *_pendingSessionRequests;	// 144 = 0x90
    NESMPowerManager *_powerManager;	// 152 = 0x98
    NSObject<OS_dispatch_source> *_termSource;	// 160 = 0xa0
    struct __SCDynamicStore *_dynamicStore;	// 168 = 0xa8
    NSUUID *_consoleUserUUID;	// 176 = 0xb0
    NSString *_savedPrimaryPhysicalInterfaceName;	// 184 = 0xb8
    NESMSession *_alwaysOnVPNSession;	// 192 = 0xc0
    long long _alwaysOnVPNSessionInstallState;	// 200 = 0xc8
    NESMSession *_enterpriseVPNSession;	// 208 = 0xd0
    long long _enterpriseVPNSessionInstallState;	// 216 = 0xd8
    NESMSession *_personalVPNSession;	// 224 = 0xe0
    long long _personalVPNSessionInstallState;	// 232 = 0xe8
    NESMSession *_filterSession;	// 240 = 0xf0
    NESMSession *_dnsProxySession;	// 248 = 0xf8
    long long _dnsProxySessionInstallState;	// 256 = 0x100
    NWPathEvaluator *_primaryPhysicalInterfaceEvaluator;	// 264 = 0x108
    NWPathEvaluator *_cellularInterfaceEvaluator;	// 272 = 0x110
    NWPathEvaluator *_wifiInterfaceEvaluator;	// 280 = 0x118
    NSMutableArray *_sessionsWaitingForNetwork;	// 288 = 0x120
    NSMutableArray *_sessionsWaitingForCellularNetwork;	// 296 = 0x128
    unsigned long long _currentInfo;	// 304 = 0x130
    unsigned long long _activeSessionCount;	// 312 = 0x138
    CDUnknownBlockType _pendingStopCompletion;	// 320 = 0x140
    NSObject<OS_dispatch_source> *_handlesTimer;	// 328 = 0x148
    NSMutableDictionary *_fallbackInterfacesDict;	// 336 = 0x150
    CDUnknownBlockType _stopWithProviderCompletionHandler;	// 344 = 0x158
}

+ (id)sharedServer;	// IMP=0x0000000100045f48
- (void).cxx_destruct;	// IMP=0x0000000100053908
@property _Bool fallbackEnabled; // @synthesize fallbackEnabled=_fallbackEnabled;
@property(copy) CDUnknownBlockType stopWithProviderCompletionHandler; // @synthesize stopWithProviderCompletionHandler=_stopWithProviderCompletionHandler;
@property(retain) NSMutableDictionary *fallbackInterfacesDict; // @synthesize fallbackInterfacesDict=_fallbackInterfacesDict;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *handlesTimer; // @synthesize handlesTimer=_handlesTimer;
@property _Bool userEventInitialized; // @synthesize userEventInitialized=_userEventInitialized;
@property _Bool powerManagerInitialized; // @synthesize powerManagerInitialized=_powerManagerInitialized;
@property _Bool nwiInitialized; // @synthesize nwiInitialized=_nwiInitialized;
@property(copy) CDUnknownBlockType pendingStopCompletion; // @synthesize pendingStopCompletion=_pendingStopCompletion;
@property unsigned long long activeSessionCount; // @synthesize activeSessionCount=_activeSessionCount;
@property unsigned long long currentInfo; // @synthesize currentInfo=_currentInfo;
@property int infoNotifyToken; // @synthesize infoNotifyToken=_infoNotifyToken;
@property _Bool providerManagerStarted; // @synthesize providerManagerStarted=_providerManagerStarted;
@property _Bool receivedFileHandles; // @synthesize receivedFileHandles=_receivedFileHandles;
@property int configProxyNotifyToken; // @synthesize configProxyNotifyToken=_configProxyNotifyToken;
@property int configDNSNotifyToken; // @synthesize configDNSNotifyToken=_configDNSNotifyToken;
@property int configNWINotifyToken; // @synthesize configNWINotifyToken=_configNWINotifyToken;
@property(retain) NSMutableArray *sessionsWaitingForCellularNetwork; // @synthesize sessionsWaitingForCellularNetwork=_sessionsWaitingForCellularNetwork;
@property(retain) NSMutableArray *sessionsWaitingForNetwork; // @synthesize sessionsWaitingForNetwork=_sessionsWaitingForNetwork;
@property(retain) NWPathEvaluator *wifiInterfaceEvaluator; // @synthesize wifiInterfaceEvaluator=_wifiInterfaceEvaluator;
@property(retain) NWPathEvaluator *cellularInterfaceEvaluator; // @synthesize cellularInterfaceEvaluator=_cellularInterfaceEvaluator;
@property(retain) NWPathEvaluator *primaryPhysicalInterfaceEvaluator; // @synthesize primaryPhysicalInterfaceEvaluator=_primaryPhysicalInterfaceEvaluator;
@property long long dnsProxySessionInstallState; // @synthesize dnsProxySessionInstallState=_dnsProxySessionInstallState;
@property(retain) NESMSession *dnsProxySession; // @synthesize dnsProxySession=_dnsProxySession;
@property(retain) NESMSession *filterSession; // @synthesize filterSession=_filterSession;
@property long long personalVPNSessionInstallState; // @synthesize personalVPNSessionInstallState=_personalVPNSessionInstallState;
@property(retain) NESMSession *personalVPNSession; // @synthesize personalVPNSession=_personalVPNSession;
@property long long enterpriseVPNSessionInstallState; // @synthesize enterpriseVPNSessionInstallState=_enterpriseVPNSessionInstallState;
@property(retain) NESMSession *enterpriseVPNSession; // @synthesize enterpriseVPNSession=_enterpriseVPNSession;
@property long long alwaysOnVPNSessionInstallState; // @synthesize alwaysOnVPNSessionInstallState=_alwaysOnVPNSessionInstallState;
@property(retain) NESMSession *alwaysOnVPNSession; // @synthesize alwaysOnVPNSession=_alwaysOnVPNSession;
@property(retain) NSString *savedPrimaryPhysicalInterfaceName; // @synthesize savedPrimaryPhysicalInterfaceName=_savedPrimaryPhysicalInterfaceName;
@property(retain) NSUUID *consoleUserUUID; // @synthesize consoleUserUUID=_consoleUserUUID;
@property struct __SCDynamicStore *dynamicStore; // @synthesize dynamicStore=_dynamicStore;
@property int userEventNotifyToken; // @synthesize userEventNotifyToken=_userEventNotifyToken;
@property int NWINotifyToken; // @synthesize NWINotifyToken=_NWINotifyToken;
@property(retain) NSObject<OS_dispatch_source> *termSource; // @synthesize termSource=_termSource;
@property int sleepAckCount; // @synthesize sleepAckCount=_sleepAckCount;
@property(retain) NESMPowerManager *powerManager; // @synthesize powerManager=_powerManager;
@property(readonly) NSMutableDictionary *pendingSessionRequests; // @synthesize pendingSessionRequests=_pendingSessionRequests;
@property(readonly) NSMutableDictionary *sessions; // @synthesize sessions=_sessions;
@property(readonly) NSObject<OS_xpc_object> *contentFilterClientListener; // @synthesize contentFilterClientListener=_contentFilterClientListener;
@property(readonly) NSObject<OS_xpc_object> *flowDivertTokenListener; // @synthesize flowDivertTokenListener=_flowDivertTokenListener;
@property(readonly) NSObject<OS_xpc_object> *listener; // @synthesize listener=_listener;
@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain) NSArray *currentCaptiveNetworkPlugins; // @synthesize currentCaptiveNetworkPlugins=_currentCaptiveNetworkPlugins;
@property(retain) NSDictionary *savedInterfaceInfo; // @synthesize savedInterfaceInfo=_savedInterfaceInfo;
@property(retain) NWInterface *primaryWiFiInterface; // @synthesize primaryWiFiInterface=_primaryWiFiInterface;
@property(retain) NWInterface *primaryCellularInterface; // @synthesize primaryCellularInterface=_primaryCellularInterface;
@property(retain) NWInterface *primaryPhysicalInterface; // @synthesize primaryPhysicalInterface=_primaryPhysicalInterface;
@property long long cellularPathStatus; // @synthesize cellularPathStatus=_cellularPathStatus;
@property long long primaryPathStatus; // @synthesize primaryPathStatus=_primaryPathStatus;
- (void)handleFallbackEnabled:(_Bool)arg1;	// IMP=0x000000010005315c
- (void)handleSessionStopped:(id)arg1;	// IMP=0x00000001000530ec
- (void)copySessionsWithProviderIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100052d34
- (_Bool)removeFallbackInterface:(unsigned long long)arg1 predictedInterfaceIndex:(unsigned long long)arg2;	// IMP=0x00000001000527e0
- (_Bool)addFallbackInterface:(unsigned long long)arg1 predictedInterfaceIndex:(unsigned long long)arg2;	// IMP=0x00000001000522c4
- (_Bool)shouldSetDropAll;	// IMP=0x0000000100052224
- (void)registerForAppsChangedNotifications;	// IMP=0x0000000100051eb0
- (void)deregisterForCaptiveNetworkPluginChanges;	// IMP=0x0000000100051eac
- (void)registerForCaptiveNetworkPluginChanges;	// IMP=0x0000000100051a60
- (void)handleNetworkDetectionEvent:(id)arg1;	// IMP=0x0000000100051014
- (void)notifySessionForConfiguration:(id)arg1 sessionType:(int)arg2 notifyType:(int)arg3;	// IMP=0x0000000100050df8
- (void)applyLayer2DefaultDrop:(unsigned char)arg1;	// IMP=0x0000000100050ccc
- (void)applyIPDefaultDropByFeature:(struct __CFString *)arg1 featureEnabled:(unsigned char)arg2;	// IMP=0x0000000100050aec
- (long long)applyIPDefaultDrop:(_Bool)arg1 minDropType:(long long)arg2;	// IMP=0x000000010005056c
- (void)registerForNetworkDetectionEvents;	// IMP=0x00000001000504d0
- (void)postCurrentInfo;	// IMP=0x00000001000503a4
- (void)adjustActiveSessionCount:(long long)arg1;	// IMP=0x0000000100050158
- (void)deregisterForNetworkConfigurationChangeEvents;	// IMP=0x00000001000500d4
- (void)registerForNetworkConfigurationChangeEvents;	// IMP=0x000000010004fab8
- (void)requestUninstallForSession:(id)arg1;	// IMP=0x000000010004f6fc
- (void)requestInstallForSession:(id)arg1 withParentSession:(id)arg2 exclusive:(_Bool)arg3;	// IMP=0x000000010004ef14
- (void)deregisterSession:(id)arg1;	// IMP=0x000000010004e9c0
- (void)registerSession:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010004ca0c
- (void)dealloc;	// IMP=0x000000010004c9a0
- (void)deregisterForUserEvents;	// IMP=0x000000010004c8a4
- (void)registerForUserEvents;	// IMP=0x000000010004c498
- (void)deregisterForPowerEvents;	// IMP=0x000000010004c3cc
- (void)registerForPowerEvents;	// IMP=0x000000010004c2b8
- (void)deregisterForInterfaceEvents;	// IMP=0x000000010004c0c4
- (void)registerForInterfaceEvents;	// IMP=0x000000010004bcf8
- (void)prohibitVPNOnParameters:(id)arg1;	// IMP=0x000000010004bc74
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000010004adec
- (void)snapshotNetworksChanged:(_Bool)arg1;	// IMP=0x000000010004ab58
- (void)satisfyCellularPathForSession:(id)arg1;	// IMP=0x000000010004a924
- (void)satisfyPathForSession:(id)arg1;	// IMP=0x000000010004a6f0
- (id)copyInterfaceInfoFromNWIState:(struct _nwi_state *)arg1;	// IMP=0x000000010004a4c0
- (void)processInterfaceChanges:(id)arg1;	// IMP=0x0000000100049828
- (void)ackSleep;	// IMP=0x0000000100049668
- (void)handleWakeup;	// IMP=0x0000000100049408
- (void)handleSleepTime:(double)arg1;	// IMP=0x0000000100049198
- (_Bool)handleSleep;	// IMP=0x0000000100048ec8
- (_Bool)canSleep;	// IMP=0x0000000100048c50
- (void)handleAgentClientConnection:(id)arg1 initialMessage:(id)arg2;	// IMP=0x0000000100048924
- (void)addSessionClientWithConnection:(id)arg1 initialMessage:(id)arg2;	// IMP=0x0000000100048674
- (void)addPendingSessionRequestForConfigurationIdentifier:(id)arg1 sessionType:(int)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100048230
- (void)addPendingSessionRequestOnQueueForConfigurationIdentifier:(id)arg1 sessionType:(int)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100048120
- (void)removeSessionWithType:(int)arg1 andConfigurationIdentifier:(id)arg2;	// IMP=0x0000000100047e0c
- (void)loadSessionWithType:(int)arg1 andConfigurationIdentifier:(id)arg2;	// IMP=0x0000000100047890
- (void)setupFileHandles;	// IMP=0x0000000100047114
- (void)loadPendingSessions;	// IMP=0x0000000100046e54
- (void)acceptNewContentFilterConnection:(id)arg1;	// IMP=0x0000000100046c20
- (void)acceptNewConnection:(id)arg1;	// IMP=0x000000010004679c
- (void)stopWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100046350
- (void)start;	// IMP=0x0000000100045fc0
- (id)initPrivate;	// IMP=0x00000001000454f0
- (id)init;	// IMP=0x00000001000454c8

@end

