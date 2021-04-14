//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ICRemoteRequestOperationExecutingService-Protocol.h"
#import "NSXPCListenerDelegate-Protocol.h"

@class NSString, NSXPCListener;
@protocol OS_dispatch_queue;

@interface CloudRemoteRequestOperationExecutionServiceListener : NSObject <NSXPCListenerDelegate, ICRemoteRequestOperationExecutingService>
{
    NSObject<OS_dispatch_queue> *_accessQueue;	// 8 = 0x8
    _Bool _isActive;	// 16 = 0x10
    NSXPCListener *_serviceListener;	// 24 = 0x18
}

+ (id)sharedRemoteRequestOperationExecutionServiceListener;	// IMP=0x00000001000b8ce4
- (void).cxx_destruct;	// IMP=0x00000001000b933c
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00000001000b9268
- (void)performRemoteRequestOperationWithExecutionContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000b9088
- (void)stop;	// IMP=0x00000001000b8fd0
- (void)start;	// IMP=0x00000001000b8f18
@property(readonly, getter=isActive) _Bool active;
- (void)dealloc;	// IMP=0x00000001000b8e28
- (id)_init;	// IMP=0x00000001000b8d5c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

