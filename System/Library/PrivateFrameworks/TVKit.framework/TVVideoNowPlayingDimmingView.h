/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:27 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVKit/TVKit-Structs.h>
#import <UIKitCore/UIView.h>

@class TVProgressBarView, UIView, TVGradientView;

@interface TVVideoNowPlayingDimmingView : UIView {

	BOOL _dimsEntireBounds;
	BOOL _dimsWithGradient;
	double _dimmingAlpha;
	TVProgressBarView* _progressBarView;
	UIView* _flatBackdrop;
	TVGradientView* _gradientBackdrop;

}

@property (nonatomic,retain) UIView * flatBackdrop;                            //@synthesize flatBackdrop=_flatBackdrop - In the implementation block
@property (nonatomic,retain) TVGradientView * gradientBackdrop;                //@synthesize gradientBackdrop=_gradientBackdrop - In the implementation block
@property (assign,nonatomic) BOOL dimsEntireBounds;                            //@synthesize dimsEntireBounds=_dimsEntireBounds - In the implementation block
@property (assign,nonatomic) BOOL dimsWithGradient;                            //@synthesize dimsWithGradient=_dimsWithGradient - In the implementation block
@property (assign,nonatomic) double dimmingAlpha;                              //@synthesize dimmingAlpha=_dimmingAlpha - In the implementation block
@property (nonatomic,retain) TVProgressBarView * progressBarView;              //@synthesize progressBarView=_progressBarView - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDimsEntireBounds:(BOOL)arg1 ;
-(BOOL)dimsEntireBounds;
-(UIView *)flatBackdrop;
-(void)setFlatBackdrop:(UIView *)arg1 ;
-(TVGradientView *)gradientBackdrop;
-(void)setGradientBackdrop:(TVGradientView *)arg1 ;
-(double)dimmingAlpha;
-(void)setDimsWithGradient:(BOOL)arg1 ;
-(void)setDimmingAlpha:(double)arg1 ;
-(BOOL)dimsWithGradient;
-(TVProgressBarView *)progressBarView;
-(void)setProgressBarView:(TVProgressBarView *)arg1 ;
@end

