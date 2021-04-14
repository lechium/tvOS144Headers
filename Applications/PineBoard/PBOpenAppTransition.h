//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BaseBoard/BSTransaction.h>

#import "FBApplicationUpdateScenesTransactionObserver-Protocol.h"
#import "FBProcessManagerObserver-Protocol.h"

@class FBApplicationProcess, FBApplicationUpdateScenesTransaction, NSHashTable, NSString, PBOpenApplicationRequest, UIApplicationSceneDeactivationAssertion, _PBSceneLayoutManagementTransaction;

@interface PBOpenAppTransition : BSTransaction <FBApplicationUpdateScenesTransactionObserver, FBProcessManagerObserver>
{
    _Bool _coldLaunch;	// 8 = 0x8
    _Bool _shouldRunLayoutTransaction;	// 9 = 0x9
    _Bool _shouldDelaySceneActivation;	// 10 = 0xa
    PBOpenApplicationRequest *_openRequest;	// 16 = 0x10
    long long _transitionType;	// 24 = 0x18
    PBOpenApplicationRequest *_interruptingOpenAppRequest;	// 32 = 0x20
    FBApplicationUpdateScenesTransaction *_updateSceneTransaction;	// 40 = 0x28
    unsigned long long _deactivationReasonsUpdate;	// 48 = 0x30
    _PBSceneLayoutManagementTransaction *_sceneLayoutManagementTransaction;	// 56 = 0x38
    NSHashTable *_openAppObservers;	// 64 = 0x40
    CDUnknownBlockType _completion;	// 72 = 0x48
    UIApplicationSceneDeactivationAssertion *_transitionSceneDeactivationAssertion;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000001002532f0
@property(readonly, nonatomic) _Bool shouldDelaySceneActivation; // @synthesize shouldDelaySceneActivation=_shouldDelaySceneActivation;
@property(readonly, nonatomic) _Bool shouldRunLayoutTransaction; // @synthesize shouldRunLayoutTransaction=_shouldRunLayoutTransaction;
@property(readonly, nonatomic) UIApplicationSceneDeactivationAssertion *transitionSceneDeactivationAssertion; // @synthesize transitionSceneDeactivationAssertion=_transitionSceneDeactivationAssertion;
@property(readonly, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(readonly, nonatomic) NSHashTable *openAppObservers; // @synthesize openAppObservers=_openAppObservers;
@property(readonly, nonatomic) _PBSceneLayoutManagementTransaction *sceneLayoutManagementTransaction; // @synthesize sceneLayoutManagementTransaction=_sceneLayoutManagementTransaction;
@property(readonly, nonatomic) unsigned long long deactivationReasonsUpdate; // @synthesize deactivationReasonsUpdate=_deactivationReasonsUpdate;
@property(readonly, nonatomic) FBApplicationUpdateScenesTransaction *updateSceneTransaction; // @synthesize updateSceneTransaction=_updateSceneTransaction;
@property(retain, nonatomic) PBOpenApplicationRequest *interruptingOpenAppRequest; // @synthesize interruptingOpenAppRequest=_interruptingOpenAppRequest;
@property(readonly, nonatomic, getter=isColdLaunch) _Bool coldLaunch; // @synthesize coldLaunch=_coldLaunch;
@property(readonly, nonatomic) long long transitionType; // @synthesize transitionType=_transitionType;
@property(readonly, nonatomic) PBOpenApplicationRequest *openRequest; // @synthesize openRequest=_openRequest;
- (void)processManager:(id)arg1 didRemoveProcess:(id)arg2;	// IMP=0x0000000100252e60
- (void)processManager:(id)arg1 didAddProcess:(id)arg2;	// IMP=0x0000000100252de0
- (void)transaction:(id)arg1 willLaunchProcess:(id)arg2;	// IMP=0x00000001002529e4
- (_Bool)_canPerformAppLaunch:(id *)arg1;	// IMP=0x0000000100252234
- (void)_relinquishSystemAnimationDeactivationAssertion;	// IMP=0x000000010025208c
- (void)_beginSceneTransitionInTransaction:(id)arg1;	// IMP=0x0000000100250ea4
- (void)_beginSceneUpdateTransactionInTransaction:(id)arg1 withSchedulingPolicy:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100250458
- (void)_callFrontBoardCompletionIfNeededWithError:(id)arg1;	// IMP=0x000000010024fed0
- (void)_didComplete;	// IMP=0x000000010024fc44
- (_Bool)_shouldFailForChildTransaction:(id)arg1;	// IMP=0x000000010024fbe8
- (void)_begin;	// IMP=0x000000010024f3f0
- (_Bool)_canBeInterrupted;	// IMP=0x000000010024f35c
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (void)transferSceneDeactivationAssertionFromInterruptedTransition:(id)arg1;	// IMP=0x000000010024ee0c
- (void)removeObserver:(id)arg1;	// IMP=0x000000010024ed60
- (void)addObserver:(id)arg1;	// IMP=0x000000010024ecb4
@property(readonly, nonatomic, getter=isResigning) _Bool resigning;
@property(readonly, nonatomic, getter=isAnimating) _Bool animating;
@property(readonly, nonatomic) FBApplicationProcess *launchProcess;
- (void)dealloc;	// IMP=0x000000010024eb08
- (id)initWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010024dc44

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

