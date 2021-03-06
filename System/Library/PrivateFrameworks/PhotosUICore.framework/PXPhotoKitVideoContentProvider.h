/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:05 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXDisplayAssetVideoContentProvider.h>
#import <libobjc.A.dylib/PXPhotoLibraryUIChangeObserver.h>

@class PHFetchResult, PHAsset, PXPhotoKitUIMediaProvider, NSString;

@interface PXPhotoKitVideoContentProvider : PXDisplayAssetVideoContentProvider <PXPhotoLibraryUIChangeObserver> {

	PHFetchResult* _fetchResult;

}

@property (nonatomic,readonly) PHAsset * asset; 
@property (nonatomic,readonly) PXPhotoKitUIMediaProvider * mediaProvider; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithAsset:(id)arg1 mediaProvider:(id)arg2 ;
-(void)photoLibraryDidChangeOnMainQueue:(id)arg1 ;
@end

