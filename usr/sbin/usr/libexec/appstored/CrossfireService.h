//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ASDCrossfireServiceProtocol-Protocol.h"

@class NSString;

@interface CrossfireService : NSObject <ASDCrossfireServiceProtocol>
{
}

+ (id)defaultService;	// IMP=0x00000001001a1adc
- (id)_currentClient;	// IMP=0x00000001001a2610
- (void)sendMetricsWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001001a248c
- (void)resetMetricsWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001001a2308
- (void)reportAppEvent:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001001a2160
- (void)recordMetricsWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001001a1fdc
- (void)recordLaunchesWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001001a1e58
- (void)getAppEventsWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001001a1cd4
- (void)flushMetricsWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001001a1b48

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

