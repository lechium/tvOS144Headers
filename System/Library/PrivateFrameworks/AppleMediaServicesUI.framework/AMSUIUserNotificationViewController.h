/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:30 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppleMediaServicesUI/AppleMediaServicesUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/AMSUIUserNotificationContentDelegate.h>

@class AMSUIUserNotificationContentViewController, NSString;

@interface AMSUIUserNotificationViewController : UIViewController <AMSUIUserNotificationContentDelegate> {

	AMSUIUserNotificationContentViewController* _contentViewController;

}

@property (nonatomic,retain) AMSUIUserNotificationContentViewController * contentViewController;              //@synthesize contentViewController=_contentViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)userNotificationFromNotification:(id)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(AMSUIUserNotificationContentViewController *)contentViewController;
-(void)setContentViewController:(AMSUIUserNotificationContentViewController *)arg1 ;
-(void)viewController:(id)arg1 didUpdatePreferredContentSize:(CGSize)arg2 ;
-(void)openNotification;
-(void)renderUserNotification:(id)arg1 ;
@end

