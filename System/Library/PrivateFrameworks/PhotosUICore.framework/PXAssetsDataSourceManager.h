/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:50 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXSectionedDataSourceManager.h>
#import <libobjc.A.dylib/PXMutableAssetsDataSourceManager.h>

@class NSString, NSPredicate, PXAssetsDataSource;

@interface PXAssetsDataSourceManager : PXSectionedDataSourceManager <PXMutableAssetsDataSourceManager> {

	BOOL _isLoadingInitialDataSource;
	BOOL _isBackgroundFetching;
	BOOL _supportsFiltering;
	NSString* _localizedEmptyPlaceholderTitle;
	NSString* _localizedEmptyPlaceholderMessage;
	NSString* _localizedLoadingInitialDataSourceMessage;
	NSPredicate* _filterPredicate;

}

@property (nonatomic,readonly) PXAssetsDataSource * dataSource; 
@property (nonatomic,copy,readonly) NSString * localizedEmptyPlaceholderTitle;                        //@synthesize localizedEmptyPlaceholderTitle=_localizedEmptyPlaceholderTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedEmptyPlaceholderMessage;                      //@synthesize localizedEmptyPlaceholderMessage=_localizedEmptyPlaceholderMessage - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedLoadingInitialDataSourceMessage;              //@synthesize localizedLoadingInitialDataSourceMessage=_localizedLoadingInitialDataSourceMessage - In the implementation block
@property (nonatomic,readonly) BOOL isLoadingInitialDataSource;                                       //@synthesize isLoadingInitialDataSource=_isLoadingInitialDataSource - In the implementation block
@property (nonatomic,readonly) BOOL isBackgroundFetching;                                             //@synthesize isBackgroundFetching=_isBackgroundFetching - In the implementation block
@property (nonatomic,readonly) BOOL supportsFiltering;                                                //@synthesize supportsFiltering=_supportsFiltering - In the implementation block
@property (nonatomic,readonly) NSPredicate * filterPredicate;                                         //@synthesize filterPredicate=_filterPredicate - In the implementation block
@property (assign,nonatomic) long long backgroundFetchOriginSection; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSPredicate *)filterPredicate;
-(id)mutableChangeObject;
-(void)registerChangeObserver:(id)arg1 context:(void*)arg2 ;
-(void)unregisterChangeObserver:(id)arg1 context:(void*)arg2 ;
-(void)setCurationEnabled:(BOOL)arg1 forAssetCollection:(id)arg2 ;
-(BOOL)forceAccurateAllSectionsIfNeeded;
-(BOOL)forceAccurateSectionsIfNeeded:(id)arg1 ;
-(BOOL)forceAccurateSection:(long long)arg1 andSectionsBeforeAndAfter:(long long)arg2 ;
-(void)ensureLastSectionHasContent;
-(void)ensureStartingSectionHasContent;
-(id)pauseChangeDeliveryWithTimeout:(double)arg1 ;
-(void)resumeChangeDeliveryAndBackgroundLoading:(id)arg1 ;
-(void)startBackgroundFetchIfNeeded;
-(void)forceIncludeAssetsAtIndexPaths:(id)arg1 ;
-(void)stopForceIncludingAllAssets;
-(void)excludeAssetsAtIndexPaths:(id)arg1 ;
-(void)stopExcludingAssets:(id)arg1 ;
-(void)refreshResultsForAssetCollection:(id)arg1 ;
-(void)setFilterPredicate:(id)arg1 provideIncrementalChangeDetailsForAssetCollections:(id)arg2 ;
-(void)setFilteringDisabled:(BOOL)arg1 forAssetCollection:(id)arg2 ;
-(long long)backgroundFetchOriginSection;
-(void)setBackgroundFetchOriginSection:(long long)arg1 ;
-(BOOL)isLoadingInitialDataSource;
-(BOOL)isBackgroundFetching;
-(BOOL)supportsFiltering;
-(NSString *)localizedEmptyPlaceholderTitle;
-(NSString *)localizedEmptyPlaceholderMessage;
-(NSString *)localizedLoadingInitialDataSourceMessage;
-(void)waitForAvailabilityOfAsset:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

