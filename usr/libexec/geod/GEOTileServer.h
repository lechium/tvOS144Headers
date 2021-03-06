//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEOServer.h>

#import "GEOTileLoaderInternalDelegate-Protocol.h"

@class NSMutableDictionary, NSString;

@interface GEOTileServer : GEOServer <GEOTileLoaderInternalDelegate>
{
    NSMutableDictionary *_pendingPeerToClientIdentifiers;	// 16 = 0x10
}

+ (_Bool)shouldStartImmediately;	// IMP=0x0000000100012aec
+ (id)identifier;	// IMP=0x0000000100012ae0
- (void).cxx_destruct;	// IMP=0x000000010003624c
- (void)tileLoader:(id)arg1 submittedTilesToNetwork:(id)arg2 forClient:(id)arg3;	// IMP=0x0000000100035fa8
- (void)_receivedTile:(id)arg1 error:(id)arg2 info:(id)arg3 forKey:(const struct _GEOTileKey *)arg4 forPeer:(id)arg5;	// IMP=0x0000000100035bbc
- (void)peerDidDisconnect:(id)arg1;	// IMP=0x00000001000358a8
- (void)peerDidConnect:(id)arg1;	// IMP=0x0000000100035810
- (void)endPreload:(id)arg1 fromPeer:(id)arg2;	// IMP=0x000000010003574c
- (void)beginPreload:(id)arg1 fromPeer:(id)arg2;	// IMP=0x0000000100035624
- (void)corrupt:(id)arg1 fromPeer:(id)arg2;	// IMP=0x000000010003550c
- (void)_shrinkDB:(id)arg1 fromPeer:(id)arg2 synchronous:(_Bool)arg3;	// IMP=0x0000000100034fe8
- (void)shrinkDBSync:(id)arg1 fromPeer:(id)arg2;	// IMP=0x0000000100034f94
- (void)shrinkDB:(id)arg1 fromPeer:(id)arg2;	// IMP=0x0000000100034f40
- (void)_canShrinkBySize:(id)arg1 fromPeer:(id)arg2 synchronous:(_Bool)arg3;	// IMP=0x0000000100034d14
- (void)canShrinkBySizeSync:(id)arg1 fromPeer:(id)arg2;	// IMP=0x0000000100034cc0
- (void)canShrinkBySize:(id)arg1 fromPeer:(id)arg2;	// IMP=0x0000000100034c6c
- (void)reprioritizeKey:(id)arg1 fromPeer:(id)arg2;	// IMP=0x0000000100034abc
- (void)cancel:(id)arg1 fromPeer:(id)arg2;	// IMP=0x00000001000346c4
- (void)loadTiles:(id)arg1 fromPeer:(id)arg2;	// IMP=0x0000000100032240
- (void)_didDeleteExternalTileData:(id)arg1;	// IMP=0x0000000100032230
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x00000001000320e4
- (id)init;	// IMP=0x0000000100031f94
- (_Bool)handleIncomingMessage:(id)arg1 withObject:(id)arg2 fromPeer:(id)arg3;	// IMP=0x0000000100012af4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

