/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:09 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/SKUIClientAccountPageViewController.h>

@class SKAccountPageViewController, NSString;

@interface SKRemoteAccountPageViewController : _UIRemoteViewController <SKUIClientAccountPageViewController> {

	SKAccountPageViewController* _accountPageViewController;

}

@property (assign,nonatomic,__weak) SKAccountPageViewController * accountPageViewController;              //@synthesize accountPageViewController=_accountPageViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(id)disconnect;
-(void)didPrepareWithResult:(id)arg1 error:(id)arg2 ;
-(void)didFinishLoading;
-(void)dismissViewControllerWithResult:(id)arg1 error:(id)arg2 ;
-(void)financeInterruptionResolved:(BOOL)arg1 ;
-(void)overrideCreditCardPresentationWithCompletion:(/*^block*/id)arg1 ;
-(void)overrideRedeemCameraPerformAction:(long long)arg1 withObject:(id)arg2 ;
-(void)overrideRedeemCameraWithCompletion:(/*^block*/id)arg1 ;
-(void)setBridgedNavigationItemWithOptions:(id)arg1 ;
-(void)pushBridgedViewControllerAnimated:(BOOL)arg1 options:(id)arg2 ;
-(void)popBridgedViewControllersToIndex:(unsigned long long)arg1 ;
-(void)presentBridgedViewController;
-(void)dismissBridgedViewController;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(SKAccountPageViewController *)accountPageViewController;
-(void)setAccountPageViewController:(SKAccountPageViewController *)arg1 ;
@end

