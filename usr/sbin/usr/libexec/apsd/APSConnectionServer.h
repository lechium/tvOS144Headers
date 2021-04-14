//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "APSOutgoingMessageOriginator-Protocol.h"

@class APSTokenState, NSData, NSOperationQueue, NSSet, NSString;
@protocol APSConnectionServerDelegate, OS_xpc_object;

@interface APSConnectionServer : NSObject <APSOutgoingMessageOriginator>
{
    id <APSConnectionServerDelegate> _delegate;	// 8 = 0x8
    NSString *_environmentName;	// 16 = 0x10
    NSData *_publicToken;	// 24 = 0x18
    unsigned long long _mode;	// 32 = 0x20
    unsigned int _connectionMachPort;	// 40 = 0x28
    NSString *_connectionPortName;	// 48 = 0x30
    NSSet *_enabledTopics;	// 56 = 0x38
    NSSet *_ignoredTopics;	// 64 = 0x40
    NSSet *_opportunisticTopics;	// 72 = 0x48
    unsigned long long _messageSize;	// 80 = 0x50
    unsigned long long _largeMessageSize;	// 88 = 0x58
    _Bool _enableCriticalReliability;	// 96 = 0x60
    _Bool _usesAppLaunchStats;	// 97 = 0x61
    _Bool _enableStatusChangeNotifications;	// 98 = 0x62
    int _clientPID;	// 100 = 0x64
    NSObject<OS_xpc_object> *_connection;	// 104 = 0x68
    NSOperationQueue *_queue;	// 112 = 0x70
    APSTokenState *_tokenState;	// 120 = 0x78
    NSString *_processName;	// 128 = 0x80
    _Bool _freshMachPort;	// 136 = 0x88
    _Bool _isPublicTokenAcknowledged;	// 137 = 0x89
    long long _publicTokenDeliveryRetries;	// 144 = 0x90
    _Bool _isClosed;	// 152 = 0x98
    NSSet *_nonWakingTopics;	// 160 = 0xa0
}

+ (void)serversWithEnvironmentName:(id)arg1 delegate:(id)arg2 withMode:(unsigned long long)arg3 returnServers:(id)arg4;	// IMP=0x0000000100048ae4
+ (id)serversWithEnvironmentName:(id)arg1 delegate:(id)arg2;	// IMP=0x0000000100048928
+ (void)serverEnvironmentNames:(id)arg1 withMode:(unsigned long long)arg2;	// IMP=0x0000000100048704
+ (id)serverEnvironmentNames;	// IMP=0x0000000100048648
- (void).cxx_destruct;	// IMP=0x000000010004d410
@property(readonly, nonatomic) _Bool isClosed; // @synthesize isClosed=_isClosed;
@property(nonatomic) long long publicTokenDeliveryRetries; // @synthesize publicTokenDeliveryRetries=_publicTokenDeliveryRetries;
@property(retain, nonatomic) NSString *processName; // @synthesize processName=_processName;
@property(readonly, retain, nonatomic) NSSet *nonWakingTopics; // @synthesize nonWakingTopics=_nonWakingTopics;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(readonly, retain, nonatomic) NSString *environmentName; // @synthesize environmentName=_environmentName;
@property(retain, nonatomic) NSObject<OS_xpc_object> *connection; // @synthesize connection=_connection;
@property(nonatomic) _Bool enableStatusChangeNotifications; // @synthesize enableStatusChangeNotifications=_enableStatusChangeNotifications;
@property(nonatomic) _Bool usesAppLaunchStats; // @synthesize usesAppLaunchStats=_usesAppLaunchStats;
@property(nonatomic) _Bool enableCriticalReliability; // @synthesize enableCriticalReliability=_enableCriticalReliability;
@property(nonatomic) unsigned long long largeMessageSize; // @synthesize largeMessageSize=_largeMessageSize;
@property(nonatomic) unsigned long long messageSize; // @synthesize messageSize=_messageSize;
@property(readonly, copy, nonatomic) NSData *publicToken; // @synthesize publicToken=_publicToken;
@property(readonly, retain, nonatomic) NSSet *opportunisticTopics; // @synthesize opportunisticTopics=_opportunisticTopics;
@property(readonly, retain, nonatomic) NSSet *ignoredTopics; // @synthesize ignoredTopics=_ignoredTopics;
@property(readonly, retain, nonatomic) NSSet *enabledTopics; // @synthesize enabledTopics=_enabledTopics;
@property(nonatomic) __weak id <APSConnectionServerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, retain, nonatomic) NSString *tokenName;
- (void)_savePersistentConnectionWithMode:(unsigned long long)arg1;	// IMP=0x000000010004cf08
- (void)_savePersistentConnectionTopics;	// IMP=0x000000010004ced0
@property(readonly, nonatomic) _Bool isConnected; // @dynamic isConnected;
@property(readonly, nonatomic) _Bool hasIdentity; // @dynamic hasIdentity;
- (void)saveAndUpdateDelegate;	// IMP=0x000000010004cad0
- (void)setEnabledTopics:(id)arg1 ignoredTopics:(id)arg2 opportunisticTopics:(id)arg3 nonWakingTopics:(id)arg4;	// IMP=0x000000010004c6fc
- (void)acknowledgeDidReceivePublicToken:(id)arg1;	// IMP=0x000000010004c0f4
@property(nonatomic) _Bool isPublicTokenAcknowledged;
- (void)_redeliverCurrentPublicToken;	// IMP=0x000000010004bf20
- (void)handlePublicTokenDeliveryReply:(id)arg1;	// IMP=0x000000010004bc18
- (void)setPublicToken:(id)arg1 needsAck:(_Bool)arg2;	// IMP=0x000000010004b974
- (void)handleReceivedPerAppToken:(id)arg1 forTopic:(id)arg2 identifier:(id)arg3;	// IMP=0x000000010004b70c
- (void)handleAckIncomingMessageWithGuid:(id)arg1 topic:(id)arg2 tracingUUID:(id)arg3;	// IMP=0x000000010004b66c
- (void)handleInvalidatePerAppTokenForTopic:(id)arg1 identifier:(id)arg2;	// IMP=0x000000010004b5f0
- (void)handleRequestPerAppTokenForTopic:(id)arg1 identifier:(id)arg2;	// IMP=0x000000010004b5a0
- (void)_requestMissingPerAppTokenForTopic:(id)arg1 identifier:(id)arg2;	// IMP=0x000000010004b524
- (void)handleFakeMessage:(id)arg1;	// IMP=0x000000010004b4c4
- (void)handleCancelOutgoingMessageWithID:(unsigned long long)arg1;	// IMP=0x000000010004b478
- (void)handleSendOutgoingMessage:(id)arg1;	// IMP=0x000000010004b418
- (void)handleResult:(id)arg1 forSendingOutgoingMessageWithID:(unsigned long long)arg2 checkpointTraceData:(id)arg3 sendRTT:(unsigned long long)arg4 ackTimestamp:(unsigned long long)arg5;	// IMP=0x000000010004b210
- (void)handleResult:(id)arg1 forSendingOutgoingMessageWithID:(unsigned long long)arg2;	// IMP=0x000000010004b1f8
- (void)handleResult:(id)arg1 forSendingOutgoingMessage:(id)arg2;	// IMP=0x000000010004b0e0
- (void)handleReceivedMessage:(id)arg1;	// IMP=0x000000010004aeac
- (void)_initiateConnectionIfNecessary;	// IMP=0x000000010004a7b4
- (void)handleConnectionStatusChanged:(_Bool)arg1;	// IMP=0x000000010004a6cc
- (id)connectionPortName;	// IMP=0x000000010004a6c4
- (void)connectionInvalidated;	// IMP=0x000000010004a668
- (void)_suspendQueue;	// IMP=0x000000010004a64c
- (void)_resumeQueue;	// IMP=0x000000010004a630
- (void)connectionHandshakeDidComplete;	// IMP=0x000000010004a5b8
- (void)_migratePersistentTopicsFromOldMode:(unsigned long long)arg1;	// IMP=0x000000010004a0d8
@property(readonly, copy) NSString *debugDescription;
- (id)processNameWithLabels:(_Bool)arg1;	// IMP=0x0000000100049edc
- (void)close;	// IMP=0x0000000100049e6c
- (void)_lookUpMachPort;	// IMP=0x0000000100049d00
- (void)dealloc;	// IMP=0x0000000100049c84
- (id)initWithDelegate:(id)arg1 mode:(unsigned long long)arg2 environmentName:(id)arg3 connectionPortName:(id)arg4 processName:(id)arg5 connection:(id)arg6;	// IMP=0x0000000100049868
- (void)_enqueueXPCMessage:(CDUnknownBlockType)arg1 wakingClient:(_Bool)arg2 highPriority:(_Bool)arg3 withReply:(CDUnknownBlockType)arg4;	// IMP=0x000000010004931c
- (void)_enqueueXPCMessage:(CDUnknownBlockType)arg1 wakingClient:(_Bool)arg2 highPriority:(_Bool)arg3;	// IMP=0x000000010004930c

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

