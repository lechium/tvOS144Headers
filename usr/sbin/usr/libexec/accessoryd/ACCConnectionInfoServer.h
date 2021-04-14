//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ACCFeatureServer.h"

#import "NSXPCListenerDelegate-Protocol.h"

@class NSLock, NSMutableDictionary, NSMutableSet, NSString;

@interface ACCConnectionInfoServer : ACCFeatureServer <NSXPCListenerDelegate>
{
    NSMutableSet *_clientConnections;	// 40 = 0x28
    NSMutableSet *_accessories;	// 48 = 0x30
    NSMutableDictionary *_endpoints;	// 56 = 0x38
    NSLock *_connectedAccessoryLock;	// 64 = 0x40
    NSLock *_clientListLock;	// 72 = 0x48
}

+ (id)sharedServer;	// IMP=0x00000001000286e0
- (void).cxx_destruct;	// IMP=0x000000010002884c
@property(retain, nonatomic) NSLock *clientListLock; // @synthesize clientListLock=_clientListLock;
@property(retain, nonatomic) NSLock *connectedAccessoryLock; // @synthesize connectedAccessoryLock=_connectedAccessoryLock;
@property(retain, nonatomic) NSMutableDictionary *endpoints; // @synthesize endpoints=_endpoints;
@property(retain, nonatomic) NSMutableSet *accessories; // @synthesize accessories=_accessories;
@property(retain, nonatomic) NSMutableSet *clientConnections; // @synthesize clientConnections=_clientConnections;
- (void)handleInterceptData:(id)arg1 forEndpoint:(id)arg2 connection:(id)arg3;	// IMP=0x000000010002815c
- (void)accessoryEndpointInfoPropertyChanged:(id)arg1 properties:(id)arg2 forConnection:(id)arg3;	// IMP=0x0000000100027b10
- (void)accessoryConnectionInfoPropertyChanged:(id)arg1 properties:(id)arg2;	// IMP=0x00000001000274d8
- (void)accessoryEndpointUpdate:(id)arg1 protocol:(int)arg2 properties:(id)arg3 forConnection:(id)arg4;	// IMP=0x0000000100026e78
- (void)removeEndpoint:(id)arg1 connection:(id)arg2 forClientFilter:(id)arg3;	// IMP=0x0000000100026d08
- (void)removeConnection:(id)arg1 forClientFilter:(id)arg2;	// IMP=0x0000000100026bbc
- (void)_updateFilteredListForClient:(id)arg1 forEndpoint:(id)arg2 connection:(id)arg3;	// IMP=0x000000010002665c
- (void)_updateFilteredListForClient:(id)arg1 forConnection:(id)arg2;	// IMP=0x0000000100026100
- (void)updateFilteredListForClient:(id)arg1;	// IMP=0x0000000100025edc
- (_Bool)accessoryEndpointFiltered:(id)arg1 forConnection:(id)arg2 forClient:(id)arg3;	// IMP=0x0000000100025c8c
- (_Bool)accessoryConnectionFiltered:(id)arg1 forClient:(id)arg2;	// IMP=0x0000000100025aa4
- (void)accessoryEndpointDetached:(id)arg1 forConnection:(id)arg2 forClient:(id)arg3;	// IMP=0x00000001000256b4
- (void)accessoryEndpointDetached:(id)arg1 forConnection:(id)arg2;	// IMP=0x0000000100025218
- (void)accessoryEndpointAttached:(id)arg1 transportType:(int)arg2 protocol:(int)arg3 properties:(id)arg4 forConnection:(id)arg5 forClient:(id)arg6;	// IMP=0x0000000100024e00
- (void)accessoryEndpointAttached:(id)arg1 transportType:(int)arg2 protocol:(int)arg3 properties:(id)arg4 forConnection:(id)arg5;	// IMP=0x00000001000247ec
- (void)accessoryConnectionDetached:(id)arg1 forClient:(id)arg2;	// IMP=0x0000000100024434
- (void)accessoryConnectionDetached:(id)arg1;	// IMP=0x0000000100023ff8
- (void)accessoryConnectionAttached:(id)arg1 type:(int)arg2 info:(id)arg3 properties:(id)arg4 forClient:(id)arg5;	// IMP=0x0000000100023bf4
- (void)accessoryConnectionAttached:(id)arg1 type:(int)arg2 info:(id)arg3 properties:(id)arg4;	// IMP=0x000000010002375c
- (void)setInterceptState:(_Bool)arg1 forEndpoint:(id)arg2 connection:(id)arg3 clientInfo:(id)arg4;	// IMP=0x00000001000236ec
- (void)notifyClientOfConnections:(id)arg1;	// IMP=0x0000000100022f7c
- (_Bool)checkClient:(id)arg1 hasEntitlement:(id)arg2;	// IMP=0x0000000100022eec
- (void)notifyOfClient:(id)arg1 forClient:(id)arg2 withFilter:(id)arg3;	// IMP=0x0000000100022ce8
- (_Bool)shouldAcceptXPCConnection:(id)arg1;	// IMP=0x0000000100022b70
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0000000100022028
- (id)initWithXPCServiceName:(id)arg1 andFeatureNotification:(const char *)arg2;	// IMP=0x0000000100021e30

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
