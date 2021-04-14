/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:31 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol RBProcessMonitoring <NSObject>
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> monitorSerializationQueue; 
@required
-(void)removeObserver:(id)arg1;
-(void)addObserver:(id)arg1;
-(void)didUpdateProcessStates:(id)arg1;
-(void)removeStateForProcessIdentity:(id)arg1;
-(void)suppressUpdatesForIdentity:(id)arg1;
-(void)unsuppressUpdatesForIdentity:(id)arg1;
-(NSObject*<OS_dispatch_queue>)monitorSerializationQueue;
-(id)statesMatchingPredicate:(id)arg1;
-(id)preventLaunchPredicates;
-(void)didResolvePreventLaunchPredicates:(id)arg1;
-(id)statesMatchingConfiguration:(id)arg1;
-(void)didAddProcess:(id)arg1 withState:(id)arg2;
-(void)didRemoveProcess:(id)arg1 withState:(id)arg2;
-(void)trackStateForProcessIdentity:(id)arg1;

@end

