//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSXPCConnectionDelegate-Protocol.h"
#import "NSXPCListenerDelegate-Protocol.h"
#import "SDXPCDaemonProtocol-Protocol.h"

@class NSSet, NSString, NSXPCConnection, NSXPCInterface, NSXPCListener;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SDXPCDaemon : NSObject <NSXPCListenerDelegate, NSXPCConnectionDelegate, SDXPCDaemonProtocol>
{
    NSXPCListener *_xpcListener;	// 8 = 0x8
    _Bool _activateCalled;	// 16 = 0x10
    _Bool _invalidateCalled;	// 17 = 0x11
    _Bool _invalidateDone;	// 18 = 0x12
    NSSet *_activeConnections;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000001001d3c68
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(copy, nonatomic) NSSet *activeConnections; // @synthesize activeConnections=_activeConnections;
- (void)connectionInvalidated:(id)arg1;	// IMP=0x00000001001d3b68
- (void)connectionEstablished:(id)arg1;	// IMP=0x00000001001d3a84
- (_Bool)shouldAcceptNewConnection:(id)arg1;	// IMP=0x00000001001d39a0
@property(readonly, nonatomic) NSXPCInterface *remoteObjectInterface;
@property(readonly, nonatomic) NSXPCInterface *exportedInterface;
@property(readonly, nonatomic) NSString *machServiceName;
- (void)establishConnectionWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001001d35ec
- (void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(_Bool)arg3;	// IMP=0x00000001001d34a0
- (void)onqueue_connectionInvalidated:(id)arg1;	// IMP=0x00000001001d3338
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00000001001d2f24
- (void)onqueue_invalidate;	// IMP=0x00000001001d2dd0
- (void)_invalidate;	// IMP=0x00000001001d2d68
- (void)onqueue_activate;	// IMP=0x00000001001d2bc8
- (void)_activate;	// IMP=0x00000001001d2b60
@property(readonly, copy, nonatomic) NSXPCConnection *currentConnection;
- (void)onqueue_remoteObjectProxyForConnection:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001001d29cc
- (void)remoteObjectProxyForConnection:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001001d28f0
- (void)onqueue_enumerateRemoteObjectProxiesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001001d265c
- (void)enumerateRemoteObjectProxiesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001001d25c4
- (void)dealloc;	// IMP=0x00000001001d24d4
- (id)init;	// IMP=0x00000001001d2470

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
