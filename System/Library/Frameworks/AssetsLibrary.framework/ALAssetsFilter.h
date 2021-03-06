/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:52 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/AssetsLibrary.framework/AssetsLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class ALAssetsFilterInternal;

@interface ALAssetsFilter : NSObject {

	id _internal;

}

@property (nonatomic,retain) ALAssetsFilterInternal * internal;              //@synthesize internal=_internal - In the implementation block
+(id)allPhotos;
+(id)allVideos;
+(id)allAssets;
-(id)init;
-(void)dealloc;
-(int)_filter;
-(ALAssetsFilterInternal *)internal;
-(void)setInternal:(ALAssetsFilterInternal *)arg1 ;
-(void)_setFilter:(int)arg1 ;
@end

