/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:19 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PassKitUI/PassKitUI-Structs.h>
@class _UIDynamicValueAnimation, PKPassGroupView, UIPanGestureRecognizer;

@interface PKPassGroupViewVerticalPanAnimator : NSObject {

	_UIDynamicValueAnimation* _panningAnimation;
	PKPassGroupView* _groupView;
	UIPanGestureRecognizer* _gestureRecognizer;
	double _panningViewTargetScale;
	CGPoint _panningViewStartPosition;
	CGPoint _panningViewTargetPosition;

}

@property (nonatomic,retain,readonly) PKPassGroupView * groupView;                    //@synthesize groupView=_groupView - In the implementation block
@property (nonatomic,retain) UIPanGestureRecognizer * gestureRecognizer;              //@synthesize gestureRecognizer=_gestureRecognizer - In the implementation block
@property (assign,nonatomic) CGPoint panningViewStartPosition;                        //@synthesize panningViewStartPosition=_panningViewStartPosition - In the implementation block
@property (assign,nonatomic) CGPoint panningViewTargetPosition;                       //@synthesize panningViewTargetPosition=_panningViewTargetPosition - In the implementation block
@property (assign,nonatomic) double panningViewTargetScale;                           //@synthesize panningViewTargetScale=_panningViewTargetScale - In the implementation block
-(id)init;
-(void)dealloc;
-(void)stop;
-(PKPassGroupView *)groupView;
-(UIPanGestureRecognizer *)gestureRecognizer;
-(void)setGestureRecognizer:(UIPanGestureRecognizer *)arg1 ;
-(id)initWithGroupView:(id)arg1 ;
-(CGPoint)panningViewStartPosition;
-(void)layoutViewsWithY:(double)arg1 ;
-(void)setPanningViewStartPosition:(CGPoint)arg1 ;
-(void)setPanningViewTargetPosition:(CGPoint)arg1 ;
-(void)setPanningViewTargetScale:(double)arg1 ;
-(void)dismissWithStartVelocity:(double)arg1 alongSideApplier:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(double)scaleForY:(double)arg1 ;
-(id)_dynamicAnimationWithStart:(double)arg1 target:(double)arg2 initialVelocity:(double)arg3 ;
-(CGPoint)panningViewTargetPosition;
-(double)panningViewTargetScale;
@end

