/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:56 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Accounts/Notification/AAAccountNotificationPlugin.bundle/AAAccountNotificationPlugin
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/ACDAccountNotificationPlugin.h>

@protocol OS_dispatch_queue;
@class NSObject, AAAccountNotificationFollowUpController, NSString;

@interface AAAccountNotificationPlugin : NSObject <ACDAccountNotificationPlugin> {

	NSObject*<OS_dispatch_queue> _didChangeBackgroundQueue;
	NSObject*<OS_dispatch_queue> _fmBackgroundQueue;
	AAAccountNotificationFollowUpController* _followUpController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)canSaveAccount:(id)arg1 inStore:(id)arg2 ;
-(BOOL)account:(id)arg1 willChangeWithType:(int)arg2 inStore:(id)arg3 oldAccount:(id)arg4 ;
-(void)account:(id)arg1 didChangeWithType:(int)arg2 inStore:(id)arg3 oldAccount:(id)arg4 ;
-(BOOL)_warmupShouldHaveCompletedForAccount:(id)arg1 ;
-(void)_handleFindMyChangesForAccount:(id)arg1 ;
@end

