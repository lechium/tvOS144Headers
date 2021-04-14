/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:41 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class MNNavigationStateManager, MNLocationProviderCLParameters, MNNavigationTraceManager, MNSimulationLocationProvider;

@interface MNNavigationState : NSObject {

	double _locationUpdateInterval;
	double _suggestionUpdateFrequency;
	MNNavigationStateManager* _stateManager;

}

@property (nonatomic,__weak,readonly) MNNavigationStateManager * stateManager;                         //@synthesize stateManager=_stateManager - In the implementation block
@property (nonatomic,readonly) unsigned long long type; 
@property (nonatomic,readonly) BOOL requiresHighMemoryThreshold; 
@property (nonatomic,readonly) BOOL requiresLocationAccess; 
@property (nonatomic,readonly) unsigned long long desiredLocationProviderType; 
@property (nonatomic,readonly) MNLocationProviderCLParameters * clParameters; 
@property (nonatomic,readonly) BOOL shouldClearStoredRoutes; 
@property (nonatomic,readonly) double locationUpdateInterval;                                          //@synthesize locationUpdateInterval=_locationUpdateInterval - In the implementation block
@property (nonatomic,readonly) double suggestionUpdateFrequency;                                       //@synthesize suggestionUpdateFrequency=_suggestionUpdateFrequency - In the implementation block
@property (nonatomic,readonly) MNNavigationTraceManager * traceManager; 
@property (nonatomic,readonly) MNSimulationLocationProvider * simulationLocationProvider; 
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(unsigned long long)type;
-(void)enterState;
-(MNNavigationTraceManager *)traceManager;
-(MNNavigationStateManager *)stateManager;
-(MNSimulationLocationProvider *)simulationLocationProvider;
-(id)initWithStateManager:(id)arg1 ;
-(void)leaveState;
-(BOOL)requiresHighMemoryThreshold;
-(unsigned long long)desiredLocationProviderType;
-(MNLocationProviderCLParameters *)clParameters;
-(BOOL)shouldClearStoredRoutes;
-(void)preEnterState;
-(BOOL)requiresLocationAccess;
-(BOOL)_isSelectorValidForForwarding:(SEL)arg1 ;
-(double)locationUpdateInterval;
-(double)suggestionUpdateFrequency;
@end

