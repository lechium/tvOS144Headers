/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:54 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UIView;

@interface GKLeaderboardAddFriendsCell : UICollectionViewCell {

	long long _friendCount;
	UIView* _container;
	UIView* _topLine;

}

@property (nonatomic,retain) UIView * container;                 //@synthesize container=_container - In the implementation block
@property (nonatomic,retain) UIView * topLine;                   //@synthesize topLine=_topLine - In the implementation block
@property (assign,nonatomic) long long friendCount;              //@synthesize friendCount=_friendCount - In the implementation block
@property (assign,nonatomic) BOOL lineVisible; 
-(UIView *)container;
-(void)setContainer:(UIView *)arg1 ;
-(void)awakeFromNib;
-(long long)friendCount;
-(void)setFriendCount:(long long)arg1 ;
-(UIView *)topLine;
-(void)setLineVisible:(BOOL)arg1 ;
-(BOOL)lineVisible;
-(void)setTopLine:(UIView *)arg1 ;
-(CGSize)preferredLayoutSizeFittingSize:(CGSize)arg1 ;
-(void)configureAddFriendsLockupWithHandler:(/*^block*/id)arg1 ;
-(void)configureNoFriendsViewWithHandler:(/*^block*/id)arg1 ;
-(void)clearContainer;
@end

