/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:06 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class _UICollectionViewListSnapshotter, _UIDataSourceUpdateMap, NSMutableDictionary, NSArray;

@interface _UICollectionViewListSeparatorDiff : NSObject {

	_UICollectionViewListSnapshotter* _oldSnapshot;
	_UICollectionViewListSnapshotter* _newSnapshot;
	_UIDataSourceUpdateMap* _map;
	NSMutableDictionary* _insertedIndexPaths;
	NSMutableDictionary* _deletedIndexPaths;
	NSArray* _insertedSeparators;
	NSArray* _deletedSeparators;

}
-(void)_mapUpdateItems:(id)arg1 ;
-(void)_prepareInsertsAndDeletes;
-(id)initWithOldSnapshot:(id)arg1 newSnapshot:(id)arg2 updateItems:(id)arg3 ;
-(id)indexPathsToInsertForSeparators;
-(id)indexPathsToDeleteForSeparators;
@end

