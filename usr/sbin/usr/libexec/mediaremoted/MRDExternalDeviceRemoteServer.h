//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MRCryptoPairingSessionDelegate-Protocol.h"
#import "MRDDiagnosticCollecting-Protocol.h"
#import "MRDExternalDeviceServerClientConnectionDelegate-Protocol.h"
#import "MRDNowPlayingStateObserverDelegate-Protocol.h"
#import "MRDPinPairingDialogDelegate-Protocol.h"
#import "MRDRemoteControlServiceDelegate-Protocol.h"
#import "MRDSleepObserverDelegate-Protocol.h"
#import "MRDTextEditingServiceDelegate-Protocol.h"
#import "MRDXPCMessageHandling-Protocol.h"
#import "MRProtocolClientConnectionDelegate-Protocol.h"
#import "NSStreamDelegate-Protocol.h"

@class CUPairingManager, CURunLoopThread, MRDAVRoutingDataSource, MRDNowPlayingStateObserver, MRDPinPairingDialog, MRDRemoteControlService, MRDSleepObserver, MRDSystemHIDEventManager, MRDTelevisionSiriService, MRDTextEditingService, MROutputContextController, NSArray, NSMutableSet, NSRunLoop, NSString;
@protocol OS_dispatch_queue;

@interface MRDExternalDeviceRemoteServer : NSObject <NSStreamDelegate, MRCryptoPairingSessionDelegate, MRDRemoteControlServiceDelegate, MRDExternalDeviceServerClientConnectionDelegate, MRDNowPlayingStateObserverDelegate, MRDPinPairingDialogDelegate, MRDSleepObserverDelegate, MRDTextEditingServiceDelegate, MRProtocolClientConnectionDelegate, MRDXPCMessageHandling, MRDDiagnosticCollecting>
{
    MRDRemoteControlService *_remoteControlService;	// 8 = 0x8
    CURunLoopThread *_streamsRunLoopThread;	// 16 = 0x10
    NSRunLoop *_streamsRunLoop;	// 24 = 0x18
    NSMutableSet *_connectedClients;	// 32 = 0x20
    NSMutableSet *_tvEndpoints;	// 40 = 0x28
    NSMutableSet *_activeReconSessions;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_serialQueue;	// 56 = 0x38
    _Bool _serverIsRunning;	// 64 = 0x40
    unsigned int _gameControllerInputMode;	// 68 = 0x44
    _Bool _hiliteMode;	// 72 = 0x48
    MRDSystemHIDEventManager *_hidEventManager;	// 80 = 0x50
    MRDNowPlayingStateObserver *_stateObserver;	// 88 = 0x58
    MRDPinPairingDialog *_pinPairingDialog;	// 96 = 0x60
    MRDTelevisionSiriService *_siriService;	// 104 = 0x68
    MRDTextEditingService *_textEditingService;	// 112 = 0x70
    MRDSleepObserver *_sleepObserver;	// 120 = 0x78
    CUPairingManager *_pairingManager;	// 128 = 0x80
    double _transactionWaitDuration;	// 136 = 0x88
    MROutputContextController *_outputContextController;	// 144 = 0x90
    MRDAVRoutingDataSource *_routingDataSource;	// 152 = 0x98
}

+ (unsigned long long)minimumSupportedHangdogApplicationVersion;	// IMP=0x000000010005890c
+ (unsigned long long)minimumSupportedProtocolVersion;	// IMP=0x0000000100058904
- (void).cxx_destruct;	// IMP=0x000000010006c8bc
@property(readonly, nonatomic) MRDAVRoutingDataSource *routingDataSource; // @synthesize routingDataSource=_routingDataSource;
- (void)_handleTriggerAudioFadeMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x000000010006c5cc
- (void)_handleUpdateActiveSystemEndpointMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x000000010006c28c
- (void)_handlePlaybackSessionMigrateEndMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x000000010006be14
- (void)_handlePlaybackSessionMigrateBeginMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x000000010006b9c0
- (void)_handlePlaybackSessionMigrateRequestMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x000000010006ace8
- (void)_handlePlaybackSessionRequestMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x000000010006aa48
- (void)_handleSetVolumeMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x000000010006a850
- (void)_handleGetVolumeControlCapabilitiesMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x000000010006a67c
- (void)_handleGetVolumeMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x000000010006a4a0
- (void)_handleModifyOutputContextRequestMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x0000000100068790
- (void)_handleLyricsEventMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x0000000100068624
- (void)_handleGenericMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00000001000681c0
- (void)_handleHiliteModeChanged:(id)arg1;	// IMP=0x0000000100067f5c
- (void)_handleSetHiliteModeMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x0000000100067ed4
- (void)_handleSetConnectionStateMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x0000000100067dec
- (void)_handleDeviceInfoUpdateMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x0000000100067cf0
- (void)_handlePlaybackQueueRequestMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x000000010006778c
- (void)_handleReceivedVoiceInputMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x0000000100067684
- (void)_handleRegisterVoiceInputDeviceMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00000001000673ac
- (void)_handleRemoteTextInputMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00000001000672f4
- (void)_handleGetRemoteTextInputSessionMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00000001000671f4
- (void)_handleTextInputMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00000001000670f4
- (void)_handleGetKeyboardSessionMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x0000000100066f88
- (void)_addSystemEndpointToMessage:(id)arg1 forClient:(id)arg2 withEndpoint:(id)arg3;	// IMP=0x0000000100066e54
- (void)_addNowPlayingStateToMessage:(id)arg1 forClient:(id)arg2 withEndpoint:(id)arg3;	// IMP=0x0000000100066a94
- (void)_addSubscribedStateToMessage:(id)arg1 forClient:(id)arg2 nowPlayingClient:(id)arg3 playerClient:(id)arg4;	// IMP=0x0000000100066630
- (void)_addSubscribedStateToMessage:(id)arg1 forClient:(id)arg2 nowPlayingClient:(id)arg3;	// IMP=0x00000001000663f8
- (void)_addSubscribedStateToMessage:(id)arg1 forClient:(id)arg2 originClient:(id)arg3;	// IMP=0x000000010006604c
- (_Bool)_playerPath:(id)arg1 matchesSubscribedPlayerPath:(id)arg2;	// IMP=0x0000000100065e9c
- (_Bool)_origin:(id)arg1 client:(id)arg2 player:(id)arg3 matchesSubscribedPlayerPath:(id)arg4;	// IMP=0x0000000100065c24
- (_Bool)_origin:(id)arg1 client:(id)arg2 matchesSubscribedPlayerPath:(id)arg3;	// IMP=0x00000001000659b8
- (_Bool)_origin:(id)arg1 matchesSubscribedPlayerPath:(id)arg2;	// IMP=0x00000001000657d4
- (void)_addVolumeToMessage:(id)arg1 forClient:(id)arg2 withEndpoint:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100064eac
- (void)_addOutputDevicesToMessage:(id)arg1 forClient:(id)arg2 withEndpoint:(id)arg3;	// IMP=0x0000000100064dc4
- (void)_syncStateToClient:(id)arg1;	// IMP=0x0000000100064c88
- (void)_handleClientUpdatesConfigMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x000000010006451c
- (void)_handleRegisterGameControllerMessage:(id)arg1 client:(id)arg2;	// IMP=0x0000000100064428
- (void)_handleTouchEvent:(struct _MRHIDTouchEvent)arg1 withDeviceID:(unsigned long long)arg2 fromClient:(id)arg3;	// IMP=0x0000000100064334
- (void)_handleReceivedButtonEvent:(struct _MRHIDButtonEvent)arg1 fromClient:(id)arg2;	// IMP=0x00000001000641ec
- (void)_handleRegisterHIDDeviceMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x0000000100063f8c
- (void)_handleReceivedCommand:(id)arg1 fromClient:(id)arg2;	// IMP=0x0000000100063cc0
- (void)_handleCryptoPairingMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00000001000637d4
- (void)_handleDeviceInfoRequest:(id)arg1 fromClient:(id)arg2;	// IMP=0x0000000100063430
- (void)_handleSendTelevisionCustomDataMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00000001000632bc
- (void)_handleTelevisionEndpointAvailableMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00000001000630dc
- (void)_handleSetMessageLogging:(id)arg1 fromClient:(id)arg2;	// IMP=0x000000010006306c
- (void)_handleDeletePairedDeviceMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x0000000100062f1c
- (void)_handleGetPairedDevicesMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x0000000100062b8c
- (void)_handleDeletePairingIdentityMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x0000000100062a58
- (void)_handleSetInputModeMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00000001000629c0
- (void)_handleGetInputModeMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x0000000100062938
- (_Bool)_isConnectionForManagedConfigIDAllowed:(id)arg1;	// IMP=0x0000000100062680
- (id)_filteredSupportedCommandsForCommands:(id)arg1 destinedForClient:(id)arg2;	// IMP=0x0000000100062398
- (void)_registerCallbacks;	// IMP=0x0000000100060b74
- (void)_wakeDevice:(_Bool)arg1 dismissScreenSaver:(_Bool)arg2;	// IMP=0x00000001000609a4
- (void)_notifyAndDisconnectClients:(id)arg1 withError:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100060328
- (void)_notifyAndDisconnectClient:(id)arg1 withError:(id)arg2;	// IMP=0x000000010006023c
- (id)_unpair:(id)arg1;	// IMP=0x000000010006007c
- (void)_setGameControllerInputMode:(unsigned int)arg1;	// IMP=0x000000010005feac
- (void)_broadcastRemoteTextInputMessageWithPayload:(id)arg1;	// IMP=0x000000010005fbec
- (void)_broadcastKeyboardMessageWithState:(unsigned long long)arg1 text:(id)arg2 attributes:(id)arg3;	// IMP=0x000000010005fa0c
- (_Bool)_shouldSendStateUpdateMessageFromSource:(long long)arg1 toClient:(id)arg2;	// IMP=0x000000010005f9a8
- (void)_sendStateUpdateMessageFromPlayerPath:(id)arg1 source:(long long)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000010005f74c
- (_Bool)_connection:(id)arg1 canReceiveUpdatesForPlayerPath:(id)arg2;	// IMP=0x000000010005f5cc
- (_Bool)_verifyClientVersionCompatibility:(id)arg1 withError:(id *)arg2;	// IMP=0x000000010005f2dc
- (id)_clientForIdentifier:(id)arg1;	// IMP=0x000000010005f1b4
- (id)_clientForPairingSession:(id)arg1;	// IMP=0x000000010005f0c4
- (id)_findClientIf:(CDUnknownBlockType)arg1;	// IMP=0x000000010005ef64
- (void)_disconnectClient:(id)arg1;	// IMP=0x000000010005e858
- (void)_prewarmMediaApps;	// IMP=0x000000010005e724
- (void)_handleClientConnection:(id)arg1;	// IMP=0x000000010005e4f0
- (void)collectDiagnostic:(id)arg1;	// IMP=0x000000010005e3c4
- (void)sleepObserverSystemWillSleep:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010005e33c
- (void)handleXPCMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x000000010005e2a4
- (void)_activeSystemEndpointDidChangeNotification:(id)arg1;	// IMP=0x000000010005e0a0
- (void)_addToMessage:(id)arg1 withAllClusterDeviceMembers:(id)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x000000010005dec0
- (void)outputContextDataSourceOutputDeviceDidChangeVolumeControlCapabilities:(id)arg1;	// IMP=0x000000010005dab8
- (void)outputContextDataSourceOutputDeviceDidChangeVolume:(id)arg1;	// IMP=0x000000010005d6a0
- (void)outputContextDataSourceDidRemoveOutputDevice:(id)arg1;	// IMP=0x000000010005d2d8
- (void)outputContextDataSourceDidAddOutputDevice:(id)arg1;	// IMP=0x000000010005cf14
- (id)_createSkeletonOutputDevices:(id)arg1;	// IMP=0x000000010005cd4c
- (id)_createVolumelessOutputDevices:(id)arg1;	// IMP=0x000000010005cb28
- (id)_createLocalizedOutputDevices:(id)arg1;	// IMP=0x000000010005c988
- (id)_createLocalizedOutputDevice:(id)arg1;	// IMP=0x000000010005c8b0
- (void)gameControllerConnectionDidInterrupt:(id)arg1;	// IMP=0x000000010005c8a0
- (void)externalDeviceClient:(id)arg1 gameController:(unsigned long long)arg2 propertiesChanged:(id)arg3;	// IMP=0x000000010005c810
- (void)pinPairingDialogDidClose:(id)arg1 forClient:(id)arg2 userCancelled:(_Bool)arg3;	// IMP=0x000000010005c768
- (void)pairingSession:(id)arg1 didCompleteExchangeWithError:(id)arg2;	// IMP=0x000000010005c480
- (void)pairingSession:(id)arg1 showSetupCode:(id)arg2;	// IMP=0x000000010005c0f4
- (void)pairingSession:(id)arg1 didPrepareExchangeData:(id)arg2;	// IMP=0x000000010005bef8
- (void)textEditingService:(id)arg1 echoWithText:(id)arg2;	// IMP=0x000000010005bee4
- (void)textEditingServiceTextEditingDidEnd:(id)arg1;	// IMP=0x000000010005be74
- (void)textEditingService:(id)arg1 attributesDidChange:(id)arg2 payload:(id)arg3;	// IMP=0x000000010005bdf4
- (void)textEditingService:(id)arg1 textDidChange:(id)arg2 payload:(id)arg3;	// IMP=0x000000010005bd74
- (void)textEditingService:(id)arg1 textEditingDidBegin:(id)arg2 withAttributes:(id)arg3 payload:(id)arg4;	// IMP=0x000000010005bcd4
- (void)stateObserver:(id)arg1 didReceiveDefaultSupportedCommandsChange:(id)arg2 playerPath:(id)arg3;	// IMP=0x000000010005bb74
- (void)stateObserver:(id)arg1 didReceiveVolumeControlCapabilitiesChange:(unsigned int)arg2 playerPath:(id)arg3;	// IMP=0x000000010005ba6c
- (void)stateObserver:(id)arg1 didReceivePlayStateChange:(id)arg2;	// IMP=0x000000010005b6c8
- (void)stateObserver:(id)arg1 didReceiveSupportedCommandsChange:(id)arg2;	// IMP=0x000000010005b4a4
- (void)stateObserver:(id)arg1 didReceivePlaybackQueueCapabilitiesChange:(id)arg2;	// IMP=0x000000010005b2fc
- (void)stateObserver:(id)arg1 didReceiveContentItemArtworkChange:(id)arg2 playerPath:(id)arg3;	// IMP=0x000000010005b0c4
- (void)stateObserver:(id)arg1 didReceiveContentItemChange:(id)arg2 playerPath:(id)arg3;	// IMP=0x000000010005ad70
- (void)stateObserver:(id)arg1 didReceivePlaybackQueueChange:(id)arg2;	// IMP=0x000000010005a9c8
- (void)stateObserver:(id)arg1 didReceiveNowPlayingPlayerChange:(id)arg2;	// IMP=0x000000010005a8c4
- (void)stateObserver:(id)arg1 didReceiveNowPlayingClientChange:(id)arg2;	// IMP=0x000000010005a458
- (void)stateObserver:(id)arg1 didReceivePlayerDidUnregister:(id)arg2;	// IMP=0x000000010005a354
- (void)stateObserver:(id)arg1 didReceiveClientDidUnregister:(id)arg2;	// IMP=0x000000010005a210
- (void)stateObserver:(id)arg1 didReceivePlayerStateDidChange:(id)arg2;	// IMP=0x000000010005a0a0
- (void)stateObserver:(id)arg1 didReceiveApplicationClientStateDidChange:(id)arg2;	// IMP=0x0000000100059f5c
- (void)stateObserver:(id)arg1 didReceiveDeviceInfoDidChange:(id)arg2 playerPath:(id)arg3;	// IMP=0x0000000100059e6c
- (void)nowPlayingStateDidChange:(id)arg1 createMessageBlock:(CDUnknownBlockType)arg2 createLegacyMessageBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000100059de0
- (void)clientDidDisconnect:(id)arg1 error:(id)arg2;	// IMP=0x0000000100059ce0
- (void)clientConnection:(id)arg1 didReceiveMessage:(id)arg2;	// IMP=0x000000010005954c
- (void)remoteControlService:(id)arg1 didAcceptConnection:(id)arg2;	// IMP=0x000000010005953c
@property(readonly, nonatomic) NSRunLoop *streamsRunLoop;
@property(readonly, nonatomic) NSArray *endpoints;
@property(readonly, nonatomic) NSArray *clients;
- (void)clearEndpointForClient:(id)arg1;	// IMP=0x0000000100058fe4
- (void)stop;	// IMP=0x0000000100058fb4
- (void)start;	// IMP=0x0000000100058f80
- (void)dealloc;	// IMP=0x0000000100058db8
- (void)registerNotifications;	// IMP=0x0000000100058ca4
- (id)init;	// IMP=0x0000000100058c94
- (id)initWithRoutingDataSource:(id)arg1;	// IMP=0x0000000100058914

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
