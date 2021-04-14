//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NXDaemon;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface NXDaemonXPCConnection : NSObject
{
    _Bool _entitled;	// 8 = 0x8
    int _pid;	// 12 = 0xc
    NXDaemon *_daemon;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 24 = 0x18
    NSObject<OS_xpc_object> *_xpcCnx;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000100005a0c
@property(retain, nonatomic) NSObject<OS_xpc_object> *xpcCnx; // @synthesize xpcCnx=_xpcCnx;
@property(nonatomic) int pid; // @synthesize pid=_pid;
@property(nonatomic) _Bool entitled; // @synthesize entitled=_entitled;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(retain, nonatomic) NXDaemon *daemon; // @synthesize daemon=_daemon;
- (void)xpcLiveActionPerform:(id)arg1;	// IMP=0x000000010000560c
- (void)_xpcDiagnosticShow:(id)arg1;	// IMP=0x0000000100005440
- (void)_xpcDiagnosticControl:(id)arg1;	// IMP=0x000000010000508c
- (void)_xpcSendReplyError:(id)arg1 request:(id)arg2;	// IMP=0x0000000100004f34
- (void)_xpcSendMessage:(id)arg1;	// IMP=0x0000000100004e94
- (void)_xpcConnectionMessage:(id)arg1;	// IMP=0x0000000100004d54
- (void)xpcConnectionEvent:(id)arg1;	// IMP=0x0000000100004c24
- (_Bool)_entitledAndReturnError:(id *)arg1;	// IMP=0x0000000100004b18
- (void)invalidate;	// IMP=0x0000000100004ae0
- (void)activate;	// IMP=0x0000000100004adc

@end

