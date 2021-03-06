//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AFInvalidating-Protocol.h"

@class ADRapportLinkConfiguration, NSArray, NSHashTable, NSMutableDictionary, NSString, RPCompanionLinkClient, RPCompanionLinkDevice;
@protocol OS_dispatch_queue;

@interface ADRapportLink : NSObject <AFInvalidating>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    RPCompanionLinkClient *_client;	// 16 = 0x10
    NSHashTable *_listeners;	// 24 = 0x18
    NSMutableDictionary *_siriInfoCache;	// 32 = 0x20
    NSMutableDictionary *_handlersByRequestIDAndMessageType;	// 40 = 0x28
    ADRapportLinkConfiguration *_configuration;	// 48 = 0x30
}

+ (void)updateSiriInfoWithObject:(id)arg1 forKey:(id)arg2;	// IMP=0x000000010006a180
+ (id)siriInfoToBeBroadcasted;	// IMP=0x000000010006a12c
+ (id)_sharedLinkForSiriInfo;	// IMP=0x0000000100069e78
- (void).cxx_destruct;	// IMP=0x000000010006a3f4
@property(readonly, copy, nonatomic) ADRapportLinkConfiguration *configuration; // @synthesize configuration=_configuration;
- (void)_updateSiriInfoWithObject:(id)arg1 forKey:(id)arg2;	// IMP=0x000000010006a258
- (id)_siriInfoToBeBroadcasted;	// IMP=0x000000010006a208
- (id)_destinationIDForDeviceIDSIdentifier:(id)arg1;	// IMP=0x0000000100069c84
- (void)_sendRequestID:(id)arg1 request:(id)arg2 destinationID:(id)arg3 options:(id)arg4 responseHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000100069b54
- (id)_transformedRequestFromRequest:(id)arg1;	// IMP=0x00000001000699d4
- (void)_registerRequestID:(id)arg1 options:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000696f0
- (void)_enumerateListenersUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001000695b8
- (void)_handleDidLoseDevice:(id)arg1;	// IMP=0x00000001000694cc
- (void)_handleDidUpdateDevice:(id)arg1 changes:(unsigned int)arg2;	// IMP=0x00000001000693d4
- (void)_handleDidFindDevice:(id)arg1;	// IMP=0x00000001000692e8
- (void)_handleDidUpdateLocalDevice:(id)arg1;	// IMP=0x00000001000691fc
- (void)_handleDidInvalidate;	// IMP=0x000000010006914c
- (void)_handleDidInterrupt;	// IMP=0x000000010006909c
- (void)_invalidate;	// IMP=0x0000000100069054
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100069044
- (void)invalidate;	// IMP=0x0000000100068fdc
- (void)sendRequestID:(id)arg1 messageType:(id)arg2 requestPayload:(id)arg3 toDeviceWithIDSDeviceID:(id)arg4 options:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00000001000689f4
- (void)sendRequestID:(id)arg1 request:(id)arg2 destinationID:(id)arg3 options:(id)arg4 responseHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000001000687d8
- (void)setRequestHandler:(id)arg1 forRequestID:(id)arg2 messageType:(id)arg3;	// IMP=0x00000001000685ac
- (void)registerRequestID:(id)arg1 options:(id)arg2;	// IMP=0x0000000100067dac
- (void)registerRequestID:(id)arg1 options:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100067c1c
- (_Bool)canReachPersonalDevices;	// IMP=0x0000000100067bc0
@property(retain, nonatomic) RPCompanionLinkDevice *destinationDevice;
@property(copy, nonatomic) NSString *serviceType;
@property(readonly, copy, nonatomic) NSArray *activeDevices;
@property(readonly, copy, nonatomic) RPCompanionLinkDevice *localDevice;
- (void)removeListener:(id)arg1;	// IMP=0x00000001000679b8
- (void)addListener:(id)arg1;	// IMP=0x0000000100067920
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100067814
- (id)initWithQueue:(id)arg1 configuration:(id)arg2;	// IMP=0x0000000100066c04
- (void)dealloc;	// IMP=0x0000000100066bb8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

