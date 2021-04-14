/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:19 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/VFX.framework/VFX
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VFX/VFX-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor;

@interface VFXCore.VFXCoreView : UIView {

	 displayClockHandle;
	 renderTargetHandle;
	 metalLayer;
	 colorPixelFormat;
	 depthStencilPixelFormat;
	 sampleCount;
	 entityManager;
	 paused;
	 sizeDirty;
	 drawableSize;
	 isTicking;
	 _currentDrawable;

}

@property (assign,nonatomic) CGRect frame; 
@property (retain,nonatomic) UIColor * backgroundColor; 
+(Class)layerClass;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(CGRect)frame;
-(void)setFrame:(CGRect)arg1 ;
-(UIColor *)backgroundColor;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)didMoveToWindow;
@end
