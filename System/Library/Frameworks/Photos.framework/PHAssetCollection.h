/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:29 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Photos.framework/Photos
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Photos/Photos-Structs.h>
#import <Photos/PHCollection.h>

@class NSString, NSDate, CLLocation, NSArray, PHQuery, NSManagedObjectID, PLQuery, NSURL;

@interface PHAssetCollection : PHCollection {

	NSString* _localizedTitle;
	long long _assetCollectionType;
	long long _assetCollectionSubtype;
	NSDate* _startDate;
	NSDate* _endDate;
	CLLocation* _approximateLocation;
	NSArray* _localizedLocationNames;
	NSArray* _assets;
	PHQuery* _query;
	NSString* _transientIdentifier;
	BOOL _canShowCloudComments;
	NSManagedObjectID* _parentFolderObjectID;
	BOOL _didFetchDates;
	os_unfair_lock_s _datesLock;
	BOOL _isPendingPhotoStreamAlbum;
	BOOL _shouldDeleteWhenEmpty;
	BOOL _isLibrary;
	BOOL _isCameraRoll;
	BOOL _isPanoramasCollection;
	BOOL _isPhotoStreamCollection;
	BOOL _isCloudSharedAlbum;
	BOOL _isStandInCollection;
	BOOL _isOwnedCloudSharedAlbum;
	BOOL _isMultipleContributorCloudSharedAlbum;
	BOOL _isSmartCollection;
	BOOL _hasUnseenContentBoolValue;
	BOOL _canContributeToCloudSharedAlbum;
	int _plAlbumKind;
	int _pendingItemsCount;
	int _pendingItemsType;
	PLQuery* _userQuery;
	NSString* _titleFontName;
	NSString* _transientSubtitle;
	NSArray* _assetOids;
	NSString* _title;
	NSString* _cloudGUID;
	unsigned long long _approximateCount;
	unsigned long long _approximatePhotosCount;
	unsigned long long _approximateVideosCount;
	NSURL* _groupURL;
	/*^block*/id _sortingComparator;
	NSString* _importSessionID;

}

@property (nonatomic,readonly) int plAlbumKind;                                                                                     //@synthesize plAlbumKind=_plAlbumKind - In the implementation block
@property (nonatomic,readonly) NSString * transientSubtitle;                                                                        //@synthesize transientSubtitle=_transientSubtitle - In the implementation block
@property (nonatomic,readonly) PHQuery * query;                                                                                     //@synthesize query=_query - In the implementation block
@property (nonatomic,readonly) NSArray * assetOids;                                                                                 //@synthesize assetOids=_assetOids - In the implementation block
@property (nonatomic,readonly) NSArray * assets;                                                                                    //@synthesize assets=_assets - In the implementation block
@property (assign,setter=_setCanShowCloudComments:,getter=_canShowCloudComments,nonatomic) BOOL _canShowCloudComments;              //@synthesize canShowCloudComments=_canShowCloudComments - In the implementation block
@property (nonatomic,readonly) unsigned long long titleFontNameHash; 
@property (nonatomic,readonly) NSString * title;                                                                                    //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) long long titleCategory; 
@property (nonatomic,readonly) BOOL isPendingPhotoStreamAlbum;                                                                      //@synthesize isPendingPhotoStreamAlbum=_isPendingPhotoStreamAlbum - In the implementation block
@property (nonatomic,readonly) BOOL shouldDeleteWhenEmpty;                                                                          //@synthesize shouldDeleteWhenEmpty=_shouldDeleteWhenEmpty - In the implementation block
@property (nonatomic,readonly) NSString * cloudGUID;                                                                                //@synthesize cloudGUID=_cloudGUID - In the implementation block
@property (nonatomic,readonly) unsigned long long approximateCount;                                                                 //@synthesize approximateCount=_approximateCount - In the implementation block
@property (nonatomic,readonly) unsigned long long approximatePhotosCount;                                                           //@synthesize approximatePhotosCount=_approximatePhotosCount - In the implementation block
@property (nonatomic,readonly) unsigned long long approximateVideosCount;                                                           //@synthesize approximateVideosCount=_approximateVideosCount - In the implementation block
@property (nonatomic,readonly) BOOL isLibrary;                                                                                      //@synthesize isLibrary=_isLibrary - In the implementation block
@property (nonatomic,readonly) BOOL isCameraRoll;                                                                                   //@synthesize isCameraRoll=_isCameraRoll - In the implementation block
@property (nonatomic,readonly) BOOL isPanoramasCollection;                                                                          //@synthesize isPanoramasCollection=_isPanoramasCollection - In the implementation block
@property (nonatomic,readonly) BOOL isPhotoStreamCollection;                                                                        //@synthesize isPhotoStreamCollection=_isPhotoStreamCollection - In the implementation block
@property (nonatomic,readonly) BOOL isCloudSharedAlbum;                                                                             //@synthesize isCloudSharedAlbum=_isCloudSharedAlbum - In the implementation block
@property (nonatomic,readonly) BOOL isStandInCollection;                                                                            //@synthesize isStandInCollection=_isStandInCollection - In the implementation block
@property (nonatomic,readonly) BOOL isOwnedCloudSharedAlbum;                                                                        //@synthesize isOwnedCloudSharedAlbum=_isOwnedCloudSharedAlbum - In the implementation block
@property (nonatomic,readonly) BOOL isMultipleContributorCloudSharedAlbum;                                                          //@synthesize isMultipleContributorCloudSharedAlbum=_isMultipleContributorCloudSharedAlbum - In the implementation block
@property (nonatomic,readonly) BOOL isLastImportedAlbum; 
@property (nonatomic,readonly) BOOL isTrashBin; 
@property (nonatomic,readonly) BOOL isPlacesAlbum; 
@property (nonatomic,readonly) BOOL isUserSmartAlbum; 
@property (nonatomic,readonly) BOOL isSmartCollection;                                                                              //@synthesize isSmartCollection=_isSmartCollection - In the implementation block
@property (nonatomic,retain) PLQuery * userQuery;                                                                                   //@synthesize userQuery=_userQuery - In the implementation block
@property (nonatomic,readonly) NSURL * groupURL;                                                                                    //@synthesize groupURL=_groupURL - In the implementation block
@property (nonatomic,copy,readonly) id sortingComparator;                                                                           //@synthesize sortingComparator=_sortingComparator - In the implementation block
@property (nonatomic,readonly) NSString * importSessionID;                                                                          //@synthesize importSessionID=_importSessionID - In the implementation block
@property (nonatomic,readonly) int pendingItemsCount;                                                                               //@synthesize pendingItemsCount=_pendingItemsCount - In the implementation block
@property (nonatomic,readonly) int pendingItemsType;                                                                                //@synthesize pendingItemsType=_pendingItemsType - In the implementation block
@property (nonatomic,readonly) BOOL hasUnseenContentBoolValue;                                                                      //@synthesize hasUnseenContentBoolValue=_hasUnseenContentBoolValue - In the implementation block
@property (nonatomic,readonly) BOOL canShowAvalancheStacks; 
@property (nonatomic,readonly) BOOL canContributeToCloudSharedAlbum;                                                                //@synthesize canContributeToCloudSharedAlbum=_canContributeToCloudSharedAlbum - In the implementation block
@property (nonatomic,readonly) BOOL canShowComments; 
@property (nonatomic,readonly) BOOL canContainCustomKeyAssets; 
@property (nonatomic,readonly) BOOL keyAssetsAtEnd; 
@property (nonatomic,readonly) NSString * transientIdentifier;                                                                      //@synthesize transientIdentifier=_transientIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * titleFontName;                                                                            //@synthesize titleFontName=_titleFontName - In the implementation block
@property (nonatomic,readonly) long long assetCollectionType;                                                                       //@synthesize assetCollectionType=_assetCollectionType - In the implementation block
@property (nonatomic,readonly) long long assetCollectionSubtype;                                                                    //@synthesize assetCollectionSubtype=_assetCollectionSubtype - In the implementation block
@property (nonatomic,readonly) unsigned long long estimatedAssetCount; 
@property (nonatomic,readonly) NSDate * startDate;                                                                                  //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSDate * endDate;                                                                                    //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) CLLocation * approximateLocation;                                                                    //@synthesize approximateLocation=_approximateLocation - In the implementation block
@property (nonatomic,readonly) NSArray * localizedLocationNames;                                                                    //@synthesize localizedLocationNames=_localizedLocationNames - In the implementation block
+(id)descriptionForType:(long long)arg1 ;
+(id)descriptionForSubtype:(long long)arg1 ;
+(id)managedEntityName;
+(id)fetchType;
+(id)propertiesToFetchWithHint:(unsigned long long)arg1 ;
+(id)identifierCode;
+(BOOL)managedObjectSupportsTrashedState;
+(id)entityKeyMap;
+(id)transformValueExpression:(id)arg1 forKeyPath:(id)arg2 ;
+(unsigned long long)titleFontNameHashFromDate:(id)arg1 ;
+(id)defaultTitleFontNames;
+(id)titleFontNameForTitleCategory:(long long)arg1 ;
+(id)corePropertiesToFetch;
+(id)_composePropertiesToFetchWithHint:(unsigned long long)arg1 ;
+(id)fetchAssetCollectionsContainingAsset:(id)arg1 withType:(long long)arg2 options:(id)arg3 ;
+(id)fetchAssetCollectionsContainingAssets:(id)arg1 withType:(long long)arg2 options:(id)arg3 ;
+(id)fetchAssetCollectionsWithType:(long long)arg1 localIdentifiers:(id)arg2 options:(id)arg3 ;
+(id)fetchAssetCollectionsWithLocalIdentifiers:(id)arg1 options:(id)arg2 ;
+(id)fetchAssetCollectionsWithCloudIdentifiers:(id)arg1 options:(id)arg2 ;
+(id)fetchAssetCollectionsWithType:(long long)arg1 subtype:(long long)arg2 options:(id)arg3 ;
+(id)fetchAssetCollectionsWithALAssetGroupURLs:(id)arg1 options:(id)arg2 ;
+(id)fetchAssetCollectionsWithObjectIDs:(id)arg1 options:(id)arg2 ;
+(id)fetchUserLibraryAlbumWithOptions:(id)arg1 ;
+(id)fetchSuggestedContributionsForAssetsFetchResult:(id)arg1 options:(id)arg2 ;
+(id)fetchSuggestedContributionsForFileURLs:(id)arg1 options:(id)arg2 ;
+(id)fetchSuggestedContributionsForAssetsMetadata:(id)arg1 options:(id)arg2 ;
+(id)fetchMomentsInMomentList:(id)arg1 options:(id)arg2 ;
+(id)fetchMomentsWithOptions:(id)arg1 ;
+(id)fetchMomentsBackingMemory:(id)arg1 options:(id)arg2 ;
+(id)fetchMomentsBackingSuggestion:(id)arg1 options:(id)arg2 ;
+(id)fetchPhotosHighlightsContainingMoments:(id)arg1 options:(id)arg2 ;
+(id)fetchPhotosHighlightsContainingMomentsWithLocalIdentifiers:(id)arg1 options:(id)arg2 ;
+(id)fetchMomentsInHighlight:(id)arg1 options:(id)arg2 ;
+(id)transientAssetCollectionWithAssets:(id)arg1 title:(id)arg2 ;
+(id)transientAssetCollectionWithAssetFetchResult:(id)arg1 title:(id)arg2 ;
+(id)transientAssetCollectionWithAssetFetchResult:(id)arg1 title:(id)arg2 subtitle:(id)arg3 titleFontName:(id)arg4 ;
+(id)transientAssetCollectionWithFetchOptions:(id)arg1 title:(id)arg2 subtitle:(id)arg3 titleFontName:(id)arg4 identifier:(id)arg5 ;
+(id)transientAssetCollectionWithAssetFetchResult:(id)arg1 subtype:(long long)arg2 ;
+(id)transientAssetCollectionWithAssets:(id)arg1 title:(id)arg2 identifier:(id)arg3 photoLibrary:(id)arg4 ;
+(id)transientAssetCollectionWithAssetFetchResult:(id)arg1 title:(id)arg2 identifier:(id)arg3 ;
+(id)graphOptionsForTransientAssetCollection:(id)arg1 needsCompleteMomentsInfo:(BOOL)arg2 options:(id)arg3 ;
+(long long)titleCategoryForTitleFontName:(id)arg1 ;
+(unsigned long long)titleFontNameHashFromString:(id)arg1 ;
+(unsigned long long)titleFontNameHashFromHash:(unsigned long long)arg1 andHash:(unsigned long long)arg2 ;
+(id)descriptionOfTitleCategory:(long long)arg1 ;
+(id)pl_PHAssetCollectionForAssetContainer:(id)arg1 photoLibrary:(id)arg2 ;
+(id)posterImageForAssetCollection:(id)arg1 ;
+(id)pl_PHAssetCollectionForAssetContainer:(id)arg1 photoLibrary:(id)arg2 includeTrash:(BOOL)arg3 ;
+(id)fetchAssetCollectionsForReferences:(id)arg1 photoLibrary:(id)arg2 ;
-(id)description;
-(unsigned long long)approximateCount;
-(PHQuery *)query;
-(NSDate *)endDate;
-(NSDate *)startDate;
-(NSString *)title;
-(id)localizedTitle;
-(id)localizedSubtitle;
-(BOOL)hasLocationInfo;
-(PLQuery *)userQuery;
-(NSArray *)assets;
-(NSString *)cloudGUID;
-(int)pendingItemsType;
-(int)pendingItemsCount;
-(BOOL)canPerformEditOperation:(long long)arg1 ;
-(id)localizedSharedByLabelAllowsEmail:(BOOL)arg1 ;
-(BOOL)hasUnseenContentBoolValue;
-(BOOL)isLibrary;
-(BOOL)isCloudSharedAlbum;
-(BOOL)isPendingPhotoStreamAlbum;
-(BOOL)isOwnedCloudSharedAlbum;
-(BOOL)isMultipleContributorCloudSharedAlbum;
-(BOOL)canContributeToCloudSharedAlbum;
-(BOOL)shouldDeleteWhenEmpty;
-(NSString *)importSessionID;
-(NSURL *)groupURL;
-(id)sortingComparator;
-(BOOL)canShowComments;
-(BOOL)canShowAvalancheStacks;
-(NSArray *)localizedLocationNames;
-(CLLocation *)approximateLocation;
-(void)setUserQuery:(PLQuery *)arg1 ;
-(BOOL)collectionHasFixedOrder;
-(id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3 ;
-(BOOL)canContainCustomKeyAssets;
-(Class)changeRequestClass;
-(BOOL)_canShowCloudComments;
-(long long)titleCategory;
-(unsigned long long)estimatedAssetCount;
-(unsigned long long)estimatedPhotosCount;
-(unsigned long long)estimatedVideosCount;
-(BOOL)_shouldFetchDatesIfNeeded;
-(id)_fetchAggregateDatesForSmartAlbum;
-(void)_fetchDatesIfNeeded;
-(unsigned long long)collectionFixedOrderPriority;
-(BOOL)isLastImportedAlbum;
-(BOOL)isTrashBin;
-(BOOL)isPlacesAlbum;
-(BOOL)isUserSmartAlbum;
-(id)parentFolderID;
-(id)effectiveCustomSortKey;
-(BOOL)isAlbumContentSort;
-(BOOL)isAlbumContentTitleSort;
-(BOOL)canContainAssets;
-(BOOL)keyAssetsAtEnd;
-(BOOL)startsAtEnd;
-(id)initTransientWithAssets:(id)arg1 orFetchResult:(id)arg2 title:(id)arg3 identifier:(id)arg4 ;
-(id)initTransientWithAssets:(id)arg1 orFetchResult:(id)arg2 title:(id)arg3 identifier:(id)arg4 albumKind:(int)arg5 ;
-(id)initTransientWithAssets:(id)arg1 orFetchResult:(id)arg2 title:(id)arg3 identifier:(id)arg4 albumKind:(int)arg5 subtype:(long long)arg6 ;
-(id)initTransientWithAssets:(id)arg1 orFetchResult:(id)arg2 title:(id)arg3 subtitle:(id)arg4 titleFontName:(id)arg5 identifier:(id)arg6 albumKind:(int)arg7 subtype:(long long)arg8 photoLibrary:(id)arg9 ;
-(id)initTransientWithAssets:(id)arg1 orFetchResult:(id)arg2 orQuery:(id)arg3 title:(id)arg4 subtitle:(id)arg5 titleFontName:(id)arg6 identifier:(id)arg7 albumKind:(int)arg8 subtype:(long long)arg9 photoLibrary:(id)arg10 ;
-(NSString *)titleFontName;
-(unsigned long long)titleFontNameHash;
-(long long)assetCollectionType;
-(long long)assetCollectionSubtype;
-(void)_setCanShowCloudComments:(BOOL)arg1 ;
-(int)plAlbumKind;
-(NSString *)transientSubtitle;
-(NSArray *)assetOids;
-(unsigned long long)approximatePhotosCount;
-(unsigned long long)approximateVideosCount;
-(BOOL)isCameraRoll;
-(BOOL)isPanoramasCollection;
-(BOOL)isPhotoStreamCollection;
-(BOOL)isStandInCollection;
-(BOOL)isSmartCollection;
-(NSString *)transientIdentifier;
-(id)pl_assetContainer;
-(id)objectReference;
@end

