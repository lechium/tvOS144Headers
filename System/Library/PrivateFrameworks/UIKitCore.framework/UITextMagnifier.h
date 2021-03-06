/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:56 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@protocol UITextInput;
@class UIView, UIResponder, UITextMagnifierTimeWeightedPoint;

@interface UITextMagnifier : UIView {

	UIView* _target;
	CGPoint _magnificationPoint;
	CGPoint _animationPoint;
	CGPoint _terminalPoint;
	BOOL _terminalPointPlacedCarefully;
	UIResponder*<UITextInput> _text;
	UITextMagnifierTimeWeightedPoint* _weightedPoint;
	UIView* _magnifierRenderer;
	UIView* _autoscrollRenderer;
	int _autoscrollDirections;
	BOOL _isAnimating;
	long long _delayedAnimationType;

}

@property (nonatomic,retain) UIView * target;                                    //@synthesize target=_target - In the implementation block
@property (nonatomic,retain) UIResponder*<UITextInput> text;                     //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) CGPoint magnificationPoint;                         //@synthesize magnificationPoint=_magnificationPoint - In the implementation block
@property (assign,nonatomic) CGPoint animationPoint;                             //@synthesize animationPoint=_animationPoint - In the implementation block
@property (nonatomic,readonly) CGPoint terminalPoint;                            //@synthesize terminalPoint=_terminalPoint - In the implementation block
@property (nonatomic,readonly) BOOL terminalPointPlacedCarefully;                //@synthesize terminalPointPlacedCarefully=_terminalPointPlacedCarefully - In the implementation block
@property (nonatomic,readonly) BOOL isHorizontal; 
@property (nonatomic,readonly) double offsetFromMagnificationPoint; 
+(Class)renderClass;
-(void)setTarget:(UIView *)arg1 ;
-(UIView *)target;
-(void)remove;
-(UIResponder*<UITextInput>)text;
-(void)setText:(UIResponder*<UITextInput>)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setNeedsDisplay;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)isHorizontal;
-(void)autoscrollWillNotStart;
-(void)beginMagnifyingTarget:(id)arg1 text:(id)arg2 magnificationPoint:(CGPoint)arg3 offset:(CGPoint)arg4 animated:(BOOL)arg5 ;
-(void)setMagnificationPoint:(CGPoint)arg1 ;
-(void)stopMagnifying:(BOOL)arg1 ;
-(CGPoint)adjustMagnificationPoint:(CGPoint)arg1 ;
-(void)updateFrameAndOffset;
-(void)setToMagnifierRenderer;
-(void)animateToMagnifierRenderer;
-(void)animateToAutoscrollRenderer;
-(void)zoomDownAnimation;
-(void)zoomUpAnimation;
-(void)detectLostTouches:(id)arg1 ;
-(void)windowWillRotate:(id)arg1 ;
-(CGPoint)magnificationPoint;
-(CGPoint)terminalPoint;
-(BOOL)terminalPointPlacedCarefully;
-(void)postAutoscrollPoint:(CGPoint)arg1 ;
-(void)setAutoscrollDirections:(int)arg1 ;
-(void)beginZoomUpAnimation:(/*^block*/id)arg1 withDuration:(double)arg2 ;
-(void)beginZoomDownAnimation:(/*^block*/id)arg1 withDuration:(double)arg2 postponeHandler:(/*^block*/id)arg3 ;
-(double)offsetFromMagnificationPoint;
-(CGPoint)animationPoint;
-(void)setAnimationPoint:(CGPoint)arg1 ;
@end

