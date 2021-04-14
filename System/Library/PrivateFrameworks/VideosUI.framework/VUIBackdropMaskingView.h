/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:29 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class CAGradientLayer, VUIBackdropView;

@interface VUIBackdropMaskingView : UIView {

	CAGradientLayer* _gradientLayer;
	VUIBackdropView* _backdropView;
	double _gradientScale;
	double _gradientStop;

}

@property (nonatomic,retain) VUIBackdropView * backdropView;              //@synthesize backdropView=_backdropView - In the implementation block
@property (assign,nonatomic) double gradientScale;                        //@synthesize gradientScale=_gradientScale - In the implementation block
@property (assign,nonatomic) double gradientStop;                         //@synthesize gradientStop=_gradientStop - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(VUIBackdropView *)backdropView;
-(void)setBackdropView:(VUIBackdropView *)arg1 ;
-(double)gradientScale;
-(double)gradientStop;
-(void)setGradientScale:(double)arg1 ;
-(void)setGradientStop:(double)arg1 ;
@end

