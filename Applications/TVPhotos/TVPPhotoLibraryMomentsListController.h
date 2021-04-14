//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TVPPhotoLibraryCollectionViewController.h"

#import "PHPhotoLibraryChangeObserver-Protocol.h"
#import "TVPCollectionViewCachingManagerDataSource-Protocol.h"
#import "TVPCollectionViewDelegateFlowLayout-Protocol.h"
#import "TVPPhotoLibraryOneUpViewControllerDelegate-Protocol.h"
#import "TVPPhotoLibraryTabbedViewController-Protocol.h"
#import "UICollectionViewDataSource_Private-Protocol.h"

@class NSIndexPath, NSString, PHAssetCollection, TVPCollectionViewCachingManager, TVPFetchManager;
@protocol TVPPhotoLibraryMomentsListControllerDelegate;

@interface TVPPhotoLibraryMomentsListController : TVPPhotoLibraryCollectionViewController <PHPhotoLibraryChangeObserver, TVPPhotoLibraryOneUpViewControllerDelegate, TVPCollectionViewCachingManagerDataSource, TVPCollectionViewDelegateFlowLayout, TVPPhotoLibraryTabbedViewController, UICollectionViewDataSource_Private>
{
    _Bool _shouldSkipInvalidation;	// 8 = 0x8
    _Bool _needsReload;	// 9 = 0x9
    id <TVPPhotoLibraryMomentsListControllerDelegate> _delegate;	// 16 = 0x10
    NSIndexPath *_preferredFocusIndexPath;	// 24 = 0x18
    TVPFetchManager *_fetchManager;	// 32 = 0x20
    TVPCollectionViewCachingManager *_cachingManager;	// 40 = 0x28
}

+ (id)yearDateFormatter;	// IMP=0x00000001000121c4
- (void).cxx_destruct;	// IMP=0x0000000100014c64
@property(nonatomic) _Bool needsReload; // @synthesize needsReload=_needsReload;
@property(nonatomic) _Bool shouldSkipInvalidation; // @synthesize shouldSkipInvalidation=_shouldSkipInvalidation;
@property(retain, nonatomic) TVPCollectionViewCachingManager *cachingManager; // @synthesize cachingManager=_cachingManager;
@property(retain, nonatomic) TVPFetchManager *fetchManager; // @synthesize fetchManager=_fetchManager;
@property(retain, nonatomic) NSIndexPath *preferredFocusIndexPath; // @synthesize preferredFocusIndexPath=_preferredFocusIndexPath;
@property(nonatomic) __weak id <TVPPhotoLibraryMomentsListControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) long long tabMode;
- (id)_momentForSection:(unsigned long long)arg1;	// IMP=0x0000000100014af0
- (id)_assetsForSection:(unsigned long long)arg1;	// IMP=0x0000000100014a80
- (id)_assetsForMoment:(id)arg1;	// IMP=0x000000010001486c
- (id)_assetAtIndexPath:(id)arg1;	// IMP=0x000000010001479c
- (void)tappedHeader:(id)arg1;	// IMP=0x0000000100014680
- (void)_configureHeaderView:(id)arg1 inSection:(long long)arg2;	// IMP=0x00000001000144dc
- (void)_fetchMomentsCollectionWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000142ac
- (id)collectionViewCachingManager:(id)arg1 assetsForIndexPaths:(id)arg2;	// IMP=0x00000001000140ec
- (Class)_collectionViewCellClass;	// IMP=0x00000001000140e0
- (Class)_sectionHeaderViewClass;	// IMP=0x00000001000140d4
- (Class)_collectionViewTitleViewClass;	// IMP=0x00000001000140c8
- (void)photoLibraryDidChange:(id)arg1;	// IMP=0x000000010001383c
- (void)photoLibraryOneUpControllerWillPop:(id)arg1;	// IMP=0x00000001000135ec
- (struct CGSize)collectionView:(id)arg1 referenceSizeForTitleInLayout:(id)arg2;	// IMP=0x00000001000135dc
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;	// IMP=0x0000000100013564
- (struct CGSize)_referenceSizeForHeaderInSection:(long long)arg1;	// IMP=0x00000001000134a0
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;	// IMP=0x0000000100013490
- (id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1;	// IMP=0x00000001000133f4
- (void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x0000000100012f70
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x0000000100012cc4
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x0000000100012b74
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x0000000100012868
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x0000000100012818
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x000000010001280c
- (id)_collectionView:(id)arg1 indexPathForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;	// IMP=0x00000001000126f8
- (id)_sectionIndexTitlesForCollectionView:(id)arg1;	// IMP=0x00000001000123a0
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x000000010001235c
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x0000000100012318
- (long long)_sectionIndexMultiplier;	// IMP=0x0000000100012174
- (long long)_numberOfSections;	// IMP=0x000000010001211c
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000100012048
- (void)setSelectedIndexPath:(id)arg1;	// IMP=0x0000000100011f84
@property(retain, nonatomic) PHAssetCollection *focusedMoment;
- (void)dealloc;	// IMP=0x0000000100011db4
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000100011d2c
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100011c64
- (void)viewDidLoad;	// IMP=0x00000001000117d4
- (id)init;	// IMP=0x0000000100011708

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

