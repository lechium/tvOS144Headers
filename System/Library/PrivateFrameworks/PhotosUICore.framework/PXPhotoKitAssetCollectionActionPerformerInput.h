/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:39 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class PHFetchResult, PXAssetReference, PXAssetsDataSource;


@protocol PXPhotoKitAssetCollectionActionPerformerInput <NSObject>
@property (nonatomic,readonly) PHFetchResult * people; 
@property (nonatomic,readonly) PXAssetReference * dropTargetAssetReference; 
@property (nonatomic,readonly) PXAssetsDataSource * assetsDataSource; 
@property (nonatomic,readonly) PHFetchResult * assetsFetchResult; 
@optional
-(PHFetchResult *)people;
-(PXAssetReference *)dropTargetAssetReference;
-(PXAssetsDataSource *)assetsDataSource;
-(PHFetchResult *)assetsFetchResult;

@end

