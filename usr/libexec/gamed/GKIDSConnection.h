//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GKNWConnectionWrapperDelegate-Protocol.h"
#import "IDSSessionDelegatePrivate-Protocol.h"

@class GKClientProxy, GKCloudGameSession, IDSAccount, NSMutableDictionary, NSString;
@protocol OS_dispatch_source;

@interface GKIDSConnection : NSObject <IDSSessionDelegatePrivate, GKNWConnectionWrapperDelegate>
{
    GKClientProxy *_clientForSession;	// 8 = 0x8
    IDSAccount *_localIDSAccount;	// 16 = 0x10
    NSString *_primaryPlayerCKID;	// 24 = 0x18
    GKCloudGameSession *_cloudSession;	// 32 = 0x20
    long long _connectionState;	// 40 = 0x28
    long long _reasonForDisconnect;	// 48 = 0x30
    CDUnknownBlockType _connectionCompleteHandler;	// 56 = 0x38
    CDUnknownBlockType _disconnectCompleteHandler;	// 64 = 0x40
    NSObject<OS_dispatch_source> *_connectTimeoutTimer;	// 72 = 0x48
    NSObject<OS_dispatch_source> *_backgroundTimer;	// 80 = 0x50
    NSObject<OS_dispatch_source> *_heartbeatTimer;	// 88 = 0x58
    NSMutableDictionary *_heartbeatTimeForCloudIDs;	// 96 = 0x60
    NSMutableDictionary *_pendingSessions;	// 104 = 0x68
    NSMutableDictionary *_reliableSessions;	// 112 = 0x70
    NSMutableDictionary *_unreliableSessions;	// 120 = 0x78
    NSMutableDictionary *_streamConnections;	// 128 = 0x80
    NSMutableDictionary *_datagramConnections;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x000000010003908c
@property(retain, nonatomic) NSMutableDictionary *datagramConnections; // @synthesize datagramConnections=_datagramConnections;
@property(retain, nonatomic) NSMutableDictionary *streamConnections; // @synthesize streamConnections=_streamConnections;
@property(retain, nonatomic) NSMutableDictionary *unreliableSessions; // @synthesize unreliableSessions=_unreliableSessions;
@property(retain, nonatomic) NSMutableDictionary *reliableSessions; // @synthesize reliableSessions=_reliableSessions;
@property(retain, nonatomic) NSMutableDictionary *pendingSessions; // @synthesize pendingSessions=_pendingSessions;
@property(retain, nonatomic) NSMutableDictionary *heartbeatTimeForCloudIDs; // @synthesize heartbeatTimeForCloudIDs=_heartbeatTimeForCloudIDs;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *heartbeatTimer; // @synthesize heartbeatTimer=_heartbeatTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *backgroundTimer; // @synthesize backgroundTimer=_backgroundTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *connectTimeoutTimer; // @synthesize connectTimeoutTimer=_connectTimeoutTimer;
@property(copy, nonatomic) CDUnknownBlockType disconnectCompleteHandler; // @synthesize disconnectCompleteHandler=_disconnectCompleteHandler;
@property(copy, nonatomic) CDUnknownBlockType connectionCompleteHandler; // @synthesize connectionCompleteHandler=_connectionCompleteHandler;
@property(nonatomic) long long reasonForDisconnect; // @synthesize reasonForDisconnect=_reasonForDisconnect;
@property(nonatomic) long long connectionState; // @synthesize connectionState=_connectionState;
@property(retain, nonatomic) GKCloudGameSession *cloudSession; // @synthesize cloudSession=_cloudSession;
@property(copy, nonatomic) NSString *primaryPlayerCKID; // @synthesize primaryPlayerCKID=_primaryPlayerCKID;
@property(retain, nonatomic) IDSAccount *localIDSAccount; // @synthesize localIDSAccount=_localIDSAccount;
@property(nonatomic) __weak GKClientProxy *clientForSession; // @synthesize clientForSession=_clientForSession;
- (void)cancelBackgroundTimer;	// IMP=0x0000000100038eec
- (void)clientEnteredForegroundState:(id)arg1;	// IMP=0x0000000100038e2c
- (void)clientEnteredBackgroundState:(id)arg1;	// IMP=0x0000000100038ab0
- (void)handleIDSSessionStatusChangeWhileDisconnecting;	// IMP=0x000000010003884c
- (void)handleIDSSessionStatusChange;	// IMP=0x0000000100038684
- (void)sessionEnded:(id)arg1 withReason:(unsigned int)arg2 error:(id)arg3;	// IMP=0x0000000100038214
- (void)handleDisconnectForClient:(id)arg1 reason:(long long)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100037df8
- (void)cancelConnectTimeoutTimer;	// IMP=0x0000000100037db4
- (void)cancelHeartbeatTimer;	// IMP=0x0000000100037d70
- (void)receivedHeartbeatFromID:(id)arg1;	// IMP=0x0000000100037cf4
- (void)sendHeartbeatToConnections;	// IMP=0x0000000100037730
- (_Bool)shouldSaveConnectionStateForLostConnectionWithCKID:(id)arg1;	// IMP=0x0000000100037550
- (void)startHeartbeatToMonitorConnections;	// IMP=0x0000000100037404
- (void)processInternalMessage:(id)arg1;	// IMP=0x00000001000370e4
- (void)connectionWrapper:(id)arg1 didReceiveData:(id)arg2;	// IMP=0x0000000100036f0c
- (void)_sendData:(id)arg1 usingConnections:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100036c44
- (void)sendData:(id)arg1 reliably:(_Bool)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100036994
- (id)clientPacketWithData:(id)arg1 isReliable:(_Bool)arg2 error:(id *)arg3;	// IMP=0x000000010003681c
- (id)internalPacketWithMessage:(long long)arg1 error:(id *)arg2;	// IMP=0x00000001000366c8
- (void)connectionWrapper:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x000000010003645c
- (void)setupDatagramForIDSSession:(id)arg1 fromID:(id)arg2;	// IMP=0x00000001000361c4
- (void)setupStreamForIDSSession:(id)arg1 fromID:(id)arg2;	// IMP=0x0000000100035f2c
- (void)acceptUnreliableInviteForIDSSession:(id)arg1 fromID:(id)arg2 withData:(id)arg3;	// IMP=0x0000000100035e2c
- (void)sendUnreliableIDSSessionInviteToIdentifier:(id)arg1;	// IMP=0x0000000100035b90
- (void)acceptReliableInviteForIDSSession:(id)arg1 fromID:(id)arg2 context:(id)arg3;	// IMP=0x0000000100035a90
- (void)sessionStarted:(id)arg1;	// IMP=0x00000001000358d4
- (_Bool)shouldAllowAddingAnotherConnection;	// IMP=0x0000000100035860
- (void)invitationAcceptedForIDSSession:(id)arg1 fromID:(id)arg2 withData:(id)arg3;	// IMP=0x000000010003563c
- (void)session:(id)arg1 receivedInvitationCancelFromID:(id)arg2 withData:(id)arg3;	// IMP=0x0000000100035454
- (void)session:(id)arg1 receivedInvitationDeclineFromID:(id)arg2 withData:(id)arg3;	// IMP=0x000000010003526c
- (void)session:(id)arg1 receivedInvitationAcceptFromID:(id)arg2 withData:(id)arg3;	// IMP=0x0000000100035050
- (void)connectToPlayersWithIdentifiers:(id)arg1;	// IMP=0x00000001000347b0
- (void)connectToGameSessionUsingDelegateQueue:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100033df8
- (_Bool)isBusyChangingConnectionState;	// IMP=0x0000000100033d88
- (void)updateCloudGameSession:(id)arg1;	// IMP=0x0000000100033d7c
- (void)dealloc;	// IMP=0x0000000100033854
- (id)initWithClient:(id)arg1 gameSession:(id)arg2 account:(id)arg3;	// IMP=0x0000000100033670

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

