/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:25 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>

@interface VUIProductView : UIView {

	BOOL _cardUIEnabled;
	double _cardInsets;

}

@property (assign,nonatomic) double cardInsets;               //@synthesize cardInsets=_cardInsets - In the implementation block
@property (assign,nonatomic) BOOL cardUIEnabled;              //@synthesize cardUIEnabled=_cardUIEnabled - In the implementation block
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)tv_setShowcaseFactor:(double)arg1 ;
-(void)setCardInsets:(double)arg1 ;
-(double)cardInsets;
-(BOOL)cardUIEnabled;
-(void)setCardUIEnabled:(BOOL)arg1 ;
@end

