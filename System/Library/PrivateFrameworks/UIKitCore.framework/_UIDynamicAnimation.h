/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:55 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <UIKitCore/UIKitCore-Structs.h>
@interface _UIDynamicAnimation : NSObject {

	/*^block*/id _completion;
	int _state;
	unsigned _began : 1;
	unsigned _running : 1;
	unsigned _completing : 1;
	unsigned _yield : 1;
	unsigned _grouped : 1;
	unsigned _usesNSTimer : 1;

}

@property (nonatomic,readonly) int state; 
+(void)_updateAnimations:(id)arg1 timer:(id)arg2 ;
+(void)_updateAnimations:(id)arg1 ;
+(void)_updateAnimationsWithTimer:(id)arg1 ;
+(id)dynamicAnimationForView:(id)arg1 withInitialValue:(double)arg2 velocity:(double)arg3 type:(int)arg4 anchorPoint:(CGPoint)arg5 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(int)state;
-(void)stop;
-(BOOL)_isRunning;
-(void)_appendDescriptionToString:(id)arg1 atLevel:(int)arg2 ;
-(void)runWithCompletion:(/*^block*/id)arg1 ;
-(void)_completeWithFinished:(BOOL)arg1 ;
-(BOOL)_usesNSTimer;
-(BOOL)_animateForInterval:(double)arg1 ;
-(void)runWithCompletion:(/*^block*/id)arg1 forScreen:(id)arg2 runLoopMode:(id)arg3 ;
-(void)_stopAnimation;
-(void)_appendSubclassDescription:(id)arg1 atLevel:(int)arg2 ;
-(void)_callAppliers:(/*^block*/id)arg1 additionalEndAppliers:(/*^block*/id)arg2 done:(BOOL)arg3 ;
-(void)_cancelWithAppliers:(/*^block*/id)arg1 ;
-(BOOL)_shouldYield;
-(void)_setShouldYield:(BOOL)arg1 ;
-(void)_setUsesNSTimer:(BOOL)arg1 ;
-(BOOL)_isGrouped;
-(void)_setGrouped:(BOOL)arg1 ;
@end

