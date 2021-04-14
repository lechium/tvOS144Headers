/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:06 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UICollectionViewUpdateItemApplying.h>

@protocol _UICollectionViewUpdateItemApplying, _UIDataSourceSnapshotTranslating;
@class UICollectionView, UITableView, NSString;

@interface _UIDiffableDataSourceViewUpdater : NSObject <_UICollectionViewUpdateItemApplying> {

	long long _tableViewRowAnimation;
	long long _sinkKind;
	id<_UICollectionViewUpdateItemApplying> _updatesSink;
	UICollectionView* _collectionView;
	id<_UIDataSourceSnapshotTranslating> _dataSourceSnapshot;
	UITableView* _tableView;

}

@property (assign,nonatomic,__weak) id<_UICollectionViewUpdateItemApplying> updatesSink;              //@synthesize updatesSink=_updatesSink - In the implementation block
@property (assign,nonatomic,__weak) UICollectionView * collectionView;                                //@synthesize collectionView=_collectionView - In the implementation block
@property (assign,nonatomic) long long sinkKind;                                                      //@synthesize sinkKind=_sinkKind - In the implementation block
@property (nonatomic,retain) id<_UIDataSourceSnapshotTranslating> dataSourceSnapshot;                 //@synthesize dataSourceSnapshot=_dataSourceSnapshot - In the implementation block
@property (assign,nonatomic,__weak) UITableView * tableView;                                          //@synthesize tableView=_tableView - In the implementation block
@property (assign,nonatomic) long long tableViewRowAnimation;                                         //@synthesize tableViewRowAnimation=_tableViewRowAnimation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setTableView:(UITableView *)arg1 ;
-(id)targetView;
-(UICollectionView *)collectionView;
-(UITableView *)tableView;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(void)_reloadData;
-(id<_UIDataSourceSnapshotTranslating>)dataSourceSnapshot;
-(void)setDataSourceSnapshot:(id<_UIDataSourceSnapshotTranslating>)arg1 ;
-(id)initWithTableView:(id)arg1 ;
-(id)initWithCollectionView:(id)arg1 ;
-(id)initWithCollectionViewUpdatesSink:(id)arg1 ;
-(void)setTableViewRowAnimation:(long long)arg1 ;
-(long long)tableViewRowAnimation;
-(void)_performUpdateWithCollectionViewUpdateItems:(id)arg1 dataSourceSnapshot:(id)arg2 updateHandler:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 viewPropertyAnimator:(id)arg5 customAnimationsProvider:(/*^block*/id)arg6 ;
-(id)initWithUpdatesSink:(id)arg1 collectionView:(id)arg2 tableView:(id)arg3 ;
-(void)_performViewUpdates:(id)arg1 ;
-(id<_UICollectionViewUpdateItemApplying>)updatesSink;
-(void)_deleteAllItems;
-(long long)sinkKind;
-(void)_performInsertUpdate:(id)arg1 onCollectionView:(id)arg2 ;
-(void)_performInsertUpdate:(id)arg1 onTableView:(id)arg2 ;
-(void)_performMoveUpdate:(id)arg1 onCollectionView:(id)arg2 ;
-(void)_performMoveUpdate:(id)arg1 onTableView:(id)arg2 ;
-(void)_performDeleteUpdate:(id)arg1 onCollectionView:(id)arg2 ;
-(void)_performDeleteUpdate:(id)arg1 onTableView:(id)arg2 ;
-(void)_performReloadUpdate:(id)arg1 onCollectionView:(id)arg2 ;
-(void)_performReloadUpdate:(id)arg1 onTableView:(id)arg2 ;
-(void)_willPerformDiff:(BOOL)arg1 ;
-(void)setSinkKind:(long long)arg1 ;
-(void)setUpdatesSink:(id<_UICollectionViewUpdateItemApplying>)arg1 ;
@end

