/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:16 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITableViewController.h>

@protocol PKPaymentDataProvider;
@class PKAccount, PKAccountService, PKTransactionSource, NSArray, NSMutableDictionary, NSDateFormatter;

@interface PKInstallmentPlansViewController : UITableViewController {

	PKAccount* _account;
	PKAccountService* _accountService;
	PKTransactionSource* _transactionSource;
	id<PKPaymentDataProvider> _dataProvider;
	NSArray* _installmentPlans;
	NSMutableDictionary* _installmentPlanToDeviceName;
	NSMutableDictionary* _installmentPlanImages;
	NSDateFormatter* _installmentDateFormatter;

}
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)_updateInstallmentPlans;
-(void)_handleAccountUpdatedNotification:(id)arg1 ;
-(id)_installmentPlanForIndexPath:(id)arg1 ;
-(void)_configureCell:(id)arg1 forInstallmentPlan:(id)arg2 ;
-(id)_imageWithURL:(id)arg1 installmentPlan:(id)arg2 ;
-(id)initWithAccount:(id)arg1 accountService:(id)arg2 transactionSource:(id)arg3 dataProvider:(id)arg4 ;
-(id)_totalAmountPaid;
-(id)_totalAmountRemaining;
@end

