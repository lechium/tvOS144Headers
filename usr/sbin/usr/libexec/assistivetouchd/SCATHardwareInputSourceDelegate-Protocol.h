//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCATInputSourceDelegate-Protocol.h"

@class SCATHardwareInputSource;

@protocol SCATHardwareInputSourceDelegate <SCATInputSourceDelegate>
- (void)hardwareInputSource:(SCATHardwareInputSource *)arg1 didUpdateAvailability:(_Bool)arg2 withDetail:(unsigned long long)arg3;
- (void)hardwareInputSource:(SCATHardwareInputSource *)arg1 didReceiveActionWithIdentifier:(long long)arg2 start:(_Bool)arg3 ignoreInputHold:(_Bool)arg4;
@end

