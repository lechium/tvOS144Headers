/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:56 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKDashboardCollectionViewController.h>

@class NSArray;

@interface GKDashboardMultiCollectionViewController : GKDashboardCollectionViewController {

	NSArray* _dataSources;

}

@property (nonatomic,retain) NSArray * dataSources;              //@synthesize dataSources=_dataSources - In the implementation block
-(void)dealloc;
-(BOOL)hasData;
-(void)viewDidLoad;
-(void)clearSelection;
-(NSArray *)dataSources;
-(void)loadData;
-(BOOL)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)setDataSources:(NSArray *)arg1 ;
-(void)dataUpdated:(BOOL)arg1 withError:(id)arg2 ;
-(id)cellIdentifierForSection:(long long)arg1 ;
-(id)dataSourceForSection:(long long)arg1 ;
-(BOOL)sectionHasData:(long long)arg1 ;
-(void)collectionView:(id)arg1 didFocusItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didUnfocusItemAtIndexPath:(id)arg2 ;
@end

