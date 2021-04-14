/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:46 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SeymourUI.framework/SeymourUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SeymourUI/SeymourUI-Structs.h>
#import <SeymourUI/SeymourUI.TVFocusableCollectionViewCell.h>

@class UILabel, _TtC9SeymourUI14WatchBadgeView;

@interface SeymourUI.TVRemoteParticipantCell : SeymourUI.TVFocusableCollectionViewCell {

	 layout;
	 titleLabel;
	 indicatorView;
	 monogramButton;
	 imageViewEdgeFillConstraints;
	 watchBadgeView;

}

@property (readonly,nonatomic) UILabel * accessibilityTitleLabel; 
@property (readonly,nonatomic) _TtC9SeymourUI14WatchBadgeView * accessibilityWatchBadgeView; 
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(UILabel *)accessibilityTitleLabel;
-(_TtC9SeymourUI14WatchBadgeView *)accessibilityWatchBadgeView;
@end

