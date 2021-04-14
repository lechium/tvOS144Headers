/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:05 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary, GKState;

@interface GKStateMachine : NSObject {

	NSDictionary* _states;
	GKState* _currentState;

}

@property (nonatomic,readonly) GKState * currentState;              //@synthesize currentState=_currentState - In the implementation block
+(id)stateMachineWithStates:(id)arg1 ;
-(id)init;
-(GKState *)currentState;
-(BOOL)enterState:(Class)arg1 ;
-(void)updateWithDeltaTime:(double)arg1 ;
-(id)initWithStates:(id)arg1 ;
-(id)stateForClass:(Class)arg1 ;
-(BOOL)canEnterState:(Class)arg1 ;
-(void)forceEnterState:(Class)arg1 ;
-(id)_instanceData;
-(id)_dotStringInstanceData;
@end
