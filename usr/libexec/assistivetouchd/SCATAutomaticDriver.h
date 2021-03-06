//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCATDriver.h"

@class AXDispatchTimer;

@interface SCATAutomaticDriver : SCATDriver
{
    _Bool _forcePause;	// 8 = 0x8
    _Bool _shouldScanToNextFocusContextAfterSpeaking;	// 9 = 0x9
    AXDispatchTimer *_focusTimer;	// 16 = 0x10
    long long _currentCycleCount;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100033f48
@property(nonatomic) _Bool shouldScanToNextFocusContextAfterSpeaking; // @synthesize shouldScanToNextFocusContextAfterSpeaking=_shouldScanToNextFocusContextAfterSpeaking;
@property(nonatomic) _Bool forcePause; // @synthesize forcePause=_forcePause;
@property(nonatomic) long long currentCycleCount; // @synthesize currentCycleCount=_currentCycleCount;
@property(retain, nonatomic) AXDispatchTimer *focusTimer; // @synthesize focusTimer=_focusTimer;
- (void)resumeAutoscanning:(_Bool)arg1;	// IMP=0x0000000100033e78
- (void)pauseAutoscanning;	// IMP=0x0000000100033e40
- (void)actionHandlerDidCancelPendingAction:(id)arg1;	// IMP=0x0000000100033df0
- (void)actionHandlerDidFireAction:(id)arg1;	// IMP=0x0000000100033da0
- (void)_pauseForMaximumNumberOfCycles;	// IMP=0x0000000100033cfc
- (void)_willStepToNextFocusContext:(id)arg1 inDirection:(long long)arg2;	// IMP=0x0000000100033a48
- (void)_idleTimerDidFire;	// IMP=0x0000000100033a14
- (void)_didWrapInDirection:(long long)arg1;	// IMP=0x000000010003398c
- (_Bool)_handleStopAction;	// IMP=0x000000010003396c
- (_Bool)_handleRunAction;	// IMP=0x000000010003394c
- (_Bool)_handleSelectAction;	// IMP=0x0000000100033900
- (void)outputManager:(id)arg1 didSpeakFocusContext:(id)arg2;	// IMP=0x0000000100033814
- (void)_endAutoscanning;	// IMP=0x00000001000337bc
- (void)_autoscanToNextFocusContext;	// IMP=0x0000000100033684
- (void)_didTransitionToPhase:(int)arg1;	// IMP=0x0000000100033604
@property(readonly, nonatomic) unsigned long long maxAutoscanCycles;
@property(readonly, nonatomic) double focusInterval;
- (int)driverType;	// IMP=0x0000000100033454
- (_Bool)pauseScanningForPointPickerNumberOfCycles:(unsigned long long)arg1;	// IMP=0x00000001000333f0
- (void)freezeScanning;	// IMP=0x00000001000333e4
- (void)willDrillOutOfGroup;	// IMP=0x00000001000333ac
- (void)willDrillIntoGroup;	// IMP=0x0000000100033374
- (void)willFinishAsScannerDriver;	// IMP=0x0000000100033328
- (id)description;	// IMP=0x0000000100033184
- (void)dealloc;	// IMP=0x0000000100033118
- (id)initWithDelegate:(id)arg1;	// IMP=0x0000000100033068

@end

