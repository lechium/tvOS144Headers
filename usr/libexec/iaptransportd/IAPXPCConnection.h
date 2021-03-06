//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_xpc_object;

@interface IAPXPCConnection : NSObject
{
    NSObject<OS_xpc_object> *_connection;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
    CDUnknownBlockType _disconnectBlock;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_replyQueue;	// 32 = 0x20
    CDUnknownBlockType _messageBlock;	// 40 = 0x28
    _Bool isValid;	// 48 = 0x30
    _Bool retryInvalidConnections;	// 49 = 0x31
}

- (void)_reloadEventHandler;	// IMP=0x00000001000199c8
- (void)setTargetQueue:(id)arg1;	// IMP=0x0000000100019984
- (void)setReplyQueue:(id)arg1;	// IMP=0x00000001000198d8
@property(copy) CDUnknownBlockType messageBlock;
@property(copy) CDUnknownBlockType disconnectBlock;
- (void)sendSynchronousMessage:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000196a4
- (void)sendMessage:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100019680
- (void)sendMessage:(id)arg1;	// IMP=0x0000000100019668
- (id)copyReplyQueue;	// IMP=0x000000010001957c
- (void)dealloc;	// IMP=0x00000001000192f4
- (id)initWithXPCConnection:(id)arg1 queueName:(id)arg2;	// IMP=0x0000000100019290
- (id)initWithServiceName:(id)arg1 queueName:(id)arg2;	// IMP=0x0000000100019208
- (id)_initIAPXPCConnection:(id)arg1;	// IMP=0x0000000100019198

@end

