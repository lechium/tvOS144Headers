/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:42 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UIDiffableDataSourceSnapshotter.h>

@class UICollectionView;

@interface _UICollectionViewDiffableDataSource : _UIDiffableDataSourceSnapshotter

@property (nonatomic,copy) id supplementaryViewProvider; 
@property (nonatomic,__weak,readonly) UICollectionView * collectionView; 
@property (nonatomic,copy) id supplementaryReuseIdentifierProvider; 
@property (nonatomic,copy) id supplementaryConfigurationHandler; 
-(UICollectionView *)collectionView;
-(id)initWithCollectionView:(id)arg1 cellProvider:(/*^block*/id)arg2 ;
-(void)setSupplementaryViewProvider:(id)arg1 ;
-(id)supplementaryViewProvider;
-(id)supplementaryReuseIdentifierProvider;
-(id)initWithCollectionView:(id)arg1 reuseIdentifierProvider:(/*^block*/id)arg2 cellConfigurationHandler:(/*^block*/id)arg3 ;
-(void)setSupplementaryReuseIdentifierProvider:(id)arg1 ;
-(id)supplementaryConfigurationHandler;
-(void)setSupplementaryConfigurationHandler:(id)arg1 ;
@end

