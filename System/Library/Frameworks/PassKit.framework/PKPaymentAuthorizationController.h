/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:35 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PKPaymentAuthorizationCoordinatorDelegate.h>
#import <libobjc.A.dylib/PKPaymentAuthorizationCoordinatorPrivateDelegate.h>

@protocol PKPaymentAuthorizationControllerDelegate, PKPaymentAuthorizationControllerPrivateDelegate;
@class PKPaymentAuthorizationCoordinator, NSString;

@interface PKPaymentAuthorizationController : NSObject <PKPaymentAuthorizationCoordinatorDelegate, PKPaymentAuthorizationCoordinatorPrivateDelegate> {

	PKPaymentAuthorizationController* _retainSelf;
	id<PKPaymentAuthorizationControllerDelegate> _delegate;
	PKPaymentAuthorizationCoordinator* _paymentCoordinator;
	id<PKPaymentAuthorizationControllerPrivateDelegate> _privateDelegate;

}

@property (nonatomic,retain) PKPaymentAuthorizationCoordinator * paymentCoordinator;                                  //@synthesize paymentCoordinator=_paymentCoordinator - In the implementation block
@property (assign,nonatomic,__weak) id<PKPaymentAuthorizationControllerPrivateDelegate> privateDelegate;              //@synthesize privateDelegate=_privateDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<PKPaymentAuthorizationControllerDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)canMakePayments;
+(void)paymentServicesMerchantURLForAPIType:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
+(BOOL)canMakePaymentsUsingNetworks:(id)arg1 ;
+(BOOL)canMakePaymentsUsingNetworks:(id)arg1 capabilities:(unsigned long long)arg2 ;
-(id)init;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id<PKPaymentAuthorizationControllerDelegate>)delegate;
-(void)setDelegate:(id<PKPaymentAuthorizationControllerDelegate>)arg1 ;
-(id<PKPaymentAuthorizationControllerPrivateDelegate>)privateDelegate;
-(void)setPrivateDelegate:(id<PKPaymentAuthorizationControllerPrivateDelegate>)arg1 ;
-(void)presentWithCompletion:(/*^block*/id)arg1 ;
-(void)dismissWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithPaymentRequest:(id)arg1 ;
-(void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizePayment:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)paymentAuthorizationCoordinatorDidFinish:(id)arg1 ;
-(void)paymentAuthorizationCoordinatorWillAuthorizePayment:(id)arg1 ;
-(void)paymentAuthorizationCoordinator:(id)arg1 didRequestMerchantSessionUpdate:(/*^block*/id)arg2 ;
-(void)paymentAuthorizationCoordinator:(id)arg1 didSelectShippingMethod:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)paymentAuthorizationCoordinator:(id)arg1 didSelectShippingAddress:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)paymentAuthorizationCoordinator:(id)arg1 didSelectPaymentMethod:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)paymentAuthorizationCoordinator:(id)arg1 willFinishWithError:(id)arg2 ;
-(void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizeContextWithHandler:(/*^block*/id)arg2 ;
-(void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizePurchase:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizePeerPaymentQuote:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizeDisbursementVoucher:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)paymentAuthorizationCoordinator:(id)arg1 didEncounterAuthorizationEvent:(unsigned long long)arg2 ;
-(PKPaymentAuthorizationCoordinator *)paymentCoordinator;
-(void)setPaymentCoordinator:(PKPaymentAuthorizationCoordinator *)arg1 ;
@end
