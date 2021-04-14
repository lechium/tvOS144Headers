/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:27 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VideosUI-Structs.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UIPanGestureRecognizer, UITapGestureRecognizer, UIView, NSString;

@interface VUINonFocusSwipeUpCapture : NSObject <UIGestureRecognizerDelegate> {

	UIPanGestureRecognizer* _gestureRecognizer;
	UITapGestureRecognizer* _tapGestureRecognizer;
	id _target;
	SEL _action;
	UIView* _initiallyFocusedView;
	CGPoint _translation;
	CGPoint _velocity;

}

@property (nonatomic,retain) UIPanGestureRecognizer * gestureRecognizer;                 //@synthesize gestureRecognizer=_gestureRecognizer - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tapGestureRecognizer;              //@synthesize tapGestureRecognizer=_tapGestureRecognizer - In the implementation block
@property (assign,nonatomic,__weak) id target;                                           //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) SEL action;                                                 //@synthesize action=_action - In the implementation block
@property (assign,nonatomic,__weak) UIView * initiallyFocusedView;                       //@synthesize initiallyFocusedView=_initiallyFocusedView - In the implementation block
@property (assign,nonatomic) CGPoint translation;                                        //@synthesize translation=_translation - In the implementation block
@property (assign,nonatomic) CGPoint velocity;                                           //@synthesize velocity=_velocity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setTarget:(id)arg1 ;
-(id)target;
-(SEL)action;
-(void)setAction:(SEL)arg1 ;
-(CGPoint)velocity;
-(void)setVelocity:(CGPoint)arg1 ;
-(CGPoint)translation;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setTranslation:(CGPoint)arg1 ;
-(UITapGestureRecognizer *)tapGestureRecognizer;
-(void)setTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(UIPanGestureRecognizer *)gestureRecognizer;
-(void)setGestureRecognizer:(UIPanGestureRecognizer *)arg1 ;
-(void)_onPan:(id)arg1 ;
-(void)_invoke;
-(void)_onTap:(id)arg1 ;
-(UIView *)initiallyFocusedView;
-(void)setInitiallyFocusedView:(UIView *)arg1 ;
@end

