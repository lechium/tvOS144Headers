/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:48 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CAAnimationDelegate.h>

@class CAStateController, CALayer, CAStateTransition, NSString, NSMutableArray;

@interface CAStateControllerTransition : NSObject <CAAnimationDelegate> {

	CAStateController* _controller;
	CALayer* _layer;
	CAStateTransition* _transition;
	double _beginTime;
	double _duration;
	float _speed;
	NSString* _masterKey;
	NSMutableArray* _animations;

}

@property (nonatomic,readonly) CALayer * layer;                             //@synthesize layer=_layer - In the implementation block
@property (nonatomic,readonly) CAStateTransition * transition;              //@synthesize transition=_transition - In the implementation block
@property (nonatomic,readonly) double beginTime;                            //@synthesize beginTime=_beginTime - In the implementation block
@property (nonatomic,readonly) double duration;                             //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) float speed;                                 //@synthesize speed=_speed - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(double)duration;
-(float)speed;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)addAnimation:(id)arg1 ;
-(void)removeAnimationFromLayer:(id)arg1 forKey:(id)arg2 ;
-(CALayer *)layer;
-(CAStateTransition *)transition;
-(double)beginTime;
@end

