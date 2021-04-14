/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:06 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UserNotifications/UserNotifications-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface UNNotificationSettings : NSObject <NSCopying, NSSecureCoding> {

	long long _authorizationStatus;
	long long _soundSetting;
	long long _badgeSetting;
	long long _alertSetting;
	long long _notificationCenterSetting;
	long long _lockScreenSetting;
	long long _carPlaySetting;
	long long _alertStyle;
	long long _showPreviewsSetting;
	long long _criticalAlertSetting;
	BOOL _providesAppNotificationSettings;
	long long _announcementSetting;
	long long _groupingSetting;

}

@property (nonatomic,readonly) long long groupingSetting;                         //@synthesize groupingSetting=_groupingSetting - In the implementation block
@property (nonatomic,readonly) long long authorizationStatus;                     //@synthesize authorizationStatus=_authorizationStatus - In the implementation block
@property (nonatomic,readonly) long long soundSetting;                            //@synthesize soundSetting=_soundSetting - In the implementation block
@property (nonatomic,readonly) long long badgeSetting;                            //@synthesize badgeSetting=_badgeSetting - In the implementation block
@property (nonatomic,readonly) long long alertSetting;                            //@synthesize alertSetting=_alertSetting - In the implementation block
@property (nonatomic,readonly) long long notificationCenterSetting;               //@synthesize notificationCenterSetting=_notificationCenterSetting - In the implementation block
@property (nonatomic,readonly) long long lockScreenSetting;                       //@synthesize lockScreenSetting=_lockScreenSetting - In the implementation block
@property (nonatomic,readonly) long long carPlaySetting;                          //@synthesize carPlaySetting=_carPlaySetting - In the implementation block
@property (nonatomic,readonly) long long alertStyle;                              //@synthesize alertStyle=_alertStyle - In the implementation block
@property (nonatomic,readonly) long long showPreviewsSetting;                     //@synthesize showPreviewsSetting=_showPreviewsSetting - In the implementation block
@property (nonatomic,readonly) long long criticalAlertSetting;                    //@synthesize criticalAlertSetting=_criticalAlertSetting - In the implementation block
@property (nonatomic,readonly) BOOL providesAppNotificationSettings;              //@synthesize providesAppNotificationSettings=_providesAppNotificationSettings - In the implementation block
@property (nonatomic,readonly) long long announcementSetting;                     //@synthesize announcementSetting=_announcementSetting - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)emptySettings;
+(id)settingsWithAuthorizationStatus:(long long)arg1 soundSetting:(long long)arg2 badgeSetting:(long long)arg3 alertSetting:(long long)arg4 notificationCenterSetting:(long long)arg5 lockScreenSetting:(long long)arg6 carPlaySetting:(long long)arg7 spokenSetting:(long long)arg8 criticalAlertSetting:(long long)arg9 alertStyle:(long long)arg10 showPreviewsSetting:(long long)arg11 providesAppNotificationSettings:(BOOL)arg12 ;
+(id)settingsWithAuthorizationStatus:(long long)arg1 soundSetting:(long long)arg2 badgeSetting:(long long)arg3 alertSetting:(long long)arg4 notificationCenterSetting:(long long)arg5 lockScreenSetting:(long long)arg6 carPlaySetting:(long long)arg7 announcementSetting:(long long)arg8 criticalAlertSetting:(long long)arg9 alertStyle:(long long)arg10 showPreviewsSetting:(long long)arg11 groupingSetting:(long long)arg12 providesAppNotificationSettings:(BOOL)arg13 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)authorizationStatus;
-(id)initWithAuthorizationStatus:(long long)arg1 soundSetting:(long long)arg2 badgeSetting:(long long)arg3 alertSetting:(long long)arg4 notificationCenterSetting:(long long)arg5 lockScreenSetting:(long long)arg6 carPlaySetting:(long long)arg7 announcementSetting:(long long)arg8 criticalAlertSetting:(long long)arg9 alertStyle:(long long)arg10 showPreviewsSetting:(long long)arg11 groupingSetting:(long long)arg12 providesAppNotificationSettings:(BOOL)arg13 ;
-(BOOL)hasEnabledNotificationSettings;
-(long long)badgeSetting;
-(long long)announcementSetting;
-(long long)alertSetting;
-(long long)alertStyle;
-(long long)lockScreenSetting;
-(long long)notificationCenterSetting;
-(long long)carPlaySetting;
-(long long)criticalAlertSetting;
-(long long)soundSetting;
-(long long)groupingSetting;
-(BOOL)providesAppNotificationSettings;
-(long long)showPreviewsSetting;
-(BOOL)hasEnabledSettings;
@end

