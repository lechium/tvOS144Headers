/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:14 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <libobjc.A.dylib/PKDashboardItemPresenter.h>

@class PKPaymentTransactionCollectionViewCell, PKDashboardButtonCollectionViewCell, PKDashboardCurrencyAmountCell, NSDateFormatter, UIImage, NSData, NSString;

@interface PKDashboardBalanceSummaryItemPresenter : NSObject <PKDashboardItemPresenter> {

	PKPaymentTransactionCollectionViewCell* _sampleTransactionCell;
	PKDashboardButtonCollectionViewCell* _sampleButtonCell;
	PKDashboardCurrencyAmountCell* _sampleCurrencyCell;
	PKDashboardButtonCollectionViewCell* _downloadPDFCell;
	PKDashboardButtonCollectionViewCell* _exportStatementDataCell;
	NSDateFormatter* _formatterMonthYear;
	NSDateFormatter* _formatterMonthAndDay;
	NSDateFormatter* _formatterMonthDayYear;
	NSDateFormatter* _formatterMonth;
	UIImage* _statementIcon;
	NSData* _pdfData;
	NSData* _exportedStatementData;
	long long _cellStyle;

}

@property (assign,nonatomic) long long cellStyle;                   //@synthesize cellStyle=_cellStyle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(long long)cellStyle;
-(Class)itemClass;
-(void)setCellStyle:(long long)arg1 ;
-(void)_configureCell:(id)arg1 forItem:(id)arg2 inCollectionView:(id)arg3 forIndexPath:(id)arg4 forSizing:(BOOL)arg5 ;
-(id)collectionViewCellClasses;
-(id)cellForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 ;
-(void)updateCell:(id)arg1 forItem:(id)arg2 inCollectionView:(id)arg3 atIndexPath:(id)arg4 ;
-(void)didSelectItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 navigationController:(id)arg4 canPresent:(/*^block*/id)arg5 ;
-(CGSize)sizeForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 ;
-(BOOL)canSelectItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 ;
-(void)traitCollectionDidChangeFromTrait:(id)arg1 toTrait:(id)arg2 inCollectionView:(id)arg3 ;
-(id)_statementCellTitleForItem:(id)arg1 ;
-(void)_downloadAndPresentStatementForItem:(id)arg1 inCollectionView:(id)arg2 ;
-(void)_selectFileFormatForExportedStatementDataForItem:(id)arg1 inCollectionView:(id)arg2 ;
-(BOOL)_shouldInset;
-(void)_configureStatementBalanceCell:(id)arg1 forItem:(id)arg2 ;
-(void)_configureStatementCell:(id)arg1 forItem:(id)arg2 ;
-(void)_configureSpendingCell:(id)arg1 forItem:(id)arg2 ;
-(void)_configureInstallmentBalanceCell:(id)arg1 forItem:(id)arg2 ;
-(void)_configureTotalBalanceCell:(id)arg1 forItem:(id)arg2 ;
-(void)_configureInterestCell:(id)arg1 forItem:(id)arg2 ;
-(void)_configurePaymentsAndCreditsCell:(id)arg1 forItem:(id)arg2 ;
-(void)_configureDailyCashCell:(id)arg1 forItem:(id)arg2 ;
-(void)_configureStatementDownloadCell:(id)arg1 forItem:(id)arg2 ;
-(void)_configureExportStatementDataCell:(id)arg1 forItem:(id)arg2 ;
-(id)statementIcon;
-(BOOL)_statementIsFromMonthPriorToSummaryForItem:(id)arg1 ;
-(id)_readableFileTypeForFormat:(id)arg1 feature:(unsigned long long)arg2 ;
-(void)_downloadExportedStatementDataForItem:(id)arg1 withFileFormat:(id)arg2 inCollectionView:(id)arg3 ;
@end

