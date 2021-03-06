/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:55 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKitCore/UICollectionViewFlowLayout.h>

@interface GKLeaderboardScoreFlowLayout : UICollectionViewFlowLayout {

	BOOL _isInsertingItemsAbove;
	double _heightOfInsertedItems;
	double _initialContentOffset;
	CGSize _contentSizeBeforeInsertingItemsAbove;

}

@property (assign,nonatomic) BOOL isInsertingItemsAbove;                               //@synthesize isInsertingItemsAbove=_isInsertingItemsAbove - In the implementation block
@property (assign,nonatomic) double heightOfInsertedItems;                             //@synthesize heightOfInsertedItems=_heightOfInsertedItems - In the implementation block
@property (assign,nonatomic) CGSize contentSizeBeforeInsertingItemsAbove;              //@synthesize contentSizeBeforeInsertingItemsAbove=_contentSizeBeforeInsertingItemsAbove - In the implementation block
@property (assign,nonatomic) double initialContentOffset;                              //@synthesize initialContentOffset=_initialContentOffset - In the implementation block
-(BOOL)isInsertingItemsAbove;
-(void)setIsInsertingItemsAbove:(BOOL)arg1 ;
-(double)heightOfInsertedItems;
-(void)setHeightOfInsertedItems:(double)arg1 ;
-(CGSize)contentSizeBeforeInsertingItemsAbove;
-(void)setContentSizeBeforeInsertingItemsAbove:(CGSize)arg1 ;
-(double)initialContentOffset;
-(void)setInitialContentOffset:(double)arg1 ;
@end

