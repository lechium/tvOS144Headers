//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BKSApplicationStateMonitor, NSMutableDictionary, NSMutableSet;
@protocol OS_dispatch_queue;

@interface NDSpringBoard : NSObject
{
    BKSApplicationStateMonitor *_monitor;	// 8 = 0x8
    NSMutableDictionary *_observers;	// 16 = 0x10
    NSMutableDictionary *_appStates;	// 24 = 0x18
    NSMutableSet *_monitoredBundleIDs;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
}

+ (id)sharedSpringBoard;	// IMP=0x000000010000723c
- (void).cxx_destruct;	// IMP=0x0000000100008210
- (_Bool)identifierIsForSpringBoardApplication:(id)arg1;	// IMP=0x0000000100008118
- (_Bool)applicationIsForeground:(id)arg1;	// IMP=0x00000001000080e8
- (unsigned int)applicationStateForBundleID:(id)arg1;	// IMP=0x0000000100007ee0
- (void)stopMonitoringBundleID:(id)arg1;	// IMP=0x0000000100007ddc
- (void)startMonitoringBundleID:(id)arg1;	// IMP=0x0000000100007c6c
- (void)removeObserver:(id)arg1 forApplication:(id)arg2;	// IMP=0x0000000100007b60
- (void)addObserver:(id)arg1 forApplication:(id)arg2;	// IMP=0x00000001000079e4
- (void)handleApplicationStateChange:(id)arg1;	// IMP=0x00000001000074d4
- (void)setupMonitor;	// IMP=0x00000001000073f0
- (id)init;	// IMP=0x00000001000072c0

@end
