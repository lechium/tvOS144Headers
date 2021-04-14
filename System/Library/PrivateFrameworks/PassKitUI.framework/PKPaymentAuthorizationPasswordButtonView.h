/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:20 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, NSMutableArray, NSLayoutConstraint, UIButton;

@interface PKPaymentAuthorizationPasswordButtonView : UIView {

	UIView* _separatorView;
	NSMutableArray* _hiddenConstraints;
	NSLayoutConstraint* _buttonTopPaddingConstraint;
	NSLayoutConstraint* _buttonBottomPaddingConstraint;
	NSLayoutConstraint* _seperatorHeightConstraint;
	UIButton* _passwordButton;

}

@property (nonatomic,readonly) UIButton * passwordButton;              //@synthesize passwordButton=_passwordButton - In the implementation block
-(void)setHidden:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)updateConstraints;
-(void)_setupConstraints;
-(UIButton *)passwordButton;
@end
