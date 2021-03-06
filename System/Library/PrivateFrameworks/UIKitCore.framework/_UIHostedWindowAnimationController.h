/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:03 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UIWindowAnimationController.h>

@interface _UIHostedWindowAnimationController : _UIWindowAnimationController {

	/*^block*/id _transitionActions;
	double _duration;

}

@property (nonatomic,copy) id transitionActions;              //@synthesize transitionActions=_transitionActions - In the implementation block
@property (assign,nonatomic) double duration;                 //@synthesize duration=_duration - In the implementation block
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(void)setTransitionActions:(id)arg1 ;
-(id)transitionActions;
@end

