/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:57 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKDashboardFocusButton.h>

@interface GKTimeScopeButton : GKDashboardFocusButton {

	long long _timeScope;
	long long _leaderboardOccurrence;

}

@property (assign,nonatomic) long long timeScope;                          //@synthesize timeScope=_timeScope - In the implementation block
@property (assign,nonatomic) long long leaderboardOccurrence;              //@synthesize leaderboardOccurrence=_leaderboardOccurrence - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_commonInit;
-(void)awakeFromNib;
-(void)setTimeScope:(long long)arg1 ;
-(long long)timeScope;
-(long long)leaderboardOccurrence;
-(void)setLeaderboardOccurrence:(long long)arg1 ;
-(void)updateWithTitle:(id)arg1 ;
@end
