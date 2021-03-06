//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ContextAwareObject.h"

#import "tGraphDataSource-Protocol.h"

@class BrightnessSystemClient, NSObject;
@protocol OS_dispatch_queue;

@interface SolarDetectorSemantic : ContextAwareObject <tGraphDataSource>
{
    BrightnessSystemClient *_brightnessSystemClient;	// 16 = 0x10
    int _thermalSunlightStateToken;	// 24 = 0x18
    int _currentSemanticAmbientLightLevel;	// 28 = 0x1c
    NSObject<OS_dispatch_queue> *_update_queue;	// 32 = 0x20
    int _currentSemanticLux;	// 40 = 0x28
    int _sunlightState;	// 44 = 0x2c
    int _sunlightStatePrevious;	// 48 = 0x30
    int _sunlightOverrideState;	// 52 = 0x34
    int _sunlightOverrideStatePrevious;	// 56 = 0x38
}

- (struct __CFString *)copyFieldCurrentValueForIndex:(int)arg1;	// IMP=0x0000000100017c7c
- (struct __CFString *)copyHeaderForIndex:(int)arg1;	// IMP=0x0000000100017c48
- (int)numberOfFields;	// IMP=0x0000000100017c40
- (void)setInfoOnlySensorsActive:(_Bool)arg1;	// IMP=0x0000000100017c2c
- (void)processPotentialSolarStateChange:(_Bool)arg1;	// IMP=0x0000000100017b44
- (void)updateCurrentSemanticAmbientLightLevel:(int)arg1;	// IMP=0x00000001000179fc
- (_Bool)synchContext;	// IMP=0x00000001000178dc
- (_Bool)isContextTriggered;	// IMP=0x00000001000178b8
- (int)getContextState;	// IMP=0x0000000100017884
- (void)handleBrightnessClientNotification:(id)arg1 value:(id)arg2;	// IMP=0x0000000100017724
- (void)initializeSemanticBrightnessHandling;	// IMP=0x0000000100017600
- (id)init;	// IMP=0x0000000100017464

@end

