/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:24 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, UIButton;

@interface PKPaymentPassDetailActivationFooterView : UIView {

	UILabel* _footerTextLabel;
	UIButton* _activationButton;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setFooterText:(id)arg1 ;
-(void)setActivationButtonText:(id)arg1 ;
-(void)setActivationButtonTarget:(id)arg1 action:(SEL)arg2 ;
@end
