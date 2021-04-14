//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "APSIDSProxyManagerListener-Protocol.h"

@class APSEnvironment, APSIDSProxyManager, NSMutableDictionary, NSString;
@protocol APSProxyMasterDelegate;

@interface APSProxyMaster : NSObject <APSIDSProxyManagerListener>
{
    id <APSProxyMasterDelegate> _delegate;	// 8 = 0x8
    APSIDSProxyManager *_proxyManager;	// 16 = 0x10
    APSEnvironment *_environment;	// 24 = 0x18
    NSString *_guid;	// 32 = 0x20
    NSMutableDictionary *_outgoingMessageGUIDToConnection;	// 40 = 0x28
    NSMutableDictionary *_outgoingMessageGUIDToMessageID;	// 48 = 0x30
    unsigned long long _presenceRetryTimeDelta;	// 56 = 0x38
    _Bool _active;	// 64 = 0x40
    _Bool _isConnected;	// 65 = 0x41
}

- (void).cxx_destruct;	// IMP=0x0000000100089ec0
@property(nonatomic) _Bool isConnected; // @synthesize isConnected=_isConnected;
@property(retain, nonatomic) APSIDSProxyManager *proxyManager; // @synthesize proxyManager=_proxyManager;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(nonatomic) __weak id <APSProxyMasterDelegate> delegate; // @synthesize delegate=_delegate;
- (void)proxyManager:(id)arg1 isConnected:(_Bool)arg2 guid:(id)arg3 environmentName:(id)arg4;	// IMP=0x0000000100089c68
- (void)proxyManager:(id)arg1 appTokenGenerateResponse:(id)arg2 error:(id)arg3 guid:(id)arg4 environmentName:(id)arg5;	// IMP=0x0000000100089a1c
- (void)proxyManager:(id)arg1 expiredNonceWithServerTime:(id)arg2 guid:(id)arg3 environmentName:(id)arg4;	// IMP=0x00000001000897b4
- (void)proxyManager:(id)arg1 reversePushResponse:(id)arg2 messageGUID:(id)arg3 messageId:(id)arg4 guid:(id)arg5 environmentName:(id)arg6;	// IMP=0x00000001000894b0
- (void)proxyManager:(id)arg1 receivedPush:(id)arg2 interface:(id)arg3 generation:(id)arg4 guid:(id)arg5 environmentName:(id)arg6;	// IMP=0x0000000100089248
- (void)proxyManagerReceivedDaemonAliveNotification:(id)arg1;	// IMP=0x0000000100089190
- (void)proxyManager:(id)arg1 incomingMessageSize:(id)arg2 largeMessageSize:(id)arg3 guid:(id)arg4 environmentName:(id)arg5;	// IMP=0x0000000100088f30
- (void)proxyManager:(id)arg1 incomingPushToken:(id)arg2 guid:(id)arg3 environmentName:(id)arg4;	// IMP=0x0000000100088d08
- (void)proxyManager:(id)arg1 isNearbyChanged:(_Bool)arg2;	// IMP=0x0000000100088bf8
@property(readonly, nonatomic) unsigned long long outgoingMessageCount;
- (void)setEnabledTopics:(id)arg1 ignoredTopics:(id)arg2 opportunisticTopics:(id)arg3 nonWakingTopics:(id)arg4;	// IMP=0x0000000100088a54
- (void)_failAllPendingMessages;	// IMP=0x00000001000884f4
- (void)sendAppTokenGenerateMessageWithTopicHash:(id)arg1 baseToken:(id)arg2 appId:(unsigned short)arg3;	// IMP=0x0000000100088440
- (void)connection:(id)arg1 sendMessage:(id)arg2;	// IMP=0x00000001000881e0
- (void)sendResponse:(long long)arg1 messageId:(id)arg2 token:(id)arg3 interface:(long long)arg4 generation:(unsigned long long)arg5;	// IMP=0x000000010008810c
- (void)sendMessageTracingAckWithStatus:(int)arg1 topic:(id)arg2 tracingUUID:(id)arg3 token:(id)arg4;	// IMP=0x0000000100087f94
- (void)sendInactiveMessage;	// IMP=0x0000000100087e54
- (void)sendPresenceMessage;	// IMP=0x0000000100087e40
- (void)_sendPresenceMessageWithServerTime:(id)arg1;	// IMP=0x0000000100087ad4
- (void)dealloc;	// IMP=0x0000000100087a7c
- (id)initWithEnvironment:(id)arg1;	// IMP=0x00000001000879e8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

