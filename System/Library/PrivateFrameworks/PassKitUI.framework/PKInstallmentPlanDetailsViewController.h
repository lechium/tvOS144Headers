/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:19 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PKSectionTableViewController.h>

@class PKAccount, PKAccountService, PKInstallmentPlan, PKTransactionSource, PKPaymentTransactionDetailAmountLineItemGenerator, NSArray, PKPaymentTransactionDetailHeaderView;

@interface PKInstallmentPlanDetailsViewController : PKSectionTableViewController {

	PKAccount* _account;
	PKAccountService* _accountService;
	PKInstallmentPlan* _installmentPlan;
	PKTransactionSource* _transactionSource;
	PKPaymentTransactionDetailAmountLineItemGenerator* _lineItemGenerator;
	NSArray* _lineItems;
	PKPaymentTransactionDetailHeaderView* _headerView;

}
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(id)initWithAccount:(id)arg1 installmentPlan:(id)arg2 accountService:(id)arg3 transactionSource:(id)arg4 ;
-(BOOL)shouldMapSection:(unsigned long long)arg1 ;
-(id)_detailsCellForTableView:(id)arg1 atIndexPath:(id)arg2 ;
-(void)_updateHeaderHeight;
-(id)_progressCellForTableView:(id)arg1 atIndexPath:(id)arg2 ;
@end

