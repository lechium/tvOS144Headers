//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "PHPhotoLibraryChangeObserver-Protocol.h"
#import "TVPCollectionViewCachingManagerDataSource-Protocol.h"
#import "TVPCollectionViewDelegate-Protocol.h"
#import "TVPPhotoLibraryTabbedViewController-Protocol.h"
#import "TVPSharedPSActivityBannerFocusDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"

@class NSArray, NSString, NSTimer, TVPCollectionViewCachingManager, TVPFetchManager, TVPSharedPSActivityBannerView, UIView, UIVisualEffectView;

@interface TVPSharedPSMainViewController : UIViewController <UICollectionViewDataSource, TVPCollectionViewDelegate, TVPSharedPSActivityBannerFocusDelegate, PHPhotoLibraryChangeObserver, TVPCollectionViewCachingManagerDataSource, TVPPhotoLibraryTabbedViewController>
{
    _Bool _photoLibraryDidUpdateWithChanges;	// 8 = 0x8
    NSArray *_sharedAlbums;	// 16 = 0x10
    NSArray *_subscribedAlbums;	// 24 = 0x18
    UIVisualEffectView *_sharedAlbumHeaderView;	// 32 = 0x20
    UIVisualEffectView *_subscribedAlbumHeaderView;	// 40 = 0x28
    TVPSharedPSActivityBannerView *_bannerView;	// 48 = 0x30
    UIView *_loadingView;	// 56 = 0x38
    TVPFetchManager *_sharedAlbumsFetchManager;	// 64 = 0x40
    TVPFetchManager *_myPhotoStreamFetchManager;	// 72 = 0x48
    TVPCollectionViewCachingManager *_sharedAlbumsCachingManager;	// 80 = 0x50
    TVPCollectionViewCachingManager *_subscribedAlbumsCachingManager;	// 88 = 0x58
    NSTimer *_fetchAssetsAndReloadTimer;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x000000010006c518
@property(nonatomic) _Bool photoLibraryDidUpdateWithChanges; // @synthesize photoLibraryDidUpdateWithChanges=_photoLibraryDidUpdateWithChanges;
@property(retain, nonatomic) NSTimer *fetchAssetsAndReloadTimer; // @synthesize fetchAssetsAndReloadTimer=_fetchAssetsAndReloadTimer;
@property(retain, nonatomic) TVPCollectionViewCachingManager *subscribedAlbumsCachingManager; // @synthesize subscribedAlbumsCachingManager=_subscribedAlbumsCachingManager;
@property(retain, nonatomic) TVPCollectionViewCachingManager *sharedAlbumsCachingManager; // @synthesize sharedAlbumsCachingManager=_sharedAlbumsCachingManager;
@property(retain, nonatomic) TVPFetchManager *myPhotoStreamFetchManager; // @synthesize myPhotoStreamFetchManager=_myPhotoStreamFetchManager;
@property(retain, nonatomic) TVPFetchManager *sharedAlbumsFetchManager; // @synthesize sharedAlbumsFetchManager=_sharedAlbumsFetchManager;
@property(retain, nonatomic) UIView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) TVPSharedPSActivityBannerView *bannerView; // @synthesize bannerView=_bannerView;
@property(retain, nonatomic) UIVisualEffectView *subscribedAlbumHeaderView; // @synthesize subscribedAlbumHeaderView=_subscribedAlbumHeaderView;
@property(retain, nonatomic) UIVisualEffectView *sharedAlbumHeaderView; // @synthesize sharedAlbumHeaderView=_sharedAlbumHeaderView;
@property(copy, nonatomic) NSArray *subscribedAlbums; // @synthesize subscribedAlbums=_subscribedAlbums;
@property(copy, nonatomic) NSArray *sharedAlbums; // @synthesize sharedAlbums=_sharedAlbums;
@property(readonly, nonatomic) long long tabMode;
- (void)_cancelExistingTimer;	// IMP=0x000000010006c328
- (long long)_totalSharedAssetsCount;	// IMP=0x000000010006c144
- (id)_sharedAlbumsInPhotoLibrary:(id)arg1;	// IMP=0x000000010006c090
- (_Bool)_hasSharedAlbumsWithPendingInvitationsInPhotoLibrary:(id)arg1;	// IMP=0x000000010006be18
- (void)_displayInvitationDialogForSubscribingToCollection:(id)arg1 assetCollection:(id)arg2;	// IMP=0x000000010006b59c
- (void)_loadUpActivityAssetsAndPopulateBanner;	// IMP=0x000000010006b17c
- (id)_collectionAtIndexPath:(id)arg1 isOwnedSharedAlbum:(_Bool)arg2;	// IMP=0x000000010006b05c
- (id)_assetAtIndexPath:(id)arg1 fetchManager:(id)arg2 isOwnedSharedAlbum:(_Bool)arg3;	// IMP=0x000000010006aefc
- (_Bool)_isSharedAlbumContentAvailable;	// IMP=0x000000010006ae9c
- (void)_loadSharedStreamContentFromFetchResult:(id)arg1 photoStreamFetchResult:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010006a8c8
- (void)_dismissLoadingView;	// IMP=0x000000010006a834
- (void)_displayLoadingView;	// IMP=0x000000010006a738
- (void)_layoutSharedAlbumsView;	// IMP=0x0000000100069c50
- (id)_activityBannerView;	// IMP=0x0000000100069b14
- (void)_fetchCloudSharedAlbumsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000697f0
- (void)_didFinishTimedInterval:(id)arg1;	// IMP=0x0000000100069610
- (id)collectionViewCachingManager:(id)arg1 assetsForIndexPaths:(id)arg2;	// IMP=0x00000001000693d4
- (void)photoLibraryDidChange:(id)arg1;	// IMP=0x0000000100068d88
- (void)_selectButtonAction:(id)arg1;	// IMP=0x0000000100068d20
- (void)collectionView:(id)arg1 didFocusItemAtIndexPath:(id)arg2;	// IMP=0x0000000100068b04
- (_Bool)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2;	// IMP=0x0000000100068afc
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x0000000100068850
- (void)didUnfocusBannerView:(id)arg1;	// IMP=0x000000010006884c
- (void)didFocusBannerView:(id)arg1;	// IMP=0x00000001000687b0
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x00000001000680f4
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x0000000100068088
- (id)preferredFocusEnvironments;	// IMP=0x0000000100068000
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000100067f0c
- (void)viewDidLoad;	// IMP=0x0000000100067a68
- (void)loadView;	// IMP=0x00000001000679a0
- (void)dealloc;	// IMP=0x00000001000678f0
- (id)init;	// IMP=0x0000000100067790

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

