/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:58 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKitCore/UIView.h>

@interface GameCenterUI.EmptyStateView : UIView {

	 imageView;
	 wordmarkView;
	 primaryLabel;
	 secondaryLabel;
	 button;
	 disabled;
	 imageType;
	 state;
	 buttonActionBlock;

}

@property (copy,nonatomic) id buttonActionBlock; 
+(id)addFriendsEmptyStateView;
+(id)addAdditionalFriendsEmptyStateView;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)didTapButton:(id)arg1 ;
-(JUMeasurements)measurementsWithFitting:(CGSize)arg1 in:(id)arg2 ;
-(id)buttonActionBlock;
-(void)setButtonActionBlock:(id)arg1 ;
@end

