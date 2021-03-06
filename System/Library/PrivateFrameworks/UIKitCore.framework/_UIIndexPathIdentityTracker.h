/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:42 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class UITableView, UICollectionView, NSMutableDictionary;

@interface _UIIndexPathIdentityTracker : NSObject {

	UITableView* _tableView;
	UICollectionView* _collectionView;
	id _identityBasedDataSource;
	NSMutableDictionary* _mapping;
	BOOL _enforcesManualMapping;

}
-(id)init;
-(void)reset;
-(id)initWithTableView:(id)arg1 ;
-(id)initWithCollectionView:(id)arg1 ;
-(id)identifierForIndexPath:(id)arg1 ;
-(void)updateWithUpdateItems:(id)arg1 ;
-(id)_mappingIdentifierForSanitizedIndexPath:(id)arg1 ;
-(id)currentIndexPathForIdentifier:(id)arg1 ;
-(void)enforceManualMapping;
@end

