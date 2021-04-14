/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:46 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class PHFetchResult, PHCollectionList, NSPredicate, PHFetchOptions;

@interface PXPhotoKitCollectionsDataSourceManagerConfiguration : NSObject {

	BOOL _separateSectionsForSmartAndUserCollections;
	BOOL _includePeopleAlbum;
	BOOL _skipKeyAssetFetches;
	BOOL _skipKeyAssetFetchesForSmartAlbums;
	BOOL _skipAssetFetches;
	BOOL _updateKeyAssetFetchesInBackground;
	BOOL _shouldIgnoreLibraryChanges;
	PHFetchResult* _collectionsFetchResult;
	PHCollectionList* _collectionList;
	NSPredicate* _assetsFilterPredicate;
	unsigned long long _assetTypesToInclude;
	unsigned long long _collectionTypesToInclude;

}

@property (assign) BOOL shouldIgnoreLibraryChanges;                                        //@synthesize shouldIgnoreLibraryChanges=_shouldIgnoreLibraryChanges - In the implementation block
@property (readonly) PHCollectionList * collectionList;                                    //@synthesize collectionList=_collectionList - In the implementation block
@property (readonly) PHFetchResult * collectionsFetchResult;                               //@synthesize collectionsFetchResult=_collectionsFetchResult - In the implementation block
@property (assign,nonatomic) BOOL separateSectionsForSmartAndUserCollections;              //@synthesize separateSectionsForSmartAndUserCollections=_separateSectionsForSmartAndUserCollections - In the implementation block
@property (assign,nonatomic) BOOL includePeopleAlbum;                                      //@synthesize includePeopleAlbum=_includePeopleAlbum - In the implementation block
@property (assign,nonatomic) BOOL skipKeyAssetFetches;                                     //@synthesize skipKeyAssetFetches=_skipKeyAssetFetches - In the implementation block
@property (assign,nonatomic) BOOL skipKeyAssetFetchesForSmartAlbums;                       //@synthesize skipKeyAssetFetchesForSmartAlbums=_skipKeyAssetFetchesForSmartAlbums - In the implementation block
@property (assign,nonatomic) BOOL skipAssetFetches;                                        //@synthesize skipAssetFetches=_skipAssetFetches - In the implementation block
@property (assign,nonatomic) BOOL updateKeyAssetFetchesInBackground;                       //@synthesize updateKeyAssetFetchesInBackground=_updateKeyAssetFetchesInBackground - In the implementation block
@property (nonatomic,retain) NSPredicate * assetsFilterPredicate;                          //@synthesize assetsFilterPredicate=_assetsFilterPredicate - In the implementation block
@property (assign,nonatomic) unsigned long long assetTypesToInclude;                       //@synthesize assetTypesToInclude=_assetTypesToInclude - In the implementation block
@property (assign,nonatomic) unsigned long long collectionTypesToInclude;                  //@synthesize collectionTypesToInclude=_collectionTypesToInclude - In the implementation block
@property (readonly) PHFetchOptions * customFetchOptions; 
+(id)_generatePredicateForAssetTypesToInclude:(unsigned long long)arg1 ;
-(id)init;
-(BOOL)isRootFolder;
-(PHCollectionList *)collectionList;
-(id)initWithCollectionList:(id)arg1 ;
-(id)initWithCollectionsFetchResult:(id)arg1 ;
-(PHFetchResult *)collectionsFetchResult;
-(BOOL)skipKeyAssetFetchesForSmartAlbums;
-(void)setSkipKeyAssetFetchesForSmartAlbums:(BOOL)arg1 ;
-(BOOL)skipAssetFetches;
-(void)setSkipAssetFetches:(BOOL)arg1 ;
-(NSPredicate *)assetsFilterPredicate;
-(void)setAssetsFilterPredicate:(NSPredicate *)arg1 ;
-(id)initWithCollectionList:(id)arg1 collectionsFetchResult:(id)arg2 ;
-(PHFetchOptions *)customFetchOptions;
-(id)newConfigurationWithCollectionList:(id)arg1 ;
-(id)newConfigurationWithCollectionsFetchResult:(id)arg1 ;
-(void)setIsRootFolder:(BOOL)arg1 ;
-(id)_newConfigurationWithCollectionList:(id)arg1 collectionsFetchResult:(id)arg2 ;
-(BOOL)separateSectionsForSmartAndUserCollections;
-(void)setSeparateSectionsForSmartAndUserCollections:(BOOL)arg1 ;
-(BOOL)includePeopleAlbum;
-(void)setIncludePeopleAlbum:(BOOL)arg1 ;
-(BOOL)skipKeyAssetFetches;
-(void)setSkipKeyAssetFetches:(BOOL)arg1 ;
-(BOOL)updateKeyAssetFetchesInBackground;
-(void)setUpdateKeyAssetFetchesInBackground:(BOOL)arg1 ;
-(unsigned long long)assetTypesToInclude;
-(void)setAssetTypesToInclude:(unsigned long long)arg1 ;
-(unsigned long long)collectionTypesToInclude;
-(void)setCollectionTypesToInclude:(unsigned long long)arg1 ;
-(BOOL)shouldIgnoreLibraryChanges;
-(void)setShouldIgnoreLibraryChanges:(BOOL)arg1 ;
@end

