/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:12 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol PKEnterCurrencyAmountPassViewDelegate;
@class UIImageView, PKEnterCurrencyAmountView, PKEnterValueNewBalanceView, PKPass;

@interface PKEnterCurrencyAmountPassView : UIView {

	UIImageView* _passView;
	BOOL _loadingSnapshot;
	id<PKEnterCurrencyAmountPassViewDelegate> _delegate;
	PKEnterCurrencyAmountView* _enterCurrencyAmountView;
	PKEnterValueNewBalanceView* _balanceView;
	PKPass* _pass;

}

@property (nonatomic,retain) PKPass * pass;                                                          //@synthesize pass=_pass - In the implementation block
@property (assign,nonatomic,__weak) id<PKEnterCurrencyAmountPassViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) PKEnterCurrencyAmountView * enterCurrencyAmountView;                  //@synthesize enterCurrencyAmountView=_enterCurrencyAmountView - In the implementation block
@property (nonatomic,readonly) PKEnterValueNewBalanceView * balanceView;                             //@synthesize balanceView=_balanceView - In the implementation block
-(id<PKEnterCurrencyAmountPassViewDelegate>)delegate;
-(void)setDelegate:(id<PKEnterCurrencyAmountPassViewDelegate>)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(PKPass *)pass;
-(void)layoutSubviews;
-(void)setPass:(PKPass *)arg1 ;
-(double)_topPadding;
-(id)initWithCurrenyAmount:(id)arg1 pass:(id)arg2 ;
-(CGSize)_passViewSize;
-(id)initWithCurrenyAmount:(id)arg1 ;
-(void)shakePassView;
-(PKEnterCurrencyAmountView *)enterCurrencyAmountView;
-(PKEnterValueNewBalanceView *)balanceView;
@end

