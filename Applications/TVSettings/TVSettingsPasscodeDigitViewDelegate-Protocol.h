//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, TVSettingsPasscodeDigitView;

@protocol TVSettingsPasscodeDigitViewDelegate <NSObject>

@optional
- (void)passcodeDigitView:(TVSettingsPasscodeDigitView *)arg1 didChangeText:(NSString *)arg2;
- (void)passcodeDigitViewDidResignFocus:(TVSettingsPasscodeDigitView *)arg1;
- (void)passcodeDigitViewDidBecomeFocused:(TVSettingsPasscodeDigitView *)arg1;
@end

