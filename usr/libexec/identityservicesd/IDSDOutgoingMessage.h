//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IDSDestination, NSArray, NSData, NSDate, NSDictionary, NSMutableArray, NSNumber, NSString;

@interface IDSDOutgoingMessage : NSObject
{
    NSDictionary *_message;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    NSDictionary *_protobuf;	// 24 = 0x18
    NSString *_fromID;	// 32 = 0x20
    IDSDestination *_destinations;	// 40 = 0x28
    NSString *_accountGUID;	// 48 = 0x30
    _Bool _useDictAsTopLevel;	// 56 = 0x38
    NSData *_dataToEncrypt;	// 64 = 0x40
    _Bool _encryptPayload;	// 72 = 0x48
    _Bool _compressPayload;	// 73 = 0x49
    _Bool _wantsResponse;	// 74 = 0x4a
    NSDate *_expirationDate;	// 80 = 0x50
    NSNumber *_command;	// 88 = 0x58
    _Bool _wantsDeliveryStatus;	// 96 = 0x60
    NSDictionary *_deliveryStatusContext;	// 104 = 0x68
    NSData *_messageUUID;	// 112 = 0x70
    long long _priority;	// 120 = 0x78
    NSString *_guid;	// 128 = 0x80
    NSString *_alternateGUID;	// 136 = 0x88
    NSString *_identifier;	// 144 = 0x90
    _Bool _forcedLocal;	// 152 = 0x98
    NSString *_queueOneIdentifier;	// 160 = 0xa0
    NSString *_peerResponseIdentifier;	// 168 = 0xa8
    NSArray *_duetIdentifiersOverride;	// 176 = 0xb0
    NSNumber *_storedSize;	// 184 = 0xb8
    _Bool _bypassDuet;	// 192 = 0xc0
    _Bool _expectsPeerResponse;	// 193 = 0xc1
    _Bool _wantsAppAck;	// 194 = 0xc2
    _Bool _fireAndForget;	// 195 = 0xc3
    _Bool _nonWaking;	// 196 = 0xc4
    _Bool _nonCloudWaking;	// 197 = 0xc5
    _Bool _enforceRemoteTimeouts;	// 198 = 0xc6
    _Bool _liveMessageDelivery;	// 199 = 0xc7
    _Bool _requireBluetooth;	// 200 = 0xc8
    _Bool _requireLocalWiFi;	// 201 = 0xc9
    _Bool _sent;	// 202 = 0xca
    _Bool _wantsProgress;	// 203 = 0xcb
    _Bool _ignoreMaxRetryCount;	// 204 = 0xcc
    _Bool _wantsCertifiedDelivery;	// 205 = 0xcd
    NSNumber *_originalTimestamp;	// 208 = 0xd0
    NSString *_mainAccountGuid;	// 216 = 0xd8
    NSString *_localDestinationDeviceUUID;	// 224 = 0xe0
    NSDate *_enqueuedDate;	// 232 = 0xe8
    NSNumber *_messageType;	// 240 = 0xf0
    NSMutableArray *_combinedMessages;	// 248 = 0xf8
    _Bool _alwaysSkipSelf;	// 256 = 0x100
    NSNumber *_pushPriority;	// 264 = 0x108
}

- (void).cxx_destruct;	// IMP=0x000000010048f0f4
@property(readonly) NSArray *combinedMessages; // @synthesize combinedMessages=_combinedMessages;
@property(copy) NSNumber *originalTimestamp; // @synthesize originalTimestamp=_originalTimestamp;
@property _Bool wantsCertifiedDelivery; // @synthesize wantsCertifiedDelivery=_wantsCertifiedDelivery;
@property _Bool ignoreMaxRetryCount; // @synthesize ignoreMaxRetryCount=_ignoreMaxRetryCount;
@property _Bool wantsProgress; // @synthesize wantsProgress=_wantsProgress;
@property _Bool sent; // @synthesize sent=_sent;
@property _Bool requireLocalWiFi; // @synthesize requireLocalWiFi=_requireLocalWiFi;
@property _Bool requireBluetooth; // @synthesize requireBluetooth=_requireBluetooth;
@property _Bool liveMessageDelivery; // @synthesize liveMessageDelivery=_liveMessageDelivery;
@property(copy) NSNumber *pushPriority; // @synthesize pushPriority=_pushPriority;
@property _Bool alwaysSkipSelf; // @synthesize alwaysSkipSelf=_alwaysSkipSelf;
@property(copy) NSNumber *messageType; // @synthesize messageType=_messageType;
@property(copy) NSDate *enqueuedDate; // @synthesize enqueuedDate=_enqueuedDate;
@property(copy) NSString *localDestinationDeviceUUID; // @synthesize localDestinationDeviceUUID=_localDestinationDeviceUUID;
@property(copy) NSString *mainAccountGuid; // @synthesize mainAccountGuid=_mainAccountGuid;
@property _Bool enforceRemoteTimeouts; // @synthesize enforceRemoteTimeouts=_enforceRemoteTimeouts;
@property(copy) NSString *queueOneIdentifier; // @synthesize queueOneIdentifier=_queueOneIdentifier;
@property(copy) NSArray *duetIdentifiersOverride; // @synthesize duetIdentifiersOverride=_duetIdentifiersOverride;
@property _Bool bypassDuet; // @synthesize bypassDuet=_bypassDuet;
@property(copy) NSNumber *storedSize; // @synthesize storedSize=_storedSize;
@property _Bool nonCloudWaking; // @synthesize nonCloudWaking=_nonCloudWaking;
@property _Bool nonWaking; // @synthesize nonWaking=_nonWaking;
@property _Bool fireAndForget; // @synthesize fireAndForget=_fireAndForget;
@property _Bool wantsAppAck; // @synthesize wantsAppAck=_wantsAppAck;
@property _Bool expectsPeerResponse; // @synthesize expectsPeerResponse=_expectsPeerResponse;
@property(copy) NSString *peerResponseIdentifier; // @synthesize peerResponseIdentifier=_peerResponseIdentifier;
@property _Bool forcedLocal; // @synthesize forcedLocal=_forcedLocal;
@property(copy) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy) NSString *alternateGUID; // @synthesize alternateGUID=_alternateGUID;
@property(copy) NSString *guid; // @synthesize guid=_guid;
@property long long priority; // @synthesize priority=_priority;
@property(copy) NSData *messageUUID; // @synthesize messageUUID=_messageUUID;
@property(copy) NSDictionary *deliveryStatusContext; // @synthesize deliveryStatusContext=_deliveryStatusContext;
@property _Bool wantsDeliveryStatus; // @synthesize wantsDeliveryStatus=_wantsDeliveryStatus;
@property(copy) NSNumber *command; // @synthesize command=_command;
@property(retain) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property _Bool wantsResponse; // @synthesize wantsResponse=_wantsResponse;
@property _Bool compressPayload; // @synthesize compressPayload=_compressPayload;
@property _Bool encryptPayload; // @synthesize encryptPayload=_encryptPayload;
@property(copy) NSData *dataToEncrypt; // @synthesize dataToEncrypt=_dataToEncrypt;
@property _Bool useDictAsTopLevel; // @synthesize useDictAsTopLevel=_useDictAsTopLevel;
@property(copy) NSString *accountGUID; // @synthesize accountGUID=_accountGUID;
@property(copy) IDSDestination *destinations; // @synthesize destinations=_destinations;
@property(copy) NSString *fromID; // @synthesize fromID=_fromID;
@property(copy) NSDictionary *protobuf; // @synthesize protobuf=_protobuf;
@property(copy) NSData *data; // @synthesize data=_data;
@property(copy) NSDictionary *message; // @synthesize message=_message;
- (id)copySendParameters;	// IMP=0x000000010048d320
- (void)combineWithMessage:(id)arg1;	// IMP=0x000000010048d20c
- (_Bool)canCombineWithMessage:(id)arg1;	// IMP=0x000000010048c68c
- (id)initWithMessage:(id)arg1 data:(id)arg2 protobuf:(id)arg3 fromID:(id)arg4 toDestinations:(id)arg5 accountGUID:(id)arg6 useDictAsTopLevel:(_Bool)arg7 dataToEncrypt:(id)arg8 encryptPayload:(_Bool)arg9 compressPayload:(_Bool)arg10 wantsResponse:(_Bool)arg11 expirationDate:(id)arg12 enforceRemoteTimeouts:(_Bool)arg13 command:(id)arg14 wantsDeliveryStatus:(_Bool)arg15 deliveryStatusContext:(id)arg16 messageUUID:(id)arg17 priority:(long long)arg18 guid:(id)arg19 alternateGUID:(id)arg20 identifier:(id)arg21 forcedLocal:(_Bool)arg22 peerResponseIdentifier:(id)arg23 expectsPeerResponse:(_Bool)arg24 wantsAppAck:(_Bool)arg25 fireAndForget:(_Bool)arg26 nonWaking:(_Bool)arg27 nonCloudWaking:(_Bool)arg28 storedSize:(id)arg29 duetIdentifiersOverride:(id)arg30 bypassDuet:(_Bool)arg31 mainAccountGuid:(id)arg32 localDestinationDeviceUUID:(id)arg33 enqueuedDate:(id)arg34 messageType:(id)arg35 alwaysSkipSelf:(_Bool)arg36 pushPriority:(id)arg37 queueOneIdentifier:(id)arg38 liveMessageDelivery:(_Bool)arg39 requireBluetooth:(_Bool)arg40 requireLocalWiFi:(_Bool)arg41 sent:(_Bool)arg42 wantsProgress:(_Bool)arg43 ignoreMaxRetryCount:(_Bool)arg44 wantsCertifiedDelivery:(_Bool)arg45 originalTimestamp:(id)arg46;	// IMP=0x000000010048bb68

@end

