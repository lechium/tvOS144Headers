//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSXPCListenerDelegate-Protocol.h"
#import "OSASubmissionServices-Protocol.h"

@class ConnectionInfo, NSMutableDictionary, NSString, OSASubmissionPolicy, OSASubmitter, SubmissionScheduler;
@protocol OS_dispatch_queue;

@interface SubmissionController : NSObject <NSXPCListenerDelegate, OSASubmissionServices>
{
    OSASubmissionPolicy *_default_policy;	// 8 = 0x8
    ConnectionInfo *_connectionInfo;	// 16 = 0x10
    SubmissionScheduler *_scheduler;	// 24 = 0x18
    OSASubmitter *_submitter;	// 32 = 0x20
    NSMutableDictionary *_one_shot_events;	// 40 = 0x28
    void *_powerAssertion;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_requestQueue;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000001000048b4
- (void)submitWithOptions:(id)arg1 resultsCallback:(CDUnknownBlockType)arg2;	// IMP=0x0000000100003bb8
- (void)_setupScheduler;	// IMP=0x0000000100003a58
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0000000100003974
- (void)handleOptInChange;	// IMP=0x0000000100003618
- (void)handleWatchDog;	// IMP=0x0000000100003470
- (void)handleUnlock;	// IMP=0x00000001000033f0
- (id)init;	// IMP=0x0000000100003160

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
