/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:58 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXFeedSectionInfo.h>

@class PLPhotoLibrary;

@interface PXFeedTestSectionInfo : PXFeedSectionInfo {

	PLPhotoLibrary* _photoLibrary;
	long long _countOfItems;

}

@property (nonatomic,readonly) long long countOfItems;              //@synthesize countOfItems=_countOfItems - In the implementation block
-(id)date;
-(BOOL)isLoaded;
-(long long)numberOfItems;
-(long long)sectionType;
-(id)photoLibrary;
-(id)initWithPhotoLibrary:(id)arg1 ;
-(id)albumTitle;
-(id)captionForItemAtIndex:(long long)arg1 ;
-(long long)countOfItems;
@end
