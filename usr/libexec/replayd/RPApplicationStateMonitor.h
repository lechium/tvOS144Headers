//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BKSApplicationStateMonitor, NSMutableDictionary;
@protocol RPSystemStateObserver;

@interface RPApplicationStateMonitor : NSObject
{
    BKSApplicationStateMonitor *_applicationStateMonitor;	// 8 = 0x8
    id <RPSystemStateObserver> _systemObserver;	// 16 = 0x10
    NSMutableDictionary *_observers;	// 24 = 0x18
    NSMutableDictionary *_previousState;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000100017cb8
@property(retain, nonatomic) NSMutableDictionary *previousState; // @synthesize previousState=_previousState;
@property(retain, nonatomic) NSMutableDictionary *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) id <RPSystemStateObserver> systemObserver; // @synthesize systemObserver=_systemObserver;
@property(retain, nonatomic) BKSApplicationStateMonitor *applicationStateMonitor; // @synthesize applicationStateMonitor=_applicationStateMonitor;
- (_Bool)isApplicationInForegroundWithBundleIdentifier:(id)arg1;	// IMP=0x0000000100017c44
- (void)notifyInAppSessionShouldPauseOrResume:(id)arg1;	// IMP=0x000000010001797c
- (void)handleApplicationStateChange:(id)arg1;	// IMP=0x0000000100017874
- (void)applicationStateDidChange:(id)arg1;	// IMP=0x0000000100017774
- (void)observersCountDidChange;	// IMP=0x000000010001753c
- (long long)observersCount;	// IMP=0x00000001000174c0
- (void)removeSystemObserver;	// IMP=0x0000000100017488
- (void)addSystemObserver:(id)arg1;	// IMP=0x0000000100017454
- (void)removeObserverWithProcessIdentifier:(int)arg1;	// IMP=0x00000001000173c0
- (void)addObserver:(id)arg1 processIdentifier:(int)arg2;	// IMP=0x0000000100017170
- (id)init;	// IMP=0x000000010001708c

@end

