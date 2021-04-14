//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDSServiceDelegate-Protocol.h"

@class IDSService, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface GKConnectionManager : NSObject <IDSServiceDelegate>
{
    NSMutableDictionary *_connectionErrorBySessionID;	// 8 = 0x8
    IDSService *_idsService;	// 16 = 0x10
    NSMutableDictionary *_connectionsBySessionID;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_idsDelegateQueue;	// 32 = 0x20
}

+ (id)sharedManager;	// IMP=0x000000010002fb48
- (void).cxx_destruct;	// IMP=0x0000000100033628
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *idsDelegateQueue; // @synthesize idsDelegateQueue=_idsDelegateQueue;
@property(retain, nonatomic) NSMutableDictionary *connectionsBySessionID; // @synthesize connectionsBySessionID=_connectionsBySessionID;
@property(retain, nonatomic) IDSService *idsService; // @synthesize idsService=_idsService;
@property(retain, nonatomic) NSMutableDictionary *connectionErrorBySessionID; // @synthesize connectionErrorBySessionID=_connectionErrorBySessionID;
- (void)clientEnteredForegroundState:(id)arg1;	// IMP=0x0000000100033404
- (void)clientEnteredBackgroundState:(id)arg1;	// IMP=0x0000000100033230
- (void)service:(id)arg1 account:(id)arg2 incomingData:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00000001000330e0
- (void)sendGKPlayerIDtoiCloud:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100032e8c
- (void)requestGKPlayerIDforiCloud:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100032d18
- (void)sendNotificationMessage:(id)arg1 toIDSIDs:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100032a18
- (void)sendNotificationMessageOfType:(unsigned char)arg1 forSession:(id)arg2 localizedFormatKey:(id)arg3 arguments:(id)arg4 userMessage:(id)arg5 data:(id)arg6 recipientIDs:(id)arg7 handler:(CDUnknownBlockType)arg8;	// IMP=0x0000000100031a20
- (long long)deviceTypeForNotification;	// IMP=0x0000000100031a18
- (void)sendData:(id)arg1 reliably:(_Bool)arg2 forGameSessionWithIdentifier:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x000000010003183c
- (void)connection:(id)arg1 didDisconnectForGameSessionWithID:(id)arg2 client:(id)arg3 playerID:(id)arg4 reason:(long long)arg5;	// IMP=0x00000001000310ac
- (void)disconnectConnectionsForClient:(id)arg1 reason:(long long)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100030bec
- (id)idsDestinationsFromCKIDs:(id)arg1 containerName:(id)arg2;	// IMP=0x0000000100030974
- (void)cloudGameSessionUpdated:(id)arg1;	// IMP=0x0000000100030870
- (void)service:(id)arg1 account:(id)arg2 inviteReceivedForSession:(id)arg3 fromID:(id)arg4 withContext:(id)arg5;	// IMP=0x00000001000303b0
- (void)connectToGameSession:(id)arg1 forClient:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100030170
- (void)gameSession:(id)arg1 forClient:(id)arg2 lostConnectionFromCKID:(id)arg3;	// IMP=0x0000000100030084
- (void)isBusyChangingConnectionStateForSession:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010002ff44
- (id)primaryEmailAddress;	// IMP=0x000000010002fd34
- (void)dealloc;	// IMP=0x000000010002fce0
- (id)init;	// IMP=0x000000010002fbb4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

