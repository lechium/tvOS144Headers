//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDSServiceDelegate-Protocol.h"

@class ADPeerStreamConnection, IDSDeviceConnection, IDSService, NSDictionary, NSHashTable, NSMutableDictionary, NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface ADSharedPeerStreamConnection : NSObject <IDSServiceDelegate>
{
    _Bool _listener;	// 8 = 0x8
    NSHashTable *_delegates;	// 16 = 0x10
    NSString *_identifier;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    IDSService *_idsService;	// 40 = 0x28
    ADPeerStreamConnection *_currentPeerStreamConnection;	// 48 = 0x30
    NSMutableDictionary *_metricsResponses;	// 56 = 0x38
    NSString *_wakeupMessageIdentifier;	// 64 = 0x40
    NSString *_currentStreamIdentifier;	// 72 = 0x48
    _Bool _gettingDeviceSocket;	// 80 = 0x50
    _Bool _socketForConnectionHasBeenVended;	// 81 = 0x51
    IDSDeviceConnection *_deviceConnection;	// 88 = 0x58
    int _sockfd;	// 96 = 0x60
    CDUnknownBlockType _socketCompletion;	// 104 = 0x68
    _Bool _prefersBTClassic;	// 112 = 0x70
    NSString *_productType;	// 120 = 0x78
    NSString *_buildVersion;	// 128 = 0x80
    _Bool _peerSupportsNamedStreams;	// 136 = 0x88
    NSMutableSet *_nearbyDeviceIdentifiers;	// 144 = 0x90
    double _lastSharedDataUpdateTimestamp;	// 152 = 0x98
    _Bool _optimisticRetriesAreBlocked;	// 160 = 0xa0
    _Bool _peerSupportsExtendedHeader;	// 161 = 0xa1
    double _lastNearbyDevicesChangedTimestamp;	// 168 = 0xa8
    double _lastIDSMessageSentTimestamp;	// 176 = 0xb0
    double _lastIDSMessageStartSendTimestamp;	// 184 = 0xb8
    double _lastWakeUpMessageDuration;	// 192 = 0xc0
    double _lastStreamEstablishmentDuration;	// 200 = 0xc8
    unsigned long long _lastOpenErrorCode;	// 208 = 0xd0
    NSDictionary *_lastIDSMetricsContext;	// 216 = 0xd8
    _Bool _lastIDSMessageSuccess;	// 224 = 0xe0
}

+ (id)sharedPeerStreamConnectionWithServiceIdentifier:(id)arg1 listener:(_Bool)arg2;	// IMP=0x0000000100056800
+ (id)_streamPairInterruptedError;	// IMP=0x0000000100056398
+ (id)_deviceConnectionClosedErrorWithUnderlyingError:(id)arg1;	// IMP=0x0000000100056384
+ (id)_noDeviceError;	// IMP=0x0000000100056370
+ (id)_noNearbyPeerError;	// IMP=0x000000010005635c
+ (id)_errorWithCode:(long long)arg1 underylingError:(id)arg2;	// IMP=0x0000000100056254
- (void).cxx_destruct;	// IMP=0x000000010005ae14
- (_Bool)deviceIsNearby;	// IMP=0x000000010005adc8
- (void)preheat;	// IMP=0x000000010005ad60
- (void)_preheat;	// IMP=0x000000010005acec
- (_Bool)peerSupportsExtendedHeader;	// IMP=0x000000010005ace4
- (void)service:(id)arg1 devicesChanged:(id)arg2;	// IMP=0x000000010005abf4
- (void)service:(id)arg1 nearbyDevicesChanged:(id)arg2;	// IMP=0x000000010005a7b0
- (void)_establishEagerStreamPair;	// IMP=0x000000010005a6d0
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5 context:(id)arg6;	// IMP=0x000000010005a404
- (void)_handleResponseProtobuf:(id)arg1 forIdentifier:(id)arg2;	// IMP=0x000000010005a27c
- (void)_handleReestablishMessage:(id)arg1 context:(id)arg2;	// IMP=0x000000010005a0f0
- (void)_handleGetMetricsMessage:(id)arg1 context:(id)arg2;	// IMP=0x0000000100059d08
- (void)_handleWakeUpMessage:(id)arg1 context:(id)arg2;	// IMP=0x0000000100059a34
- (void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x0000000100059818
- (void)_updatePairedDeviceInfo;	// IMP=0x00000001000595e4
- (void)getMetricsContext:(CDUnknownBlockType)arg1;	// IMP=0x00000001000594f4
- (id)_failureMetricsContextDictionary;	// IMP=0x00000001000590a0
- (void)_setPreferBTClassic:(_Bool)arg1;	// IMP=0x0000000100058efc
- (void)setPreferBTClassic:(_Bool)arg1;	// IMP=0x0000000100058e88
- (_Bool)hasNearbyPeer;	// IMP=0x0000000100058da4
- (void)_requestStreamEstablishment;	// IMP=0x0000000100058ab8
- (void)_invokeMetricsCompletionWithMetrics:(id)arg1 forIdentifier:(id)arg2;	// IMP=0x0000000100058a1c
- (void)getAWDMetrics:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010005891c
- (void)getRemoteMetrics:(CDUnknownBlockType)arg1;	// IMP=0x00000001000583d4
- (void)_close;	// IMP=0x00000001000582ec
- (void)closeForConnection:(id)arg1;	// IMP=0x0000000100058088
- (void)_invokeSocketCompletionWithCurrentSocketOrError:(id)arg1;	// IMP=0x0000000100057f50
- (void)_getSocketFromDeviceForStreamIdentifier:(id)arg1;	// IMP=0x00000001000576f8
- (void)_getSocketFromDevice;	// IMP=0x000000010005767c
- (void)getSocketForConnection:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100057374
- (void)_initiateOptimisticEagerStreamFetchRetry;	// IMP=0x000000010005718c
- (void)_wakeUpMessageFailedWithError:(id)arg1;	// IMP=0x0000000100056f38
- (_Bool)_wakeUpRemoteForStreamIdentifier:(id)arg1;	// IMP=0x0000000100056c34
- (void)removeDelegate:(id)arg1;	// IMP=0x0000000100056b9c
- (void)addDelegate:(id)arg1;	// IMP=0x0000000100056aac
- (id)_destination;	// IMP=0x00000001000567a0
- (id)_account;	// IMP=0x0000000100056748
- (id)_pairedDevice;	// IMP=0x00000001000565e0
- (id)_service;	// IMP=0x00000001000565d8
- (id)_initWithServiceIdentifier:(id)arg1 listener:(_Bool)arg2;	// IMP=0x00000001000563ac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

