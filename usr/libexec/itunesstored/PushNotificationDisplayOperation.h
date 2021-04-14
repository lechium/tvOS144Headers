//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class NSDictionary, SSRemoteNotification;

@interface PushNotificationDisplayOperation : ISOperation
{
    SSRemoteNotification *_notification;	// 96 = 0x60
}

+ (_Bool)_shouldUseBulletinBoardForNotification:(id)arg1;	// IMP=0x00000001000a509c
- (void).cxx_destruct;	// IMP=0x00000001000a527c
- (_Bool)_URLHandlerExists;	// IMP=0x00000001000a5194
- (void)_performNotificationAction:(_Bool)arg1;	// IMP=0x00000001000a2ec4
- (void)_openNotificationURL;	// IMP=0x00000001000a2da0
- (long long)_notificationClass;	// IMP=0x00000001000a2d3c
- (void)_loadNotificationDownloadManifest;	// IMP=0x00000001000a2be0
- (void)_displayBadge;	// IMP=0x00000001000a2b20
- (void)_displayAlert;	// IMP=0x00000001000a23f0
- (id)_clientIdentifierForDownloadKinds:(id)arg1;	// IMP=0x00000001000a2248
- (_Bool)_clientExistsWithIdentifier:(id)arg1;	// IMP=0x00000001000a21f0
- (void)run;	// IMP=0x00000001000a1aa4
@property(readonly) _Bool requiresClientIdentifier;
@property(readonly) NSDictionary *notificationUserInfo;
- (id)initWithNotificationUserInfo:(id)arg1;	// IMP=0x00000001000a1944
- (id)init;	// IMP=0x00000001000a1934

@end
