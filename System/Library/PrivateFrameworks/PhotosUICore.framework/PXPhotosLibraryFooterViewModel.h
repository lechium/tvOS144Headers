/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:05 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXFooterViewModel.h>
#import <libobjc.A.dylib/PXAssetsDataSourceManagerObserver.h>

@protocol PXPhotosLibraryFooterViewModelPresentationDelegate;
@class NSArray, PXPhotoKitAssetsDataSourceManager, PXCPLUIStatusProvider, NSString;

@interface PXPhotosLibraryFooterViewModel : PXFooterViewModel <PXAssetsDataSourceManagerObserver> {

	NSArray* _syncProgressAlbums;
	id<PXPhotosLibraryFooterViewModelPresentationDelegate> _presentingDelegate;
	PXPhotoKitAssetsDataSourceManager* _assetsDataSourceManager;
	PXCPLUIStatusProvider* _cplUIStatusProvider;

}

@property (nonatomic,readonly) PXPhotoKitAssetsDataSourceManager * assetsDataSourceManager;                                 //@synthesize assetsDataSourceManager=_assetsDataSourceManager - In the implementation block
@property (nonatomic,readonly) NSArray * syncProgressAlbums;                                                                //@synthesize syncProgressAlbums=_syncProgressAlbums - In the implementation block
@property (nonatomic,retain) PXCPLUIStatusProvider * cplUIStatusProvider;                                                   //@synthesize cplUIStatusProvider=_cplUIStatusProvider - In the implementation block
@property (assign,nonatomic,__weak) id<PXPhotosLibraryFooterViewModelPresentationDelegate> presentingDelegate;              //@synthesize presentingDelegate=_presentingDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)initWithDataSource:(id)arg1 ;
-(id<PXPhotosLibraryFooterViewModelPresentationDelegate>)presentingDelegate;
-(void)setPresentingDelegate:(id<PXPhotosLibraryFooterViewModelPresentationDelegate>)arg1 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(PXPhotoKitAssetsDataSourceManager *)assetsDataSourceManager;
-(void)setCplUIStatusProvider:(PXCPLUIStatusProvider *)arg1 ;
-(PXCPLUIStatusProvider *)cplUIStatusProvider;
-(NSArray *)syncProgressAlbums;
-(void)_updateExposedProperties;
@end

