/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:20 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PKSectionTableViewController.h>
#import <libobjc.A.dylib/PKPaymentServiceDelegate.h>

@class PKPaymentService, PKPaymentTransaction, PKTransactionReceipt, NSString;

@interface PKTransactionReceiptDebugViewController : PKSectionTableViewController <PKPaymentServiceDelegate> {

	PKPaymentService* _paymentService;
	PKPaymentTransaction* _transaction;
	PKTransactionReceipt* _receipt;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)viewDidLoad;
-(void)transactionWithIdentifier:(id)arg1 didDownloadTransactionReceipt:(id)arg2 ;
-(BOOL)shouldMapSection:(unsigned long long)arg1 ;
-(id)initWithPaymentTransaction:(id)arg1 ;
-(id)_infoCellForTableView:(id)arg1 atIndexPath:(id)arg2 ;
-(id)_headerFieldCellForTableView:(id)arg1 atIndexPath:(id)arg2 ;
-(id)_lineItemCellForTableView:(id)arg1 atIndexPath:(id)arg2 ;
-(id)_summaryItemCellForTableView:(id)arg1 atIndexPath:(id)arg2 ;
-(id)_amountCellForTableView:(id)arg1 atIndexPath:(id)arg2 ;
-(id)_previewCellForTableView:(id)arg1 atIndexPath:(id)arg2 ;
-(void)_presentReceiptPreview;
@end

