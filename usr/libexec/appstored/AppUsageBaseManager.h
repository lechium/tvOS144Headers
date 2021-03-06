//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface AppUsageBaseManager : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100077498
- (_Bool)_isCandidateAppMetadata:(id)arg1 context:(id)arg2;	// IMP=0x0000000100077440
- (id)_getCurrentApps;	// IMP=0x00000001000772f8
- (id)getAppMetadataForBundleID:(id)arg1 connection:(id)arg2 context:(id)arg3;	// IMP=0x00000001000770f0
- (_Bool)writeAppMetadata:(id)arg1 context:(id)arg2;	// IMP=0x0000000100076d38
- (_Bool)writeAppMetadataForBundleIDs:(id)arg1 context:(id)arg2;	// IMP=0x0000000100076978
- (_Bool)writeCurrentAppMetadata:(id)arg1;	// IMP=0x0000000100076964
- (_Bool)shouldEnableAppUsageMetricsForSession:(id)arg1 override:(id)arg2;	// IMP=0x00000001000766dc
- (void)removeAppUsageSessiondForBundleID:(id)arg1 context:(id)arg2;	// IMP=0x00000001000763a4
- (id)readCurrentApps:(id)arg1;	// IMP=0x00000001000760fc
- (id)os;	// IMP=0x00000001000760b8
- (_Bool)isCandidateAppProxy:(id)arg1 isMetadataLookup:(_Bool)arg2;	// IMP=0x00000001000760b0
- (_Bool)isCandidateAppMetadata:(id)arg1;	// IMP=0x00000001000760a8
- (id)hardwarePlatform;	// IMP=0x0000000100076024
- (id)hardwareModel;	// IMP=0x0000000100076004
- (id)hardwareFamily;	// IMP=0x0000000100075f10
- (id)getAppUsageSessionForBundleID:(id)arg1 context:(id)arg2;	// IMP=0x00000001000757f8
- (id)getLaunchAppEventsWithContext:(id)arg1;	// IMP=0x0000000100074d68
- (id)getDeletedAppsEventsWithContext:(id)arg1;	// IMP=0x000000010007439c
- (id)getPriorAppMetadataWithContext:(id)arg1;	// IMP=0x0000000100074104
- (id)getAppEventsForType:(unsigned char)arg1 context:(id)arg2 orderingProperties:(id)arg3;	// IMP=0x0000000100073c3c
- (id)getAppEventsForType:(unsigned char)arg1 context:(id)arg2;	// IMP=0x0000000100073c2c
- (id)getAggregatedEventMap:(id)arg1 eventType:(unsigned char)arg2 context:(id)arg3;	// IMP=0x00000001000736e4
- (void)decorateMetricsEvent:(id)arg1 context:(id)arg2;	// IMP=0x00000001000736e0
- (id)createMetricsEventsForEventType:(unsigned char)arg1 events:(id)arg2 context:(id)arg3;	// IMP=0x0000000100073410
- (id)createMetricsEventsForEventType:(unsigned char)arg1 context:(id)arg2;	// IMP=0x0000000100073408
- (id)createMetricsEventFromAppMetadata:(id)arg1 eventType:(unsigned char)arg2 context:(id)arg3;	// IMP=0x0000000100072fa8
- (id)createMetricsEventForAppEvent:(id)arg1 eventType:(unsigned char)arg2 context:(id)arg3;	// IMP=0x0000000100072584
- (id)createAppEventFromAppMetadata:(id)arg1;	// IMP=0x0000000100072214
- (id)createAppEventsForBundleIDs:(id)arg1 eventType:(unsigned char)arg2 installType:(unsigned char)arg3 connection:(id)arg4 context:(id)arg5;	// IMP=0x0000000100071954
- (id)createAggregateMetricsEventsForEventType:(unsigned char)arg1 events:(id)arg2 context:(id)arg3;	// IMP=0x00000001000715f0
- (id)init;	// IMP=0x0000000100071568

@end

