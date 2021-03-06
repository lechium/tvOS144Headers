/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:57 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UICollectionReusableView.h>

@class UILabel, GKTimeScopeButton, NSString;

@interface GKDashboardLeaderboardScoreHeaderView : UICollectionReusableView {

	id _timeScopeTarget;
	SEL _timeScopeAction;
	UILabel* _titleLabel;
	GKTimeScopeButton* _timeScopeButton;

}

@property (assign,nonatomic) UILabel * titleLabel;                             //@synthesize titleLabel=_titleLabel - In the implementation block
@property (assign,nonatomic) GKTimeScopeButton * timeScopeButton;              //@synthesize timeScopeButton=_timeScopeButton - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (assign,nonatomic) long long timeScope; 
@property (assign,nonatomic) id timeScopeTarget;                               //@synthesize timeScopeTarget=_timeScopeTarget - In the implementation block
@property (assign,nonatomic) SEL timeScopeAction;                              //@synthesize timeScopeAction=_timeScopeAction - In the implementation block
+(double)defaultHeight;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)awakeFromNib;
-(void)setTimeScope:(long long)arg1 ;
-(long long)timeScope;
-(id)timeScopeTarget;
-(SEL)timeScopeAction;
-(void)setTimeScopeTarget:(id)arg1 ;
-(void)setTimeScopeAction:(SEL)arg1 ;
-(void)timeScopePressed:(id)arg1 ;
-(GKTimeScopeButton *)timeScopeButton;
-(void)setTimeScopeButton:(GKTimeScopeButton *)arg1 ;
@end

