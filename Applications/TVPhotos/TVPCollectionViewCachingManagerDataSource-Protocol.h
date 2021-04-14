//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSIndexPath, NSSet, TVPCollectionViewCachingManager;

@protocol TVPCollectionViewCachingManagerDataSource <NSObject>

@optional
- (NSDictionary *)collectionViewCachingManager:(TVPCollectionViewCachingManager *)arg1 assetWithTargetSizeAtIndexPath:(NSIndexPath *)arg2;
- (NSArray *)collectionViewCachingManager:(TVPCollectionViewCachingManager *)arg1 assetsForIndexPaths:(NSSet *)arg2;
@end
