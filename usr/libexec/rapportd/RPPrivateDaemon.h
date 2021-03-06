//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSXPCListenerDelegate-Protocol.h"
#import "RPSubDaemonable-Protocol.h"

@class NSMutableSet, NSString, NSXPCListener;
@protocol OS_dispatch_queue;

@interface RPPrivateDaemon : NSObject <NSXPCListenerDelegate, RPSubDaemonable>
{
    _Bool _invalidateCalled;	// 8 = 0x8
    _Bool _invalidateDone;	// 9 = 0x9
    _Bool _prefPrivateDiscoveryEnabled;	// 10 = 0xa
    NSMutableSet *_xpcConnections;	// 16 = 0x10
    NSXPCListener *_xpcListener;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 32 = 0x20
}

+ (id)sharedPrivateDaemon;	// IMP=0x000000010004c7bc
- (void).cxx_destruct;	// IMP=0x000000010004e1a0
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)_xpcConnectionInvalidated:(id)arg1;	// IMP=0x000000010004e098
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x000000010004de4c
- (void)removeDiscovery:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010004dbf8
- (void)addDiscovery:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010004da5c
- (void)removeAdvertiser:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010004d808
- (void)addAdvertiser:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010004d66c
- (_Bool)removeXPCMatchingToken:(unsigned long long)arg1;	// IMP=0x000000010004d664
- (_Bool)addXPCMatchingToken:(unsigned long long)arg1 event:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000010004d65c
- (void)prefsChanged;	// IMP=0x000000010004d650
- (_Bool)diagnosticCommand:(id)arg1 params:(id)arg2;	// IMP=0x000000010004d648
- (void)daemonInfoChanged:(unsigned long long)arg1;	// IMP=0x000000010004d644
- (void)_processAnswerPtr:(const char *)arg1 end:(const char *)arg2;	// IMP=0x000000010004d568
- (void)_processQueryPtr:(const char *)arg1 end:(const char *)arg2;	// IMP=0x000000010004d48c
- (void)_processAnnouncementPtr:(const char *)arg1 end:(const char *)arg2;	// IMP=0x000000010004d314
- (void)_processResponsePtr:(const char *)arg1 end:(const char *)arg2;	// IMP=0x000000010004d1b0
- (void)_processProbePtr:(const char *)arg1 end:(const char *)arg2;	// IMP=0x000000010004d038
- (void)_processPacketPtr:(const char *)arg1 end:(const char *)arg2;	// IMP=0x000000010004ceec
- (void)_ensureStopped;	// IMP=0x000000010004cee8
- (void)_ensureStarted;	// IMP=0x000000010004cee4
- (void)_update;	// IMP=0x000000010004cec0
- (void)_invalidated;	// IMP=0x000000010004ce40
- (void)_invalidate;	// IMP=0x000000010004cd90
- (void)invalidate;	// IMP=0x000000010004cd28
- (void)activate;	// IMP=0x000000010004cbdc
- (id)descriptionWithLevel:(int)arg1;	// IMP=0x000000010004c8a0
- (id)init;	// IMP=0x000000010004c828

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

