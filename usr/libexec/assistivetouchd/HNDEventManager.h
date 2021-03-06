//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AXAssertion, AXDispatchTimer, CPDistributedMessagingCenter, NSMutableArray, NSString, NSThread;
@protocol BSInvalidatable, OS_dispatch_queue;

@interface HNDEventManager : NSObject
{
    NSMutableArray *_eventsToMatch;	// 8 = 0x8
    _Bool _isCapturingEvents;	// 16 = 0x10
    _Bool _nubbitMoving;	// 17 = 0x11
    NSString *_axSpringBoardCallbackIdentifier;	// 24 = 0x18
    NSThread *_ioFilterThread;	// 32 = 0x20
    struct __IOHIDEventSystemClient *_ioSystemFilterClient;	// 40 = 0x28
    AXDispatchTimer *_keyboardStatusCoalesce;	// 48 = 0x30
    NSThread *_distributedMessagingThread;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_disableIdleTimerAssertionQueue;	// 64 = 0x40
    AXAssertion *_disableSystemGesturesAssertion;	// 72 = 0x48
    AXAssertion *_disableDashBoardGesturesAssertion;	// 80 = 0x50
    struct __IOHIDEventSystemClient *_ioSystemClient;	// 88 = 0x58
    id <BSInvalidatable> _disableIdleTimerAssertion;	// 96 = 0x60
    CPDistributedMessagingCenter *_messagingCenter;	// 104 = 0x68
}

+ (id)sharedManager;	// IMP=0x000000010002adf0
+ (void)initialize;	// IMP=0x000000010002adb8
- (void).cxx_destruct;	// IMP=0x000000010002c6a0
@property(retain, nonatomic) CPDistributedMessagingCenter *messagingCenter; // @synthesize messagingCenter=_messagingCenter;
@property(retain, nonatomic) id <BSInvalidatable> disableIdleTimerAssertion; // @synthesize disableIdleTimerAssertion=_disableIdleTimerAssertion;
@property(readonly, nonatomic) struct __IOHIDEventSystemClient *ioSystemClient; // @synthesize ioSystemClient=_ioSystemClient;
@property(retain, nonatomic) AXAssertion *disableDashBoardGesturesAssertion; // @synthesize disableDashBoardGesturesAssertion=_disableDashBoardGesturesAssertion;
@property(retain, nonatomic) AXAssertion *disableSystemGesturesAssertion; // @synthesize disableSystemGesturesAssertion=_disableSystemGesturesAssertion;
@property(readonly, nonatomic) _Bool isCapturingEvents; // @synthesize isCapturingEvents=_isCapturingEvents;
- (void)notifyUserEventOccurred;	// IMP=0x000000010002c5d0
- (void)openCreateCustomGestureForSCAT;	// IMP=0x000000010002c57c
- (void)openCreateCustomGestureForAST;	// IMP=0x000000010002c528
- (void)setOrientationLocked:(_Bool)arg1;	// IMP=0x000000010002c4d4
- (_Bool)orientationLocked;	// IMP=0x000000010002c4cc
- (_Bool)sideSwitchUsedForOrientation;	// IMP=0x000000010002c4c4
- (void)_initializeSystemWideServerPort;	// IMP=0x000000010002c47c
- (void)setCaptureEvents:(_Bool)arg1;	// IMP=0x000000010002c360
- (void)_disableIOFilter;	// IMP=0x000000010002c2f8
- (void)_registerIOHIDUsage;	// IMP=0x000000010002be04
- (void)_startIOThread;	// IMP=0x000000010002bd88
- (void)_unregisterIOFilter;	// IMP=0x000000010002bd68
- (void)_handleIOHIDEvent:(id)arg1;	// IMP=0x000000010002bb64
- (void)wakeDeviceFromSleepIfNecessary;	// IMP=0x000000010002ba80
- (void)setMenuVisible:(_Bool)arg1;	// IMP=0x000000010002ba7c
- (_Bool)isVoiceControlRunning;	// IMP=0x000000010002ba74
- (double)volumeLevel;	// IMP=0x000000010002ba6c
@property(nonatomic) _Bool nubbitMoving;
- (void)manipulateDimTimer:(_Bool)arg1;	// IMP=0x000000010002b644
- (void)_initializeASTNotificationCenter;	// IMP=0x000000010002b51c
- (void)mediaControlsChanged:(id)arg1 userInfo:(id)arg2;	// IMP=0x000000010002b518
- (void)keyboardStatusChanged:(id)arg1 userInfo:(id)arg2;	// IMP=0x000000010002b2f0
- (void)_restartConnectionToSystemServer;	// IMP=0x000000010002b1fc
- (int)deviceOrientation;	// IMP=0x000000010002b1f4
- (void)resetEventManager;	// IMP=0x000000010002b124
- (void)_initializeSpringBoardItems;	// IMP=0x000000010002b120
- (void)rotationLockChanged;	// IMP=0x000000010002b0d8
- (void)ringerSwitchChanged;	// IMP=0x000000010002b090
- (void)substantialTransitionOccurred;	// IMP=0x000000010002b00c
- (void)systemServerRestarted;	// IMP=0x000000010002b000
- (void)_startDistributedThread;	// IMP=0x000000010002af84
- (void)dealloc;	// IMP=0x000000010002af34
- (id)init;	// IMP=0x000000010002adfc

@end

