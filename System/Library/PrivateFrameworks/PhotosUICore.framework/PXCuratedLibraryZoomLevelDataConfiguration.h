/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:04 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PXPhotosDataSourceProvider.h>

@class PXAssetsDataSourceManager, PHPhotoLibrary, NSString;

@interface PXCuratedLibraryZoomLevelDataConfiguration : NSObject <PXPhotosDataSourceProvider> {

	PXAssetsDataSourceManager* _assetsDataSourceManager;
	long long _zoomLevel;
	PHPhotoLibrary* _photoLibrary;

}

@property (nonatomic,retain) PHPhotoLibrary * photoLibrary;                                      //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (nonatomic,readonly) long long zoomLevel;                                              //@synthesize zoomLevel=_zoomLevel - In the implementation block
@property (nonatomic,readonly) PXAssetsDataSourceManager * assetsDataSourceManager; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(long long)zoomLevel;
-(id)initWithZoomLevel:(long long)arg1 ;
-(PHPhotoLibrary *)photoLibrary;
-(void)setPhotoLibrary:(PHPhotoLibrary *)arg1 ;
-(PXAssetsDataSourceManager *)assetsDataSourceManager;
-(id)createInitialPhotosDataSourceForDataSourceManager:(id)arg1 ;
-(id)initWithZoomLevel:(long long)arg1 assetsDataSourceManager:(id)arg2 ;
@end

