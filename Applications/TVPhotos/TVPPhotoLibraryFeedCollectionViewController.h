//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "PHPhotoLibraryChangeObserver-Protocol.h"
#import "TVPCollectionViewCachingManagerDataSource-Protocol.h"
#import "TVPCollectionViewDelegate-Protocol.h"
#import "TVPSharedPSActivityViewLayoutDataSource-Protocol.h"

@class NSArray, NSIndexPath, NSString, NSTimer, PHAssetCollection, TVPCollectionView, TVPCollectionViewCachingManager, TVPFetchManager, TVPPhotoBannerBrowserView, UIView;

@interface TVPPhotoLibraryFeedCollectionViewController : UIViewController <TVPSharedPSActivityViewLayoutDataSource, TVPCollectionViewDelegate, PHPhotoLibraryChangeObserver, TVPCollectionViewCachingManagerDataSource>
{
    TVPCollectionView *_photoFeedCollectionView;	// 8 = 0x8
    TVPPhotoBannerBrowserView *_photoFeedHeaderView;	// 16 = 0x10
    PHAssetCollection *_photoStreamFeedCollection;	// 24 = 0x18
    TVPCollectionViewCachingManager *_cachingManager;	// 32 = 0x20
    TVPFetchManager *_fetchManager;	// 40 = 0x28
    NSArray *_photoBatches;	// 48 = 0x30
    NSArray *_photoAssets;	// 56 = 0x38
    UIView *_loadingView;	// 64 = 0x40
    NSIndexPath *_preferredFocusIndexPath;	// 72 = 0x48
    NSTimer *_updateAssetsAndReloadTimer;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000001000676b0
@property(retain, nonatomic) NSTimer *updateAssetsAndReloadTimer; // @synthesize updateAssetsAndReloadTimer=_updateAssetsAndReloadTimer;
@property(retain, nonatomic) NSIndexPath *preferredFocusIndexPath; // @synthesize preferredFocusIndexPath=_preferredFocusIndexPath;
@property(retain, nonatomic) UIView *loadingView; // @synthesize loadingView=_loadingView;
@property(copy, nonatomic) NSArray *photoAssets; // @synthesize photoAssets=_photoAssets;
@property(copy, nonatomic) NSArray *photoBatches; // @synthesize photoBatches=_photoBatches;
@property(retain, nonatomic) TVPFetchManager *fetchManager; // @synthesize fetchManager=_fetchManager;
@property(retain, nonatomic) TVPCollectionViewCachingManager *cachingManager; // @synthesize cachingManager=_cachingManager;
@property(retain, nonatomic) PHAssetCollection *photoStreamFeedCollection; // @synthesize photoStreamFeedCollection=_photoStreamFeedCollection;
@property(retain, nonatomic) TVPPhotoBannerBrowserView *photoFeedHeaderView; // @synthesize photoFeedHeaderView=_photoFeedHeaderView;
@property(retain, nonatomic) TVPCollectionView *photoFeedCollectionView; // @synthesize photoFeedCollectionView=_photoFeedCollectionView;
- (void)_cancelExistingTimer;	// IMP=0x0000000100067520
- (void)_displayLoadingView;	// IMP=0x0000000100067424
- (void)_didFinishTimedInterval:(id)arg1;	// IMP=0x0000000100067390
- (id)_photoStreamFeedHeaderView;	// IMP=0x00000001000670bc
- (void)_cacheFeedInfoIfRequired;	// IMP=0x00000001000670b8
- (void)_updateFeedInfoAndUI;	// IMP=0x00000001000670b4
- (id)_feedCollection;	// IMP=0x00000001000670ac
- (id)_photoStreamHeaderSubtitle;	// IMP=0x00000001000670a4
- (id)_photoStreamHeaderTitle;	// IMP=0x000000010006709c
- (void)_onSelectSlideshowButton:(id)arg1;	// IMP=0x0000000100067098
- (void)_onSelectScreenSaverButton:(id)arg1;	// IMP=0x0000000100067094
- (id)collectionViewCachingManager:(id)arg1 assetWithTargetSizeAtIndexPath:(id)arg2;	// IMP=0x0000000100066f2c
- (void)photoLibraryDidChange:(id)arg1;	// IMP=0x0000000100066d60
- (id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1;	// IMP=0x0000000100066cb4
- (void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x0000000100066c28
- (_Bool)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2;	// IMP=0x0000000100066c20
- (id)photoBatchesForCollectionView:(id)arg1 layout:(id)arg2;	// IMP=0x0000000100066c10
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x0000000100066b50
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x0000000100066a9c
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x0000000100066a84
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x0000000100066a40
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x00000001000669fc
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000100066940
- (void)dealloc;	// IMP=0x00000001000668c8
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000001000667c8
- (void)viewDidLoad;	// IMP=0x000000010006672c
- (void)loadView;	// IMP=0x0000000100066484
- (id)preferredFocusEnvironments;	// IMP=0x00000001000663fc
- (void)updateCollectionHeader;	// IMP=0x00000001000662c8
- (void)loadPhotoFeedAssets;	// IMP=0x0000000100066008
- (void)resetFocusWithFocusedAsset:(id)arg1;	// IMP=0x0000000100065ecc
- (void)dismissLoadingView;	// IMP=0x0000000100065e38
- (id)assetAtIndexPath:(id)arg1;	// IMP=0x0000000100065d84
- (id)init;	// IMP=0x0000000100065c04

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
