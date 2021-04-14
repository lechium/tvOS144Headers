//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NESMSession.h"

#import "NEAppPushPluginDelegate-Protocol.h"

@class NEAppPushPlugin, NSMutableDictionary, NWMonitor, PCSimpleTimer;

@interface NESMAppPushSession : NESMSession <NEAppPushPluginDelegate>
{
    _Bool _active;	// 8 = 0x8
    PCSimpleTimer *_providerWakeTimer;	// 16 = 0x10
    NWMonitor *_ssidMatchMonitor;	// 24 = 0x18
    NEAppPushPlugin *_plugin;	// 32 = 0x20
    NSMutableDictionary *_outgoingMessageCompletionHandlers;	// 40 = 0x28
    long long _currentSSIDMatchStaus;	// 48 = 0x30
}

+ (Class)getCallKitMessageControllerClass;	// IMP=0x00000001000116c8
+ (id)ssidMatchStatusString:(long long)arg1;	// IMP=0x000000010001168c
- (void).cxx_destruct;	// IMP=0x0000000100012cf0
@property long long currentSSIDMatchStaus; // @synthesize currentSSIDMatchStaus=_currentSSIDMatchStaus;
@property(retain) NSMutableDictionary *outgoingMessageCompletionHandlers; // @synthesize outgoingMessageCompletionHandlers=_outgoingMessageCompletionHandlers;
@property _Bool active; // @synthesize active=_active;
@property(retain) NEAppPushPlugin *plugin; // @synthesize plugin=_plugin;
@property(retain) NWMonitor *ssidMatchMonitor; // @synthesize ssidMatchMonitor=_ssidMatchMonitor;
@property(retain) PCSimpleTimer *providerWakeTimer; // @synthesize providerWakeTimer=_providerWakeTimer;
- (void)handleProviderStopped:(id)arg1;	// IMP=0x0000000100012b84
- (void)didExtensionExit:(id)arg1;	// IMP=0x0000000100012aa8
- (void)plugin:(id)arg1 didReceiveIncomingCallWithUserInfo:(id)arg2;	// IMP=0x0000000100012978
- (void)plugin:(id)arg1 didReceiveProviderError:(id)arg2 forMessageID:(id)arg3;	// IMP=0x00000001000126a0
- (void)plugin:(id)arg1 didReceiveProviderError:(id)arg2;	// IMP=0x0000000100012564
- (_Bool)pinPlugin:(id)arg1 toConfigurationWithAuditTokens:(id)arg2;	// IMP=0x000000010001255c
- (void)pluginDidAcknowledgeSleep:(id)arg1;	// IMP=0x0000000100012558
- (void)plugin:(id)arg1 didInitializeWithUUIDs:(id)arg2;	// IMP=0x0000000100012554
- (void)pluginDidDispose:(id)arg1;	// IMP=0x000000010001240c
- (void)plugin:(id)arg1 didStartWithPID:(int)arg2 error:(id)arg3;	// IMP=0x0000000100012224
- (void)handleSendInfoMessage:(id)arg1 withType:(int)arg2;	// IMP=0x0000000100011ddc
- (void)handleGetInfoMessage:(id)arg1 withType:(int)arg2;	// IMP=0x0000000100011d24
- (id)copyExtendedStatus;	// IMP=0x0000000100011c48
- (void)sendIncomingCallInfoToCallKit:(id)arg1;	// IMP=0x00000001000117f4
- (_Bool)handleUpdateConfiguration:(id)arg1;	// IMP=0x00000001000113dc
- (void)sendOutgoingCallMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100011128
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000100010e34
- (void)exitSession;	// IMP=0x0000000100010d28
- (void)dealloc;	// IMP=0x0000000100010c50
- (void)disposeProvider;	// IMP=0x0000000100010ba4
- (void)stopProvider;	// IMP=0x0000000100010af4
- (void)startProvider;	// IMP=0x00000001000108ec
- (void)initializePlugin;	// IMP=0x0000000100010584
- (void)resetSSIDMatchMonitor;	// IMP=0x0000000100010550
- (void)stopProviderWakeTimer;	// IMP=0x000000010001043c
- (void)startProviderWakeTimer;	// IMP=0x0000000100010254
- (void)providerWakeTimerFired;	// IMP=0x00000001000101c4
- (void)stopSSIDMatchMonitor;	// IMP=0x0000000100010124
- (void)startSSIDMatchMonitor;	// IMP=0x000000010000ff48
- (id)initWithConfiguration:(id)arg1 andServer:(id)arg2;	// IMP=0x000000010000fd90

@end
