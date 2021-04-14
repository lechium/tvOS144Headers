//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CSEventMonitor.h"

@class MTAlarmManager, NSObject;
@protocol OS_dispatch_queue;

@interface CSAlarmMonitor : CSEventMonitor
{
    long long _alarmFiringState;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    MTAlarmManager *_alarmManager;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x0000000100079ab4
- (void).cxx_destruct;	// IMP=0x000000010007ab6c
- (long long)alarmState;	// IMP=0x000000010007aab8
- (void)_notifyObserver:(id)arg1 alarmIsFiringState:(long long)arg2;	// IMP=0x000000010007aa34
- (void)_alarmStateReset:(id)arg1;	// IMP=0x000000010007a8f8
- (void)_alarmDismissed:(id)arg1;	// IMP=0x000000010007a7b8
- (void)_alarmIsFiring:(id)arg1;	// IMP=0x000000010007a678
- (void)_stopMonitoring;	// IMP=0x000000010007a49c
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x000000010007a00c
- (void)initializeAlarmState;	// IMP=0x0000000100079b9c
- (id)init;	// IMP=0x0000000100079b20

@end

