//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "UWBSessionDelegateProxyProtocol-Protocol.h"

@class NSString, NSXPCConnection, PRNSXPCConnection;
@protocol UWBSessionDelegateProxyProtocol;

@interface NIServerClient : NSObject <UWBSessionDelegateProxyProtocol>
{
    PRNSXPCConnection<UWBSessionDelegateProxyProtocol> *_connWrapper;	// 8 = 0x8
    NSXPCConnection *_connection;	// 16 = 0x10
}

+ (id)delegateProxyWithConnection:(id)arg1;	// IMP=0x0000000100018674
- (void).cxx_destruct;	// IMP=0x0000000100019108
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void)object:(id)arg1 didUpdateRegion:(id)arg2 previousRegion:(id)arg3;	// IMP=0x0000000100018f44
- (void)didDiscoverNearbyObject:(id)arg1;	// IMP=0x0000000100018e5c
- (void)uwbSessionInterruptionReasonEnded:(long long)arg1 timestamp:(double)arg2;	// IMP=0x0000000100018da8
- (void)uwbSessionInterruptedWithReason:(long long)arg1 timestamp:(double)arg2;	// IMP=0x0000000100018cf4
- (void)uwbSystemDidChangeState:(unsigned long long)arg1;	// IMP=0x0000000100018c48
- (void)didUpdateNearbyObjects:(id)arg1;	// IMP=0x0000000100018b60
- (void)didRemoveNearbyObjects:(id)arg1 withReason:(unsigned long long)arg2;	// IMP=0x0000000100018a74
- (void)uwbSessionDidInvalidateWithError:(id)arg1;	// IMP=0x000000010001898c
- (void)uwbSessionDidFailWithError:(id)arg1;	// IMP=0x0000000100018894
- (void)dealloc;	// IMP=0x00000001000187dc
- (id)initWithConnection:(id)arg1;	// IMP=0x00000001000186c8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

