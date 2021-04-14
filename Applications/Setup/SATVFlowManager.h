//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TVSKStepDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, SATVFlowProvider, SATVMetricsController, SATVUIFlowController, TVSKNavigationController, TVSKSetupSession, TVSStateMachine;
@protocol TVSKStep;

@interface SATVFlowManager : NSObject <TVSKStepDelegate, UINavigationControllerDelegate>
{
    _Bool _isTouchlessSetupTemporarilyDisabled;	// 8 = 0x8
    TVSKNavigationController *_navigationController;	// 16 = 0x10
    SATVUIFlowController *_uiFlowController;	// 24 = 0x18
    SATVFlowProvider *_flowProvider;	// 32 = 0x20
    NSMutableArray *_executedStepClasses;	// 40 = 0x28
    NSMutableDictionary *_executedStepByIdentifier;	// 48 = 0x30
    NSMutableDictionary *_stepExecutionRecordByIdentifier;	// 56 = 0x38
    SATVMetricsController *_metricsController;	// 64 = 0x40
    CDUnknownBlockType _completionHandler;	// 72 = 0x48
    NSArray *_stepClasses;	// 80 = 0x50
    NSDictionary *_prefetchStepByIdentifier;	// 88 = 0x58
    TVSStateMachine *_stateMachine;	// 96 = 0x60
    id <TVSKStep> _activeStep;	// 104 = 0x68
    TVSKSetupSession *_setupSession;	// 112 = 0x70
}

+ (id)_stepExecutionRecordFromDefaultsForStepIdentifier:(id)arg1;	// IMP=0x000000010007db2c
+ (void)initialize;	// IMP=0x000000010007ada4
- (void).cxx_destruct;	// IMP=0x000000010007de90
@property(retain, nonatomic) TVSKSetupSession *setupSession; // @synthesize setupSession=_setupSession;
@property(nonatomic) _Bool isTouchlessSetupTemporarilyDisabled; // @synthesize isTouchlessSetupTemporarilyDisabled=_isTouchlessSetupTemporarilyDisabled;
@property(retain, nonatomic) id <TVSKStep> activeStep; // @synthesize activeStep=_activeStep;
@property(retain, nonatomic) TVSStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(readonly, copy, nonatomic) NSDictionary *prefetchStepByIdentifier; // @synthesize prefetchStepByIdentifier=_prefetchStepByIdentifier;
@property(readonly, copy, nonatomic) NSArray *stepClasses; // @synthesize stepClasses=_stepClasses;
@property(readonly, copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, nonatomic) SATVMetricsController *metricsController; // @synthesize metricsController=_metricsController;
@property(readonly, nonatomic) NSMutableDictionary *stepExecutionRecordByIdentifier; // @synthesize stepExecutionRecordByIdentifier=_stepExecutionRecordByIdentifier;
@property(readonly, nonatomic) NSMutableDictionary *executedStepByIdentifier; // @synthesize executedStepByIdentifier=_executedStepByIdentifier;
@property(readonly, nonatomic) NSMutableArray *executedStepClasses; // @synthesize executedStepClasses=_executedStepClasses;
@property(readonly, nonatomic) SATVFlowProvider *flowProvider; // @synthesize flowProvider=_flowProvider;
@property(readonly, nonatomic) SATVUIFlowController *uiFlowController; // @synthesize uiFlowController=_uiFlowController;
@property(readonly, nonatomic) TVSKNavigationController *navigationController; // @synthesize navigationController=_navigationController;
- (void)_commitStepExecutionRecordsToDefaults;	// IMP=0x000000010007dc2c
- (void)_postFinishEvent;	// IMP=0x000000010007dae4
- (void)_handleStepResult:(id)arg1;	// IMP=0x000000010007d880
- (_Bool)_handleFlowOptions:(unsigned long long)arg1;	// IMP=0x000000010007d798
- (void)_processAndHandleCurrentStepForClass:(Class)arg1 withUserInfo:(id)arg2;	// IMP=0x000000010007d73c
- (void)_notifyPrefetchStepsForTriggersFromSet:(id)arg1 context:(id)arg2;	// IMP=0x000000010007d4a4
- (id)_stepContextForStepClass:(Class)arg1 withUserInfo:(id)arg2;	// IMP=0x000000010007d25c
- (void)_updateFlowStepsTillStep:(Class)arg1;	// IMP=0x000000010007d11c
- (void)_updateFlowForStep:(Class)arg1 withStepContext:(id)arg2;	// IMP=0x000000010007cb38
- (id)_stepInstanceForStepClass:(Class)arg1;	// IMP=0x000000010007c8f4
- (id)_nextState;	// IMP=0x000000010007c7c0
- (id)_previousState;	// IMP=0x000000010007c714
- (_Bool)_isActiveStep:(id)arg1;	// IMP=0x000000010007c6a8
- (void)_configureAndStartFlow;	// IMP=0x000000010007c62c
- (void)_registerStateMachineHandlers;	// IMP=0x000000010007b9d4
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;	// IMP=0x000000010007b7e0
- (void)didCancelStep:(id)arg1;	// IMP=0x000000010007b634
- (void)step:(id)arg1 triggerStatusDidChangeForTriggers:(id)arg2 context:(id)arg3;	// IMP=0x000000010007b4a8
- (void)step:(id)arg1 didCompleteWithResult:(id)arg2;	// IMP=0x000000010007b198
- (void)step:(id)arg1 displayViewController:(id)arg2;	// IMP=0x000000010007b0a8
- (id)initWithNavigationController:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010007ae08

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
