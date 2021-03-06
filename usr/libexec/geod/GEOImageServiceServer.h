//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEOServer.h>

@class GEOImageServicePersistence, NSMapTable, NSMutableArray, geo_isolater;

@interface GEOImageServiceServer : GEOServer
{
    GEOImageServicePersistence *_persistence;	// 16 = 0x10
    geo_isolater *_isolater;	// 24 = 0x18
    NSMutableArray *_requestsConsultingPersistence;	// 32 = 0x20
    NSMapTable *_originalRequestToPendingRequest;	// 40 = 0x28
}

+ (id)identifier;	// IMP=0x0000000100011770
- (void).cxx_destruct;	// IMP=0x000000010002641c
- (void)purgeDiskCacheWithRequest:(id)arg1;	// IMP=0x0000000100026290
- (void)calculateFreeableWithRequest:(id)arg1;	// IMP=0x000000010002611c
- (void)cancelImageServiceRequestWithRequest:(id)arg1;	// IMP=0x0000000100025e4c
- (void)startImageServiceRequestWithRequest:(id)arg1;	// IMP=0x0000000100024a6c
- (id)init;	// IMP=0x0000000100024890
- (_Bool)handleIncomingMessage:(id)arg1 withObject:(id)arg2 fromPeer:(id)arg3;	// IMP=0x000000010001177c

@end

