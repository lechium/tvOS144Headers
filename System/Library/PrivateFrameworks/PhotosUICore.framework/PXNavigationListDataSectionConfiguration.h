/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:39 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class PHCollectionList, PHFetchResult, NSPredicate;

@interface PXNavigationListDataSectionConfiguration : NSObject {

	BOOL _emptyCollectionsHidden;
	BOOL _showSyncedFromMacAlbums;
	BOOL _includeKeyAssetFetches;
	BOOL _includeUserSmartAlbums;
	BOOL _hideHiddenAlbum;
	BOOL _skipKeyAssetFetchesForSmartAlbums;
	BOOL _skipAssetFetches;
	BOOL _skipAssetCountFetches;
	PHCollectionList* _collectionList;
	PHFetchResult* _collectionsFetchResult;
	NSPredicate* _assetsFilterPredicate;

}

@property (nonatomic,readonly) PHCollectionList * collectionList;                   //@synthesize collectionList=_collectionList - In the implementation block
@property (nonatomic,readonly) PHFetchResult * collectionsFetchResult;              //@synthesize collectionsFetchResult=_collectionsFetchResult - In the implementation block
@property (assign,nonatomic) BOOL emptyCollectionsHidden;                           //@synthesize emptyCollectionsHidden=_emptyCollectionsHidden - In the implementation block
@property (assign,nonatomic) BOOL showSyncedFromMacAlbums;                          //@synthesize showSyncedFromMacAlbums=_showSyncedFromMacAlbums - In the implementation block
@property (assign,nonatomic) BOOL includeKeyAssetFetches;                           //@synthesize includeKeyAssetFetches=_includeKeyAssetFetches - In the implementation block
@property (assign,nonatomic) BOOL includeUserSmartAlbums;                           //@synthesize includeUserSmartAlbums=_includeUserSmartAlbums - In the implementation block
@property (assign,nonatomic) BOOL hideHiddenAlbum;                                  //@synthesize hideHiddenAlbum=_hideHiddenAlbum - In the implementation block
@property (assign,nonatomic) BOOL skipKeyAssetFetchesForSmartAlbums;                //@synthesize skipKeyAssetFetchesForSmartAlbums=_skipKeyAssetFetchesForSmartAlbums - In the implementation block
@property (assign,nonatomic) BOOL skipAssetFetches;                                 //@synthesize skipAssetFetches=_skipAssetFetches - In the implementation block
@property (assign,nonatomic) BOOL skipAssetCountFetches;                            //@synthesize skipAssetCountFetches=_skipAssetCountFetches - In the implementation block
@property (nonatomic,copy) NSPredicate * assetsFilterPredicate;                     //@synthesize assetsFilterPredicate=_assetsFilterPredicate - In the implementation block
+(id)configurationWithCollectionList:(id)arg1 ;
+(id)configurationWithCollectionsFetchResult:(id)arg1 ;
-(id)description;
-(BOOL)includeUserSmartAlbums;
-(void)setIncludeUserSmartAlbums:(BOOL)arg1 ;
-(PHCollectionList *)collectionList;
-(id)initWithCollectionList:(id)arg1 ;
-(id)initWithCollectionsFetchResult:(id)arg1 ;
-(PHFetchResult *)collectionsFetchResult;
-(BOOL)emptyCollectionsHidden;
-(void)setEmptyCollectionsHidden:(BOOL)arg1 ;
-(BOOL)showSyncedFromMacAlbums;
-(void)setShowSyncedFromMacAlbums:(BOOL)arg1 ;
-(BOOL)includeKeyAssetFetches;
-(void)setIncludeKeyAssetFetches:(BOOL)arg1 ;
-(BOOL)hideHiddenAlbum;
-(void)setHideHiddenAlbum:(BOOL)arg1 ;
-(BOOL)skipKeyAssetFetchesForSmartAlbums;
-(void)setSkipKeyAssetFetchesForSmartAlbums:(BOOL)arg1 ;
-(BOOL)skipAssetFetches;
-(void)setSkipAssetFetches:(BOOL)arg1 ;
-(BOOL)skipAssetCountFetches;
-(void)setSkipAssetCountFetches:(BOOL)arg1 ;
-(NSPredicate *)assetsFilterPredicate;
-(void)setAssetsFilterPredicate:(NSPredicate *)arg1 ;
@end

