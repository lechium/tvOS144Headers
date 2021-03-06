/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:56 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UICollectionViewController.h>
#import <libobjc.A.dylib/PXPeopleDragAndDropCollectionViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <libobjc.A.dylib/PXPeopleSectionedDataSourceChangeObserver.h>
#import <libobjc.A.dylib/PXPeopleDragAndDropCollectionViewDelegateLayout.h>
#import <libobjc.A.dylib/PXPeopleCollectionViewCellDelegate.h>
#import <libobjc.A.dylib/PXPeopleSwipeSelectionManagerDelegate.h>

@protocol UIViewControllerAnimatedTransitioning;
@class UILongPressGestureRecognizer, UIBarButtonItem, PXPeopleProgressManager, PXPeopleProgressFooterView, PXPeopleMeViewController, UITapGestureRecognizer, NSDictionary, PXPeopleSwipeSelectionManager, PXPeopleSectionedDataSource, NSIndexPath, NSArray, NSMutableDictionary, NSString, PXPeopleDragAndDropCollectionViewLayout;

@interface PXPeopleCollectionViewController : UICollectionViewController <PXPeopleDragAndDropCollectionViewDelegate, UIGestureRecognizerDelegate, UICollectionViewDelegateFlowLayout, UIPopoverPresentationControllerDelegate, UIViewControllerTransitioningDelegate, PXPeopleSectionedDataSourceChangeObserver, PXPeopleDragAndDropCollectionViewDelegateLayout, PXPeopleCollectionViewCellDelegate, PXPeopleSwipeSelectionManagerDelegate> {

	BOOL _ignoreChangeUpdates;
	BOOL _needToCheckProgress;
	BOOL _shouldShowProgressFooter;
	BOOL _shouldShowMeHeader;
	BOOL _pendingChanges;
	BOOL _progressFooterAvailable;
	BOOL _ppt_shouldRunPPTCode;
	UILongPressGestureRecognizer* _dragRecognizer;
	unsigned long long _mode;
	UIBarButtonItem* _removeToolbarItem;
	UIBarButtonItem* _favoriteToolbarItem;
	UIBarButtonItem* _mergeToolbarItem;
	UIBarButtonItem* _selectItem;
	UIBarButtonItem* _debugMenuItem;
	PXPeopleProgressManager* _progressManager;
	PXPeopleProgressFooterView* _progressFooterView;
	PXPeopleMeViewController* _meViewController;
	UITapGestureRecognizer* _statusDebugRecognizer;
	NSDictionary* _contactByPersonLocalIdentifier;
	PXPeopleSwipeSelectionManager* _swipeSelectionManager;
	PXPeopleSectionedDataSource* _dataSource;
	NSIndexPath* _sourceDragIndexPath;
	NSIndexPath* _targetIndexPath;
	id<UIViewControllerAnimatedTransitioning> _transitionAnimator;
	NSArray* _transitionIndices;
	long long _ppt_numCellsLeft;
	NSMutableDictionary* _ppt_seenPeople;
	/*^block*/id _ppt_cellsLoadedCompletionBlock;
	unsigned long long _ppt_sampledCountOfEmptyCells;
	unsigned long long _ppt_sampledCountOfFrames;
	CGPoint _lastDragPoint;
	CGRect _ppt_visibleCollectionViewRect;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDictionary * ppt_scrollingInformation; 
@property (nonatomic,readonly) unsigned long long ppt_countOfEmptyCells; 
@property (assign) BOOL ignoreChangeUpdates;                                                                           //@synthesize ignoreChangeUpdates=_ignoreChangeUpdates - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * dragRecognizer;                                            //@synthesize dragRecognizer=_dragRecognizer - In the implementation block
@property (assign,nonatomic) unsigned long long mode;                                                                  //@synthesize mode=_mode - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * removeToolbarItem;                                                      //@synthesize removeToolbarItem=_removeToolbarItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * favoriteToolbarItem;                                                    //@synthesize favoriteToolbarItem=_favoriteToolbarItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * mergeToolbarItem;                                                       //@synthesize mergeToolbarItem=_mergeToolbarItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * selectItem;                                                             //@synthesize selectItem=_selectItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * debugMenuItem;                                                          //@synthesize debugMenuItem=_debugMenuItem - In the implementation block
@property (nonatomic,retain) PXPeopleProgressManager * progressManager;                                                //@synthesize progressManager=_progressManager - In the implementation block
@property (assign) BOOL needToCheckProgress;                                                                           //@synthesize needToCheckProgress=_needToCheckProgress - In the implementation block
@property (nonatomic,retain) PXPeopleProgressFooterView * progressFooterView;                                          //@synthesize progressFooterView=_progressFooterView - In the implementation block
@property (assign,nonatomic) BOOL shouldShowProgressFooter;                                                            //@synthesize shouldShowProgressFooter=_shouldShowProgressFooter - In the implementation block
@property (assign,nonatomic) BOOL shouldShowMeHeader;                                                                  //@synthesize shouldShowMeHeader=_shouldShowMeHeader - In the implementation block
@property (nonatomic,retain) PXPeopleMeViewController * meViewController;                                              //@synthesize meViewController=_meViewController - In the implementation block
@property (nonatomic,readonly) PXPeopleDragAndDropCollectionViewLayout * dragAndDropCollectionViewLayout; 
@property (nonatomic,retain) UITapGestureRecognizer * statusDebugRecognizer;                                           //@synthesize statusDebugRecognizer=_statusDebugRecognizer - In the implementation block
@property (nonatomic,retain) NSDictionary * contactByPersonLocalIdentifier;                                            //@synthesize contactByPersonLocalIdentifier=_contactByPersonLocalIdentifier - In the implementation block
@property (nonatomic,retain) PXPeopleSwipeSelectionManager * swipeSelectionManager;                                    //@synthesize swipeSelectionManager=_swipeSelectionManager - In the implementation block
@property (nonatomic,readonly) PXPeopleSectionedDataSource * dataSource;                                               //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) NSIndexPath * sourceDragIndexPath;                                                        //@synthesize sourceDragIndexPath=_sourceDragIndexPath - In the implementation block
@property (nonatomic,retain) NSIndexPath * targetIndexPath;                                                            //@synthesize targetIndexPath=_targetIndexPath - In the implementation block
@property (assign,nonatomic) CGPoint lastDragPoint;                                                                    //@synthesize lastDragPoint=_lastDragPoint - In the implementation block
@property (assign,nonatomic) BOOL pendingChanges;                                                                      //@synthesize pendingChanges=_pendingChanges - In the implementation block
@property (assign,getter=isProgressFooterAvailable,nonatomic) BOOL progressFooterAvailable;                            //@synthesize progressFooterAvailable=_progressFooterAvailable - In the implementation block
@property (retain) id<UIViewControllerAnimatedTransitioning> transitionAnimator;                                       //@synthesize transitionAnimator=_transitionAnimator - In the implementation block
@property (nonatomic,copy) NSArray * transitionIndices;                                                                //@synthesize transitionIndices=_transitionIndices - In the implementation block
@property (assign,nonatomic) long long ppt_numCellsLeft;                                                               //@synthesize ppt_numCellsLeft=_ppt_numCellsLeft - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * ppt_seenPeople;                                                     //@synthesize ppt_seenPeople=_ppt_seenPeople - In the implementation block
@property (assign,nonatomic) BOOL ppt_shouldRunPPTCode;                                                                //@synthesize ppt_shouldRunPPTCode=_ppt_shouldRunPPTCode - In the implementation block
@property (nonatomic,copy) id ppt_cellsLoadedCompletionBlock;                                                          //@synthesize ppt_cellsLoadedCompletionBlock=_ppt_cellsLoadedCompletionBlock - In the implementation block
@property (assign,nonatomic) unsigned long long ppt_sampledCountOfEmptyCells;                                          //@synthesize ppt_sampledCountOfEmptyCells=_ppt_sampledCountOfEmptyCells - In the implementation block
@property (assign,nonatomic) unsigned long long ppt_sampledCountOfFrames;                                              //@synthesize ppt_sampledCountOfFrames=_ppt_sampledCountOfFrames - In the implementation block
@property (assign,nonatomic) CGRect ppt_visibleCollectionViewRect;                                                     //@synthesize ppt_visibleCollectionViewRect=_ppt_visibleCollectionViewRect - In the implementation block
-(id)init;
-(void)dealloc;
-(void)setMode:(unsigned long long)arg1 ;
-(unsigned long long)mode;
-(PXPeopleSectionedDataSource *)dataSource;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)commonInit;
-(void)popoverPresentationControllerDidDismissPopover:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)pendingChanges;
-(void)setPendingChanges:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(id)collectionView:(id)arg1 targetIndexPathForMoveFromItemAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(BOOL)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 moveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3 ;
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3 ;
-(void)contentSizeCategoryDidChangeNotification:(id)arg1 ;
-(unsigned long long)routingOptionsForDestination:(id)arg1 ;
-(void)navigateToDestination:(id)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)px_navigationDestination;
-(long long)_verticalSizeClass;
-(id)initWithDataSource:(id)arg1 progressManager:(id)arg2 ;
-(void)_progressChanged:(id)arg1 ;
-(PXPeopleProgressManager *)progressManager;
-(void)setProgressManager:(PXPeopleProgressManager *)arg1 ;
-(id)swipeSelectionManager:(id)arg1 indexPathSetFromIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(id)swipeSelectionManager:(id)arg1 itemIndexPathAtLocation:(CGPoint)arg2 ;
-(PXPeopleSwipeSelectionManager *)swipeSelectionManager;
-(CGPoint)lastDragPoint;
-(void)setLastDragPoint:(CGPoint)arg1 ;
-(id)initialSelectedIndexPathsForSwipeSelectionManager:(id)arg1 ;
-(void)swipeSelectionManager:(id)arg1 didSelectIndexPaths:(id)arg2 ;
-(void)peopleCollectionViewCellDidToggleFavoriteState:(id)arg1 ;
-(void)collectionView:(id)arg1 didBeginMergeWithDragIndexPath:(id)arg2 targetIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didCancelMergeWithDragIndexPath:(id)arg2 targetIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didMergeDragIndexPath:(id)arg2 targetIndexPath:(id)arg3 ;
-(void)peopleSectionedDataSourceMembersChangedNonIncrementally:(id)arg1 ;
-(void)peopleSectionedDataSource:(id)arg1 didApplyIncrementalChanges:(id)arg2 ;
-(id)selectionModeTitle;
-(void)setShouldShowMeHeader:(BOOL)arg1 ;
-(void)_updateMeHeaderVisibilityIfNeeded:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_updateVisibleCellsForSelectionMode:(unsigned long long)arg1 ;
-(BOOL)_favoritesEmpty;
-(unsigned long long)_fixedColumnCountForIndexPath:(id)arg1 ;
-(id)_changeMemberAtIndex:(id)arg1 toPersonType:(long long)arg2 ;
-(long long)_horizontalSizeClass;
-(double)_currentLineSpacing;
-(double)_currentItemSpacing;
-(CGSize)_itemSizeForItemAtIndexPath:(id)arg1 ;
-(double)_topInsetForSection:(unsigned long long)arg1 ;
-(double)_bottomInsetForSection:(unsigned long long)arg1 ;
-(void)showDetailsForMemberAtIndexPath:(id)arg1 ;
-(id)_detailViewControllerAtIndexPath:(id)arg1 ;
-(void)_selectAction:(id)arg1 ;
-(id)_toolBarItemsForMode:(unsigned long long)arg1 ;
-(id)_rightBarItemsForMode:(unsigned long long)arg1 ;
-(long long)_changeTypeForIndexPaths:(id)arg1 ;
-(BOOL)_indexPathsContainMixedSections:(id)arg1 ;
-(id)_bestTargetIndexPathGivenMergeIndexPaths:(id)arg1 ;
-(void)_updateToolbarItemsForIndexPaths:(id)arg1 ;
-(void)updateNavTitleForIndexes:(id)arg1 ;
-(void)_changeSelectedIndexesToPersonType:(long long)arg1 ;
-(void)_showFavoritingBootstrapForPersonIfApplicable:(id)arg1 ;
-(void)_applyChangeDetailsArrayOnCollectionView:(id)arg1 ;
-(void)_handleToolbarRemoveAction:(id)arg1 ;
-(void)_handleToolbarFavoriteAction:(id)arg1 ;
-(void)_handleToolbarMergeAction:(id)arg1 ;
-(UIBarButtonItem *)favoriteToolbarItem;
-(UIBarButtonItem *)mergeToolbarItem;
-(UIBarButtonItem *)removeToolbarItem;
-(PXPeopleDragAndDropCollectionViewLayout *)dragAndDropCollectionViewLayout;
-(void)collectionViewDidLayout:(id)arg1 ;
-(void)_resetHomeIfNeeded;
-(void)_startProgressMonitoring;
-(void)_stopProgressMonitoring;
-(id)_originalTargetIndexPathFromDragIndexPath:(id)arg1 targetIndexPath:(id)arg2 ;
-(void)_animateCellAtIndexPathToDefaultState:(id)arg1 ;
-(void)_performMerge:(BOOL)arg1 targetPerson:(id)arg2 dragPerson:(id)arg3 ;
-(void)statusDebugRecognizerTapped:(id)arg1 ;
-(BOOL)ignoreChangeUpdates;
-(void)setIgnoreChangeUpdates:(BOOL)arg1 ;
-(UILongPressGestureRecognizer *)dragRecognizer;
-(void)setDragRecognizer:(UILongPressGestureRecognizer *)arg1 ;
-(void)setRemoveToolbarItem:(UIBarButtonItem *)arg1 ;
-(void)setFavoriteToolbarItem:(UIBarButtonItem *)arg1 ;
-(void)setMergeToolbarItem:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)selectItem;
-(void)setSelectItem:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)debugMenuItem;
-(void)setDebugMenuItem:(UIBarButtonItem *)arg1 ;
-(BOOL)needToCheckProgress;
-(void)setNeedToCheckProgress:(BOOL)arg1 ;
-(PXPeopleProgressFooterView *)progressFooterView;
-(void)setProgressFooterView:(PXPeopleProgressFooterView *)arg1 ;
-(BOOL)shouldShowProgressFooter;
-(void)setShouldShowProgressFooter:(BOOL)arg1 ;
-(BOOL)shouldShowMeHeader;
-(PXPeopleMeViewController *)meViewController;
-(void)setMeViewController:(PXPeopleMeViewController *)arg1 ;
-(UITapGestureRecognizer *)statusDebugRecognizer;
-(void)setStatusDebugRecognizer:(UITapGestureRecognizer *)arg1 ;
-(NSDictionary *)contactByPersonLocalIdentifier;
-(void)setContactByPersonLocalIdentifier:(NSDictionary *)arg1 ;
-(void)setSwipeSelectionManager:(PXPeopleSwipeSelectionManager *)arg1 ;
-(NSIndexPath *)sourceDragIndexPath;
-(void)setSourceDragIndexPath:(NSIndexPath *)arg1 ;
-(NSIndexPath *)targetIndexPath;
-(void)setTargetIndexPath:(NSIndexPath *)arg1 ;
-(BOOL)isProgressFooterAvailable;
-(void)setProgressFooterAvailable:(BOOL)arg1 ;
-(id<UIViewControllerAnimatedTransitioning>)transitionAnimator;
-(void)setTransitionAnimator:(id<UIViewControllerAnimatedTransitioning>)arg1 ;
-(NSArray *)transitionIndices;
-(void)setTransitionIndices:(NSArray *)arg1 ;
-(long long)ppt_numCellsLeft;
-(void)setPpt_numCellsLeft:(long long)arg1 ;
-(NSMutableDictionary *)ppt_seenPeople;
-(void)setPpt_seenPeople:(NSMutableDictionary *)arg1 ;
-(BOOL)ppt_shouldRunPPTCode;
-(void)setPpt_shouldRunPPTCode:(BOOL)arg1 ;
-(id)ppt_cellsLoadedCompletionBlock;
-(void)setPpt_cellsLoadedCompletionBlock:(id)arg1 ;
-(unsigned long long)ppt_sampledCountOfEmptyCells;
-(void)setPpt_sampledCountOfEmptyCells:(unsigned long long)arg1 ;
-(unsigned long long)ppt_sampledCountOfFrames;
-(void)setPpt_sampledCountOfFrames:(unsigned long long)arg1 ;
-(CGRect)ppt_visibleCollectionViewRect;
-(void)setPpt_visibleCollectionViewRect:(CGRect)arg1 ;
-(void)collectionViewDidEndDrag:(id)arg1 ;
-(void)collectionViewDidEndInteractiveMode:(id)arg1 ;
-(void)handleMoveFromIndexPath:(id)arg1 toIndexPath:(id)arg2 ;
-(void)handleReorderingGesture:(id)arg1 ;
-(NSDictionary *)ppt_scrollingInformation;
-(unsigned long long)ppt_countOfEmptyCells;
-(id)ppt_indexPathOfPersonWithMostAssets;
-(long long)ppt_numOfCellsLoadingImages;
-(id)ppt_bestPersonForBootstrap;
-(id)ppt_randomPerson;
-(BOOL)ppt_namePerson:(id)arg1 ;
-(void)ppt_changeIndexPaths:(id)arg1 toType:(long long)arg2 withCompletion:(/*^block*/id)arg3 ;
-(id)ppt_indexPathsForPeopleThatCanChangeToType:(long long)arg1 ;
@end

