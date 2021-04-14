//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface ErrorHandlerManager : NSObject
{
    NSMutableArray *_clients;	// 8 = 0x8
    NSMutableDictionary *_completionBlocks;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_completionQueue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 32 = 0x20
}

+ (void)resolveSessionWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00000001001b67c8
+ (void)connectHandlerWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00000001001b678c
+ (void)observeXPCServer:(id)arg1;	// IMP=0x00000001001b6728
+ (id)errorHandlerManager;	// IMP=0x00000001001b6218
- (void)_resolveSessionWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00000001001b7a90
- (void)_handleMessage:(id)arg1 connection:(id)arg2 withReplyBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000001001b7960
- (void)_handleMessage:(id)arg1 connection:(id)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000001001b7854
- (void)_connectHandlerWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00000001001b6e80
- (id)_clientForConnection:(id)arg1;	// IMP=0x00000001001b6d48
- (void)_clientDisconnectNotification:(id)arg1;	// IMP=0x00000001001b6804
- (void)openSession:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001001b62b0
- (void)dealloc;	// IMP=0x00000001001b617c
- (id)init;	// IMP=0x00000001001b605c

@end
