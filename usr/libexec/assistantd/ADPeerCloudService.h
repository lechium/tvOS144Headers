//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ADRemoteExecution-Protocol.h"
#import "IDSServiceDelegate-Protocol.h"

@class IDSService, NSMapTable, NSMutableDictionary, NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface ADPeerCloudService : NSObject <IDSServiceDelegate, ADRemoteExecution>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    IDSService *_service;	// 16 = 0x10
    NSMutableDictionary *_completions;	// 24 = 0x18
    NSMapTable *_sharedDataObservers;	// 32 = 0x20
    NSMapTable *_sharedDataRequestObservers;	// 40 = 0x28
    NSMapTable *_remoteRequestObservers;	// 48 = 0x30
    NSString *_companionIdentifier;	// 56 = 0x38
    NSString *_airPlayRouteIdentifier;	// 64 = 0x40
    _Bool _airPlayRouteIdentifierNeedsUpdate;	// 72 = 0x48
    NSMutableDictionary *_peerAssistantIdentifiers;	// 80 = 0x50
    NSMutableSet *_deviceIdentifiers;	// 88 = 0x58
    NSMutableDictionary *_peerSharedData;	// 96 = 0x60
    _Bool _hasActiveAccount;	// 104 = 0x68
}

+ (id)_pointerToBlockMap;	// IMP=0x0000000100118b60
+ (id)_wrappedSendFailureError:(id)arg1;	// IMP=0x0000000100118a4c
+ (id)_timedOutError;	// IMP=0x0000000100118a10
+ (id)_unexpectedMessageError;	// IMP=0x00000001001189d4
+ (id)sharedInstance;	// IMP=0x000000010011895c
- (void).cxx_destruct;	// IMP=0x000000010011fd04
- (void)service:(id)arg1 devicesChanged:(id)arg2;	// IMP=0x000000010011f834
- (void)service:(id)arg1 activeAccountsChanged:(id)arg2;	// IMP=0x000000010011f72c
- (void)_handleMessageResponse:(id)arg1 ofType:(unsigned short)arg2 orError:(id)arg3 fromID:(id)arg4 handler:(id)arg5;	// IMP=0x000000010011f1f8
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5 context:(id)arg6;	// IMP=0x000000010011f0bc
- (void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x000000010011ea20
- (_Bool)_handleRemoteExecution:(id)arg1 peer:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010011e520
- (void)_notifyObserversOfRequestInfo:(id)arg1 fromPeer:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010011e06c
- (void)setRemoteRequestObserver:(CDUnknownBlockType)arg1 withHandle:(void *)arg2;	// IMP=0x000000010011df50
- (void)startListeningForRemote;	// IMP=0x000000010011dc24
- (void)startRemoteSerialzedCommandExecution:(id)arg1 onPeer:(id)arg2 executionContext:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010011d4b8
- (void)startRemoteExecution:(id)arg1 onPeer:(id)arg2 allowsRelay:(_Bool)arg3 throughProxyDevice:(id)arg4 executionContext:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x000000010011d324
- (void)startRemoteRequest:(id)arg1 onPeer:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010011d180
- (void)_startRemoteRequest:(id)arg1 onPeers:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010011cb44
- (void)_notifyObserversOfSharedDataRequestFromPeer:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010011c698
- (void)setSharedDataRequestObserver:(CDUnknownBlockType)arg1 withHandler:(void *)arg2;	// IMP=0x000000010011c57c
- (void)getSharedDataFromPeers:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010011c044
- (void)_notifyObserversOfSharedData:(id)arg1 fromPeer:(id)arg2;	// IMP=0x000000010011bdf0
- (void)setSharedDataObserver:(CDUnknownBlockType)arg1 withHandle:(void *)arg2;	// IMP=0x000000010011bc48
- (void)sendSharedData:(id)arg1 toPeers:(id)arg2;	// IMP=0x000000010011baa0
- (void)_updateAirPlayRouteIdentifierWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010011b78c
- (void)_airplayRouteDidChange:(id)arg1;	// IMP=0x000000010011b694
- (void)_companionIdentifierDidChangeNotification:(id)arg1;	// IMP=0x000000010011b508
- (void)_updateActiveAccountState;	// IMP=0x000000010011b310
- (void)_setCachedSharedData:(id)arg1 forUniqueId:(id)arg2;	// IMP=0x000000010011b264
- (id)_cachedSharedDataForUniqueId:(id)arg1;	// IMP=0x000000010011b1f8
- (id)cachedSharedDataForUniqueId:(id)arg1;	// IMP=0x000000010011b0b4
- (void)_setAssistantId:(id)arg1 forUniqueId:(id)arg2;	// IMP=0x000000010011b010
- (void)setAssistantId:(id)arg1 forUniqueId:(id)arg2;	// IMP=0x000000010011af34
- (id)_peerInfoForAssistantId:(id)arg1 allowNonPeers:(_Bool)arg2;	// IMP=0x000000010011aeb4
- (id)peerInfoForAssistantId:(id)arg1 allowNonPeers:(_Bool)arg2;	// IMP=0x000000010011ad64
- (id)_assistantIdForUniqueId:(id)arg1;	// IMP=0x000000010011ad54
- (id)assistantIdForUniqueId:(id)arg1;	// IMP=0x000000010011ac2c
- (id)_uniqueIdForAssistantId:(id)arg1;	// IMP=0x000000010011aaac
- (id)uniqueIdForAssistantId:(id)arg1;	// IMP=0x000000010011a984
- (id)companionPeerUniqueIdentifier;	// IMP=0x000000010011a874
- (id)_companionPeer;	// IMP=0x000000010011a824
- (id)companionPeer;	// IMP=0x000000010011a528
- (id)localPeerIDSDeviceUniqueIdentifier;	// IMP=0x000000010011a514
- (id)_peerInfoForIDSDeviceUniqueIdentifier:(id)arg1 allowNonPeers:(_Bool)arg2;	// IMP=0x000000010011a2d8
- (id)peerInfoForIDSDeviceUniqueIdentifier:(id)arg1 allowNonPeers:(_Bool)arg2;	// IMP=0x000000010011a19c
- (id)_uniqueIdentifierForPeer:(id)arg1;	// IMP=0x0000000100119fd0
- (id)uniqueIdentifierForPeer:(id)arg1;	// IMP=0x0000000100119ea8
- (id)peers;	// IMP=0x0000000100119d94
- (id)_peers;	// IMP=0x0000000100119b50
- (_Bool)hasActiveAccount;	// IMP=0x0000000100119b48
- (void)_sendProto:(id)arg1 ofType:(unsigned short)arg2 originalRequestId:(id)arg3 toPeers:(id)arg4 responseType:(unsigned short)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x0000000100119440
- (void)_sendProto:(id)arg1 ofType:(unsigned short)arg2 toPeers:(id)arg3 responseType:(unsigned short)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000001001193b8
- (void)_sendProto:(id)arg1 ofType:(unsigned short)arg2 toPeers:(id)arg3;	// IMP=0x0000000100119354
- (id)_destinationsForPeers:(id)arg1;	// IMP=0x0000000100118fd4
- (id)_service;	// IMP=0x0000000100118fcc
- (id)_init;	// IMP=0x0000000100118b94

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

