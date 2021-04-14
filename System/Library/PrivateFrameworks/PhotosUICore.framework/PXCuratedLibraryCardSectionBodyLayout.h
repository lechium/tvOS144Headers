/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:44 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXGLayout.h>
#import <libobjc.A.dylib/PXGDisplayAssetSource.h>

@protocol PXDisplayAsset, PXDisplayAssetFetchResult;
@class NSMutableIndexSet, PXAssetsDataSource, PXCuratedLibraryCardSectionBodyLayoutSpec, PXIndexPathSet, PXGLayoutGuide, PXCuratedLibrarySectionGeometryDescriptor, NSString;

@interface PXCuratedLibraryCardSectionBodyLayout : PXGLayout <PXGDisplayAssetSource> {

	unsigned short _assetVersion;
	id<PXDisplayAsset> _keyAsset;
	struct {
		unsigned long long needsUpdate;
		unsigned long long updated;
		BOOL isPerformingUpdate;
	}  _updateFlags;
	struct {
		unsigned long long needsUpdate;
		unsigned long long updated;
		BOOL isPerformingUpdate;
	}  _postUpdateFlags;
	PXGSpriteIndexRange _assetSpriteIndexRange;
	NSMutableIndexSet* _axSpriteIndexes;
	BOOL _isSelected;
	BOOL _isSkimming;
	long long _section;
	PXAssetsDataSource* _dataSource;
	long long _zoomLevel;
	PXCuratedLibraryCardSectionBodyLayoutSpec* _spec;
	PXIndexPathSet* _skimmingIndexPaths;
	long long _maxSkimmingIndex;
	long long _currentSkimmingIndex;
	PXGLayoutGuide* _assetLayoutGuide;
	id<PXDisplayAssetFetchResult> _keyAssetsFetchResult;
	PXSimpleIndexPath _sectionIndexPath;

}

@property (nonatomic,readonly) PXSimpleIndexPath sectionIndexPath;                                                   //@synthesize sectionIndexPath=_sectionIndexPath - In the implementation block
@property (nonatomic,readonly) id<PXDisplayAssetFetchResult> keyAssetsFetchResult;                                   //@synthesize keyAssetsFetchResult=_keyAssetsFetchResult - In the implementation block
@property (nonatomic,readonly) long long section;                                                                    //@synthesize section=_section - In the implementation block
@property (nonatomic,readonly) PXAssetsDataSource * dataSource;                                                      //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) BOOL isSelected;                                                                        //@synthesize isSelected=_isSelected - In the implementation block
@property (assign,nonatomic) long long zoomLevel;                                                                    //@synthesize zoomLevel=_zoomLevel - In the implementation block
@property (nonatomic,retain) PXCuratedLibraryCardSectionBodyLayoutSpec * spec;                                       //@synthesize spec=_spec - In the implementation block
@property (assign,nonatomic) BOOL isSkimming;                                                                        //@synthesize isSkimming=_isSkimming - In the implementation block
@property (nonatomic,retain) PXIndexPathSet * skimmingIndexPaths;                                                    //@synthesize skimmingIndexPaths=_skimmingIndexPaths - In the implementation block
@property (assign,nonatomic) long long maxSkimmingIndex;                                                             //@synthesize maxSkimmingIndex=_maxSkimmingIndex - In the implementation block
@property (assign,nonatomic) long long currentSkimmingIndex;                                                         //@synthesize currentSkimmingIndex=_currentSkimmingIndex - In the implementation block
@property (nonatomic,readonly) PXCuratedLibrarySectionGeometryDescriptor * presentedGeometryDescriptor; 
@property (nonatomic,readonly) CGRect assetFrame; 
@property (nonatomic,readonly) PXGLayoutGuide * assetLayoutGuide;                                                    //@synthesize assetLayoutGuide=_assetLayoutGuide - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)isSelected;
-(void)setIsSelected:(BOOL)arg1 ;
-(long long)section;
-(void)update;
-(PXAssetsDataSource *)dataSource;
-(void)setZoomLevel:(long long)arg1 ;
-(long long)zoomLevel;
-(PXCuratedLibraryCardSectionBodyLayoutSpec *)spec;
-(void)setSpec:(PXCuratedLibraryCardSectionBodyLayoutSpec *)arg1 ;
-(void)_updateSprites;
-(id)objectReferenceForSpriteIndex:(unsigned)arg1 ;
-(void)referenceSizeDidChange;
-(void)screenScaleDidChange;
-(id)axSpriteIndexes;
-(id)axSpriteIndexesInRect:(CGRect)arg1 ;
-(unsigned)axSpriteIndexClosestToSpriteIndex:(unsigned)arg1 inDirection:(unsigned long long)arg2 ;
-(void)applySpriteChangeDetails:(id)arg1 countAfterChanges:(unsigned)arg2 initialState:(/*^block*/id)arg3 modifyState:(/*^block*/id)arg4 ;
-(void)enumerateVisibleAnchoringSpriteIndexesUsingBlock:(/*^block*/id)arg1 ;
-(unsigned long long)supportedDisplayAssetPresentationStylesInLayout:(id)arg1 ;
-(unsigned long long)desiredPlaceholderStyleInLayout:(id)arg1 ;
-(CGSize)minSpriteSizeForPresentationStyle:(unsigned long long)arg1 ;
-(id)displayAssetFetchResultForSpritesInRange:(PXGSpriteIndexRange)arg1 inLayout:(id)arg2 ;
-(id)displayAssetRequestObserverForSpritesInRange:(PXGSpriteIndexRange)arg1 inLayout:(id)arg2 ;
-(void)setDataSource:(id)arg1 section:(long long)arg2 ;
-(void)setIsSkimming:(BOOL)arg1 ;
-(void)setSkimmingIndexPaths:(PXIndexPathSet *)arg1 ;
-(void)setMaxSkimmingIndex:(long long)arg1 ;
-(void)setCurrentSkimmingIndex:(long long)arg1 ;
-(id)layoutForItemChanges;
-(PXSimpleIndexPath)sectionIndexPath;
-(id<PXDisplayAssetFetchResult>)keyAssetsFetchResult;
-(BOOL)isSkimming;
-(PXIndexPathSet *)skimmingIndexPaths;
-(long long)maxSkimmingIndex;
-(long long)currentSkimmingIndex;
-(id)axVisibleSpriteIndexes;
-(id)axContentInfoAtSpriteIndex:(unsigned)arg1 ;
-(CGRect)assetFrame;
-(void)_updateAXSprites;
-(PXCuratedLibrarySectionGeometryDescriptor *)presentedGeometryDescriptor;
-(void)_updateKeyAssetFetchResultWithDataSource:(id)arg1 section:(long long)arg2 ;
-(id)axSelectedSpriteIndexes;
-(PXGLayoutGuide *)assetLayoutGuide;
@end

