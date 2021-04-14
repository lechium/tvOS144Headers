/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:30 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>

@class AMSUICommonView;

@interface AMSUICommonViewController : UIViewController

@property (assign,setter=setIsMovingFromParentViewController:,getter=isMovingFromParentViewController,nonatomic) BOOL movingFromParentViewController; 
@property (nonatomic,retain) AMSUICommonView * view; 
-(id)init;
-(void)dealloc;
-(AMSUICommonView *)view;
-(void)setView:(AMSUICommonView *)arg1 ;
-(void)loadView;
-(void)_unregisterNotifications;
-(void)_registerNotifications;
-(void)setChildViewController:(id)arg1 ;
-(void)unsetChildViewController:(id)arg1 ;
@end

