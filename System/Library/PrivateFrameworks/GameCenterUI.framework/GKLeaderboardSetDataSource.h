/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:54 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKLeaderboardCollectionDataSource.h>

@class NSDictionary, NSArray;

@interface GKLeaderboardSetDataSource : GKLeaderboardCollectionDataSource {

	NSDictionary* _leaderboardSetAssetNames;
	NSDictionary* _leaderboardAssetNames;
	NSArray* _leaderboardSets;

}

@property (nonatomic,retain) NSArray * leaderboardSets;                            //@synthesize leaderboardSets=_leaderboardSets - In the implementation block
@property (nonatomic,retain) NSDictionary * leaderboardSetAssetNames;              //@synthesize leaderboardSetAssetNames=_leaderboardSetAssetNames - In the implementation block
@property (nonatomic,retain) NSDictionary * leaderboardAssetNames;                 //@synthesize leaderboardAssetNames=_leaderboardAssetNames - In the implementation block
-(id)title;
-(long long)itemCount;
-(void)loadDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)itemForIndexPath:(id)arg1 ;
-(void)setLeaderboardSetAssetNames:(NSDictionary *)arg1 ;
-(void)setLeaderboardAssetNames:(NSDictionary *)arg1 ;
-(NSDictionary *)leaderboardSetAssetNames;
-(NSDictionary *)leaderboardAssetNames;
-(CGSize)standardCellSizeForCollectionView:(id)arg1 ;
-(void)updateHighlightsInSectionHeader:(id)arg1 ;
-(void)prepareCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)handleSelectionInCollectionView:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(long long)allowedColumnCount:(long long)arg1 ;
-(NSArray *)leaderboardSets;
-(void)setLeaderboardSets:(NSArray *)arg1 ;
-(void)presentLeaderboardsListWithSet:(id)arg1 segueToLeaderboard:(id)arg2 ;
-(void)removeLeaderboardSetsWithoutImages;
@end

