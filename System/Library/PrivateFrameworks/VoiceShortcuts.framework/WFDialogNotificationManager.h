/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:39 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/UNUserNotificationCenterDelegate.h>

@class WFUserNotificationManager, NSString;

@interface WFDialogNotificationManager : NSObject <UNUserNotificationCenterDelegate> {

	WFUserNotificationManager* _userNotificationManager;

}

@property (nonatomic,readonly) WFUserNotificationManager * userNotificationManager;              //@synthesize userNotificationManager=_userNotificationManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)categoryIdentifiers;
+(id)dialogNotificationConfirmationCategory;
+(id)dialogNotificationCategory;
-(void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(id)initWithUserNotificationManager:(id)arg1 ;
-(void)removeStaleNotifications;
-(WFUserNotificationManager *)userNotificationManager;
-(void)postNotificationWithRequest:(id)arg1 presentationMode:(unsigned long long)arg2 runningContext:(id)arg3 ;
-(unsigned long long)vcShortcutPresentationModeFromWFDialogPresentationMode:(unsigned long long)arg1 ;
@end

