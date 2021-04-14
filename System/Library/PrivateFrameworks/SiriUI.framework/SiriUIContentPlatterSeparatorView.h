/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:02 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriUI/SiriUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIVisualEffectView, UIView;

@interface SiriUIContentPlatterSeparatorView : UIView {

	long long _separatorType;
	UIVisualEffectView* _backgroundView;
	UIView* _backgroundViewSmall;

}

@property (nonatomic,retain) UIVisualEffectView * backgroundView;              //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) UIView * backgroundViewSmall;                     //@synthesize backgroundViewSmall=_backgroundViewSmall - In the implementation block
@property (assign,nonatomic) long long separatorType;                          //@synthesize separatorType=_separatorType - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(long long)separatorType;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setBackgroundView:(UIVisualEffectView *)arg1 ;
-(UIVisualEffectView *)backgroundView;
-(void)setSeparatorType:(long long)arg1 ;
-(UIView *)backgroundViewSmall;
-(void)setBackgroundViewSmall:(UIView *)arg1 ;
@end

