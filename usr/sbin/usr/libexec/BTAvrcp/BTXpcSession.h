//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BTWatchdog;
@protocol OS_os_transaction, OS_xpc_object;

@interface BTXpcSession : NSObject
{
    NSObject<OS_xpc_object> *_connection;	// 8 = 0x8
    NSObject<OS_os_transaction> *_transaction;	// 16 = 0x10
    BTWatchdog *_watchdog;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010000331c
@property(readonly, nonatomic) BTWatchdog *watchdog; // @synthesize watchdog=_watchdog;
@property(readonly, nonatomic) NSObject<OS_os_transaction> *transaction; // @synthesize transaction=_transaction;
@property(readonly, nonatomic) NSObject<OS_xpc_object> *connection; // @synthesize connection=_connection;
- (id)_objectForKey:(const char *)arg1 dict:(id)arg2 optional:(_Bool)arg3 converters:(id)arg4;	// IMP=0x0000000100003134
- (void)_handleEvent:(id)arg1;	// IMP=0x0000000100002f24
- (void)_sendMsg:(id)arg1 isReply:(_Bool)arg2;	// IMP=0x0000000100002e8c
- (id)xpcDictForKey:(const char *)arg1 optional:(_Bool)arg2 dict:(id)arg3;	// IMP=0x0000000100002d0c
- (id)stringForKey:(const char *)arg1 optional:(_Bool)arg2 dict:(id)arg3;	// IMP=0x0000000100002b6c
- (id)numberForKey:(const char *)arg1 optional:(_Bool)arg2 dict:(id)arg3;	// IMP=0x0000000100002868
- (void)handleMsg:(id)arg1;	// IMP=0x0000000100002858
- (void)sendReply:(id)arg1;	// IMP=0x0000000100002848
- (void)sendMsg:(id)arg1;	// IMP=0x0000000100002838
- (id)initWithConnection:(id)arg1;	// IMP=0x000000010000260c
- (id)init;	// IMP=0x0000000100002570

@end

