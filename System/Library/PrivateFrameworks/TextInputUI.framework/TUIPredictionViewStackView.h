/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:37 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TextInputUI/TextInputUI-Structs.h>
#import <UIKitCore/UIView.h>

@class TUIPredictionViewStackContentView;

@interface TUIPredictionViewStackView : UIView {

	long long _layoutDirection;
	TUIPredictionViewStackContentView* _contentView;
	UIEdgeInsets _contentMargin;

}

@property (nonatomic,retain) TUIPredictionViewStackContentView * contentView;              //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentMargin;                                   //@synthesize contentMargin=_contentMargin - In the implementation block
@property (assign,nonatomic) long long layoutDirection;                                    //@synthesize layoutDirection=_layoutDirection - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(long long)layoutDirection;
-(void)setLayoutDirection:(long long)arg1 ;
-(TUIPredictionViewStackContentView *)contentView;
-(void)setContentView:(TUIPredictionViewStackContentView *)arg1 ;
-(void)layoutSubviews;
-(id)visibleCells;
-(void)addArrangedSubview:(id)arg1 ;
-(id)arrangedSubviews;
-(id)allVisibleCells;
-(id)subStackViews;
-(long long)_layoutTypeForSubview:(id)arg1 ;
-(UIEdgeInsets)contentMargin;
-(void)setContentMargin:(UIEdgeInsets)arg1 ;
@end

