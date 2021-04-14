/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:38 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <UIKitCore/UIButton.h>

@class UIView;

@interface MPButton : UIButton {

	unsigned _holding : 1;
	UIView* _hitTestDebugView;
	BOOL _hitTestDebugEnabled;
	double _holdDelayInterval;
	UIEdgeInsets _alignmentRectInsets;
	UIEdgeInsets _hitRectInsets;

}

@property (assign,nonatomic) UIEdgeInsets alignmentRectInsets;              //@synthesize alignmentRectInsets=_alignmentRectInsets - In the implementation block
@property (assign,nonatomic) UIEdgeInsets hitRectInsets;                    //@synthesize hitRectInsets=_hitRectInsets - In the implementation block
@property (assign,nonatomic) double holdDelayInterval;                      //@synthesize holdDelayInterval=_holdDelayInterval - In the implementation block
@property (getter=isHolding,nonatomic,readonly) BOOL holding; 
@property (assign,nonatomic) BOOL hitTestDebugEnabled;                      //@synthesize hitTestDebugEnabled=_hitTestDebugEnabled - In the implementation block
+(UIEdgeInsets)easyTouchDefaultHitRectInsets;
+(double)easyTouchDefaultCharge;
+(id)easyTouchButtonWithType:(long long)arg1 ;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIEdgeInsets)alignmentRectInsets;
-(void)setAlignmentRectInsets:(UIEdgeInsets)arg1 ;
-(void)layoutSubviews;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(UIEdgeInsets)hitRectInsets;
-(void)setHitRectInsets:(UIEdgeInsets)arg1 ;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(CGRect)hitRect;
-(BOOL)isHolding;
-(void)setHitTestDebugEnabled:(BOOL)arg1 ;
-(void)_delayedTriggerHold;
-(void)_handleTouchCancel;
-(void)_handleTouchDown;
-(void)_handleTouchUp;
-(double)holdDelayInterval;
-(void)setHoldDelayInterval:(double)arg1 ;
-(BOOL)hitTestDebugEnabled;
@end

