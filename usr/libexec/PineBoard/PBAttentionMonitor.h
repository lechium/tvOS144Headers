//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ITIdleTimerStateServiceDelegate-Protocol.h"
#import "PBOpenAppTransitionerObserver-Protocol.h"
#import "PBPowerManagerObserver-Protocol.h"
#import "PBSceneManagerObserver-Protocol.h"

@class NSString;

@interface PBAttentionMonitor : NSObject <PBPowerManagerObserver, PBSceneManagerObserver, PBOpenAppTransitionerObserver, ITIdleTimerStateServiceDelegate>
{
}

+ (id)acquireIdleTimerAssertionWithConfiguration:(id)arg1 fromClient:(id)arg2 forReason:(id)arg3;	// IMP=0x000000010001a598
+ (void)appTransitioner:(id)arg1 willStartAnimationForAppTransition:(id)arg2;	// IMP=0x000000010001a2b8
+ (void)sceneManager:(id)arg1 didChangeHiliteStateForScene:(id)arg2;	// IMP=0x000000010001a020
+ (void)sceneManager:(id)arg1 didChangeIdleTimerStateForScene:(id)arg2;	// IMP=0x0000000100019eb4
+ (void)sceneManager:(id)arg1 didChangeFocusFromScene:(id)arg2 toScene:(id)arg3;	// IMP=0x0000000100019de4
+ (void)powerManagerDidWakeSystem:(id)arg1;	// IMP=0x0000000100019980
+ (void)powerManager:(id)arg1 willWakeSystemWithReason:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010001985c
+ (void)powerManagerDidSleepSystem:(id)arg1;	// IMP=0x0000000100019784
+ (void)powerManager:(id)arg1 willSleepSystemWithReason:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000194bc
+ (_Bool)powerManagerAllowSystemToSleep:(id)arg1;	// IMP=0x0000000100019460
+ (id)afterIdleInterval:(double)arg1 reason:(id)arg2 queue:(id)arg3 perform:(CDUnknownBlockType)arg4;	// IMP=0x0000000100019370
+ (id)afterIdleInterval:(double)arg1 reason:(id)arg2 queue:(id)arg3 perform:(CDUnknownBlockType)arg4 invalidationHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000100019254
+ (id)makeIdleAction:(double)arg1 reason:(id)arg2 queue:(id)arg3 perform:(CDUnknownBlockType)arg4 invalidationHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000100018b84
+ (id)_activeApplicationScene;	// IMP=0x0000000100018a8c
+ (_Bool)_focusedSceneHasHiliteModeEnabled;	// IMP=0x00000001000189b8
+ (_Bool)_focusedSceneWantsIdleDisabled;	// IMP=0x00000001000188e4
+ (void)_temporarilySuppressWakeForHIDEvents;	// IMP=0x00000001000187e8
+ (void)_noteConditionsMayHaveChanged:(id)arg1;	// IMP=0x00000001000186b4
+ (void)_noteATimeoutChanged:(id)arg1;	// IMP=0x0000000100018528
+ (unsigned long long)_countOutstandingHighPriorityIdleAssertions;	// IMP=0x0000000100018380
+ (_Bool)_assertionIsHighPriority:(id)arg1;	// IMP=0x00000001000182dc
+ (_Bool)_hasOutstandingIdleAssertionsThatPreventSleep;	// IMP=0x00000001000182a0
+ (_Bool)_hasOutstandingIdleAssertionsThatPreventScreenSaver;	// IMP=0x0000000100018264
+ (_Bool)_hasOutstandingIdleAssertionsThatPreventCRD;	// IMP=0x0000000100018228
+ (_Bool)_hasOutstandingIdleAssertionsThatPreventNowPlaying;	// IMP=0x00000001000181ec
+ (_Bool)_hasOutstandingIdleAssertions;	// IMP=0x000000010001819c
+ (void)resetAttention:(id)arg1;	// IMP=0x0000000100017ea8
+ (void)__attentionRegained:(id)arg1;	// IMP=0x0000000100017a58
+ (void)__reactToSomethingChanged:(id)arg1;	// IMP=0x00000001000177f0
+ (void)__whackAttentionAwareness;	// IMP=0x000000010001750c
+ (void)__setupAttentionAwarenessForSleep;	// IMP=0x0000000100016c88
+ (void)__setupAttentionAwareness;	// IMP=0x000000010001632c
+ (void)__configureStateMachineTimeOffsets;	// IMP=0x0000000100015a9c
+ (void)initialize;	// IMP=0x000000010001436c
- (id)acquireIdleTimerAssertionWithConfiguration:(id)arg1 fromClient:(id)arg2 forReason:(id)arg3;	// IMP=0x000000010001a440
- (void)appTransitioner:(id)arg1 willStartAnimationForAppTransition:(id)arg2;	// IMP=0x000000010001a18c
- (void)sceneManager:(id)arg1 didChangeHiliteStateForScene:(id)arg2;	// IMP=0x0000000100019cb8
- (void)sceneManager:(id)arg1 didChangeIdleTimerStateForScene:(id)arg2;	// IMP=0x0000000100019b8c
- (void)sceneManager:(id)arg1 didChangeFocusFromScene:(id)arg2 toScene:(id)arg3;	// IMP=0x0000000100019a3c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
