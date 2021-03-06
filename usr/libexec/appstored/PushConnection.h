//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "APSConnectionDelegate-Protocol.h"

@class APSConnection, NSData, NSString, PushConnectionMessageHistory, TaskQueue;
@protocol OS_dispatch_queue, PushConnectionDelegate;

@interface PushConnection : NSObject <APSConnectionDelegate>
{
    APSConnection *_connection;	// 8 = 0x8
    NSString *_environment;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 24 = 0x18
    TaskQueue *_taskQueue;	// 32 = 0x20
    PushConnectionMessageHistory *_appStoreMessageHistory;	// 40 = 0x28
    PushConnectionMessageHistory *_testFlightMessageHistory;	// 48 = 0x30
    _Bool _testFlightTopicEnabled;	// 56 = 0x38
    NSString *_logKey;	// 64 = 0x40
    id <PushConnectionDelegate> _delegate;	// 72 = 0x48
}

+ (id)_newConnectionForEnvironment:(id)arg1 dispatchQueue:(id)arg2;	// IMP=0x0000000100186e34
- (void).cxx_destruct;	// IMP=0x0000000100187dbc
@property __weak id <PushConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_updateTopicsInConnection:(id)arg1;	// IMP=0x0000000100187b08
- (void)_retryAddPushTypeRequestForAccountID:(id)arg1 forEnvironment:(id)arg2;	// IMP=0x0000000100187818
- (void)_sendPushTypesRequest:(long long)arg1 accountID:(id)arg2 forEnvironment:(id)arg3;	// IMP=0x0000000100186efc
@property(readonly, copy) NSString *description;
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;	// IMP=0x0000000100186ba8
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;	// IMP=0x0000000100186a44
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;	// IMP=0x000000010018689c
- (void)_unitTest_sendFakeRawMessage:(id)arg1;	// IMP=0x00000001001867d8
- (void)invalidateTokenForTopic:(unsigned long long)arg1;	// IMP=0x0000000100186624
- (void)requestTokenForTopic:(unsigned long long)arg1;	// IMP=0x0000000100186414
- (void)shutdown;	// IMP=0x0000000100186404
- (void)removePushTypeForAccountId:(id)arg1;	// IMP=0x000000010018638c
- (void)addPushTypeForCurrentAccount;	// IMP=0x0000000100186338
@property _Bool testFlightTopicEnabled;
@property(readonly) NSData *publicToken;
@property(readonly) NSString *environment;
- (id)initWithEnvironment:(id)arg1 queue:(id)arg2 apsConnection:(id)arg3;	// IMP=0x0000000100186134
- (id)initWithEnvironment:(id)arg1 queue:(id)arg2;	// IMP=0x0000000100186088
- (id)initWithEnvironment:(id)arg1;	// IMP=0x0000000100186014
- (id)init;	// IMP=0x0000000100185ffc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

