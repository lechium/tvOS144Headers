/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:27 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TVIdleServices.framework/TVIdleServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVIdleServices/TVISAssetService.h>

@protocol OS_dispatch_queue;
@class TVISAerialServiceConfiguration, TVISAerialServiceDefaults, TVISAerialStore, TVISAerialOrderingService, NSObject, NSString;

@interface TVISAerialAssetService : NSObject <TVISAssetService> {

	TVISAerialServiceConfiguration* _configuration;
	TVISAerialServiceDefaults* _defaults;
	TVISAerialStore* _store;
	TVISAerialOrderingService* _orderingService;
	NSObject*<OS_dispatch_queue> _workQ;
	NSObject*<OS_dispatch_queue> _networkQ;

}

@property (nonatomic,readonly) TVISAerialServiceConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) TVISAerialServiceDefaults * defaults;                        //@synthesize defaults=_defaults - In the implementation block
@property (nonatomic,readonly) TVISAerialStore * store;                                     //@synthesize store=_store - In the implementation block
@property (nonatomic,readonly) TVISAerialOrderingService * orderingService;                 //@synthesize orderingService=_orderingService - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQ;                          //@synthesize workQ=_workQ - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> networkQ;                       //@synthesize networkQ=_networkQ - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(TVISAerialServiceConfiguration *)configuration;
-(id)initWithConfiguration:(id)arg1 ;
-(TVISAerialServiceDefaults *)defaults;
-(TVISAerialStore *)store;
-(id)purgeableInfoForUrgency:(long long)arg1 ;
-(void)_updateManifestIfNeededWithCompletion:(/*^block*/id)arg1 ;
-(void)_fetchRemoteMetadataWithURL:(id)arg1 targetFileURL:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_localManifestJSONObject;
-(void)_batchDownloadAssets:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_synchronouslyDownloadAsset:(id)arg1 ;
-(void)setUpService;
-(BOOL)serviceNeedsUpdateForContext:(unsigned long long)arg1 ;
-(void)runServiceUpdatesWithContext:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)forceDownloadAssetsWithIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)runStateChangeUpdatesIfNeeded;
-(NSObject*<OS_dispatch_queue>)workQ;
-(NSObject*<OS_dispatch_queue>)networkQ;
-(id)_downloadedAssetIDs;
-(void)_downloadAssetsIfNeededWithContext:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(id)_purgeableItemsInDirectory:(id)arg1 excludedURLs:(id)arg2 protected:(unsigned long long)arg3 ;
-(void)_batchDownloadPreviewsForCategories:(id)arg1 completion:(/*^block*/id)arg2 ;
-(TVISAerialOrderingService *)orderingService;
@end

