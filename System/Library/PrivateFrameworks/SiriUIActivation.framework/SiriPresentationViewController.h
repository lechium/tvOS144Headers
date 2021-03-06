/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:12 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SiriUIActivation.framework/SiriUIActivation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriUIActivation/SiriUIActivation-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/SASStateChangeListener.h>
#import <libobjc.A.dylib/AFUISiriLanguageDelegate.h>
#import <libobjc.A.dylib/AFUISiriViewControllerDelegate.h>
#import <libobjc.A.dylib/AFUISiriViewControllerDataSource.h>
#import <libobjc.A.dylib/AFUISiriSetupViewControllerDelegate.h>
#import <SiriUIActivation/SiriPresentation.h>

@protocol OS_dispatch_queue, SiriPresentationControllerDelegate, SiriPresentationIntentUsageDelegate;
@class NSDate, AFRequestCompletionOptions, UIScreen, NSObject, BSServiceConnection, AFConnection, NSTimer, NSArray, AFWatchdogTimer, AFUISiriLanguage, AFUISiriViewController, AFUISiriSetupViewController, UINavigationController, AFQueue, NSString;

@interface SiriPresentationViewController : UIViewController <SASStateChangeListener, AFUISiriLanguageDelegate, AFUISiriViewControllerDelegate, AFUISiriViewControllerDataSource, AFUISiriSetupViewControllerDelegate, SiriPresentation> {

	InstrumentationDismissalState _instrumentationDismissalState;
	long long _identifier;
	BOOL _delaySessionEndForTTS;
	NSDate* _lastGuideCheck;
	AFRequestCompletionOptions* _completionOptions;
	UIScreen* _activeScreen;
	BOOL _activationHandled;
	BOOL _isIdleAndQuiet;
	/*^block*/id _buttonTrigger;
	BOOL _receivedIncomingPhoneCall;
	NSObject*<OS_dispatch_queue> _watchdogQueue;
	os_unfair_lock_s _dismissalProcessingLock;
	BOOL _isDismissing;
	/*^block*/id _dismissalCompletion;
	BOOL _springBoardIdleTimerDisabled;
	BOOL _waitingForTelephonyToStart;
	BOOL _startGuidedAccessOnDismissal;
	BOOL _wasScreenOffDuringActivation;
	BOOL _isVoiceActivationMaskShown;
	BOOL _buttonDownEventDidOccur;
	BOOL _shouldCancelWake;
	BOOL _predictedRecordRouteIsZLL;
	os_unfair_lock_s _lock;
	long long identifier;
	id<SiriPresentationControllerDelegate> siriPresentationControllerDelegate;
	BSServiceConnection* _connection;
	AFConnection* _unownedConnection;
	NSDate* _lastAppUpdateTimestamp;
	double _buttonDownTimestamp;
	NSTimer* _carSiriButtonHoldToTalkTimer;
	double _carSiriButtonTimeInterval;
	NSArray* _contextAppInfosForSiriViewController;
	NSArray* _currentCarPlaySupportedOEMAppIdList;
	NSArray* _starkAppBundleIdentifierContext;
	unsigned long long _currentLockState;
	AFWatchdogTimer* _animationDismissalTimer;
	AFUISiriLanguage* _language;
	id<SiriPresentationIntentUsageDelegate> _intentUsageDelegate;
	NSTimer* _clearSiriViewControllerTimer;
	long long _currentViewMode;
	NSTimer* _pongTimer;
	AFUISiriViewController* _siriViewController;
	AFUISiriSetupViewController* _siriSetupViewController;
	UINavigationController* _siriSetupNavigationController;
	AFQueue* _testInputQueue;
	CGRect _hostedPresentationFrame;

}

@property (nonatomic,retain) id<SiriPresentationIntentUsageDelegate> intentUsageDelegate; 
@property (assign,nonatomic) os_unfair_lock_s lock;                                                                                                             //@synthesize lock=_lock - In the implementation block
@property (nonatomic,retain) BSServiceConnection * connection;                                                                                                  //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic) CGRect hostedPresentationFrame;                                                                                                    //@synthesize hostedPresentationFrame=_hostedPresentationFrame - In the implementation block
@property (nonatomic,retain) AFConnection * unownedConnection;                                                                                                  //@synthesize unownedConnection=_unownedConnection - In the implementation block
@property (setter=_setLastAppUpdateTimestamp:,getter=_lastAppUpdateTimestamp,nonatomic,retain) NSDate * lastAppUpdateTimestamp;                                 //@synthesize lastAppUpdateTimestamp=_lastAppUpdateTimestamp - In the implementation block
@property (assign,setter=_setSpringBoardIdleTimerDisabled:,getter=_isSpringBoardIdleTimerDisabled,nonatomic) BOOL springBoardIdleTimerDisabled;                 //@synthesize springBoardIdleTimerDisabled=_springBoardIdleTimerDisabled - In the implementation block
@property (assign,setter=_setWaitingForTelephonyToStart:,getter=_isWaitingForTelephonyToStart,nonatomic) BOOL waitingForTelephonyToStart;                       //@synthesize waitingForTelephonyToStart=_waitingForTelephonyToStart - In the implementation block
@property (assign,setter=_setStartGuidedAccessOnDismissal:,getter=_startGuidedAccessOnDismissal,nonatomic) BOOL startGuidedAccessOnDismissal;                   //@synthesize startGuidedAccessOnDismissal=_startGuidedAccessOnDismissal - In the implementation block
@property (assign,setter=_setScreenOffDuringActivation:,getter=_wasScreenOffDuringActivation,nonatomic) BOOL wasScreenOffDuringActivation;                      //@synthesize wasScreenOffDuringActivation=_wasScreenOffDuringActivation - In the implementation block
@property (assign,setter=_setVoiceActivationMaskShown:,getter=_isVoiceActivationMaskShown,nonatomic) BOOL isVoiceActivationMaskShown;                           //@synthesize isVoiceActivationMaskShown=_isVoiceActivationMaskShown - In the implementation block
@property (assign,setter=_setButtonDownEventDidOccur:,getter=_buttonDownEventDidOccur,nonatomic) BOOL buttonDownEventDidOccur;                                  //@synthesize buttonDownEventDidOccur=_buttonDownEventDidOccur - In the implementation block
@property (assign,setter=_setButtonDownTimestamp:,getter=_buttonDownTimestamp,nonatomic) double buttonDownTimestamp;                                            //@synthesize buttonDownTimestamp=_buttonDownTimestamp - In the implementation block
@property (setter=_setCarSiriButtonHoldToTalkTimer:,getter=_carSiriButtonHoldToTalkTimer,nonatomic,retain) NSTimer * carSiriButtonHoldToTalkTimer;              //@synthesize carSiriButtonHoldToTalkTimer=_carSiriButtonHoldToTalkTimer - In the implementation block
@property (assign,setter=_setCarSiriButtonTimeInterval:,getter=_carSiriButtonTimeInterval,nonatomic) double carSiriButtonTimeInterval;                          //@synthesize carSiriButtonTimeInterval=_carSiriButtonTimeInterval - In the implementation block
@property (setter=_setShouldCancelWake:,getter=_shouldCancelWake) BOOL shouldCancelWake;                                                                        //@synthesize shouldCancelWake=_shouldCancelWake - In the implementation block
@property (nonatomic,retain) NSArray * contextAppInfosForSiriViewController;                                                                                    //@synthesize contextAppInfosForSiriViewController=_contextAppInfosForSiriViewController - In the implementation block
@property (nonatomic,retain) NSArray * currentCarPlaySupportedOEMAppIdList;                                                                                     //@synthesize currentCarPlaySupportedOEMAppIdList=_currentCarPlaySupportedOEMAppIdList - In the implementation block
@property (nonatomic,retain) NSArray * starkAppBundleIdentifierContext;                                                                                         //@synthesize starkAppBundleIdentifierContext=_starkAppBundleIdentifierContext - In the implementation block
@property (assign,nonatomic) BOOL predictedRecordRouteIsZLL;                                                                                                    //@synthesize predictedRecordRouteIsZLL=_predictedRecordRouteIsZLL - In the implementation block
@property (assign,nonatomic) unsigned long long currentLockState;                                                                                               //@synthesize currentLockState=_currentLockState - In the implementation block
@property (nonatomic,retain) AFWatchdogTimer * animationDismissalTimer;                                                                                         //@synthesize animationDismissalTimer=_animationDismissalTimer - In the implementation block
@property (getter=_language,nonatomic,readonly) AFUISiriLanguage * language;                                                                                    //@synthesize language=_language - In the implementation block
@property (nonatomic,retain) id<SiriPresentationIntentUsageDelegate> intentUsageDelegate;                                                                       //@synthesize intentUsageDelegate=_intentUsageDelegate - In the implementation block
@property (nonatomic,retain) NSTimer * clearSiriViewControllerTimer;                                                                                            //@synthesize clearSiriViewControllerTimer=_clearSiriViewControllerTimer - In the implementation block
@property (assign,nonatomic) long long currentViewMode;                                                                                                         //@synthesize currentViewMode=_currentViewMode - In the implementation block
@property (nonatomic,retain) NSTimer * pongTimer;                                                                                                               //@synthesize pongTimer=_pongTimer - In the implementation block
@property (nonatomic,retain) AFUISiriViewController * siriViewController;                                                                                       //@synthesize siriViewController=_siriViewController - In the implementation block
@property (nonatomic,retain) AFUISiriSetupViewController * siriSetupViewController;                                                                             //@synthesize siriSetupViewController=_siriSetupViewController - In the implementation block
@property (nonatomic,retain) UINavigationController * siriSetupNavigationController;                                                                            //@synthesize siriSetupNavigationController=_siriSetupNavigationController - In the implementation block
@property (getter=_testInputQueue,nonatomic,copy) AFQueue * testInputQueue;                                                                                     //@synthesize testInputQueue=_testInputQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long identifier; 
@property (assign,nonatomic,__weak) id<SiriPresentationControllerDelegate> siriPresentationControllerDelegate; 
+(id)extractTestingInputsFromContext:(id)arg1 ;
-(void)dealloc;
-(os_unfair_lock_s)lock;
-(void)invalidate;
-(long long)identifier;
-(id)initWithIdentifier:(long long)arg1 ;
-(oneway void)ping;
-(BOOL)isEnabled;
-(BSServiceConnection *)connection;
-(void)setConnection:(BSServiceConnection *)arg1 ;
-(void)dismiss;
-(unsigned long long)supportedInterfaceOrientations;
-(void)setLock:(os_unfair_lock_s)arg1 ;
-(id)_language;
-(oneway void)preheat;
-(void)viewWillLayoutSubviews;
-(BOOL)_canShowWhileLocked;
-(BOOL)shouldAutorotate;
-(id)_analytics;
-(void)siriLanguageSpokenLanguageCodeDidChange:(id)arg1 ;
-(void)extendCurrentTTSRequested;
-(void)siriSessionShouldExtendAudioSessionForImminentPhoneCall;
-(void)siriSessionShouldEndExtendAudioSessionForImminentPhoneCall;
-(void)dismissSiriViewController:(id)arg1 delayForTTS:(BOOL)arg2 withDismissalReason:(unsigned long long)arg3 ;
-(void)siriViewController:(id)arg1 voiceActivationMaskViewIsVisible:(BOOL)arg2 ;
-(void)siriViewControllerDidChangeVisibility:(id)arg1 ;
-(UIEdgeInsets)safeAreaInsetsForSceneCreationInSiriViewController:(id)arg1 ;
-(void)siriViewController:(id)arg1 didEncounterUnexpectedError:(id)arg2 ;
-(void)siriViewController:(id)arg1 updateHomeAffordanceForBlurVisibilty:(BOOL)arg2 ;
-(id)siriViewController:(id)arg1 bulletinWithIdentifier:(id)arg2 ;
-(unsigned long long)lockStateForSiriViewController:(id)arg1 ;
-(void)siriViewControllerDidFinishDismissing:(id)arg1 ;
-(void)startGuidedAccessForSiriViewController:(id)arg1 ;
-(void)userRelevantEventDidOccurInSiriViewController:(id)arg1 ;
-(void)siriViewController:(id)arg1 launchApplicationWithBundleIdentifier:(id)arg2 withURL:(id)arg3 launchOptions:(long long)arg4 replyHandler:(/*^block*/id)arg5 ;
-(void)siriViewController:(id)arg1 siriIdleAndQuietStatusDidChange:(BOOL)arg2 ;
-(void)siriViewController:(id)arg1 didReadBulletinWithIdentifier:(id)arg2 ;
-(void)siriViewController:(id)arg1 openURL:(id)arg2 delaySessionEndForTTS:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)siriViewController:(id)arg1 openURL:(id)arg2 appBundleID:(id)arg3 allowSiriDismissal:(BOOL)arg4 ;
-(void)siriViewController:(id)arg1 didChangePresentationPeekMode:(unsigned long long)arg2 ;
-(void)siriViewController:(id)arg1 requestsPresentation:(/*^block*/id)arg2 ;
-(void)siriViewController:(id)arg1 requestsDismissalWithReason:(unsigned long long)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)siriViewController:(id)arg1 presentedIntentWithBundleId:(id)arg2 ;
-(void)siriViewController:(id)arg1 didUpdateAudioCategoriesDisablingVolumeHUD:(id)arg2 ;
-(void)siriViewController:(id)arg1 didHideStatusView:(BOOL)arg2 ;
-(id)_uiPresentationIdentifier;
-(void)siriViewControllerSpeechRequestStartedFromSiriOrb;
-(void)siriViewControllerSpeechRequestCancelledFromSiriOrb;
-(id)siriViewController:(id)arg1 willStartRequestWithOptions:(id)arg2 ;
-(BOOL)predictedRecordRouteIsZLL;
-(BOOL)siriViewControllerShouldSupportTextInput:(id)arg1 ;
-(BOOL)siriViewControllerShouldEndSession:(id)arg1 ;
-(BOOL)siriViewController:(id)arg1 attemptUnlockWithPassword:(id)arg2 ;
-(id)bulletinsForSiriViewController:(id)arg1 ;
-(id)contextAppInfosForSiriViewController:(id)arg1 ;
-(id)currentCarPlaySupportedOEMAppsForSiriViewController:(id)arg1 ;
-(id)starkAppBundleIdentifierContextForSiriViewController:(id)arg1 ;
-(void)siriViewController:(id)arg1 willProcessAppLaunchWithBundleIdentifier:(id)arg2 ;
-(void)siriViewController:(id)arg1 failedToLaunchAppWithBundleIdentifier:(id)arg2 ;
-(void)siriViewControllerSessionDidResetContext:(id)arg1 ;
-(void)siriViewController:(id)arg1 didCompleteRequestWithError:(id)arg2 ;
-(void)setHostedPresentationFrame:(CGRect)arg1 ;
-(void)animatedAppearanceWithFactory:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)animatedDisappearanceWithFactory:(id)arg1 completion:(/*^block*/id)arg2 ;
-(oneway void)cancelTTS;
-(CGRect)hostedPresentationFrame;
-(void)dismissSiriSetupViewController:(id)arg1 ;
-(void)openSiriRequestedBySiriSetupViewController:(id)arg1 ;
-(void)disableSiriActivationRequestedBySiriSetupViewController:(id)arg1 ;
-(void)setPredictedRecordRouteIsZLL:(BOOL)arg1 ;
-(void)setCurrentLockState:(unsigned long long)arg1 ;
-(oneway void)presentationRequestedWithPresentationOptions:(id)arg1 requestOptions:(id)arg2 ;
-(oneway void)presentationDismissalRequestedWithOptions:(id)arg1 ;
-(oneway void)handleRequestWithOptions:(id)arg1 ;
-(BOOL)presentationisIdleAndQuiet;
-(oneway void)cancelPreheat;
-(oneway void)cancelPendingActivationEventWithReason:(id)arg1 ;
-(oneway void)wakeScreenAfterActivation;
-(oneway void)handleButtonDownFromButtonIdentifier:(id)arg1 timestamp:(id)arg2 ;
-(oneway void)handleButtonUpFromButtonIdentifier:(id)arg1 deviceIdentifier:(id)arg2 timestamp:(id)arg3 ;
-(oneway void)handleButtonTapFromButtonIdentifier:(id)arg1 ;
-(oneway void)handleButtonLongPressFromButtonIdentifier:(id)arg1 deviceIdentifier:(id)arg2 timestamp:(id)arg3 ;
-(oneway void)updateCurrentLockState:(id)arg1 ;
-(oneway void)updateActiveInterfaceOrientation:(id)arg1 willAnimationWithDuration:(id)arg2 ;
-(void)bulletinManagerDidChangeBulletins;
-(oneway void)deviceWonMyriadElection;
-(oneway void)pocketStateFetchDeterminedShouldCancelWake:(id)arg1 ;
-(void)callStateChangedToIsActive:(BOOL)arg1 isOutgoing:(BOOL)arg2 ;
-(NSArray *)contextAppInfosForSiriViewController;
-(void)setContextAppInfosForSiriViewController:(NSArray *)arg1 ;
-(unsigned long long)currentLockState;
-(NSArray *)currentCarPlaySupportedOEMAppIdList;
-(void)setCurrentCarPlaySupportedOEMAppIdList:(NSArray *)arg1 ;
-(double)_buttonDownTimestamp;
-(void)prewarmOrbViewShaders;
-(long long)preferredFlamesViewFidelity;
-(id)initWithIdentifier:(long long)arg1 hostedPresentationFrame:(CGRect)arg2 ;
-(id<SiriPresentationControllerDelegate>)siriPresentationControllerDelegate;
-(id)_updateRequestOptionsWithTestingInput:(id)arg1 ;
-(void)_logSignatureWithType:(id)arg1 subType:(id)arg2 context:(id)arg3 ;
-(void)_clearAllTestingInputs;
-(void)_enqueueTestInput:(id)arg1 ;
-(BOOL)_shouldShowSetupViewController;
-(void)_setButtonDownTimestamp:(double)arg1 ;
-(AFUISiriViewController *)siriViewController;
-(void)_updateLanguageCode;
-(void)_setShouldCancelWake:(BOOL)arg1 ;
-(void)_invalidateCarSiriButtonHoldToTalkTimer;
-(void)dismissWithOptions:(id)arg1 ;
-(BOOL)siriViewControllerConfigured;
-(void)_requestHomeAffordanceSuppression:(long long)arg1 ;
-(void)_setupPongTimer;
-(BOOL)_shouldPresentSiriViewControllerWithRequestOptions:(id)arg1 ;
-(void)_presentationRequestedWithPresentationOptions:(id)arg1 requestOptions:(id)arg2 ;
-(void)_setScreenOffDuringActivation:(BOOL)arg1 ;
-(void)_processIncomingRequestOptionsForTestingPayload:(id)arg1 ;
-(void)_showSetupViewControllerIfNecessary;
-(void)_removeSetupViewControllerIfNecessary;
-(void)_presentSiriViewControllerWithPresentationOptions:(id)arg1 requestOptions:(id)arg2 ;
-(BOOL)_wasScreenOffDuringActivation;
-(id)_fallbackScreenForIdentifier:(long long)arg1 ;
-(CGRect)_fallbackFrameForScreen:(id)arg1 withIdentifier:(long long)arg2 ;
-(void)_prepareSiriViewControllerWithRequestOptions:(id)arg1 ;
-(void)_activateWithRequestOptions:(id)arg1 ;
-(void)_presentationRequestedHandlerWithRequestOptions:(id)arg1 ;
-(id)_createPresentationPropertiesWithRequestOptions:(id)arg1 ;
-(void)activateWithRequestOptions:(id)arg1 ;
-(void)_updateHostedPresentationFrame;
-(id)_createSiriViewControllerWithRequestOptions:(id)arg1 ;
-(void)_dismissDueToUnexpectedError:(id)arg1 ;
-(void)_handleContextClearForRequestOptions:(id)arg1 ;
-(void)activateWithSource:(long long)arg1 requestOptions:(id)arg2 timestamp:(id)arg3 ;
-(void)_endDelayingSessionEndForTTS;
-(BOOL)_releaseExistingTrigger;
-(void)_setButtonDownEventDidOccur:(BOOL)arg1 ;
-(id)_updateDismissalOptionsIfNecessary:(id)arg1 ;
-(void)_presentationDismissalRequestedWithOptions:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(BOOL)_isDelayingSessionEnd;
-(void)_instrumentSuccessfulAppLaunchIfNecessary;
-(unsigned long long)_dismissalReasonForDismissalWithOptions:(id)arg1 ;
-(void)_logDismissalRequestedForViewMode:(long long)arg1 withDismissalReason:(unsigned long long)arg2 ;
-(void)_teardownPongTimer;
-(void)_wasDismissedWithCompletion:(/*^block*/id)arg1 ;
-(long long)currentViewMode;
-(void)startAnimationDismissalWatchdogTimerWithTimeoutHandler:(/*^block*/id)arg1 shouldTurnScreenOff:(BOOL)arg2 ;
-(void)stopAnimationDimissalWatchdogTimerIfNeededThen:(/*^block*/id)arg1 onQueue:(id)arg2 ;
-(void)_scheduleConnectionHouseKeepingAfterDelay:(double)arg1 ;
-(void)_setUpUnownedConnectionIfNecessary;
-(void)_cleanupUnownedConnection;
-(BOOL)_cancelPendingPhoneCall;
-(void)activateWithSource:(long long)arg1 timestamp:(id)arg2 ;
-(NSTimer *)clearSiriViewControllerTimer;
-(void)_setCarSiriButtonTimeInterval:(double)arg1 ;
-(void)_carSiriButtonHoldToTalkIntervalFiredWithButtonIdentifier:(long long)arg1 ;
-(void)_setCarSiriButtonHoldToTalkTimer:(id)arg1 ;
-(id)_carSiriButtonHoldToTalkTimer;
-(BOOL)_buttonIdentifierIsHoldToTalkTrigger:(long long)arg1 ;
-(BOOL)_handleTapButtonBehavior:(long long)arg1 ;
-(BOOL)_handleTapDismissal:(long long)arg1 ;
-(void)_dismissSiriSetup;
-(void)_requestDismissalWithOptions:(id)arg1 ;
-(double)_carSiriButtonTimeInterval;
-(void)_cancelPendingActivationWithReason:(unsigned long long)arg1 ;
-(void)_requestDismissal;
-(void)_setWaitingForTelephonyToStart:(BOOL)arg1 ;
-(void)_telephonyHasStarted;
-(long long)_viewModeForRequestOptions:(id)arg1 ;
-(BOOL)_shouldAllowResizingBetweenModesForViewMode:(long long)arg1 ;
-(void)_processConnectionHouseKeeping;
-(void)_finishClearingSiriViewController:(id)arg1 ;
-(void)setClearSiriViewControllerTimer:(NSTimer *)arg1 ;
-(void)setSiriViewController:(AFUISiriViewController *)arg1 ;
-(void)_enableSpringBoardIdleTimer;
-(void)setSiriSetupNavigationController:(UINavigationController *)arg1 ;
-(void)setSiriSetupViewController:(AFUISiriSetupViewController *)arg1 ;
-(void)_checkForGuideUpdatesIfNecessary;
-(void)_clearSiriViewControllerWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)_startGuidedAccessOnDismissal;
-(void)_setStartGuidedAccessOnDismissal:(BOOL)arg1 ;
-(BOOL)presentationHostedInSpringBoard;
-(void)_setSpringBoardIdleTimerDisabled:(BOOL)arg1 ;
-(void)_emitInstrumentationDismissalStateWithReason:(unsigned long long)arg1 ;
-(void)_resetStateForInstrumentation;
-(unsigned long long)_impliedDismissalReasonFromState;
-(void)_beginDelayingSessionEndForTTS;
-(BOOL)_hasTestingInput;
-(id)_dequeueTestingInput;
-(void)_openURL:(id)arg1 bundleId:(id)arg2 delaySessionEndForTTS:(BOOL)arg3 punchoutStyle:(long long)arg4 completion:(/*^block*/id)arg5 ;
-(id<SiriPresentationIntentUsageDelegate>)intentUsageDelegate;
-(void)_setVoiceActivationMaskShown:(BOOL)arg1 ;
-(NSArray *)starkAppBundleIdentifierContext;
-(BOOL)_isWaitingForTelephonyToStart;
-(void)_callIsActiveDidChangeNotification:(id)arg1 ;
-(void)_sendTelephonyHasStartedAfterDelay:(double)arg1 ;
-(void)_ttsQueueDidEmpty:(id)arg1 ;
-(UINavigationController *)siriSetupNavigationController;
-(void)_setupSiriViewControllerPresentedSuccessHandler;
-(void)_watchdogQueue_startAnimationDismissalWatchdogTimerWithTimeoutHandler:(/*^block*/id)arg1 shouldTurnScreenOff:(BOOL)arg2 ;
-(AFWatchdogTimer *)animationDismissalTimer;
-(void)setAnimationDismissalTimer:(AFWatchdogTimer *)arg1 ;
-(void)_watchdogQueue_stopAnimationDismissalWatchdogTimerIfNeededThen:(/*^block*/id)arg1 onQueue:(id)arg2 ;
-(BOOL)_shouldKeepPonging;
-(void)_waitForPing;
-(NSTimer *)pongTimer;
-(void)setPongTimer:(NSTimer *)arg1 ;
-(void)siriViewController:(id)arg1 onboardingScreenContinueButtonTappedWithRequestOptions:(id)arg2 ;
-(BOOL)siriSetupViewController:(id)arg1 openURL:(id)arg2 ;
-(void)setSiriPresentationControllerDelegate:(id<SiriPresentationControllerDelegate>)arg1 ;
-(void)_siriDidOpenURL:(id)arg1 ;
-(BOOL)_isDeviceButton:(long long)arg1 ;
-(void)_applicationsDidChange;
-(AFConnection *)unownedConnection;
-(void)setUnownedConnection:(AFConnection *)arg1 ;
-(id)_lastAppUpdateTimestamp;
-(void)_setLastAppUpdateTimestamp:(id)arg1 ;
-(BOOL)_isSpringBoardIdleTimerDisabled;
-(BOOL)_isVoiceActivationMaskShown;
-(BOOL)_buttonDownEventDidOccur;
-(BOOL)_shouldCancelWake;
-(void)setStarkAppBundleIdentifierContext:(NSArray *)arg1 ;
-(void)setIntentUsageDelegate:(id<SiriPresentationIntentUsageDelegate>)arg1 ;
-(void)setCurrentViewMode:(long long)arg1 ;
-(AFUISiriSetupViewController *)siriSetupViewController;
-(id)_testInputQueue;
-(void)setTestInputQueue:(AFQueue *)arg1 ;
-(void)_enableAudioInjection:(BOOL)arg1 audioFiles:(id)arg2 ;
-(void)_runSyntheticButtonActivationTest;
-(void)_startUIRequestWithText:(id)arg1 testName:(id)arg2 ;
-(void)_removePreviousConversationIfNeededWithTestName:(id)arg1 testOptions:(id)arg2 ;
-(void)_removePreviousInjectAudioSettings;
@end

