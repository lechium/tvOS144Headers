//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEOServer.h>

@interface GEOToolServer : GEOServer
{
}

+ (id)identifier;	// IMP=0x0000000100011464
- (void)notifyNetworkDefaultsChangedWithMessage:(id)arg1;	// IMP=0x0000000100023fc4
- (void)invalidateTileCacheWithMessage:(id)arg1;	// IMP=0x0000000100023ea8
- (void)freePurgableSpaceWithMessage:(id)arg1;	// IMP=0x0000000100023ac4
- (void)calculatePurgableSpaceWithMessage:(id)arg1;	// IMP=0x0000000100023804
- (void)getDefaultWithMessage:(id)arg1;	// IMP=0x0000000100023640
- (void)lockDBsWithMessage:(id)arg1;	// IMP=0x00000001000235cc
- (void)unlockDBsWithMessage:(id)arg1;	// IMP=0x0000000100023558
- (void)pingWithMessage:(id)arg1;	// IMP=0x00000001000233d8
- (_Bool)handleIncomingMessage:(id)arg1 withObject:(id)arg2 fromPeer:(id)arg3;	// IMP=0x0000000100011470

@end

