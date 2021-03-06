//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ASDRequestService-Protocol.h"

@class NSMutableArray, NSXPCConnection, TaskQueue, XPCClient;

@interface RequestBrokerClient : NSObject <ASDRequestService>
{
    XPCClient *_client;	// 8 = 0x8
    NSXPCConnection *_connection;	// 16 = 0x10
    NSMutableArray *_requests;	// 24 = 0x18
    TaskQueue *_taskQueue;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000010025626c
@property(readonly, nonatomic) TaskQueue *taskQueue; // @synthesize taskQueue=_taskQueue;
@property(retain) NSMutableArray *requests; // @synthesize requests=_requests;
@property __weak NSXPCConnection *connection; // @synthesize connection=_connection;
@property(readonly, nonatomic) XPCClient *client; // @synthesize client=_client;
- (void)_trackRequest:(id)arg1;	// IMP=0x00000001002561ac
- (void)_releaseRequest:(id)arg1;	// IMP=0x0000000100256134
- (id)description;	// IMP=0x0000000100256060
- (void)submitRequest:(id)arg1 delegate:(id)arg2 withReplyHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100255ef4
- (void)cancelAllRequestsWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100255b30
- (void)queueTask:(id)arg1;	// IMP=0x0000000100255a10
- (void)invalidate;	// IMP=0x00000001002559d0
- (id)initWithConnection:(id)arg1;	// IMP=0x0000000100255830

@end

