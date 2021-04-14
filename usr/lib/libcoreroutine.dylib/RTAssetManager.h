/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:50 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /usr/lib/libcoreroutine.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libcoreroutine.dylib/RTService.h>

@class RTAssetProcessor, RTDefaultsManager, RTXPCActivityManager;

@interface RTAssetManager : RTService {

	RTAssetProcessor* _assetProcessor;
	RTDefaultsManager* _defaultsManager;
	RTXPCActivityManager* _xpcActivityManager;

}

@property (nonatomic,retain) RTAssetProcessor * assetProcessor;                      //@synthesize assetProcessor=_assetProcessor - In the implementation block
@property (nonatomic,retain) RTDefaultsManager * defaultsManager;                    //@synthesize defaultsManager=_defaultsManager - In the implementation block
@property (nonatomic,retain) RTXPCActivityManager * xpcActivityManager;              //@synthesize xpcActivityManager=_xpcActivityManager - In the implementation block
-(id)init;
-(BOOL)nonUserInitiatedDownloadsAllowed;
-(void)_shutdown;
-(RTDefaultsManager *)defaultsManager;
-(void)setDefaultsManager:(RTDefaultsManager *)arg1 ;
-(id)initWithDefaultsManager:(id)arg1 assetProcessor:(id)arg2 xpcActivityManager:(id)arg3 ;
-(RTXPCActivityManager *)xpcActivityManager;
-(void)setXpcActivityManager:(RTXPCActivityManager *)arg1 ;
-(id)defaultXPCActivityCriteria;
-(void)performUpdateOfAssetsWithTypeAssetType:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_finalizeAssetUpdateOperationWithError:(id)arg1 ;
-(void)_performUpdateOfAssetsWithTypeAssetType:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)defaultCatalogDownloadOptions;
-(void)_handleCatalogDownloadWithType:(id)arg1 downloadResult:(long long)arg2 handler:(/*^block*/id)arg3 ;
-(void)_handleMetadataQueryResult:(long long)arg1 assetQuery:(id)arg2 handler:(/*^block*/id)arg3 ;
-(id)latestAssetFromAssets:(id)arg1 ;
-(void)_downloadAsset:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)defaultAssetDownloadOptions;
-(void)_handleAssetDownloadResult:(long long)arg1 asset:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)_installAsset:(id)arg1 fileManager:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)forceUpdateAssetMetadataWithHandler:(/*^block*/id)arg1 ;
-(void)updateAssetServerURL:(id)arg1 assetType:(id)arg2 handler:(/*^block*/id)arg3 ;
-(RTAssetProcessor *)assetProcessor;
-(void)setAssetProcessor:(RTAssetProcessor *)arg1 ;
@end

