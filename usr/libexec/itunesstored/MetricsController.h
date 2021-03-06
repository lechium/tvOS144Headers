//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ISOperationQueue, SSMetricsEventController;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface MetricsController : NSObject
{
    long long _backoffRetryCount;	// 8 = 0x8
    NSObject<OS_dispatch_source> *_backoffRetryTimer;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 24 = 0x18
    SSMetricsEventController *_eventController;	// 32 = 0x20
    ISOperationQueue *_operationQueue;	// 40 = 0x28
}

+ (id)sharedInstance;	// IMP=0x00000001001848e0
- (void).cxx_destruct;	// IMP=0x0000000100187094
- (void)_sendUnentitledResponseToMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0000000100186e48
- (void)_scheduleBackoffRetry;	// IMP=0x0000000100186a2c
- (void)_reportEventsIfNeeded;	// IMP=0x0000000100186714
- (void)_reportEvents;	// IMP=0x0000000100186414
- (id)_operationQueue;	// IMP=0x0000000100186358
- (_Bool)_hasEntitlements:(id)arg1;	// IMP=0x00000001001862f0
- (void)_cancelBackoffRetryTimer;	// IMP=0x00000001001862b4
- (void)_cancelBackoffRetry;	// IMP=0x0000000100186288
- (void)setInternalSettingsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0000000100186104
- (void)reportEventsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0000000100185d28
- (void)recordAnalyticsWithMetricsDialogEventWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00000001001859b8
- (void)insertEventWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x000000010018561c
- (void)getInternalSettingsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00000001001854f8
- (void)configureDuet;	// IMP=0x0000000100184c90
- (void)recordAnalyticsWithMetricsDialogEvent:(id)arg1 forTopic:(id)arg2;	// IMP=0x0000000100184a14
- (void)observeXPCServer:(id)arg1;	// IMP=0x000000010018494c
- (void)dealloc;	// IMP=0x0000000100184844
- (id)init;	// IMP=0x0000000100184758

@end

