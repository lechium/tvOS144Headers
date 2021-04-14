/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:45 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SeymourUI.framework/SeymourUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SeymourUI/SeymourUI-Structs.h>
#import <SeymourUI/SeymourUI.TVFocusableCollectionViewCell.h>

@class UILabel;

@interface SeymourUI.TVGroupedBrickItemCell : SeymourUI.TVFocusableCollectionViewCell {

	 delegate;
	 layout;
	 artworkView;
	 floatingView;
	 mainStackView;
	 headerLabel;
	 textStackView;
	 titleLabel;
	 subtitleLabel;

}

@property (readonly,nonatomic) UILabel * accessibilityHeaderLabel; 
@property (readonly,nonatomic) UILabel * accessibilityTitleLabel; 
@property (readonly,nonatomic) UILabel * accessibilitySubtitleLabel; 
-(id)initWithCoder:(id)arg1 ;
-(void)prepareForReuse;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(UILabel *)accessibilityTitleLabel;
-(UILabel *)accessibilitySubtitleLabel;
-(UILabel *)accessibilityHeaderLabel;
@end

