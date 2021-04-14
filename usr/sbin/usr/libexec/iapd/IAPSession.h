//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IAPEAClient, NSMutableDictionary;

@interface IAPSession : NSObject
{
    NSMutableDictionary *_accessory;	// 8 = 0x8
    IAPEAClient *_client;	// 16 = 0x10
    unsigned int _connectionID;	// 24 = 0x18
    unsigned char _protocolID;	// 28 = 0x1c
    unsigned short _sessionID;	// 30 = 0x1e
    int _listenSock;	// 32 = 0x20
    struct __CFSocket *_listenSockRef;	// 40 = 0x28
    struct __CFRunLoopSource *_listenSockRls;	// 48 = 0x30
    int _sock;	// 56 = 0x38
    struct __CFSocket *_sockRef;	// 64 = 0x40
    struct __CFRunLoopSource *_sockRls;	// 72 = 0x48
    _Bool _openPipeToAppAfterAccept;	// 80 = 0x50
    _Bool _openPipeFromAppAfterAccept;	// 81 = 0x51
    _Bool _isWirelessSession;	// 82 = 0x52
}

+ (void)resetSessionIDCounter;	// IMP=0x0000000100014c44
@property(readonly, nonatomic) unsigned char protocolID; // @synthesize protocolID=_protocolID;
@property(readonly, nonatomic) unsigned short sessionID; // @synthesize sessionID=_sessionID;
@property(readonly, nonatomic) unsigned int connectionID; // @synthesize connectionID=_connectionID;
@property(readonly, nonatomic) IAPEAClient *client; // @synthesize client=_client;
- (id)description;	// IMP=0x0000000100015048
- (void)_writeSocketCB:(struct __CFSocket *)arg1;	// IMP=0x0000000100015044
- (void)_readSocketCB:(struct __CFSocket *)arg1;	// IMP=0x0000000100015040
- (void)_acceptSocketCB:(struct __CFSocket *)arg1 acceptedSock:(int)arg2;	// IMP=0x0000000100014e88
- (void)_registerListenSocket;	// IMP=0x0000000100014c50
- (_Bool)closeDataPipes;	// IMP=0x0000000100014b50
- (void)_openPipeFromApp;	// IMP=0x0000000100014b4c
- (_Bool)openPipeFromApp;	// IMP=0x0000000100014b08
- (void)_openPipeToApp;	// IMP=0x0000000100014b04
- (_Bool)openPipeToApp;	// IMP=0x0000000100014ac0
- (void)dealloc;	// IMP=0x0000000100014a4c
- (void)shuttingDownSession;	// IMP=0x0000000100014858
- (id)initWithClient:(id)arg1 connectionID:(unsigned int)arg2 protocolID:(unsigned char)arg3 sessionID:(unsigned short *)arg4;	// IMP=0x000000010001445c
- (id)init;	// IMP=0x0000000100014424

@end
