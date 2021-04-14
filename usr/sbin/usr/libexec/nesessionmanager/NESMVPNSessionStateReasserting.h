//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NESMVPNSessionState.h"

@interface NESMVPNSessionStateReasserting : NESMVPNSessionState
{
    _Bool _setConfigurationInProgress;	// 40 = 0x28
}

@property _Bool setConfigurationInProgress; // @synthesize setConfigurationInProgress=_setConfigurationInProgress;
- (void)handleSetConfigurationResult:(_Bool)arg1;	// IMP=0x000000010006ac8c
- (_Bool)handleSetConfiguration;	// IMP=0x000000010006ac2c
- (void)handleUserLogout;	// IMP=0x000000010006abf8
- (void)handleUserSwitch;	// IMP=0x000000010006abc4
- (void)handleWakeup;	// IMP=0x000000010006ab34
- (_Bool)handleSleep;	// IMP=0x000000010006a924
- (void)handlePluginStatusDidChangeToConnected:(id)arg1;	// IMP=0x000000010006a89c
- (void)handleTimeout;	// IMP=0x000000010006a7ec
- (void)handleInterfaceAvailable:(id)arg1 changed:(_Bool)arg2;	// IMP=0x000000010006a60c
- (void)enterWithSession:(id)arg1;	// IMP=0x000000010006a574
- (id)init;	// IMP=0x000000010006a538

@end
