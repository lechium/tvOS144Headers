/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:54 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PXDisplayAssetFetchResult.h>

@class NSArray, NSString;

@interface _PXMomentShareMockFetchResult : NSObject <PXDisplayAssetFetchResult> {

	NSArray* _assets;

}

@property (nonatomic,readonly) id<PXDisplayAsset> firstObject; 
@property (nonatomic,readonly) id<PXDisplayAsset> lastObject; 
@property (nonatomic,readonly) long long count; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)momentShareMockFetchResultWithPhotosCount:(unsigned long long)arg1 videosCount:(unsigned long long)arg2 ;
-(long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(id)objectsAtIndexes:(id)arg1 ;
-(BOOL)containsObject:(id)arg1 ;
-(id<PXDisplayAsset>)firstObject;
-(id<PXDisplayAsset>)lastObject;
-(unsigned long long)cachedCountOfAssetsWithMediaType:(long long)arg1 ;
-(unsigned long long)countOfAssetsWithMediaType:(long long)arg1 ;
-(id)thumbnailAssetAtIndex:(unsigned long long)arg1 ;
-(id)initWithAssets:(id)arg1 ;
@end

