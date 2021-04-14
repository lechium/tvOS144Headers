/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:46 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SeymourUI.framework/SeymourUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SeymourUI/SeymourUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class NSArray, UILabel;

@interface SeymourUI.TVFilterResultDetailHeaderCell : UICollectionViewCell {

	 delegate;
	 layout;
	 artworkView;
	 floatingView;
	 titleLabel;
	 subtitleLabel;
	 actionLabel;
	 labelStackView;
	 buttonStackView;
	 focusGuide;
	 labelStackViewTrailingConstraint;

}

@property (readonly,nonatomic) BOOL canBecomeFocused; 
@property (readonly,nonatomic) NSArray * preferredFocusEnvironments; 
@property (readonly,nonatomic) UILabel * accessibilityTitleLabel; 
@property (readonly,nonatomic) UILabel * accessibilitySubtitleLabel; 
@property (readonly,nonatomic) UILabel * accessibilityActionLabel; 
-(id)initWithCoder:(id)arg1 ;
-(void)prepareForReuse;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)canBecomeFocused;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(NSArray *)preferredFocusEnvironments;
-(UILabel *)accessibilityTitleLabel;
-(UILabel *)accessibilitySubtitleLabel;
-(void)primaryActionButtonPressed:(id)arg1 ;
-(void)secondaryActionButtonPressed:(id)arg1 ;
-(UILabel *)accessibilityActionLabel;
@end

