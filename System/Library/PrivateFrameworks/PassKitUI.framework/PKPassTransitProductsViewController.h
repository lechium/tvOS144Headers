/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:21 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PKSectionTableViewController.h>
#import <libobjc.A.dylib/PKPaymentDataProviderDelegate.h>
#import <libobjc.A.dylib/PKPerformActionViewControllerDelegate.h>
#import <libobjc.A.dylib/PKAccessibleLayoutObserverDelegate.h>

@protocol PKPaymentDataProvider;
@class PKTransitBalanceModel, PKAdjustableSingleCellView, PKRemoteDataAccessor, PKPaymentPass, NSString;

@interface PKPassTransitProductsViewController : PKSectionTableViewController <PKPaymentDataProviderDelegate, PKPerformActionViewControllerDelegate, PKAccessibleLayoutObserverDelegate> {

	PKTransitBalanceModel* _balanceModel;
	long long _accessibleLayout;
	id<PKPaymentDataProvider> _paymentDataProvider;
	BOOL _hasBalance;
	BOOL _hasCommutePlans;
	unsigned long long _transitType;
	PKAdjustableSingleCellView* _sampleSingleCellView;
	PKRemoteDataAccessor* _remoteDataAccessor;
	PKPaymentPass* _pass;

}

@property (assign,nonatomic) PKPaymentPass * pass;                  //@synthesize pass=_pass - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(PKPaymentPass *)pass;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setPass:(PKPaymentPass *)arg1 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveBalanceUpdate:(id)arg2 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateWithTransitPassProperties:(id)arg2 ;
-(void)performActionViewControllerDidCancel:(id)arg1 ;
-(void)performActionViewControllerDidPerformAction:(id)arg1 ;
-(id)initWithPaymentPass:(id)arg1 transitType:(unsigned long long)arg2 ;
-(void)_reloadBalance;
-(void)_reloadContent;
-(void)_handlePassUpdate:(id)arg1 ;
-(void)_setupPlans;
-(void)_setupBalances;
-(id)_topUpActionForIndexPath:(id)arg1 balanceIdentifier:(id)arg2 ;
-(/*^block*/id)_actionHandlerForIndexPath:(id)arg1 ;
-(id)_renewActionForCommutePlanIdentifier:(id)arg1 ;
-(void)_configureView:(id)arg1 indexPath:(id)arg2 animated:(BOOL)arg3 ;
-(void)_configureCell:(id)arg1 inTableView:(id)arg2 forIndexPath:(id)arg3 ;
-(id)_allocView;
-(void)accessibleLayoutForView:(id)arg1 changedFrom:(long long)arg2 to:(long long)arg3 ;
@end

