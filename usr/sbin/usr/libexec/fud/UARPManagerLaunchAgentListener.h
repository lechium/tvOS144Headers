//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSXPCListenerDelegate-Protocol.h"
#import "UARPLaunchAgentXPCProvider-Protocol.h"

@class NSString, NSXPCConnection, NSXPCListener, UARPManagerAUD;
@protocol OS_dispatch_queue, OS_os_log;

__attribute__((visibility("hidden")))
@interface UARPManagerLaunchAgentListener : NSObject <NSXPCListenerDelegate, UARPLaunchAgentXPCProvider>
{
    UARPManagerAUD *_manager;	// 8 = 0x8
    NSXPCListener *_listener;	// 16 = 0x10
    NSXPCConnection *_connection;	// 24 = 0x18
    NSObject<OS_os_log> *_xpcLog;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_internalQueue;	// 40 = 0x28
}

- (void)remoteFetchFromiCloudCompleteForAccessory:(id)arg1 error:(id)arg2;	// IMP=0x0000000100008568
- (void)getiCloudAccessoryListAndContainerIDWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000010000849c
- (_Bool)xpcConnectionHasEntitlement:(id)arg1;	// IMP=0x00000001000083f8
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0000000100007f70
- (void)dealloc;	// IMP=0x0000000100007f08
- (id)initWithManager:(id)arg1 dispatchQueue:(id)arg2;	// IMP=0x0000000100007e4c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
