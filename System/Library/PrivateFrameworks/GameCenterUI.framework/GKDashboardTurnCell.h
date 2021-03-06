/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:56 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKDashboardPlayerCell.h>

@class UILabel, UIImageView, NSLayoutConstraint, UIColor;

@interface GKDashboardTurnCell : GKDashboardPlayerCell {

	long long _displayIndex;
	UILabel* _dateLabel;
	UILabel* _turnLabel;
	UIImageView* _actionIndicatorView;
	NSLayoutConstraint* _dateToNameConstraint;
	NSLayoutConstraint* _turnToNameConstraint;
	UIColor* _dateColor;
	UIColor* _turnColor;
	double _dateToNameConstant;
	double _turnToNameConstant;

}

@property (assign,nonatomic) UILabel * dateLabel;                                    //@synthesize dateLabel=_dateLabel - In the implementation block
@property (assign,nonatomic) UILabel * turnLabel;                                    //@synthesize turnLabel=_turnLabel - In the implementation block
@property (assign,nonatomic) UIImageView * actionIndicatorView;                      //@synthesize actionIndicatorView=_actionIndicatorView - In the implementation block
@property (assign,nonatomic) NSLayoutConstraint * dateToNameConstraint;              //@synthesize dateToNameConstraint=_dateToNameConstraint - In the implementation block
@property (assign,nonatomic) NSLayoutConstraint * turnToNameConstraint;              //@synthesize turnToNameConstraint=_turnToNameConstraint - In the implementation block
@property (nonatomic,retain) UIColor * dateColor;                                    //@synthesize dateColor=_dateColor - In the implementation block
@property (nonatomic,retain) UIColor * turnColor;                                    //@synthesize turnColor=_turnColor - In the implementation block
@property (assign,nonatomic) double dateToNameConstant;                              //@synthesize dateToNameConstant=_dateToNameConstant - In the implementation block
@property (assign,nonatomic) double turnToNameConstant;                              //@synthesize turnToNameConstant=_turnToNameConstant - In the implementation block
@property (assign,nonatomic) long long displayIndex;                                 //@synthesize displayIndex=_displayIndex - In the implementation block
+(CGSize)defaultSizeForTurnDetail;
-(void)dealloc;
-(void)awakeFromNib;
-(UILabel *)dateLabel;
-(void)setDateLabel:(UILabel *)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(UIImageView *)actionIndicatorView;
-(void)setActionIndicatorView:(UIImageView *)arg1 ;
-(void)setOnDarkBackground:(BOOL)arg1 ;
-(void)setDisplayIndex:(long long)arg1 ;
-(void)configureForParticipant:(id)arg1 inMatch:(id)arg2 ;
-(void)configureForMatch:(id)arg1 ;
-(void)setDateColor:(UIColor *)arg1 ;
-(void)setTurnColor:(UIColor *)arg1 ;
-(void)setDateToNameConstant:(double)arg1 ;
-(void)setTurnToNameConstant:(double)arg1 ;
-(BOOL)wantsLocalPlayerAction:(id)arg1 ;
-(long long)displayIndex;
-(UILabel *)turnLabel;
-(void)setTurnLabel:(UILabel *)arg1 ;
-(NSLayoutConstraint *)dateToNameConstraint;
-(void)setDateToNameConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)turnToNameConstraint;
-(void)setTurnToNameConstraint:(NSLayoutConstraint *)arg1 ;
-(UIColor *)dateColor;
-(UIColor *)turnColor;
-(double)dateToNameConstant;
-(double)turnToNameConstant;
@end

