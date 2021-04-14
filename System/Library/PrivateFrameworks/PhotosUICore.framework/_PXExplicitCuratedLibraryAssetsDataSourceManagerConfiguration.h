/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:04 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXCuratedLibraryAssetsDataSourceManagerConfiguration.h>

@class PXAssetsDataSourceManager;

@interface _PXExplicitCuratedLibraryAssetsDataSourceManagerConfiguration : PXCuratedLibraryAssetsDataSourceManagerConfiguration {

	PXAssetsDataSourceManager* _yearsAssetsDataSourceManager;
	PXAssetsDataSourceManager* _monthsAssetsDataSourceManager;
	PXAssetsDataSourceManager* _daysAssetsDataSourceManager;
	PXAssetsDataSourceManager* _allPhotosAssetsDataSourceManager;

}
-(id)configurationForZoomLevel:(long long)arg1 ;
-(id)initWithYearsAssetsDataSourceManager:(id)arg1 monthsAssetsDataSourceManager:(id)arg2 daysAssetsDataSourceManager:(id)arg3 allPhotosAssetsDataSourceManager:(id)arg4 ;
@end

