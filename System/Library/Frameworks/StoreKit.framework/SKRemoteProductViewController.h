/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:10 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/SKUIClientProductPageViewController.h>

@class SKStoreProductViewController, NSString;

@interface SKRemoteProductViewController : _UIRemoteViewController <SKUIClientProductPageViewController> {

	SKStoreProductViewController* _productViewController;

}

@property (assign,nonatomic,__weak) SKStoreProductViewController * productViewController;              //@synthesize productViewController=_productViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(void)didFinish;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)setProductViewController:(SKStoreProductViewController *)arg1 ;
-(void)setStatusBarStyle:(id)arg1 animated:(id)arg2 ;
-(void)didFinishWithResult:(id)arg1 ;
-(void)didFinishDismissal;
-(void)didReceiveTitle:(id)arg1 ;
-(void)loadDidFinishWithResult:(id)arg1 error:(id)arg2 ;
-(void)presentPageWithRequest:(id)arg1 animated:(id)arg2 ;
-(void)promptForStarRating;
-(void)setStatusBarHidden:(id)arg1 withAnimation:(id)arg2 ;
-(SKStoreProductViewController *)productViewController;
@end

