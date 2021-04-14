/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:51 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXSectionedDataSourceManager.h>
#import <libobjc.A.dylib/PXAssetsDataSourceManagerObserver.h>

@protocol OS_dispatch_queue;
@class PXAssetsDataSourceManager, PXAssetsDataSource, PXZoomableInlineHeaderSectionInfoMetaDataStore, NSObject, PXZoomableInlineHeadersDataSource, PXUpdater, NSString;

@interface PXZoomableInlineHeadersDataSourceManager : PXSectionedDataSourceManager <PXAssetsDataSourceManagerObserver> {

	PXAssetsDataSourceManager* _assetsDataSourceManager;
	PXAssetsDataSource* _previousAssetsDataSource;
	PXZoomableInlineHeaderSectionInfoMetaDataStore* _metaDataStore;
	BOOL _isPreparingMetadataInBackground;
	NSObject*<OS_dispatch_queue> _prepareQueue;
	PXZoomableInlineHeadersDataSource* _monthsDataSource;
	PXZoomableInlineHeadersDataSource* _yearsDataSource;
	PXUpdater* _updater;

}

@property (nonatomic,readonly) PXUpdater * updater;                                               //@synthesize updater=_updater - In the implementation block
@property (nonatomic,readonly) PXZoomableInlineHeadersDataSource * monthsDataSource;              //@synthesize monthsDataSource=_monthsDataSource - In the implementation block
@property (nonatomic,readonly) PXZoomableInlineHeadersDataSource * yearsDataSource;               //@synthesize yearsDataSource=_yearsDataSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsAssetsDataSourceManager:(id)arg1 ;
-(void)setNeedsUpdate;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(void)didPerformChanges;
-(PXUpdater *)updater;
-(void)_updateDataSource;
-(void)_invalidateDataSource;
-(id)initWithAssetsDataSourceManager:(id)arg1 ;
-(id)dataSourceForLevel:(unsigned long long)arg1 ;
-(id)_fetchResultForDataSource:(id)arg1 ;
-(void)_prepareInBackgroundWithDataSource:(id)arg1 ;
-(void)_prepareQueue_prepareInBackroundWithDataSource:(id)arg1 ;
-(void)_didFinishBackgroundPreparationWithResult:(id)arg1 forDataSource:(id)arg2 ;
-(id)_prepareQueue_createMetaDataStoreForAlbumWithDataSource:(id)arg1 ;
-(PXZoomableInlineHeadersDataSource *)monthsDataSource;
-(PXZoomableInlineHeadersDataSource *)yearsDataSource;
@end

