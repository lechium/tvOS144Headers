//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol ACCVoiceOverXPCClientProtocol <NSObject>
- (void)accessoryVoiceOverStopCursorInformationUpdate:(NSString *)arg1;
- (void)accessoryVoiceOverStartCursorInformationUpdate:(NSString *)arg1;
- (void)accessoryVoiceOverStopInformationUpdate:(NSString *)arg1;
- (void)accessoryVoiceOverStartInformationUpdate:(NSString *)arg1;
- (void)accessoryVoiceOver:(NSString *)arg1 requestConfiguration:(int)arg2 param:(id)arg3;
- (void)accessoryVoiceOver:(NSString *)arg1 performAction:(int)arg2 parameters:(id)arg3;
- (void)accessoryVoiceOver:(NSString *)arg1 setContext:(int)arg2;
- (void)accessoryVoiceOver:(NSString *)arg1 setEnabled:(_Bool)arg2;
- (void)accessoryVoiceOverDetached:(NSString *)arg1;
- (void)accessoryVoiceOverAttached:(NSString *)arg1;
@end

