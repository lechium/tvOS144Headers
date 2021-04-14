//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface SYDClient : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSObject<OS_xpc_object> *_connection;	// 16 = 0x10
    NSString *_bundleIdentifier;	// 24 = 0x18
    NSString *_storeIdentifier;	// 32 = 0x20
    _Bool _additionalSource;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000100037ac8
- (void)sendMessageWithName:(id)arg1 userInfo:(id)arg2 replyHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100037a1c
- (void)sendMessageWithName:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100037990
- (id)sendMessageWithName:(id)arg1 userInfo:(id)arg2;	// IMP=0x00000001000378ec
- (void)sendMessageWithName:(id)arg1;	// IMP=0x00000001000378a4
- (void)_sendMessage:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100037314
- (void)_sendMessageNoReply:(id)arg1;	// IMP=0x0000000100037144
- (id)_sendMessageWithReplySync:(id)arg1;	// IMP=0x0000000100036d18
- (id)_newMessageWithName:(id)arg1 userInfo:(id)arg2;	// IMP=0x0000000100036bc8
- (void)shutdown;	// IMP=0x0000000100036b60
- (void)_resetConnection;	// IMP=0x0000000100036b24
- (void)_createConnectionIfNecessary;	// IMP=0x0000000100036918
- (id)initWithQueue:(id)arg1 bundleIdentifier:(struct __CFString *)arg2 storeIdentifier:(struct __CFString *)arg3;	// IMP=0x0000000100036908
- (id)initWithQueue:(id)arg1 bundleIdentifier:(struct __CFString *)arg2 storeIdentifier:(struct __CFString *)arg3 additionalSource:(_Bool)arg4;	// IMP=0x0000000100036818

@end

