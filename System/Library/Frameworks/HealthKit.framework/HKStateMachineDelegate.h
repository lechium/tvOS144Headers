/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:10 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol HKStateMachineDelegate <NSObject>
@optional
-(void)stateMachine:(id)arg1 persistTransition:(id)arg2;
-(void)stateMachine:(id)arg1 didTransition:(id)arg2 fromState:(id)arg3 toState:(id)arg4 date:(id)arg5 error:(id)arg6;
-(void)stateMachine:(id)arg1 willEnterState:(id)arg2 date:(id)arg3 error:(id)arg4;
-(void)stateMachine:(id)arg1 didEnterState:(id)arg2 date:(id)arg3 error:(id)arg4;
-(void)stateMachine:(id)arg1 willLeaveState:(id)arg2 date:(id)arg3 error:(id)arg4;
-(void)stateMachine:(id)arg1 didLeaveState:(id)arg2 date:(id)arg3 error:(id)arg4;
-(void)stateMachine:(id)arg1 didIgnoreEvent:(long long)arg2 state:(id)arg3;

@end

