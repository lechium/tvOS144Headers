//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PBAttentionMonitorStateMachine : NSObject
{
    long long _state;	// 8 = 0x8
    _Bool _automaticEnabled;	// 16 = 0x10
    _Bool _enteredOnStateAutomatically;	// 17 = 0x11
    double _enabledOffset;	// 24 = 0x18
}

@property(nonatomic) double enabledOffset; // @synthesize enabledOffset=_enabledOffset;
- (void)_enterOffStateForced;	// IMP=0x000000010000d4f4
- (void)_enterOnStateForced;	// IMP=0x000000010000d4dc
- (void)_enterOffStateAutomatically;	// IMP=0x000000010000d4c4
- (void)_enterOnStateAutomatically;	// IMP=0x000000010000d4ac
- (_Bool)_canBeInOnStateAutomatically;	// IMP=0x000000010000d48c
- (id)_logString;	// IMP=0x000000010000d3dc
@property(readonly, nonatomic) _Bool enteredOnStateAutomatically;
- (void)enterOffStateForced;	// IMP=0x000000010000d268
- (void)enterOnStateForced;	// IMP=0x000000010000d11c
- (void)enterOffStateAutomatically;	// IMP=0x000000010000cfcc
- (_Bool)adjustStateAutomatically;	// IMP=0x000000010000ccbc
- (void)automaticDisable;	// IMP=0x000000010000cbac
- (void)automaticEnable;	// IMP=0x000000010000caa0
@property(readonly, nonatomic, getter=isAutomaticEnabled) _Bool automaticEnabled;
- (void)_setStateOff;	// IMP=0x000000010000c970
- (void)_setStateOn;	// IMP=0x000000010000c864
@property(readonly, nonatomic) _Bool isOn;
@property(readonly, nonatomic) _Bool isOff;
- (id)init;	// IMP=0x000000010000c734

@end
