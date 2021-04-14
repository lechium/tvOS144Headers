//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SBSStatusBarStyleOverridesCoordinatorDelegate-Protocol.h"

@class NSDate, NSString, NSTimer, SBSStatusBarStyleOverridesAssertion, SBSStatusBarStyleOverridesCoordinator;
@protocol RPStatusBarAssertionDelegate, SBSStatusBarStyleOverridesCoordinatorDelegate;

@interface RPStatusBarAssertion : NSObject <SBSStatusBarStyleOverridesCoordinatorDelegate>
{
    _Bool _microphoneEnabled;	// 8 = 0x8
    _Bool _broadcasting;	// 9 = 0x9
    _Bool _paused;	// 10 = 0xa
    NSString *_broadcastServiceName;	// 16 = 0x10
    id <SBSStatusBarStyleOverridesCoordinatorDelegate> _delegate;	// 24 = 0x18
    id <RPStatusBarAssertionDelegate> _assertionDelegate;	// 32 = 0x20
    SBSStatusBarStyleOverridesAssertion *_assertion;	// 40 = 0x28
    SBSStatusBarStyleOverridesCoordinator *_coordinator;	// 48 = 0x30
    NSTimer *_timer;	// 56 = 0x38
    NSDate *_timerStartDate;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000100015ac4
@property(retain, nonatomic) NSDate *timerStartDate; // @synthesize timerStartDate=_timerStartDate;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) _Bool paused; // @synthesize paused=_paused;
@property(retain, nonatomic) SBSStatusBarStyleOverridesCoordinator *coordinator; // @synthesize coordinator=_coordinator;
@property(retain, nonatomic) SBSStatusBarStyleOverridesAssertion *assertion; // @synthesize assertion=_assertion;
@property(retain, nonatomic) id <RPStatusBarAssertionDelegate> assertionDelegate; // @synthesize assertionDelegate=_assertionDelegate;
@property(retain, nonatomic) id <SBSStatusBarStyleOverridesCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *broadcastServiceName; // @synthesize broadcastServiceName=_broadcastServiceName;
@property(nonatomic) _Bool broadcasting; // @synthesize broadcasting=_broadcasting;
@property(nonatomic) _Bool microphoneEnabled; // @synthesize microphoneEnabled=_microphoneEnabled;
- (void)statusBarCoordinator:(id)arg1 invalidatedRegistrationWithError:(id)arg2;	// IMP=0x000000010001594c
- (void)updateStatusStringWithTimer:(id)arg1;	// IMP=0x0000000100015948
- (void)updateDoubleHeightStatusBarWithDuration:(double)arg1 paused:(_Bool)arg2;	// IMP=0x0000000100015944
- (id)rpLocalizedRecordingDuration:(double)arg1 paused:(_Bool)arg2;	// IMP=0x0000000100015840
- (id)stringWithTimeInterval:(double)arg1;	// IMP=0x0000000100015754
- (void)invalidateDoubleHeightStatusBar;	// IMP=0x0000000100015750
- (void)startRepeatingTimer;	// IMP=0x0000000100015654
- (void)showDoubleHeightStatusBarWithPid:(int)arg1;	// IMP=0x0000000100015650
- (void)acquireAssertionWithPid:(int)arg1;	// IMP=0x00000001000155f4
- (void)acquireAssertionWithPidWaitForCompletion:(int)arg1;	// IMP=0x00000001000155f0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

