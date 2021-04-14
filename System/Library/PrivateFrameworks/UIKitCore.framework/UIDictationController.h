/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:34 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIDictationConnectionDelegate.h>
#import <UIKit/UIDictationConnectionTokenFilterProtocol.h>
#import <UIKit/UIAdaptivePresentationControllerDelegate.h>
#import <UIKitCore/_UIDictationPrivacySheetControllerDelegate.h>
#import <UIKitCore/_UITouchPhaseChangeDelegate.h>

@class UIDictationConnection, UIDictationConnectionPreferences, NSTimer, UIDictationStreamingOperations, NSString, CADisplayLink, _UIDictationTelephonyMonitor, NSDictionary, UITapGestureRecognizer, _UIVoiceCommandButtonTapGestureRecognizer, NSMutableArray, UIWindow, UIKeyboardInputMode, _UIDictationPrivacySheetController, NSArray, AFAnalyticsTurnBasedInstrumentationContext, NSNumber;

@interface UIDictationController : NSObject <UIDictationConnectionDelegate, UIDictationConnectionTokenFilterProtocol, UIAdaptivePresentationControllerDelegate, _UIDictationPrivacySheetControllerDelegate, _UITouchPhaseChangeDelegate> {

	UIDictationConnection* _dictationConnection;
	UIDictationConnectionPreferences* _preferences;
	NSTimer* _recordingLimitTimer;
	BOOL _connectionWasAlreadyAliveForStatisticsLogging;
	UIDictationStreamingOperations* _streamingOperations;
	NSString* _language;
	BOOL _recievingResults;
	BOOL _streamingAnimationActive;
	double _lastAnimationUpdateTimeStamp;
	/*^block*/id _finalResultsOperation;
	CADisplayLink* _streamingAnimationDisplayLink;
	BOOL cancelledByWaitingForLocalResults;
	long long _updatingDocument;
	BOOL _deferredCancellationRequested;
	BOOL _isOfflineMetricsSessionActive;
	BOOL _didUseOfflineDictation;
	long long _lastOfflineDictationMetricEvent;
	_UIDictationTelephonyMonitor* _monitor;
	NSString* _prefixTextForStart;
	NSString* _selectionTextForStart;
	NSString* _postfixTextForStart;
	BOOL _hasDictated;
	NSDictionary* _selectedAttributesForDictation;
	/*^block*/id _privacySheetDismissalHandler;
	int _dictationInputModeNotifierToken;
	long long _currentShortcutType;
	UITapGestureRecognizer* _hardwareShortcutRecognizer;
	_UIVoiceCommandButtonTapGestureRecognizer* _hardwareVoiceCommandKeyRecognizer;
	BOOL _prevForceDisplayOverridePlaceholder;
	BOOL _performingStreamingEditingOperation;
	BOOL _discardNextHypothesis;
	BOOL _hasPreheated;
	BOOL _logAppEnterBackground;
	BOOL _hasPostedInstrumentationDictationContext;
	BOOL _didToggleSoftwareKeyboardVisibleForDictation;
	BOOL _wantsAvailabilityMonitoringWhenAppActive;
	BOOL _selectionEndWasInitiallyAtParagraphBoundaryForAsyncDelegate;
	BOOL _selectionStartWasInitiallyAtParagraphBoundaryForAsyncDelegate;
	BOOL _localSpeechRecognitionForced;
	BOOL _secureOfflineOnlySpeechRecognition;
	BOOL _ignoreFinalizePhrases;
	BOOL _detectingUtterances;
	BOOL _finalizingRecognizedUtterance;
	BOOL _hasCheckedForLeadingSpaceOnce;
	BOOL _neededLeadingSpace;
	unsigned short _initialPreviousCharacterForAsyncDelegate;
	unsigned short _initialCharacterAfterSelectionForAsyncDelegate;
	NSString* _activationIdentifier;
	NSString* _smartLanguageSelectionOverrideLanguage;
	NSMutableArray* _pendingEdits;
	NSString* _previousHypothesis;
	NSString* _lastHypothesis;
	NSString* _targetHypothesis;
	UIWindow* _dictationPresenterWindow;
	unsigned long long _reasonType;
	NSString* _lastRecognitionText;
	id _lastCorrectionIdentifier;
	NSString* _interactionIdentifier;
	NSString* _lastMessageKeyboardLanguage;
	UIKeyboardInputMode* _currentInputModeForDictation;
	UIKeyboardInputMode* _keyboardInputModeToReturn;
	_UIDictationPrivacySheetController* _dictationPrivacySheetController;
	NSString* _detectedLanguage;
	NSArray* _dictationLanguages;
	NSString* _initialDictationLanguage;
	NSString* _fallbackDictationLanguage;
	unsigned long long _dictationSourceType;
	NSString* _currentKeyboardPrimaryLanguage;
	unsigned long long _stateHandler;
	NSString* _modelInfo;
	AFAnalyticsTurnBasedInstrumentationContext* _currentInstrumentationContext;
	NSRange _insertionRange;

}

@property (assign,nonatomic) BOOL hasPostedInstrumentationDictationContext;                                           //@synthesize hasPostedInstrumentationDictationContext=_hasPostedInstrumentationDictationContext - In the implementation block
@property (nonatomic,retain) _UIDictationPrivacySheetController * dictationPrivacySheetController;                    //@synthesize dictationPrivacySheetController=_dictationPrivacySheetController - In the implementation block
@property (assign,nonatomic) BOOL didToggleSoftwareKeyboardVisibleForDictation;                                       //@synthesize didToggleSoftwareKeyboardVisibleForDictation=_didToggleSoftwareKeyboardVisibleForDictation - In the implementation block
@property (assign,nonatomic) BOOL wantsAvailabilityMonitoringWhenAppActive;                                           //@synthesize wantsAvailabilityMonitoringWhenAppActive=_wantsAvailabilityMonitoringWhenAppActive - In the implementation block
@property (copy) NSString * smartLanguageSelectionOverrideLanguage;                                                   //@synthesize smartLanguageSelectionOverrideLanguage=_smartLanguageSelectionOverrideLanguage - In the implementation block
@property (nonatomic,copy) NSString * detectedLanguage;                                                               //@synthesize detectedLanguage=_detectedLanguage - In the implementation block
@property (nonatomic,retain) NSArray * dictationLanguages;                                                            //@synthesize dictationLanguages=_dictationLanguages - In the implementation block
@property (nonatomic,copy) NSString * initialDictationLanguage;                                                       //@synthesize initialDictationLanguage=_initialDictationLanguage - In the implementation block
@property (nonatomic,copy) NSString * fallbackDictationLanguage;                                                      //@synthesize fallbackDictationLanguage=_fallbackDictationLanguage - In the implementation block
@property (assign,nonatomic) unsigned long long dictationSourceType;                                                  //@synthesize dictationSourceType=_dictationSourceType - In the implementation block
@property (nonatomic,copy) NSString * currentKeyboardPrimaryLanguage;                                                 //@synthesize currentKeyboardPrimaryLanguage=_currentKeyboardPrimaryLanguage - In the implementation block
@property (assign,nonatomic) BOOL selectionEndWasInitiallyAtParagraphBoundaryForAsyncDelegate;                        //@synthesize selectionEndWasInitiallyAtParagraphBoundaryForAsyncDelegate=_selectionEndWasInitiallyAtParagraphBoundaryForAsyncDelegate - In the implementation block
@property (assign,nonatomic) BOOL selectionStartWasInitiallyAtParagraphBoundaryForAsyncDelegate;                      //@synthesize selectionStartWasInitiallyAtParagraphBoundaryForAsyncDelegate=_selectionStartWasInitiallyAtParagraphBoundaryForAsyncDelegate - In the implementation block
@property (assign,nonatomic) unsigned short initialPreviousCharacterForAsyncDelegate;                                 //@synthesize initialPreviousCharacterForAsyncDelegate=_initialPreviousCharacterForAsyncDelegate - In the implementation block
@property (assign,nonatomic) unsigned short initialCharacterAfterSelectionForAsyncDelegate;                           //@synthesize initialCharacterAfterSelectionForAsyncDelegate=_initialCharacterAfterSelectionForAsyncDelegate - In the implementation block
@property (assign,nonatomic) unsigned long long stateHandler;                                                         //@synthesize stateHandler=_stateHandler - In the implementation block
@property (assign,nonatomic) BOOL localSpeechRecognitionForced;                                                       //@synthesize localSpeechRecognitionForced=_localSpeechRecognitionForced - In the implementation block
@property (assign,nonatomic) BOOL secureOfflineOnlySpeechRecognition;                                                 //@synthesize secureOfflineOnlySpeechRecognition=_secureOfflineOnlySpeechRecognition - In the implementation block
@property (nonatomic,copy) NSString * modelInfo;                                                                      //@synthesize modelInfo=_modelInfo - In the implementation block
@property (assign,nonatomic) BOOL ignoreFinalizePhrases;                                                              //@synthesize ignoreFinalizePhrases=_ignoreFinalizePhrases - In the implementation block
@property (assign,getter=isDetectingUtterances,nonatomic) BOOL detectingUtterances;                                   //@synthesize detectingUtterances=_detectingUtterances - In the implementation block
@property (assign,getter=isFinalizingRecognizedUtterance,nonatomic) BOOL finalizingRecognizedUtterance;               //@synthesize finalizingRecognizedUtterance=_finalizingRecognizedUtterance - In the implementation block
@property (assign,nonatomic) BOOL hasCheckedForLeadingSpaceOnce;                                                      //@synthesize hasCheckedForLeadingSpaceOnce=_hasCheckedForLeadingSpaceOnce - In the implementation block
@property (assign,nonatomic) BOOL neededLeadingSpace;                                                                 //@synthesize neededLeadingSpace=_neededLeadingSpace - In the implementation block
@property (nonatomic,retain) AFAnalyticsTurnBasedInstrumentationContext * currentInstrumentationContext;              //@synthesize currentInstrumentationContext=_currentInstrumentationContext - In the implementation block
@property (nonatomic,copy) NSString * activationIdentifier;                                                           //@synthesize activationIdentifier=_activationIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableArray * pendingEdits;                                                           //@synthesize pendingEdits=_pendingEdits - In the implementation block
@property (assign,nonatomic) BOOL performingStreamingEditingOperation;                                                //@synthesize performingStreamingEditingOperation=_performingStreamingEditingOperation - In the implementation block
@property (nonatomic,copy) NSString * previousHypothesis;                                                             //@synthesize previousHypothesis=_previousHypothesis - In the implementation block
@property (nonatomic,copy) NSString * lastHypothesis;                                                                 //@synthesize lastHypothesis=_lastHypothesis - In the implementation block
@property (nonatomic,copy) NSString * targetHypothesis;                                                               //@synthesize targetHypothesis=_targetHypothesis - In the implementation block
@property (assign,nonatomic) BOOL discardNextHypothesis;                                                              //@synthesize discardNextHypothesis=_discardNextHypothesis - In the implementation block
@property (assign,nonatomic) NSRange insertionRange;                                                                  //@synthesize insertionRange=_insertionRange - In the implementation block
@property (assign,nonatomic) BOOL hasPreheated;                                                                       //@synthesize hasPreheated=_hasPreheated - In the implementation block
@property (nonatomic,retain) UIWindow * dictationPresenterWindow;                                                     //@synthesize dictationPresenterWindow=_dictationPresenterWindow - In the implementation block
@property (assign,nonatomic) unsigned long long reasonType;                                                           //@synthesize reasonType=_reasonType - In the implementation block
@property (nonatomic,copy) NSString * lastRecognitionText;                                                            //@synthesize lastRecognitionText=_lastRecognitionText - In the implementation block
@property (nonatomic,copy) id lastCorrectionIdentifier;                                                               //@synthesize lastCorrectionIdentifier=_lastCorrectionIdentifier - In the implementation block
@property (nonatomic,copy) NSString * interactionIdentifier;                                                          //@synthesize interactionIdentifier=_interactionIdentifier - In the implementation block
@property (nonatomic,copy) NSString * lastMessageKeyboardLanguage;                                                    //@synthesize lastMessageKeyboardLanguage=_lastMessageKeyboardLanguage - In the implementation block
@property (nonatomic,retain,readonly) NSNumber * dictationRequestOrigin; 
@property (assign,nonatomic) BOOL logAppEnterBackground;                                                              //@synthesize logAppEnterBackground=_logAppEnterBackground - In the implementation block
@property (nonatomic,retain) UIKeyboardInputMode * currentInputModeForDictation;                                      //@synthesize currentInputModeForDictation=_currentInputModeForDictation - In the implementation block
@property (nonatomic,retain) UIKeyboardInputMode * keyboardInputModeToReturn;                                         //@synthesize keyboardInputModeToReturn=_keyboardInputModeToReturn - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(BOOL)isRunning;
+(id)stringForState:(int)arg1 ;
+(id)activeInstance;
+(void)applicationWillResignActive;
+(void)applicationDidBecomeActive;
+(int)viewMode;
+(id)activeConnection;
+(BOOL)remoteCanDictateCurrentInputMode;
+(BOOL)fetchCurrentInputModeSupportsDictation;
+(BOOL)isDictationSearchBarButtonVisible;
+(void)keyboardWillChangeFromDelegate:(id)arg1 toDelegate:(id)arg2 ;
+(void)keyboardDidUpdateOnScreenStatus;
+(BOOL)dictationIsFunctional;
+(BOOL)usingServerManualEndpointingThreshold;
+(double)serverManualEndpointingThreshold;
+(id)activeSLSDictationLanguages;
+(BOOL)shouldPreferOnlineRecognition;
+(id)UIDictationStartStopReasonTypeDescription:(unsigned long long)arg1 ;
+(id)_dictationLog;
+(id)removeTextIfNeeded:(id)arg1 ;
+(id)whitelistedDictationDictionariesFromMetadataDictionaries:(id)arg1 ;
+(id)removeTextIfNeeded:(id)arg1 metadata:(id)arg2 ;
+(id)serializedInterpretationFromTokens:(id)arg1 transform:(CFStringRef)arg2 capitalization:(unsigned long long)arg3 ;
+(void)poppedLastStreamingOperation;
+(void)viewServiceDidBecomeActive;
+(void)viewServiceWillResignActive;
+(void)applicationDidEnterBackgroundNotification;
+(void)siriPreferencesChanged;
+(id)serializedInterpretationFromTokens:(id)arg1 transform:(CFStringRef)arg2 autocapitalization:(long long)arg3 capitalization:(unsigned long long)arg4 ;
+(id)serializedInterpretationFromTokens:(id)arg1 transform:(CFStringRef)arg2 ;
+(BOOL)checkTraitsSupportDictation:(id)arg1 ;
+(void)logCorrectionStatisticsForDelegate:(id)arg1 reason:(unsigned long long)arg2 ;
+(BOOL)isTextViewOnStarkScreen:(id)arg1 ;
+(BOOL)usingTypeAndTalk;
+(void)onDidBecomeActive;
+(void)onWillResignActive;
+(BOOL)_applicationIsActive;
+(id)slsDictationLanguages;
+(id)UIDictationLanguageSourceType:(unsigned long long)arg1 ;
+(int)UIDictationStartStopReasonToInstrumentationInvocationSourceType:(unsigned long long)arg1 ;
+(int)UIDictationStartStopReasonToInstrumentationDictationEndPointType:(unsigned long long)arg1 ;
+(void)instrumentationDictationAlternativesViewedWithInstrumentationContext:(id)arg1 alternatives:(id)arg2 dictationLanguage:(id)arg3 ;
+(id)streamingHypothesisForPhrases:(id)arg1 ;
+(void)updateLandingView;
+(BOOL)canShareDictationData;
+(id)arrayWithTextEntriesRemoved:(id)arg1 ;
+(id)dictionaryWithTextEntriesRemoved:(id)arg1 ;
+(id)textRelatedMetadataKeys;
+(id)whitelistedDictationMetadataKeys;
+(BOOL)shouldRemoveTextEntries;
+(BOOL)shouldRemoveTextEntries:(id)arg1 ;
+(id)whitelistedDictationDictionaryFromMetadata:(id)arg1 ;
+(id)UIDictationInstrumentaionLocalIdentifierWithLocalString:(id)arg1 ;
+(BOOL)shouldHideSelectionUIForTextView:(id)arg1 ;
+(BOOL)shouldHideCursorForTextView:(id)arg1 ;
+(BOOL)takesPressesBegan:(id)arg1 forTextView:(id)arg2 ;
+(BOOL)takesPressesChanged:(id)arg1 forTextView:(id)arg2 ;
+(BOOL)takesPressesEnded:(id)arg1 forTextView:(id)arg2 ;
+(BOOL)shouldDeleteBackwardInInputDelegate:(id)arg1 ;
+(BOOL)shouldInsertText:(id)arg1 inInputDelegate:(id)arg2 ;
+(id)serializedDictationPhrases:(id)arg1 ;
+(id)bestInterpretationForDictationResult:(id)arg1 ;
+(id)interpretation:(id)arg1 forPhraseIndex:(unsigned long long)arg2 isShiftLocked:(BOOL)arg3 autocapitalizationType:(long long)arg4 useServerCapitalization:(BOOL)arg5 ;
+(void)performOperations:(/*^block*/id)arg1 keyboardShifted:(BOOL)arg2 ;
+(BOOL)starkScreenExists;
+(BOOL)dictationInfoIsOnScreen;
+(void)didBeginEditingInTextView:(id)arg1 ;
+(void)logDictationString:(id)arg1 ;
+(id)stringForViewMode:(int)arg1 ;
+(void)instrumentationDictationAlternativeSelectedWithInstrumentationContext:(id)arg1 originalText:(id)arg2 replacementText:(id)arg3 replacementIndex:(unsigned long long)arg4 alternativesAvailableCount:(unsigned long long)arg5 dictationLanguage:(id)arg6 ;
-(id)init;
-(void)dealloc;
-(int)state;
-(void)setState:(int)arg1 ;
-(id)language;
-(void)setLanguage:(id)arg1 ;
-(void)presentationControllerDidDismiss:(id)arg1 ;
-(unsigned long long)reasonType;
-(void)setDictationLanguages:(NSArray *)arg1 ;
-(NSArray *)dictationLanguages;
-(void)dictationConnnectionDidChangeAvailability:(id)arg1 ;
-(void)dictationConnection:(id)arg1 didReceiveSearchResults:(id)arg2 recognizedText:(id)arg3 stable:(BOOL)arg4 final:(BOOL)arg5 ;
-(void)dictationConnection:(id)arg1 didBeginLocalRecognitionWithModelInfo:(id)arg2 ;
-(NSString *)interactionIdentifier;
-(void)setInteractionIdentifier:(NSString *)arg1 ;
-(void)startConnection;
-(void)preferencesChanged:(id)arg1 ;
-(void)setReasonType:(unsigned long long)arg1 ;
-(void)setModelInfo:(NSString *)arg1 ;
-(NSString *)modelInfo;
-(UIKeyboardInputMode *)keyboardInputModeToReturn;
-(void)setKeyboardInputModeToReturn:(UIKeyboardInputMode *)arg1 ;
-(void)startDictation;
-(void)stopDictation;
-(void)cancelDictation;
-(void)_updateFromSelectedTextRange:(id)arg1 withNewHypothesis:(id)arg2 ;
-(void)insertSerializedDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2 ;
-(void)_createDictationPresenterWindowIfNecessary;
-(void)setActivationIdentifier:(NSString *)arg1 ;
-(NSString *)activationIdentifier;
-(float)audioLevel;
-(id)dictationConnection;
-(void)_displayLinkFired:(id)arg1 ;
-(NSString *)detectedLanguage;
-(void)setDetectedLanguage:(NSString *)arg1 ;
-(BOOL)dictationEnabled;
-(void)dismissSoftwareKeyboardIfNeeded;
-(void)stopDictation:(BOOL)arg1 ;
-(void)showSoftwareKeyboardIfNeeded;
-(void)switchToDictationInputMode;
-(BOOL)dictationDisabledDueToTelephonyActivity;
-(BOOL)dictationSearchFieldUISupportsTraitCollection:(id)arg1 ;
-(BOOL)dictationSearchFieldUIEnabled;
-(void)stopHelpMessageDisplay;
-(BOOL)supportsInputMode:(id)arg1 error:(id*)arg2 ;
-(void)endSmartLanguageSelectionOverride;
-(void)startDictationForFileAtURL:(id)arg1 forInputModeIdentifier:(id)arg2 ;
-(UIKeyboardInputMode *)currentInputModeForDictation;
-(void)setCurrentInputModeForDictation:(UIKeyboardInputMode *)arg1 ;
-(void)switchToDictationLanguage:(id)arg1 ;
-(BOOL)smartLanguageSelectionOverridden;
-(NSString *)smartLanguageSelectionOverrideLanguage;
-(void)markKeyboardDidReset;
-(void)startHelpMessageDisplay;
-(void)markKeyboardDeleteMetricEvent;
-(void)markKeyboardInputMetricEvent;
-(void)switchToDictationInputModeWithTouch:(id)arg1 ;
-(NSString *)lastMessageKeyboardLanguage;
-(NSNumber *)dictationRequestOrigin;
-(void)dictationConnection:(id)arg1 updateOptions:(id)arg2 ;
-(void)dictationConnection:(id)arg1 didFailRecordingWithError:(id)arg2 ;
-(NSString *)lastHypothesis;
-(NSString *)currentKeyboardPrimaryLanguage;
-(void)dictationConnection:(id)arg1 didDetectLanguage:(id)arg2 ;
-(void)dictationConnectionWillStartRecording:(id)arg1 ;
-(void)dictationConnectionDidStartRecording:(id)arg1 ;
-(void)dictationConnection:(id)arg1 didStartRecordingWithOptions:(id)arg2 ;
-(void)dictationConnection:(id)arg1 didFailRecognitionWithError:(id)arg2 ;
-(void)dictationConnectionDidEndRecording:(id)arg1 ;
-(void)dictationConnectionDidCancel:(id)arg1 ;
-(CFStringRef)resultTransformForLanguageModel:(id)arg1 ;
-(id)dictationConnection:(id)arg1 willFilterTokensWithLanguageModel:(id)arg2 forFinalize:(BOOL)arg3 ;
-(BOOL)dictationConnection:(id)arg1 filterState:(id)arg2 shouldCheckpointAtToken:(id)arg3 ;
-(void)dictationConnection:(id)arg1 receivedInterpretation:(id)arg2 languageModel:(id)arg3 secureInput:(BOOL)arg4 ;
-(void)dictationConnection:(id)arg1 filterState:(id)arg2 processFilteredToken:(id)arg3 forFinalize:(BOOL)arg4 ;
-(void)dictationConnection:(id)arg1 didFilterTokensWithFilterState:(id)arg2 forFinalize:(BOOL)arg3 ;
-(void)dictationConnectionDidCancelIncompatibleLocalRecognizer:(id)arg1 ;
-(void)dictationConnection:(id)arg1 finalizePhrases:(id)arg2 languageModel:(id)arg3 correctionIdentifier:(id)arg4 secureInput:(BOOL)arg5 ;
-(void)dictationConnectionDidFinish:(id)arg1 ;
-(void)logDidAcceptReplacement:(id)arg1 replacementLanguageCode:(id)arg2 originalText:(id)arg3 correctionIdentifier:(id)arg4 interactionIdentifier:(id)arg5 ;
-(void)setPerformingStreamingEditingOperation:(BOOL)arg1 ;
-(void)dictationPrivacySheetControllerDidFinish:(id)arg1 ;
-(void)keyboardDismissed:(id)arg1 ;
-(void)keyboardInputModeChanged:(id)arg1 ;
-(id)dictationUIState;
-(BOOL)supportsDictationLanguage:(id)arg1 error:(id*)arg2 ;
-(id)connectionForStatisticsLogging;
-(void)logDidAcceptDictationResult:(id)arg1 reasonType:(unsigned long long)arg2 ;
-(void)releaseConnectionAfterStatisticsLogging;
-(void)stopAndCancelDictationWithReasonType:(unsigned long long)arg1 ;
-(id)streamingOperations;
-(void)setWantsAvailabilityMonitoringWhenAppActive:(BOOL)arg1 ;
-(void)releaseConnection;
-(void)prepareStartDictationKeyboardGesturesForDelegate:(id)arg1 ;
-(void)removeStartDictationKeyboardGestures;
-(void)_beginOfflineMetricsSession;
-(void)_endOfflineMetricsSession;
-(BOOL)performingStreamingEditingOperation;
-(void)_restartDictation;
-(void)setDiscardNextHypothesis:(BOOL)arg1 ;
-(BOOL)_shouldDeleteBackwardInInputDelegate:(id)arg1 ;
-(BOOL)_shouldInsertText:(id)arg1 inInputDelegate:(id)arg2 ;
-(BOOL)wantsAvailabilityMonitoringWhenAppActive;
-(void)_endEnableDictationPromptAnimated:(BOOL)arg1 ;
-(BOOL)logAppEnterBackground;
-(void)setLogAppEnterBackground:(BOOL)arg1 ;
-(BOOL)currentViewModeSupportsDictationMics;
-(BOOL)shouldUseDictationSearchFieldBehavior;
-(id)fieldIdentifierInputDelegate:(id)arg1 ;
-(BOOL)shouldOverrideManualEndpointing;
-(void)setupForDictationStart;
-(void)completeStartConnection;
-(void)_completeStartDictationWithContinuation:(/*^block*/id)arg1 ;
-(void)completeStartConnectionForFileAtURL:(id)arg1 forInputModeIdentifier:(id)arg2 ;
-(id)prefixTextForInputDelegate:(id)arg1 ;
-(id)postfixTextForInputDelegate:(id)arg1 ;
-(id)selectedTextForInputDelegate:(id)arg1 ;
-(NSString *)targetHypothesis;
-(void)setIgnoreFinalizePhrases:(BOOL)arg1 ;
-(void)_setFinalResultHandler:(/*^block*/id)arg1 ;
-(void)_runFinalizeOperation:(BOOL)arg1 ;
-(void)performIgnoringDocumentChanges:(/*^block*/id)arg1 ;
-(void)_stopStreamingAnimation;
-(void)setPendingEdits:(NSMutableArray *)arg1 ;
-(void)setLastHypothesis:(NSString *)arg1 ;
-(void)setTargetHypothesis:(NSString *)arg1 ;
-(void)endSessionIfNecessaryForTransitionFromState:(int)arg1 toState:(int)arg2 ;
-(void)_runFinalizeOperation;
-(void)releaseConnectionAfterDictationRequest;
-(BOOL)isRecievingResults;
-(void)_displaySecureContentsAsPlainText:(BOOL)arg1 afterDelay:(double)arg2 ;
-(void)clearTextFieldPlaceholder;
-(void)restoreTextFieldPlaceholder;
-(void)cancelRecordingLimitTimer;
-(void)stopDictationByTimer;
-(BOOL)_allowsMicsInSearchFieldForLanguageIdentifiers:(id)arg1 ;
-(void)setPreviousHypothesis:(NSString *)arg1 ;
-(void)setInsertionRange:(NSRange)arg1 ;
-(void)setLastRecognitionText:(NSString *)arg1 ;
-(void)setLastCorrectionIdentifier:(id)arg1 ;
-(id)languageCodeForAssistantLanguageCode:(id)arg1 ;
-(void)startRecordingLimitTimer;
-(void)setupForStreamingDictationStart;
-(void)setSelectionStartWasInitiallyAtParagraphBoundaryForAsyncDelegate:(BOOL)arg1 ;
-(void)setSelectionEndWasInitiallyAtParagraphBoundaryForAsyncDelegate:(BOOL)arg1 ;
-(void)setInitialPreviousCharacterForAsyncDelegate:(unsigned short)arg1 ;
-(void)setInitialCharacterAfterSelectionForAsyncDelegate:(unsigned short)arg1 ;
-(void)setLocalSpeechRecognitionForced:(BOOL)arg1 ;
-(void)setSecureOfflineOnlySpeechRecognition:(BOOL)arg1 ;
-(void)setCurrentInstrumentationContext:(AFAnalyticsTurnBasedInstrumentationContext *)arg1 ;
-(void)setHasPostedInstrumentationDictationContext:(BOOL)arg1 ;
-(void)setFallbackDictationLanguage:(NSString *)arg1 ;
-(void)setInitialDictationLanguage:(NSString *)arg1 ;
-(void)setCurrentKeyboardPrimaryLanguage:(NSString *)arg1 ;
-(void)setDictationSourceType:(unsigned long long)arg1 ;
-(NSString *)initialDictationLanguage;
-(unsigned long long)dictationSourceType;
-(void)_startDictation;
-(void)_markOfflineDictationInputMetricEvent;
-(void)overrideSmartLanguageSelection:(id)arg1 ;
-(void)switchToDictationInputModeWithTouch:(id)arg1 withKeyboardInputMode:(id)arg2 ;
-(BOOL)dataSharingDecided;
-(void)_beginEnableDictationPrompt;
-(BOOL)isFallingBackToMonolingualDictation;
-(void)setDictationInputMode:(id)arg1 ;
-(void)setDidToggleSoftwareKeyboardVisibleForDictation:(BOOL)arg1 ;
-(BOOL)didToggleSoftwareKeyboardVisibleForDictation;
-(BOOL)_systemLanguageSupportsDictation;
-(UIWindow *)dictationPresenterWindow;
-(void)setDictationPresenterWindow:(UIWindow *)arg1 ;
-(void)_presentAlertForDictationInputModeOfType:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(_UIDictationPrivacySheetController *)dictationPrivacySheetController;
-(void)_handlePrivacySheetDismissal;
-(void)setDictationInfoOnScreenNotifyKey:(BOOL)arg1 ;
-(void)_presentOptInAlertWithCompletion:(/*^block*/id)arg1 ;
-(void)_presentDataSharingOptInAlertWithCompletion:(/*^block*/id)arg1 ;
-(void)_presentPrivacySheetForType:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)presentAlertOfType:(long long)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)setDictationPrivacySheetController:(_UIDictationPrivacySheetController *)arg1 ;
-(BOOL)isIgnoringDocumentChanges;
-(NSString *)lastRecognitionText;
-(void)instrumentationDictationContextEmitInstrumentation;
-(id)_hypothesisRangeFromSelectionRange:(id)arg1 inputDelegate:(id)arg2 ;
-(id)_rangeByExtendingRange:(id)arg1 backward:(long long)arg2 forward:(long long)arg3 inputDelegate:(id)arg4 ;
-(NSRange)_getRangeOfString:(id)arg1 inDocumentText:(id)arg2 ;
-(void)_setupHypothesisAsFinalResults;
-(void)_startStreamingAnimations;
-(void)setLastMessageKeyboardLanguage:(NSString *)arg1 ;
-(BOOL)isFinalizingRecognizedUtterance;
-(void)instrumentationDictationTranscriptionMetadataEmitInstrumentationWithDictationResult:(id)arg1 ;
-(void)finalizeDictationRecognitionWithPhrases:(id)arg1 languageModel:(id)arg2 correctionIdentifier:(id)arg3 secureInput:(BOOL)arg4 finalResult:(BOOL)arg5 ;
-(void)finishDictationRecognitionWithPhrases:(id)arg1 languageModel:(id)arg2 correctionIdentifier:(id)arg3 secureInput:(BOOL)arg4 ;
-(NSMutableArray *)pendingEdits;
-(NSString *)previousHypothesis;
-(id)_getBestHypothesisRangeGivenHintRange:(id)arg1 inputDelegate:(id)arg2 hypothesisRange:(NSRange*)arg3 documentTextInRange:(id*)arg4 ;
-(BOOL)discardNextHypothesis;
-(void)setupToInsertResultForNewHypothesis:(id)arg1 ;
-(void)_deleteBackwardIntoText;
-(void)_clearExistingText;
-(/*^block*/id)dictationBlockForToken:(id)arg1 ;
-(id)_containingSearchBarForView:(id)arg1 ;
-(BOOL)hasPreheated;
-(void)setHasPreheated:(BOOL)arg1 ;
-(void)doubleTappedKey:(id)arg1 ;
-(void)updateDoubleTapShortcutWithPreference:(long long)arg1 ;
-(void)prepareDoubleTapShortcutGesture:(id)arg1 ;
-(void)prepareVoiceCommandSingleTapGesture:(id)arg1 ;
-(void)handleHardwareKeyboardGesture;
-(id)_currentLanguageForOfflineDictationMetrics;
-(id)_assistantCompatibleLanguageCodeForInputMode:(id)arg1 ;
-(BOOL)secureOfflineOnlySpeechRecognition;
-(void)dictationConnectionDidCancelRecording:(id)arg1 ;
-(void)_touchPhaseChangedForTouch:(id)arg1 ;
-(void)errorAnimationDidFinish;
-(void)dismissDictationView:(id)arg1 ;
-(BOOL)shouldPresentOptInAlert;
-(void)_handleDataSharingSheetDecision;
-(void)cancelDictationForTextStoreChangesInResponder:(id)arg1 ;
-(void)stopDictationIgnoreFinalizePhrases;
-(void)stopAndCancelDictationIfNeededWithReasonType:(unsigned long long)arg1 ;
-(BOOL)dictationIsModifyingText;
-(void)restartDictationForTypeAndTalk;
-(void)didShowAlternatives:(id)arg1 correctionIdentifier:(id)arg2 interactionIdentifier:(id)arg3 instrumentationContext:(id)arg4 dictationLanguage:(id)arg5 ;
-(void)logAlternativeSelected:(id)arg1 correctionIdentifier:(id)arg2 interactionIdentifier:(id)arg3 ;
-(id)resultWithTrailingSpace:(id)arg1 ;
-(void)preheatIfNecessary;
-(void)prepareStartDictationKeyboardGestures;
-(void)voiceCommandSingleTapKey:(id)arg1 ;
-(void)setSmartLanguageSelectionOverrideLanguage:(NSString *)arg1 ;
-(NSRange)insertionRange;
-(id)lastCorrectionIdentifier;
-(BOOL)hasPostedInstrumentationDictationContext;
-(NSString *)fallbackDictationLanguage;
-(BOOL)selectionEndWasInitiallyAtParagraphBoundaryForAsyncDelegate;
-(BOOL)selectionStartWasInitiallyAtParagraphBoundaryForAsyncDelegate;
-(unsigned short)initialPreviousCharacterForAsyncDelegate;
-(unsigned short)initialCharacterAfterSelectionForAsyncDelegate;
-(unsigned long long)stateHandler;
-(void)setStateHandler:(unsigned long long)arg1 ;
-(BOOL)localSpeechRecognitionForced;
-(BOOL)ignoreFinalizePhrases;
-(BOOL)isDetectingUtterances;
-(void)setDetectingUtterances:(BOOL)arg1 ;
-(void)setFinalizingRecognizedUtterance:(BOOL)arg1 ;
-(BOOL)hasCheckedForLeadingSpaceOnce;
-(void)setHasCheckedForLeadingSpaceOnce:(BOOL)arg1 ;
-(BOOL)neededLeadingSpace;
-(void)setNeededLeadingSpace:(BOOL)arg1 ;
-(AFAnalyticsTurnBasedInstrumentationContext *)currentInstrumentationContext;
@end

