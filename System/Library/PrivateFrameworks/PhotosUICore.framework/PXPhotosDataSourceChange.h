/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:00 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PhotosUICore/PhotosUICore-Structs.h>
@class NSDictionary, PHFetchResultChangeDetails, NSIndexSet, NSArray, PXSectionedDataSourceChangeDetails, PHChange;

@interface PXPhotosDataSourceChange : NSObject {

	long long _previousCollectionsCount;
	NSDictionary* _assetCollectionToSectionCache;
	PHFetchResultChangeDetails* _collectionListChangeDetails;
	NSDictionary* _assetCollectionChangeDetails;
	BOOL _prepared;
	NSIndexSet* _deletedSections;
	NSIndexSet* _insertedSections;
	NSIndexSet* _changedSections;
	NSArray* _deletedIndexPaths;
	NSArray* _insertedIndexPaths;
	NSArray* _changedIndexPaths;
	NSArray* _contentChangedIndexPaths;
	NSArray* _favoriteChangedIndexPaths;
	BOOL _changesAreNoOp;
	PXSectionedDataSourceChangeDetails* _sectionedDataSourceChangeDetails;
	NSIndexSet* _sectionsWithKeyAssetChanges;
	PHChange* _originatingPhotoLibraryChange;

}

@property (readonly) BOOL hasIncrementalChanges; 
@property (readonly) BOOL changesAreNoOp; 
@property (copy,readonly) NSIndexSet * deletedSections; 
@property (copy,readonly) NSIndexSet * insertedSections; 
@property (copy,readonly) NSIndexSet * changedSections; 
@property (copy,readonly) NSArray * deletedIndexPaths; 
@property (copy,readonly) NSArray * insertedIndexPaths; 
@property (copy,readonly) NSArray * changedIndexPaths; 
@property (copy,readonly) NSArray * contentChangedIndexPaths; 
@property (copy,readonly) NSArray * favoriteChangedIndexPaths; 
@property (__weak,readonly) PHChange * originatingPhotoLibraryChange;                                    //@synthesize originatingPhotoLibraryChange=_originatingPhotoLibraryChange - In the implementation block
@property (readonly) PXSectionedDataSourceChangeDetails * sectionedDataSourceChangeDetails;              //@synthesize sectionedDataSourceChangeDetails=_sectionedDataSourceChangeDetails - In the implementation block
@property (nonatomic,readonly) NSIndexSet * sectionsWithKeyAssetChanges;                                 //@synthesize sectionsWithKeyAssetChanges=_sectionsWithKeyAssetChanges - In the implementation block
-(id)description;
-(BOOL)hasIncrementalChanges;
-(NSIndexSet *)insertedSections;
-(NSIndexSet *)deletedSections;
-(NSIndexSet *)changedSections;
-(void)prepareIfNeeded;
-(void)_prepareIncrementalDetails;
-(PXSectionedDataSourceChangeDetails *)sectionedDataSourceChangeDetails;
-(id)initWithIncrementalChanges:(id)arg1 assetCollectionChangeDetails:(id)arg2 sectionsWithKeyAssetChanges:(id)arg3 previousCollectionsCount:(long long)arg4 assetCollectionToSectionCache:(id)arg5 originatingPhotoLibraryChange:(id)arg6 fromIdentifier:(unsigned long long)arg7 toIdentifier:(unsigned long long)arg8 ;
-(id)initWithFromIdentifier:(unsigned long long)arg1 toIdentifier:(unsigned long long)arg2 ;
-(NSArray *)deletedIndexPaths;
-(NSArray *)insertedIndexPaths;
-(NSArray *)changedIndexPaths;
-(NSArray *)contentChangedIndexPaths;
-(NSArray *)favoriteChangedIndexPaths;
-(BOOL)changesAreNoOp;
-(BOOL)_shouldPerformFullReloadForCollectionListChangeNotifications:(id)arg1 collectionChangeNotifications:(id)arg2 ;
-(BOOL)affectsSectionsInRange:(NSRange)arg1 ;
-(id)indexPathAfterApplyingIncrementalChangesToIndexPath:(id)arg1 ;
-(id)indexPathAfterRevertingIncrementalChangeDetailsFromIndexPath:(id)arg1 ;
-(NSIndexSet *)sectionsWithKeyAssetChanges;
-(PHChange *)originatingPhotoLibraryChange;
@end

