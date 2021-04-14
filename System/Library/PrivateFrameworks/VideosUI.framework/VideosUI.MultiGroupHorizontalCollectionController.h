/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:34 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <libobjc.A.dylib/VUIShelfViewLayoutDelegate.h>

@interface VideosUI.MultiGroupHorizontalCollectionController : UIViewController <UICollectionViewDelegate, VUIShelfViewLayoutDelegate> {

	 viewImpressioner;
	 cachedCellMetrics;
	 $__lazy_storage_$_cachedHeaderViews;
	 collectionViewModel;
	 $__lazy_storage_$_shelfViewLayout;
	 groupCollectionContainerView;
	 dataSource;
	 lastViewWidth;
	 supplementaryKindToReuseIdentifierMap;
	 playButtonRecognizer;

}
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3 ;
-(id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 selectionMarginsForItemAtIndexPath:(id)arg3 ;
-(void)playButtonAction:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)viewDidLoad;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
@end

