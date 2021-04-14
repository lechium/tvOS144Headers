//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ASDOcelotServiceProtocol-Protocol.h"

@class NSString;

@interface OcelotService : NSObject <ASDOcelotServiceProtocol>
{
}

+ (id)defaultService;	// IMP=0x00000001002dd398
- (id)_currentClient;	// IMP=0x00000001002df188
- (void)topAppsForAccount:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001002df010
- (void)subscriptionStateWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001002dee00
- (void)subscriptionDetailsWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001002de840
- (void)sbsyncWithDuration:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001002de690
- (void)sbsyncWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001002de500
- (void)sbsyncIfSubscribedWithAccount:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001002de358
- (void)sendSummaryMetricsWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001002de1d4
- (void)sendPayoutMetricsWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001002de050
- (void)resetPayoutWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001002ddecc
- (void)resetMetricsWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001002ddd48
- (void)reportAppEvent:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001002ddba0
- (void)recordMetricsWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001002dda1c
- (void)recordLaunchesWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001002dd898
- (void)getAppSummaryEventsWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001002dd714
- (void)getAppPayoutEventsWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001002dd590
- (void)flushMetricsWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001002dd404

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

