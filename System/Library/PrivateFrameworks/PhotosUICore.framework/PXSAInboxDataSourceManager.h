/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:03 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXInboxModelDataSourceManager.h>
#import <libobjc.A.dylib/PXFeedSectionInfosManagerDelegate.h>
#import <libobjc.A.dylib/PXInboxProviderSource.h>
#import <libobjc.A.dylib/PXInboxModelMediaProvider.h>

@class PXFeedSectionInfosManager, PXSAInboxTitleProvider, PXSAInboxDetailViewControllerProvider, PXSAInboxDataSource, NSString;

@interface PXSAInboxDataSourceManager : PXInboxModelDataSourceManager <PXFeedSectionInfosManagerDelegate, PXInboxProviderSource, PXInboxModelMediaProvider> {

	PXFeedSectionInfosManager* _feedSectionInfosManager;
	PXSAInboxTitleProvider* _sharedAlbumTitleProvider;
	PXSAInboxDetailViewControllerProvider* _sharedAlbumDetailViewControllerProvider;

}

@property (nonatomic,retain) PXFeedSectionInfosManager * feedSectionInfosManager;                                          //@synthesize feedSectionInfosManager=_feedSectionInfosManager - In the implementation block
@property (nonatomic,retain) PXSAInboxTitleProvider * sharedAlbumTitleProvider;                                            //@synthesize sharedAlbumTitleProvider=_sharedAlbumTitleProvider - In the implementation block
@property (nonatomic,retain) PXSAInboxDetailViewControllerProvider * sharedAlbumDetailViewControllerProvider;              //@synthesize sharedAlbumDetailViewControllerProvider=_sharedAlbumDetailViewControllerProvider - In the implementation block
@property (nonatomic,readonly) PXSAInboxDataSource * dataSource; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<PXInboxModelDetailViewControllerProvider> detailViewControllerProvider; 
@property (nonatomic,readonly) id<PXInboxModelMediaProvider> mediaProvider; 
@property (nonatomic,readonly) id<PXInboxModelTitleProvider> titleProvider; 
-(id)init;
-(id<PXInboxModelTitleProvider>)titleProvider;
-(id<PXInboxModelMediaProvider>)mediaProvider;
-(id)createInitialDataSource;
-(void)_updateDataSource;
-(id<PXInboxModelDetailViewControllerProvider>)detailViewControllerProvider;
-(id)_dataSourceSnapshot;
-(id)providerSource;
-(int)requestImageForPreviewItem:(id)arg1 targetSize:(CGSize)arg2 resultHandler:(/*^block*/id)arg3 ;
-(void)feedSectionInfosManager:(id)arg1 sectionInfosDidChange:(id)arg2 ;
-(PXFeedSectionInfosManager *)feedSectionInfosManager;
-(void)setFeedSectionInfosManager:(PXFeedSectionInfosManager *)arg1 ;
-(id)_sectionInfosForDataSource;
-(PXSAInboxTitleProvider *)sharedAlbumTitleProvider;
-(void)setSharedAlbumTitleProvider:(PXSAInboxTitleProvider *)arg1 ;
-(PXSAInboxDetailViewControllerProvider *)sharedAlbumDetailViewControllerProvider;
-(void)setSharedAlbumDetailViewControllerProvider:(PXSAInboxDetailViewControllerProvider *)arg1 ;
@end

