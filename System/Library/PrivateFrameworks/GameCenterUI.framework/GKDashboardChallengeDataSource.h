/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:54 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKCollectionDataSource.h>
#import <libobjc.A.dylib/GKDashboardChallengeDetailViewControllerDelegate.h>

@class GKGameRecord, NSArray;

@interface GKDashboardChallengeDataSource : GKCollectionDataSource <GKDashboardChallengeDetailViewControllerDelegate> {

	BOOL _shouldShowPlay;
	GKGameRecord* _gameRecord;
	NSArray* _challenges;

}

@property (nonatomic,retain) GKGameRecord * gameRecord;              //@synthesize gameRecord=_gameRecord - In the implementation block
@property (nonatomic,retain) NSArray * challenges;                   //@synthesize challenges=_challenges - In the implementation block
@property (assign,nonatomic) BOOL shouldShowPlay;                    //@synthesize shouldShowPlay=_shouldShowPlay - In the implementation block
-(void)dealloc;
-(long long)itemCount;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)loadDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setupCollectionView:(id)arg1 ;
-(double)preferredCollectionHeight;
-(id)itemForIndexPath:(id)arg1 ;
-(id)sectionHeaderText;
-(void)setGameRecord:(GKGameRecord *)arg1 ;
-(id)initWithGameRecord:(id)arg1 ;
-(GKGameRecord *)gameRecord;
-(void)setChallenges:(NSArray *)arg1 ;
-(void)setShouldShowPlay:(BOOL)arg1 ;
-(void)userDidSelectPlay:(id)arg1 ;
-(void)newDashboardUserDidSelectPlayChallenge:(id)arg1 ;
-(BOOL)shouldShowPlay;
-(NSArray *)challenges;
@end

