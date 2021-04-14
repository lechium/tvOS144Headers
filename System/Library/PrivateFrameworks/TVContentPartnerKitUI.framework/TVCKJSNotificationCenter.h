/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:19 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/WLKNotificationCenterDelegate.h>
#import <TVContentPartnerKitUI/TVCKJSNotificationCenter.h>

@protocol TVCKJSNotificationCenter <JSExport>
@required
-(void)setBadgeString:(id)arg1;
-(void)setBadgeNumber:(id)arg1;
-(void)post:(id)arg1 :(id)arg2 :(id)arg3 :(id)arg4;

@end


@class WLKNotificationCenter, NSString;

@interface TVCKJSNotificationCenter : IKJSObject <WLKNotificationCenterDelegate, TVCKJSNotificationCenter> {

	WLKNotificationCenter* _center;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)showSignupAlertPushNotificationWithAppContext:(id)arg1 ;
+(void)showAppInstallCompletePushNotificationWithAppContext:(id)arg1 appName:(id)arg2 contentName:(id)arg3 punchoutURL:(id)arg4 ;
-(id)initWithAppContext:(id)arg1 ;
-(void)setBadgeString:(id)arg1 ;
-(void)handleAction:(id)arg1 ;
-(void)setBadgeNumber:(id)arg1 ;
-(void)post:(id)arg1 :(id)arg2 :(id)arg3 :(id)arg4 ;
@end

