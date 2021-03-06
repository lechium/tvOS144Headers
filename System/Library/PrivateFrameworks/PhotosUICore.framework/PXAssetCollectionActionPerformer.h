/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:49 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXActionPerformer.h>

@class PXAssetCollectionReference, PXDisplayTitleInfo, PHFetchResult, PXAssetReference, PXAssetsDataSource;

@interface PXAssetCollectionActionPerformer : PXActionPerformer {

	PXAssetCollectionReference* _assetCollectionReference;
	PXDisplayTitleInfo* _displayTitleInfo;
	PHFetchResult* _people;
	PXAssetReference* _dropTargetAssetReference;
	PXAssetsDataSource* _assetsDataSource;
	PHFetchResult* _assetsFetchResult;

}

@property (nonatomic,retain) PHFetchResult * people;                                               //@synthesize people=_people - In the implementation block
@property (nonatomic,retain) PXAssetReference * dropTargetAssetReference;                          //@synthesize dropTargetAssetReference=_dropTargetAssetReference - In the implementation block
@property (nonatomic,retain) PXAssetsDataSource * assetsDataSource;                                //@synthesize assetsDataSource=_assetsDataSource - In the implementation block
@property (nonatomic,retain) PHFetchResult * assetsFetchResult;                                    //@synthesize assetsFetchResult=_assetsFetchResult - In the implementation block
@property (nonatomic,readonly) PXAssetCollectionReference * assetCollectionReference;              //@synthesize assetCollectionReference=_assetCollectionReference - In the implementation block
@property (nonatomic,readonly) id<PXDisplayAssetCollection> assetCollection; 
@property (nonatomic,readonly) PXDisplayTitleInfo * displayTitleInfo;                              //@synthesize displayTitleInfo=_displayTitleInfo - In the implementation block
-(PHFetchResult *)people;
-(void)setPeople:(PHFetchResult *)arg1 ;
-(id)initWithActionType:(id)arg1 ;
-(PXAssetCollectionReference *)assetCollectionReference;
-(PXAssetReference *)dropTargetAssetReference;
-(PXAssetsDataSource *)assetsDataSource;
-(PHFetchResult *)assetsFetchResult;
-(void)setDropTargetAssetReference:(PXAssetReference *)arg1 ;
-(id<PXDisplayAssetCollection>)assetCollection;
-(PXDisplayTitleInfo *)displayTitleInfo;
-(void)setAssetsFetchResult:(PHFetchResult *)arg1 ;
-(id)initWithActionType:(id)arg1 assetCollectionReference:(id)arg2 displayTitleInfo:(id)arg3 ;
-(void)setAssetsDataSource:(PXAssetsDataSource *)arg1 ;
@end

