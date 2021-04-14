//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, PCSDevice, PCSIDSTransport, PCSKeyClient, PCSKeySyncing;

@interface PCSPeerSyncing : NSObject
{
    _Bool _pendingRequest;	// 8 = 0x8
    int _clientVersion;	// 12 = 0xc
    PCSDevice *_device;	// 16 = 0x10
    PCSIDSTransport *_transport;	// 24 = 0x18
    NSData *_keys;	// 32 = 0x20
    PCSKeyClient *_client;	// 40 = 0x28
    PCSKeySyncing *_syncingManager;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000010000d158
@property(retain) PCSKeySyncing *syncingManager; // @synthesize syncingManager=_syncingManager;
@property(retain) PCSKeyClient *client; // @synthesize client=_client;
@property int clientVersion; // @synthesize clientVersion=_clientVersion;
@property _Bool pendingRequest; // @synthesize pendingRequest=_pendingRequest;
@property(retain) NSData *keys; // @synthesize keys=_keys;
@property(retain) PCSIDSTransport *transport; // @synthesize transport=_transport;
@property(retain) PCSDevice *device; // @synthesize device=_device;
- (void)handleIncomingMessage:(id)arg1;	// IMP=0x000000010000cc98
- (void)sendReply:(int)arg1 error:(id)arg2 toMessage:(id)arg3;	// IMP=0x000000010000cac0
- (void)keyFailure:(id)arg1;	// IMP=0x000000010000c920
- (void)setPeerCircleStatus:(_Bool)arg1;	// IMP=0x000000010000c800
- (void)setPeeriCDPStatus:(_Bool)arg1;	// IMP=0x000000010000c6e0
- (void)haveKeys:(id)arg1;	// IMP=0x000000010000c43c
- (void)sendKeys;	// IMP=0x000000010000bbc0
- (void)sendCurrentKeys:(id)arg1;	// IMP=0x000000010000b7e8
- (void)sendSomeKeys:(id)arg1 dsid:(id)arg2;	// IMP=0x000000010000ae68
- (void)sendKeysOld;	// IMP=0x000000010000a6d4
- (void)checkSyncing:(_Bool)arg1;	// IMP=0x00000001000097c4
- (_Bool)checkHashWithRateLimit:(id)arg1;	// IMP=0x00000001000096f4
- (_Bool)ratelimitClientSyncing;	// IMP=0x00000001000096d0
- (double)timeUntilSyncing;	// IMP=0x000000010000959c
- (double)checkRatelimit:(double)arg1;	// IMP=0x00000001000094d8
- (void)sendiCDPStatus:(_Bool)arg1 circleStatus:(_Bool)arg2 handleReply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100009344
- (void)sendKeys:(id)arg1 dsid:(id)arg2 handleReply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100009138
- (void)sendCurrents:(id)arg1 dsid:(id)arg2 handleReply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100008f2c
- (void)sendCommand:(unsigned int)arg1 data:(id)arg2 dsid:(id)arg3 handleReply:(CDUnknownBlockType)arg4;	// IMP=0x0000000100008cb0
- (void)updateLastSeen;	// IMP=0x0000000100008bd4
- (id)uuid;	// IMP=0x0000000100008b80
- (id)initWithDevice:(id)arg1 syncingManager:(id)arg2;	// IMP=0x0000000100008a30

@end
