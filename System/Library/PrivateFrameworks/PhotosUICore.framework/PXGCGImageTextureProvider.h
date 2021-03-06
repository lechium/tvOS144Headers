/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:36 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXGTextureProvider.h>

@class NSCache;

@interface PXGCGImageTextureProvider : PXGTextureProvider {

	NSCache* _imageCache;
	NSCache* _additionalInfoCache;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue; 
-(id)init;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)invalidateCache;
-(void)releaseCachedResources;
-(void)requestCGImageWithCacheKey:(id)arg1 imageProvider:(/*^block*/id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(void)requestCGImageAndAdditionalInfoWithCacheKey:(id)arg1 imageProvider:(/*^block*/id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(void)cacheAdditionalInfo:(id)arg1 withKey:(id)arg2 ;
-(void)lowMemoryModeDidChange;
-(void)_updateCacheLimit;
@end

