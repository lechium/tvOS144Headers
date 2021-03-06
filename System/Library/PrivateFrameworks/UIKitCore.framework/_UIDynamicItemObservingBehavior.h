/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:41 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIDynamicItemBehavior.h>

@interface _UIDynamicItemObservingBehavior : UIDynamicItemBehavior {

	BOOL _enabled;
	double _completionHandlerInvocationDelay;
	/*^block*/id _completionHandler;
	long long _frameCount;
	CGVector _targetVelocity;

}

@property (assign,nonatomic) BOOL enabled;                                         //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) long long frameCount;                                 //@synthesize frameCount=_frameCount - In the implementation block
@property (assign,nonatomic) CGVector targetVelocity;                              //@synthesize targetVelocity=_targetVelocity - In the implementation block
@property (assign,nonatomic) double completionHandlerInvocationDelay;              //@synthesize completionHandlerInvocationDelay=_completionHandlerInvocationDelay - In the implementation block
@property (nonatomic,copy) id completionHandler;                                   //@synthesize completionHandler=_completionHandler - In the implementation block
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(void)cancel;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(long long)frameCount;
-(void)setFrameCount:(long long)arg1 ;
-(void)willMoveToAnimator:(id)arg1 ;
-(CGVector)targetVelocity;
-(double)completionHandlerInvocationDelay;
-(void)setTargetVelocity:(CGVector)arg1 ;
-(void)setCompletionHandlerInvocationDelay:(double)arg1 ;
@end

