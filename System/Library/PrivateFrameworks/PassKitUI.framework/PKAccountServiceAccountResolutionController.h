/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:13 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PKAccountServiceAccountResolutionControllerDelegate, PKAccountBillPaymentObserver;
@class PKBusinessChatController, PKAccount, PKTransactionSource, UIViewController;

@interface PKAccountServiceAccountResolutionController : NSObject {

	PKBusinessChatController* _businessChatController;
	PKAccount* _account;
	PKTransactionSource* _transactionSource;
	id<PKAccountServiceAccountResolutionControllerDelegate> _delegate;
	id<PKAccountBillPaymentObserver> _billPaymentObserver;
	UIViewController* _presentingViewController;

}

@property (nonatomic,retain) PKAccount * account;                                                                  //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) PKTransactionSource * transactionSource;                                              //@synthesize transactionSource=_transactionSource - In the implementation block
@property (assign,nonatomic,__weak) id<PKAccountServiceAccountResolutionControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<PKAccountBillPaymentObserver> billPaymentObserver;                          //@synthesize billPaymentObserver=_billPaymentObserver - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * presentingViewController;                                   //@synthesize presentingViewController=_presentingViewController - In the implementation block
-(id<PKAccountServiceAccountResolutionControllerDelegate>)delegate;
-(void)setDelegate:(id<PKAccountServiceAccountResolutionControllerDelegate>)arg1 ;
-(UIViewController *)presentingViewController;
-(PKAccount *)account;
-(void)setAccount:(PKAccount *)arg1 ;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(PKTransactionSource *)transactionSource;
-(void)setTransactionSource:(PKTransactionSource *)arg1 ;
-(void)_presentViewController:(id)arg1 ;
-(void)_handleAccountServiceAccountDidChangeNotification:(id)arg1 ;
-(void)_presentAccountServiceAction:(unsigned long long)arg1 configuration:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_alertControllerForBusinessChatContext:(id)arg1 ;
-(void)_openBusinessChatWithContext:(id)arg1 ;
-(void)_callIssuer;
-(id)initWithAccount:(id)arg1 transactionSource:(id)arg2 ;
-(void)presentFlowForAccountResolution:(unsigned long long)arg1 configuration:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id<PKAccountBillPaymentObserver>)billPaymentObserver;
-(void)setBillPaymentObserver:(id<PKAccountBillPaymentObserver>)arg1 ;
@end

