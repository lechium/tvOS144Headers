//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CSEventMonitor.h"

@interface CSLanguageCodeUpdateMonitor : CSEventMonitor
{
    int _notifyToken;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x000000010009df7c
- (void)_notifyObserver:(id)arg1 withLanguageCode:(id)arg2;	// IMP=0x000000010009e340
- (void)_didReceiveLanguageCodeUpdate;	// IMP=0x000000010009e1d4
- (void)_stopMonitoring;	// IMP=0x000000010009e110
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x000000010009e030
- (id)init;	// IMP=0x000000010009dfe8

@end
