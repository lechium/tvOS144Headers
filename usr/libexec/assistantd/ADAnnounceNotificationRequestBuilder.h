//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ADAnnounceNotificationRequestBuilder : NSObject
{
}

+ (id)_createAnnounceInHomeRequestFromBundleID:(id)arg1 announcementIdentifier:(id)arg2 notificationType:(long long)arg3;	// IMP=0x000000010023db58
+ (id)_createSiriKitNativeAnnounceMessageRequestFromNotification:(id)arg1 appId:(id)arg2;	// IMP=0x000000010023dadc
+ (id)_createClientFlowAnnounceMessageRequestFromNotification:(id)arg1 appID:(id)arg2;	// IMP=0x000000010023d5e4
+ (id)announceNotificationRequestInfoFromNotification:(id)arg1 appId:(id)arg2;	// IMP=0x000000010023d1dc

@end

