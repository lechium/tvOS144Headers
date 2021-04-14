/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:23 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UICollectionViewDelegate.h>

@class NSIndexPath, VUILibraryStackView, UICollectionView, NSString;

@interface VUILibraryStackViewController : UIViewController <UICollectionViewDelegate> {

	BOOL _requiresRelayout;
	NSIndexPath* _focusedIndexPath;
	VUILibraryStackView* _stackView;
	UICollectionView* _stackCollectionView;

}

@property (nonatomic,readonly) VUILibraryStackView * stackView;                     //@synthesize stackView=_stackView - In the implementation block
@property (nonatomic,readonly) UICollectionView * stackCollectionView;              //@synthesize stackCollectionView=_stackCollectionView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidLoad;
-(void)scrollToTop;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(long long)preferredStatusBarStyle;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1 ;
-(VUILibraryStackView *)stackView;
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3 ;
-(UICollectionView *)stackCollectionView;
-(void)configureWithCollectionView:(id)arg1 ;
-(void)_updateNavigationBarPadding;
-(void)_invalidateLayouts;
@end
