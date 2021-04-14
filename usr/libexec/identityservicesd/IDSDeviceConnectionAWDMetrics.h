//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface IDSDeviceConnectionAWDMetrics : NSObject
{
    NSMutableDictionary *_metrics;	// 8 = 0x8
    struct os_unfair_lock_s _writeLock;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x00000001005d1888
- (void).cxx_destruct;	// IMP=0x00000001005d4f50
- (id)_currentMetrics;	// IMP=0x00000001005d4ec4
- (_Bool)_canReportMetric:(id)arg1;	// IMP=0x00000001005d4dfc
- (void)_setCreatedAt:(id)arg1 forConnectionUUID:(id)arg2;	// IMP=0x00000001005d49fc
- (void)setSuccess:(_Bool)arg1 forConnectionUUID:(id)arg2;	// IMP=0x00000001005d45f4
- (void)setClientOpenSocketCompletionTime:(double)arg1 forConnectionUUID:(id)arg2;	// IMP=0x00000001005d4204
- (void)setDaemonOpenSocketCompletionTime:(double)arg1 forConnectionUUID:(id)arg2;	// IMP=0x00000001005d3e14
- (void)setFirstPacketReceiveTime:(double)arg1 forConnectionUUID:(id)arg2;	// IMP=0x00000001005d3a24
- (void)setDaemonOpenSocketTime:(double)arg1 forConnectionUUID:(id)arg2;	// IMP=0x00000001005d3670
- (void)setConnectionInitTime:(double)arg1 forConnectionUUID:(id)arg2;	// IMP=0x00000001005d3280
- (void)setClientInitTime:(double)arg1 forConnectionUUID:(id)arg2;	// IMP=0x00000001005d2e90
- (void)setServiceName:(id)arg1 forConnectionUUID:(id)arg2;	// IMP=0x00000001005d2a90
- (void)reportAndRemoveForConnectionUUID:(id)arg1;	// IMP=0x00000001005d2a28
- (void)_reportAndRemoveForConnectionUUID:(id)arg1;	// IMP=0x00000001005d1d30
- (id)awdMetricsForConnectionUUID:(id)arg1;	// IMP=0x00000001005d1b18
- (id)init;	// IMP=0x00000001005d1a34

@end

