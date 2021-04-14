/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:24 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PKCompactNavigationContainedNavigationController.h>

@protocol UIViewControllerTransitioningDelegate;
@class PKPaymentAuthorizationLayout, PKPaymentAuthorizationServiceViewController;

@interface PKPaymentAuthorizationServiceNavigationController : PKCompactNavigationContainedNavigationController {

	PKPaymentAuthorizationLayout* _layout;
	PKPaymentAuthorizationServiceViewController* _authorizationViewController;
	id<UIViewControllerTransitioningDelegate> _paymentTransitioningDelegate;

}

@property (nonatomic,retain) id<UIViewControllerTransitioningDelegate> paymentTransitioningDelegate;                   //@synthesize paymentTransitioningDelegate=_paymentTransitioningDelegate - In the implementation block
@property (nonatomic,readonly) PKPaymentAuthorizationServiceViewController * authorizationViewController;              //@synthesize authorizationViewController=_authorizationViewController - In the implementation block
-(id)init;
-(id)initWithStyle:(unsigned long long)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)_canShowWhileLocked;
-(id)initWithLayoutStyle:(long long)arg1 paymentRequest:(id)arg2 ;
-(id)_backgroundColorForModalFormSheet;
-(PKPaymentAuthorizationServiceViewController *)authorizationViewController;
-(id<UIViewControllerTransitioningDelegate>)paymentTransitioningDelegate;
-(void)setPaymentTransitioningDelegate:(id<UIViewControllerTransitioningDelegate>)arg1 ;
@end

