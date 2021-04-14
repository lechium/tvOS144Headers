/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:31 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RunningBoard/RunningBoard-Structs.h>
#import <libobjc.A.dylib/RBProcessMonitoring.h>
#import <libobjc.A.dylib/RBStateCapturing.h>

@protocol RBStateCaptureManaging, OS_dispatch_queue;
@class RBProcessIndex, RBProcessMap, NSCountedSet, NSMutableSet, NSSet, NSObject, NSString;

@interface RBProcessMonitor : NSObject <RBProcessMonitoring, RBStateCapturing> {

	RBProcessIndex* _processIndex;
	RBProcessMap* _stateMap;
	RBProcessMap* _suppressedState;
	RBProcessMap* _publishedState;
	NSCountedSet* _suppressedIdentities;
	os_unfair_lock_s _observersLock;
	NSMutableSet* _observers;
	id<RBStateCaptureManaging> _stateCaptureManager;
	NSSet* _preventLaunchPredicates;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> monitorSerializationQueue;              //@synthesize queue=_queue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * stateCaptureTitle; 
-(NSString *)description;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(id)captureState;
-(void)didUpdateProcessStates:(id)arg1 ;
-(void)removeStateForProcessIdentity:(id)arg1 ;
-(NSString *)stateCaptureTitle;
-(void)suppressUpdatesForIdentity:(id)arg1 ;
-(void)unsuppressUpdatesForIdentity:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)monitorSerializationQueue;
-(id)statesMatchingPredicate:(id)arg1 ;
-(id)preventLaunchPredicates;
-(void)didResolvePreventLaunchPredicates:(id)arg1 ;
-(id)statesMatchingConfiguration:(id)arg1 ;
-(void)didAddProcess:(id)arg1 withState:(id)arg2 ;
-(void)didRemoveProcess:(id)arg1 withState:(id)arg2 ;
-(void)trackStateForProcessIdentity:(id)arg1 ;
-(id)initWithStateCaptureManager:(id)arg1 ;
@end
