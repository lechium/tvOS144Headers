//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BKSAlternateSystemAppServerProtocol-Protocol.h"
#import "NSXPCListenerDelegate-Protocol.h"

@class BKAlternateSystemAppManager, NSString, NSXPCConnection, NSXPCListener;
@protocol OS_dispatch_queue;

@interface BKAlternateSystemAppServer : NSObject <NSXPCListenerDelegate, BKSAlternateSystemAppServerProtocol>
{
    NSXPCListener *_xpcListener;	// 8 = 0x8
    NSXPCConnection *_clientConnection;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    BKAlternateSystemAppManager *_alternateSystemAppManager;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x000000010004f87c
- (void).cxx_destruct;	// IMP=0x000000010004ee3c
@property(retain, nonatomic) BKAlternateSystemAppManager *alternateSystemAppManager; // @synthesize alternateSystemAppManager=_alternateSystemAppManager;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSXPCConnection *clientConnection; // @synthesize clientConnection=_clientConnection;
@property(retain, nonatomic) NSXPCListener *xpcListener; // @synthesize xpcListener=_xpcListener;
- (void)terminateAlternateSystemAppWithBundleID:(id)arg1;	// IMP=0x000000010004ecd4
- (void)openAlternateSystemAppWithBundleID:(id)arg1;	// IMP=0x000000010004ebbc
- (void)unblockSystemAppForAlternateSystemApp;	// IMP=0x000000010004eb10
- (void)blockSystemAppForAlternateSystemApp;	// IMP=0x000000010004ea64
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x000000010004e8dc
- (_Bool)_queue_listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x000000010004e524
- (void)_handleInterruptedOrInvalidatedConnection;	// IMP=0x000000010004e4cc
- (void)run;	// IMP=0x000000010004e4bc
- (void)dealloc;	// IMP=0x000000010004e46c
- (id)init;	// IMP=0x000000010004e37c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

