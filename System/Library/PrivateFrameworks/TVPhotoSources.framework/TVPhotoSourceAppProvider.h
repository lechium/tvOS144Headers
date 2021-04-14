/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:30 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TVPhotoSources.framework/TVPhotoSources
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVPhotoSources/TVPhotoSource.h>

@class TVPhotoSourceService;

@interface TVPhotoSourceAppProvider : TVPhotoSource {

	TVPhotoSourceService* _photoSourceService;

}

@property (nonatomic,retain) TVPhotoSourceService * photoSourceService;              //@synthesize photoSourceService=_photoSourceService - In the implementation block
-(id)sourceIdentifier;
-(id)sourceName;
-(void)fetchCollectionsWithCompletion:(/*^block*/id)arg1 ;
-(void)setPhotoSourceService:(TVPhotoSourceService *)arg1 ;
-(void)_fetchAssetsForCollectionWithIdentifier:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(TVPhotoSourceService *)photoSourceService;
-(void)fetchAssetsForCollectionWithIdentifier:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

