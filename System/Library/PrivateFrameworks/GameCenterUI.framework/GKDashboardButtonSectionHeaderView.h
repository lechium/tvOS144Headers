/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:54 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKDashboardSectionHeaderView.h>

@class NSAttributedString, UIView, UIButton, UIStackView, NSLayoutConstraint, NSString;

@interface GKDashboardButtonSectionHeaderView : GKDashboardSectionHeaderView {

	BOOL _buttonHidden;
	NSAttributedString* _attributedButtonTitle;
	id _buttonTarget;
	SEL _buttonAction;
	UIView* _backgroundPlatterView;
	UIButton* _button;
	UIStackView* _stackView;
	NSLayoutConstraint* _rightMarginConstraint;

}

@property (assign,nonatomic) UIButton * button;                                       //@synthesize button=_button - In the implementation block
@property (assign,nonatomic) UIStackView * stackView;                                 //@synthesize stackView=_stackView - In the implementation block
@property (assign,nonatomic) NSLayoutConstraint * rightMarginConstraint;              //@synthesize rightMarginConstraint=_rightMarginConstraint - In the implementation block
@property (nonatomic,copy) NSString * buttonTitle; 
@property (nonatomic,copy) NSAttributedString * attributedButtonTitle;                //@synthesize attributedButtonTitle=_attributedButtonTitle - In the implementation block
@property (assign,nonatomic) id buttonTarget;                                         //@synthesize buttonTarget=_buttonTarget - In the implementation block
@property (assign,nonatomic) SEL buttonAction;                                        //@synthesize buttonAction=_buttonAction - In the implementation block
@property (assign,getter=isButtonHidden,nonatomic) BOOL buttonHidden;                 //@synthesize buttonHidden=_buttonHidden - In the implementation block
@property (assign,nonatomic) UIView * backgroundPlatterView;                          //@synthesize backgroundPlatterView=_backgroundPlatterView - In the implementation block
+(double)widthForTitle:(id)arg1 buttonTitle:(id)arg2 ;
+(CGSize)platformSizeForTitle:(id)arg1 buttonTitle:(id)arg2 ;
+(double)widthForTitle:(id)arg1 ;
+(CGSize)platformSizeForTitle:(id)arg1 ;
-(void)prepareForReuse;
-(UIButton *)button;
-(void)setButton:(UIButton *)arg1 ;
-(CGSize)intrinsicContentSize;
-(NSString *)buttonTitle;
-(SEL)buttonAction;
-(void)setButtonAction:(SEL)arg1 ;
-(void)awakeFromNib;
-(UIStackView *)stackView;
-(void)setStackView:(UIStackView *)arg1 ;
-(void)setButtonTitle:(NSString *)arg1 ;
-(void)buttonPressed:(id)arg1 ;
-(NSLayoutConstraint *)rightMarginConstraint;
-(void)setRightMarginConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setButtonTarget:(id)arg1 ;
-(void)setButtonHidden:(BOOL)arg1 ;
-(void)setAttributedButtonTitle:(NSAttributedString *)arg1 ;
-(NSAttributedString *)attributedButtonTitle;
-(id)buttonTarget;
-(BOOL)isButtonHidden;
-(UIView *)backgroundPlatterView;
-(void)setBackgroundPlatterView:(UIView *)arg1 ;
@end

