//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCATHardwareInputSource.h"

@interface SCATKeyboardInputSource : SCATHardwareInputSource
{
}

- (id)_switchDisplayNameForKeyCode:(unsigned short)arg1;	// IMP=0x0000000100008094
- (id)_persistentSwitchIdentifierForKeyCode:(unsigned short)arg1;	// IMP=0x0000000100008000
- (long long)_actionIdentifierForKeyCode:(unsigned short)arg1 withType:(id)arg2;	// IMP=0x0000000100007e9c
- (_Bool)handledEvent:(id)arg1;	// IMP=0x0000000100007cf4
- (long long)switchKeyForSwitch:(id)arg1;	// IMP=0x0000000100007cd4
- (id)switchSource;	// IMP=0x0000000100007cc4
- (_Bool)isKeyboardInputSource;	// IMP=0x0000000100007cbc

@end

