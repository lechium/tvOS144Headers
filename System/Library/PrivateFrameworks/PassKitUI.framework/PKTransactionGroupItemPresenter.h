/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:13 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <libobjc.A.dylib/PKDashboardItemPresenter.h>

@class PKPaymentTransactionCollectionViewCell, UIFont, UIImage, NSCache, NSDateFormatter, PKPaymentTransactionIconGenerator, PKMapsSnapshotManager, PKPeerPaymentContactResolver, NSString;

@interface PKTransactionGroupItemPresenter : NSObject <PKDashboardItemPresenter> {

	PKPaymentTransactionCollectionViewCell* _sampleCell;
	UIFont* _transactionCellPrimaryLabelFont;
	UIFont* _transactionCellValueLabelFont;
	UIFont* _transactionCellSecondaryLabelFont;
	UIImage* _emptyImage;
	UIImage* _cashbackImage;
	UIImage* _transactionListImage;
	UIImage* _interestImage;
	UIImage* _appleCardImage;
	UIImage* _refundsImage;
	UIImage* _adjustmentsImage;
	UIImage* _mapsPlaceholderImage;
	NSCache* _iconsPerMerchantCategory;
	CGSize _groupSize;
	BOOL _needsSizing;
	NSDateFormatter* _formatterYear;
	NSDateFormatter* _formatterMonth;
	BOOL _useAccessibilityLayout;
	PKPaymentTransactionIconGenerator* _iconGenerator;
	PKMapsSnapshotManager* _snapshotManager;
	PKPeerPaymentContactResolver* _contactResolver;

}

@property (nonatomic,retain) PKPeerPaymentContactResolver * contactResolver;              //@synthesize contactResolver=_contactResolver - In the implementation block
@property (nonatomic,retain) PKMapsSnapshotManager * snapshotManager;                     //@synthesize snapshotManager=_snapshotManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(CGSize)_imageSize;
-(Class)itemClass;
-(void)_configureCell:(id)arg1 forItem:(id)arg2 inCollectionView:(id)arg3 forIndexPath:(id)arg4 forSizing:(BOOL)arg5 ;
-(void)_viewControllerForItem:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)cashbackImage;
-(id)appleCardImage;
-(id)transactionListImage;
-(id)interestImage;
-(id)refundsImage;
-(id)adjustmentsImage;
-(void)_updateAvatarOnTransactionCell:(id)arg1 withGroup:(id)arg2 contact:(id)arg3 ;
-(void)_updatePrimaryLabelOnTransactionCell:(id)arg1 withPeerPaymentCounterpartHandle:(id)arg2 contact:(id)arg3 ;
-(id)mapsPlaceholderImage;
-(void)_applyTokenFiltersFromItem:(id)arg1 toFetcher:(id)arg2 ;
-(id)collectionViewCellClasses;
-(id)cellForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 ;
-(void)updateCell:(id)arg1 forItem:(id)arg2 inCollectionView:(id)arg3 atIndexPath:(id)arg4 ;
-(void)didSelectItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 navigationController:(id)arg4 canPresent:(/*^block*/id)arg5 ;
-(CGSize)sizeForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 ;
-(BOOL)canSelectItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 ;
-(void)traitCollectionDidChangeFromTrait:(id)arg1 toTrait:(id)arg2 inCollectionView:(id)arg3 ;
-(PKPeerPaymentContactResolver *)contactResolver;
-(void)setContactResolver:(PKPeerPaymentContactResolver *)arg1 ;
-(PKMapsSnapshotManager *)snapshotManager;
-(void)setSnapshotManager:(PKMapsSnapshotManager *)arg1 ;
@end

