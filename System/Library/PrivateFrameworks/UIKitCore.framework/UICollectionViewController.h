/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:10 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKitCore/_UIKeyboardAutoRespondingScrollViewController.h>
#import <UIKit/UICollectionViewFocusDelegate_Legacy.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>

@class UICollectionViewLayout, UICollectionView, UILongPressGestureRecognizer, UIAutoRespondingScrollViewControllerKeyboardSupport, NSString;

@interface UICollectionViewController : UIViewController <_UIKeyboardAutoRespondingScrollViewController, UICollectionViewFocusDelegate_Legacy, UICollectionViewDelegate, UICollectionViewDataSource> {

	UICollectionViewLayout* _layout;
	UICollectionView* _collectionView;
	UILongPressGestureRecognizer* _reorderingGesture;
	UIAutoRespondingScrollViewControllerKeyboardSupport* _keyboardSupport;
	struct {
		unsigned clearsSelectionOnViewWillAppear : 1;
		unsigned useLayoutToLayoutNavigationTransitions : 1;
		unsigned installsStandardReorderingGesture : 1;
	}  _collectionViewControllerFlags;

}

@property (nonatomic,retain) UICollectionView * collectionView; 
@property (assign,nonatomic) BOOL clearsSelectionOnViewWillAppear; 
@property (assign,nonatomic) BOOL useLayoutToLayoutNavigationTransitions; 
@property (nonatomic,readonly) UICollectionViewLayout * collectionViewLayout; 
@property (assign,nonatomic) BOOL installsStandardGestureForInteractiveMovement; 
@property (getter=_scrollView,nonatomic,retain,readonly) UIScrollView*<_UIKeyboardAutoRespondingScrollView> scrollView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)delegate;
-(id)dataSource;
-(id)_scrollView;
-(void)setView:(id)arg1 ;
-(void)loadView;
-(UICollectionView *)collectionView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)initWithCollectionViewLayout:(id)arg1 ;
-(UICollectionViewLayout *)collectionViewLayout;
-(id)contentScrollView;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(id)preferredFocusedView;
-(void)setClearsSelectionOnViewWillAppear:(BOOL)arg1 ;
-(void)setInstallsStandardGestureForInteractiveMovement:(BOOL)arg1 ;
-(BOOL)clearsSelectionOnViewWillAppear;
-(void)viewWillUnload;
-(id)_newCollectionViewWithFrame:(CGRect)arg1 collectionViewLayout:(id)arg2 ;
-(id)_wrappingView;
-(void)__viewWillAppear:(BOOL)arg1 ;
-(void)__viewDidAppear:(BOOL)arg1 ;
-(BOOL)useLayoutToLayoutNavigationTransitions;
-(void)_updateCollectionViewLayoutAndDelegate:(id)arg1 ;
-(id)_uiCollectionView;
-(void)_installReorderingGestureIfNecessary;
-(void)_setUseLayoutToLayoutNavigationTransitions:(BOOL)arg1 withCheck:(BOOL)arg2 ;
-(void)_handleReorderingGesture:(id)arg1 ;
-(void)_setSharedCollectionView:(id)arg1 ;
-(void)_clearSharedView;
-(id)_animatorForOperation:(long long)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 ;
-(BOOL)shouldCrossFadeNavigationBar;
-(BOOL)shouldCrossFadeBottomBars;
-(void)setUseLayoutToLayoutNavigationTransitions:(BOOL)arg1 ;
-(BOOL)installsStandardGestureForInteractiveMovement;
@end

