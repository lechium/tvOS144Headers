/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:47 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <FrontBoard/FrontBoard-Structs.h>
#import <libobjc.A.dylib/FBProcessBootstrapping.h>
#import <libobjc.A.dylib/FBSProcessInternal.h>
#import <libobjc.A.dylib/RBSProcessMatching.h>
#import <libobjc.A.dylib/FBSProcess.h>

@protocol FBProcessDelegate;
@class RBSProcessIdentity, BSProcessHandle, RBSProcessHandle, NSString, BSAuditToken, FBWorkspace, FBProcessExecutionContext, NSError, NSMutableSet, RBSAssertion, NSMutableArray, FBSApplicationInfo, FBProcessState, RBSProcessState, FBProcessCPUStatistics, FBSProcessTerminationRequest, FBProcessWatchdogEventContext, FBProcessWatchdog, FBSProcessWatchdogPolicy, FBSProcessExecutionProvision, FBProcessExitContext, RBSTarget, BSMachPortTaskNameRight;

@interface FBProcess : NSObject <FBProcessBootstrapping, FBSProcessInternal, RBSProcessMatching, FBSProcess> {

	int _pid;
	long long _versionedPID;
	RBSProcessIdentity* _identity;
	BSProcessHandle* _handle;
	RBSProcessHandle* _rbsHandle;
	NSString* _bundleIdentifier;
	NSString* _executablePath;
	BSAuditToken* _auditToken;
	FBWorkspace* _workspace;
	FBProcessExecutionContext* _executionContext;
	os_unfair_recursive_lock_s _lock;
	os_unfair_lock_s _observerLock;
	os_unfair_lock_s _bootstrapLock;
	NSString* _description;
	NSError* _bootstrapError;
	NSMutableSet* _observerLock_observers;
	RBSAssertion* _lock_continuousAssertion;
	RBSAssertion* _lock_gracefulExitAssertion;
	NSMutableArray* _lock_launchCompletionBlocks;
	FBSApplicationInfo* _lock_applicationInfo;
	FBProcessState* _lock_state;
	RBSProcessState* _lock_rbsState;
	unsigned char _lock_sceneState;
	FBProcessCPUStatistics* _lock_watchdogCPUStatistics;
	FBSProcessTerminationRequest* _lock_terminationRequest;
	FBProcessWatchdogEventContext* _lock_terminationWatchdogContext;
	long long _terminationReason;
	NSMutableArray* _lock_terminateRequestCompletionBlocks;
	FBProcessWatchdog* _lock_watchdog;
	FBSProcessWatchdogPolicy* _sceneCreateWatchdogPolicy;
	FBSProcessExecutionProvision* _lock_latestViolatedProvision;
	BOOL _lock_pendingExit;
	BOOL _lock_invalidated;
	BOOL _lock_attemptedBootstrap;
	BOOL _lock_waitForDebugger;
	BOOL _lock_updatingState;
	BOOL _lock_didExit;
	BOOL _lock_launchFinalized;
	BOOL _lock_launchSuccess;
	BOOL _lock_submittedLaunchRequest;
	long long _lock_executableLivesOnSystemPartition;
	long long _lock_platformBinary;
	long long _lock_backgroundingPolicy;
	BOOL _calloutQueue_sentDidExit;
	BOOL _calloutQueue_sentAppWillLaunch;
	BOOL _calloutQueue_sentAppDidLaunch;
	id<FBProcessDelegate> _lock_delegate;
	FBProcessExitContext* _lock_exitContext;
	double _execTime;
	RBSTarget* _target;

}

@property (nonatomic,readonly) BOOL executableLivesOnSystemPartition; 
@property (getter=isPlatformBinary,nonatomic,readonly) BOOL platformBinary; 
@property (nonatomic,readonly) double execTime;                                                //@synthesize execTime=_execTime - In the implementation block
@property (nonatomic,readonly) RBSTarget * target;                                             //@synthesize target=_target - In the implementation block
@property (nonatomic,readonly) RBSProcessHandle * rbsHandle;                                   //@synthesize rbsHandle=_rbsHandle - In the implementation block
@property (nonatomic,readonly) BSAuditToken * auditToken;                                      //@synthesize auditToken=_auditToken - In the implementation block
@property (nonatomic,__weak,readonly) id<FBProcessDelegate> delegate;                          //@synthesize lock_delegate=_lock_delegate - In the implementation block
@property (nonatomic,readonly) unsigned char assertionState; 
@property (nonatomic,readonly) FBWorkspace * workspace;                                        //@synthesize workspace=_workspace - In the implementation block
@property (nonatomic,readonly) BSProcessHandle * handle;                                       //@synthesize handle=_handle - In the implementation block
@property (nonatomic,readonly) RBSProcessIdentity * identity;                                  //@synthesize identity=_identity - In the implementation block
@property (nonatomic,readonly) FBSApplicationInfo * applicationInfo;                           //@synthesize lock_applicationInfo=_lock_applicationInfo - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleIdentifier;                               //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * executablePath;                                 //@synthesize executablePath=_executablePath - In the implementation block
@property (nonatomic,copy,readonly) FBProcessExecutionContext * executionContext;              //@synthesize executionContext=_executionContext - In the implementation block
@property (nonatomic,readonly) FBProcessExitContext * exitContext;                             //@synthesize lock_exitContext=_lock_exitContext - In the implementation block
@property (nonatomic,copy,readonly) FBProcessState * state; 
@property (nonatomic,readonly) int pid;                                                        //@synthesize pid=_pid - In the implementation block
@property (nonatomic,readonly) long long versionedPID;                                         //@synthesize versionedPID=_versionedPID - In the implementation block
@property (getter=isRunning,nonatomic,readonly) BOOL running; 
@property (getter=isForeground,nonatomic,readonly) BOOL foreground; 
@property (getter=isBeingDebugged,nonatomic,readonly) BOOL beingDebugged; 
@property (getter=isCurrentProcess,nonatomic,readonly) BOOL currentProcess; 
@property (getter=isFinishedLaunching,nonatomic,readonly) BOOL finishedLaunching; 
@property (getter=isPendingExit,nonatomic,readonly) BOOL pendingExit; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,retain,readonly) BSMachPortTaskNameRight * taskNameRight; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)calloutQueue;
-(NSString *)name;
-(NSString *)debugDescription;
-(NSString *)description;
-(id)init;
-(void)dealloc;
-(BSProcessHandle *)handle;
-(void)invalidate;
-(id<FBProcessDelegate>)delegate;
-(id)_observers;
-(RBSTarget *)target;
-(FBProcessState *)state;
-(RBSProcessIdentity *)identity;
-(NSString *)bundleIdentifier;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(BSAuditToken *)auditToken;
-(NSString *)executablePath;
-(BOOL)isRunning;
-(long long)visibility;
-(id)valueForEntitlement:(id)arg1 ;
-(int)pid;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(BOOL)hasEntitlement:(id)arg1 ;
-(BSMachPortTaskNameRight *)taskNameRight;
-(id)initWithHandle:(id)arg1 ;
-(long long)versionedPID;
-(long long)taskState;
-(BOOL)matchesProcess:(id)arg1 ;
-(BOOL)isForeground;
-(void)_watchdogStarted:(id)arg1 ;
-(void)_watchdogStopped:(id)arg1 ;
-(BOOL)_watchdog:(id)arg1 shouldTerminateWithDeclineReason:(out id*)arg2 ;
-(id)_watchdog:(id)arg1 terminationRequestForViolatedProvision:(id)arg2 error:(id)arg3 ;
-(void)_terminateWithRequest:(id)arg1 forWatchdog:(id)arg2 ;
-(RBSProcessHandle *)rbsHandle;
-(unsigned char)assertionState;
-(FBProcessExecutionContext *)executionContext;
-(FBWorkspace *)workspace;
-(BOOL)isApplicationProcess;
-(id)_watchdogProvider;
-(void)_finishInit;
-(BOOL)isExtensionProcess;
-(BOOL)isPendingExit;
-(BOOL)isCurrentProcess;
-(void)_noteAssertionStateDidChange;
-(void)_setSceneLifecycleState:(unsigned char)arg1 ;
-(void)_notePendingExitForReason:(id)arg1 ;
-(void)_noteLaunchDidComplete;
-(void)_launchDidComplete:(BOOL)arg1 finalizeBlock:(/*^block*/id)arg2 ;
-(void)_processDidExitWithContext:(id)arg1 ;
-(FBProcessExitContext *)exitContext;
-(id)_initWithHandle:(id)arg1 identity:(id)arg2 executionContext:(id)arg3 ;
-(void)_configureIntrinsicsFromHandle:(id)arg1 ;
-(BOOL)isFinishedLaunching;
-(void)_bootstrapAndExec;
-(FBSApplicationInfo *)applicationInfo;
-(id)_createBootstrapContext;
-(void)_rebuildState:(id)arg1 ;
-(void)_updateStateWithBlock:(/*^block*/id)arg1 ;
-(BOOL)_startWatchdogTimerForContext:(id)arg1 ;
-(void)_bootstrapDidComplete;
-(void)_noteProcessDidExit:(id)arg1 ;
-(void)_rebuildState;
-(BOOL)isPlatformBinary;
-(id)_newWatchdogForContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)isBeingDebugged;
-(void)_lock_consumeLock_performGracefulKill;
-(void)_lock_consumeLock_executeTerminationRequest;
-(void)_terminateWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(long long)_watchdogReportType;
-(BOOL)_shouldWatchdogWithDeclineReason:(id*)arg1 ;
-(void)bootstrapWithDelegate:(id)arg1 ;
-(id)processPredicate;
-(id)initWithIdentity:(id)arg1 executionContext:(id)arg2 ;
-(BOOL)finishedLaunching;
-(void)bootstrapLock:(/*^block*/id)arg1 ;
-(void)noteProcessPublished;
-(BOOL)executableLivesOnSystemPartition;
-(void)_executeBlockAfterLaunchCompletes:(/*^block*/id)arg1 ;
-(BOOL)_wantsStateUpdates;
-(void)_noteStateDidUpdate:(id)arg1 ;
-(void)_killForReason:(long long)arg1 andReport:(BOOL)arg2 withDescription:(id)arg3 completion:(/*^block*/id)arg4 ;
-(double)execTime;
-(BOOL)isSystemApplicationProcess;
@end

