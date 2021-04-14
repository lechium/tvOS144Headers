//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NESMPowerManagerDelegate-Protocol.h"

@class NESMFilterSession;

@interface NESMFilterSessionState : NSObject <NESMPowerManagerDelegate>
{
    long long _type;	// 8 = 0x8
    NESMFilterSession *_session;	// 16 = 0x10
    long long _timeout;	// 24 = 0x18
}

+ (id)stateWithType:(long long)arg1;	// IMP=0x000000010005a914
- (void).cxx_destruct;	// IMP=0x000000010005bc00
@property long long timeout; // @synthesize timeout=_timeout;
@property(retain) NESMFilterSession *session; // @synthesize session=_session;
@property(readonly) long long type; // @synthesize type=_type;
- (void)handleUpdateConfiguration;	// IMP=0x000000010005bad4
- (void)handleTimeout;	// IMP=0x000000010005b998
- (void)handleWakeup;	// IMP=0x000000010005b898
- (_Bool)canSleep;	// IMP=0x000000010005b890
- (_Bool)handleSleep;	// IMP=0x000000010005b78c
- (void)handlePluginDisposeComplete:(id)arg1;	// IMP=0x000000010005b670
- (void)handlePlugin:(id)arg1 statusDidChangeToStoppingWithError:(long long)arg2;	// IMP=0x000000010005b4c8
- (void)handlePluginStatusDidChangeToUpdating:(id)arg1;	// IMP=0x000000010005b370
- (void)handlePluginStatusDidChangeToRunning:(id)arg1;	// IMP=0x000000010005b254
- (void)handlePluginStatusDidChangeToStarting:(id)arg1;	// IMP=0x000000010005b138
- (void)handlePlugin:(id)arg1 statusDidChangeToIdleWithError:(long long)arg2;	// IMP=0x000000010005af58
- (void)handleStop;	// IMP=0x000000010005ae1c
- (void)handleStartMessage:(id)arg1;	// IMP=0x000000010005ad1c
- (void)leave;	// IMP=0x000000010005ac08
- (void)enterWithSession:(id)arg1;	// IMP=0x000000010005a9f4
- (id)initWithType:(long long)arg1 andTimeout:(long long)arg2;	// IMP=0x000000010005a98c

@end

