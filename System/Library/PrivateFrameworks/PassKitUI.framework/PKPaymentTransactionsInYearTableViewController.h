/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:24 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITableViewController.h>
#import <UIKit/UIViewControllerPreviewingDelegate.h>
#import <libobjc.A.dylib/PKDashboardTransactionFetcherDelegate.h>

@protocol PKPaymentDataProvider;
@class NSDate, NSCalendar, NSArray, PKTransactionSource, NSSet, PKPaymentTransactionCellController, PKPeerPaymentContactResolver, PKPeerPaymentWebService, NSDateFormatter, PKDashboardTransactionFetcher, PKPaymentTransactionDetailsFactory, NSString;

@interface PKPaymentTransactionsInYearTableViewController : UITableViewController <UIViewControllerPreviewingDelegate, PKDashboardTransactionFetcherDelegate> {

	NSDate* _dateFromYear;
	NSCalendar* _calendar;
	NSArray* _transactionsByMonth;
	NSArray* _instantWithdrawalFeesTransactionGroups;
	PKTransactionSource* _transactionSource;
	NSSet* _transactionSourceIdentifiers;
	id<PKPaymentDataProvider> _paymentServiceDataProvider;
	PKPaymentTransactionCellController* _transactionCellController;
	PKPeerPaymentContactResolver* _contactResolver;
	PKPeerPaymentWebService* _peerPaymentWebService;
	NSDateFormatter* _transactionMonthFormatter;
	NSDateFormatter* _withdrawalFeeMonthYearFormatter;
	long long _detailViewStyle;
	PKDashboardTransactionFetcher* _transactionFetcher;
	PKPaymentTransactionDetailsFactory* _transactionDetailsFactory;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)viewDidLoad;
-(void)transactionsChanged:(id)arg1 ;
-(id)_transactionDetailViewControllerForTransaction:(id)arg1 ;
-(void)_fetchDataWithCompletion:(/*^block*/id)arg1 ;
-(id)_transactionsInYearTitleString;
-(long long)_sectionTypeForSection:(long long)arg1 ;
-(id)_withdrawalFeeMonthYearFormatter;
-(id)_transactionMonthFormatter;
-(void)_updateWithTransactions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithDateFromYear:(id)arg1 calendar:(id)arg2 transactionSource:(id)arg3 detailViewStyle:(long long)arg4 paymentServiceDataProvider:(id)arg5 contactResolver:(id)arg6 peerPaymentWebService:(id)arg7 ;
@end

