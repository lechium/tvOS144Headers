//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CSAudioSessionController, NSDictionary;

@protocol CSAudioSessionControllerDelegate <NSObject>

@optional
- (void)audioSessionController:(CSAudioSessionController *)arg1 didReceiveAudioSessionOwnerResetNotification:(NSDictionary *)arg2;
- (void)audioSessionController:(CSAudioSessionController *)arg1 didReceiveAudioSessionOwnerLostNotification:(NSDictionary *)arg2;
- (void)audioSessionController:(CSAudioSessionController *)arg1 didReceiveAudioSessionMediaServicesWereResetNotificationWithUserInfo:(NSDictionary *)arg2;
- (void)audioSessionController:(CSAudioSessionController *)arg1 didReceiveAudioSessionMediaServicesWereLostNotificationWithUserInfo:(NSDictionary *)arg2;
- (void)audioSessionController:(CSAudioSessionController *)arg1 didReceiveAudioSessionRouteChangeNotificationWithUserInfo:(NSDictionary *)arg2;
- (void)audioSessionController:(CSAudioSessionController *)arg1 didReceiveAudioSessionInterruptionNotificationWithUserInfo:(NSDictionary *)arg2;
@end
