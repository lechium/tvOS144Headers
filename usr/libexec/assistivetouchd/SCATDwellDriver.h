//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCATDriver.h"

@interface SCATDwellDriver : SCATDriver
{
    _Bool _isReadyForSelect;	// 8 = 0x8
}

@property(nonatomic) _Bool isReadyForSelect; // @synthesize isReadyForSelect=_isReadyForSelect;
- (void)outputManager:(id)arg1 didSpeakFocusContext:(id)arg2;	// IMP=0x0000000100061ce8
- (double)dwellDelay;	// IMP=0x0000000100061c08
- (void)_cancelDwellRelatedTimers;	// IMP=0x0000000100061b5c
- (void)_scanAbortTimerFired;	// IMP=0x0000000100061af4
- (void)_dwellTimerFired;	// IMP=0x0000000100061a9c
- (void)_startScanAbortTimer;	// IMP=0x00000001000619d0
- (void)_startDwellTimer;	// IMP=0x000000010006197c
- (void)_resetDwellTimer;	// IMP=0x0000000100061920
- (void)_didTransitionToPhase:(int)arg1;	// IMP=0x00000001000618d0
- (void)_idleTimerDidFire;	// IMP=0x0000000100061878
- (_Bool)_shouldUseScanAbortTimer;	// IMP=0x0000000100061704
- (_Bool)_shouldUseDwellSelection;	// IMP=0x00000001000616b8
- (_Bool)_handleStepPreviousAction;	// IMP=0x0000000100061664
- (_Bool)_handleStepNextAction;	// IMP=0x0000000100061610
- (_Bool)_handleStepAction:(long long)arg1;	// IMP=0x00000001000615b4
- (_Bool)_handleSelectAction;	// IMP=0x00000001000615a8
- (_Bool)_actuallyHandleSelectAction;	// IMP=0x0000000100061574
- (_Bool)handleInputAction:(long long)arg1;	// IMP=0x000000010006151c
- (int)driverType;	// IMP=0x0000000100061514

@end

