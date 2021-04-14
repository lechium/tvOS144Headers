/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:05 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PXBrowserSelectionSnapshot.h>
@class NSArray;


@protocol PXBrowserSelectionSnapshot <NSObject>
@property (nonatomic,readonly) long long estimatedAssetCount; 
@property (nonatomic,readonly) long long assetCount; 
@property (nonatomic,readonly) long long mediaType; 
@property (nonatomic,readonly) long long estimatedModelObjectsCount; 
@property (nonatomic,readonly) NSArray * modelObjects; 
@required
-(long long)mediaType;
-(long long)assetCount;
-(NSArray *)modelObjects;
-(long long)estimatedAssetCount;
-(id)displayAssetAtIndex:(long long)arg1;
-(id)assetReferenceAtIndex:(long long)arg1;
-(long long)indexOfAssetReference:(id)arg1;
-(long long)estimatedModelObjectsCount;

@end


@class NSArray, NSString;

@interface PXBrowserSelectionSnapshot : NSObject <PXBrowserSelectionSnapshot>

@property (nonatomic,readonly) long long estimatedAssetCount; 
@property (nonatomic,readonly) long long assetCount; 
@property (nonatomic,readonly) long long mediaType; 
@property (nonatomic,readonly) long long estimatedModelObjectsCount; 
@property (nonatomic,readonly) NSArray * modelObjects; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)selectionWithIndexPaths:(id)arg1 dataSource:(id)arg2 ;
-(long long)mediaType;
-(long long)assetCount;
-(NSArray *)modelObjects;
-(long long)estimatedAssetCount;
-(id)displayAssetAtIndex:(long long)arg1 ;
-(id)assetReferenceAtIndex:(long long)arg1 ;
-(long long)indexOfAssetReference:(id)arg1 ;
-(long long)estimatedModelObjectsCount;
@end

