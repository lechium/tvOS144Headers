//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NESMVPNSessionState.h"

@interface NESMVPNSessionStateRunning : NESMVPNSessionState
{
}

- (void)handleInterfaceUnavailable:(id)arg1;	// IMP=0x000000010006a4c4
- (void)handlePluginStatusDidChangeToReasserting:(id)arg1;	// IMP=0x000000010006a450
- (void)handleUserLogout;	// IMP=0x000000010006a41c
- (void)handleUserSwitch;	// IMP=0x000000010006a3e8
- (void)handleWakeup;	// IMP=0x000000010006a358
- (_Bool)handleSleep;	// IMP=0x000000010006a148
- (id)init;	// IMP=0x000000010006a10c

@end

