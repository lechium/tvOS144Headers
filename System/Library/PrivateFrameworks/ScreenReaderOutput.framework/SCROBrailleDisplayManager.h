/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:26 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ScreenReaderOutput/ScreenReaderOutput-Structs.h>
#import <libobjc.A.dylib/SCROBrailleDisplayDelegate.h>

@protocol OS_dispatch_queue, SCROSBrailleDisplayManagerDelegate, OS_dispatch_source;
@class NSObject, SCROBrailleDisplayManagedQueue, SCROBrailleDisplay, NSMutableDictionary, SCROBrailleFormatter, NSMutableSet, NSAttributedString, NSMutableArray, SCROBrailleDisplayHistory, SCROBrailleDisplayManagerStatus, NSString;

@interface SCROBrailleDisplayManager : NSObject <SCROBrailleDisplayDelegate> {

	NSObject*<OS_dispatch_queue> _eventQueue;
	SCROBrailleDisplayManagedQueue* _managedDisplayQueue;
	SCROBrailleDisplay* _bluetoothBrailleDisplay;
	SCROBrailleDisplay* _stealthBrailleDisplay;
	NSMutableDictionary* _detectedIOElementsDict;
	SCROBrailleFormatter* _currentBrailleFormatter;
	NSMutableSet* _loadedIOElements;
	CFDictionaryRef _displayConfigurationDict;
	id<SCROSBrailleDisplayManagerDelegate> _delegate;
	BOOL _showDotsSevenAndEight;
	BOOL _lineDescriptorDisplayCallbackEnabled;
	int _outputContractionMode;
	int _inputContractionMode;
	BOOL _outputShowEightDot;
	BOOL _inputShowEightDot;
	BOOL _shouldBatchUpdates;
	BOOL _automaticBrailleTranslation;
	BOOL _wordWrapEnabled;
	BOOL _autoAdvanceEnabled;
	double _autoAdvanceDuration;
	unsigned _persistentKeyModifiers;
	long long _uiStringCachedLineOffset;
	NSAttributedString* _uiEditingCachedString;
	NSMutableArray* _displayModeStack;
	SCROBrailleDisplayHistory* _history;
	NSAttributedString* _mainString;
	NSAttributedString* _lineString;
	NSAttributedString* _statusString;
	SCROBrailleDisplayManagerStatus* _status;
	NSObject*<OS_dispatch_source> _alertTimer;
	double _alertTimeout;
	int _alertPriority;
	BOOL _isValid;
	int _inputAccessMode;
	NSAttributedString* _blankUIString;
	double _lastUserInteractionTime;
	/*^block*/id _eventHandled;

}

@property (assign,nonatomic,__weak) id<SCROSBrailleDisplayManagerDelegate> delegate; 
@property (assign,nonatomic) BOOL inputEightDotBraille; 
@property (assign,nonatomic) BOOL wordWrapEnabled; 
@property (assign,nonatomic) BOOL autoAdvanceEnabled; 
@property (assign,nonatomic) double autoAdvanceDuration; 
@property (assign,nonatomic) int inputContractionMode; 
@property (assign,nonatomic) unsigned persistentKeyModifiers; 
@property (assign,nonatomic) double lastUserInteractionTime;                                      //@synthesize lastUserInteractionTime=_lastUserInteractionTime - In the implementation block
@property (nonatomic,readonly) SCROBrailleDisplayManagedQueue * managedDisplayQueue;              //@synthesize managedDisplayQueue=_managedDisplayQueue - In the implementation block
@property (nonatomic,copy) id eventHandled;                                                       //@synthesize eventHandled=_eventHandled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(id)init;
-(void)invalidate;
-(BOOL)isValid;
-(id<SCROSBrailleDisplayManagerDelegate>)delegate;
-(void)setDelegate:(id<SCROSBrailleDisplayManagerDelegate>)arg1 ;
-(BOOL)isConfigured;
-(int)displayMode;
-(void)beginUpdates;
-(void)endUpdates;
-(void)setMainAttributedString:(id)arg1 ;
-(id)mainAttributedString;
-(void)setAlwaysUsesNemethCodeForTechnicalText:(BOOL)arg1 ;
-(BOOL)alwaysUsesNemethCodeForTechnicalText;
-(id)driverConfiguration;
-(void)setAggregatedStatus:(id)arg1 ;
-(id)aggregatedStatus;
-(void)setVirtualStatusAlignment:(int)arg1 ;
-(int)virtualStatusAlignment;
-(void)setMasterStatusCellIndex:(long long)arg1 ;
-(long long)masterStatusCellIndex;
-(void)setShowDotsSevenAndEight:(BOOL)arg1 ;
-(BOOL)showDotsSevenAndEight;
-(void)setContractionMode:(int)arg1 ;
-(int)contractionMode;
-(void)setInputEightDotBraille:(BOOL)arg1 ;
-(BOOL)inputEightDotBraille;
-(void)setShowEightDotBraille:(BOOL)arg1 ;
-(BOOL)showEightDotBraille;
-(void)setInputContractionMode:(int)arg1 ;
-(int)inputContractionMode;
-(void)setAutomaticBrailleTranslationEnabled:(BOOL)arg1 ;
-(void)setWordWrapEnabled:(BOOL)arg1 ;
-(BOOL)wordWrapEnabled;
-(void)setAutoAdvanceEnabled:(BOOL)arg1 ;
-(BOOL)autoAdvanceEnabled;
-(void)setAutoAdvanceDuration:(double)arg1 ;
-(double)autoAdvanceDuration;
-(unsigned)persistentKeyModifiers;
-(void)setPersistentKeyModifiers:(unsigned)arg1 ;
-(void)setLastUserInteractionTime:(double)arg1 ;
-(void)setAnnouncementsDisplayMode;
-(void)exitCurrentDisplayMode;
-(long long)tokenForRouterIndex:(long long)arg1 location:(long long*)arg2 appToken:(id*)arg3 forDisplayWithToken:(int)arg4 ;
-(void)simulateKeypress:(id)arg1 ;
-(void)panDisplayLeft:(int)arg1 ;
-(void)panDisplayRight:(int)arg1 ;
-(void)showPreviousAnnouncement;
-(void)showNextAnnouncement;
-(void)setPrepareToMemorizeNextKey:(BOOL)arg1 immediate:(BOOL)arg2 forDisplayWithToken:(int)arg3 ;
-(void)setPrimaryBrailleDisplay:(int)arg1 ;
-(void)resetEditingManager;
-(void)setSingleLetterInputIsOn:(BOOL)arg1 ;
-(void)setTextSearchModeIsOn:(BOOL)arg1 ;
-(void)translateBrailleToClipboard;
-(id)brailleInputManager;
-(id)newBrailleDisplayCommandDispatcher;
-(void)brailleDisplay:(id)arg1 driverDidLoad:(BOOL)arg2 ;
-(void)brailleDisplay:(id)arg1 isSleeping:(BOOL)arg2 ;
-(id)eventHandled;
-(void)brailleDriverDisconnected:(id)arg1 ;
-(void)brailleDisplay:(id)arg1 didDisplay:(id)arg2 ;
-(void)configurationChangedForBrailleDisplay:(id)arg1 ;
-(void)brailleDisplay:(id)arg1 copyStringToClipboard:(id)arg2 ;
-(void)brailleDidStartEditingWithDisplay:(id)arg1 ;
-(void)brailleDisplay:(id)arg1 didReplaceRange:(NSRange)arg2 withString:(id)arg3 cursor:(unsigned long long)arg4 ;
-(void)brailleDisplayHadUserInteraction:(id)arg1 ;
-(void)brailleDisplay:(id)arg1 pressedKeys:(id)arg2 ;
-(void)brailleDisplay:(id)arg1 didPanLeft:(id)arg2 elementToken:(id)arg3 appToken:(id)arg4 lineOffset:(id)arg5 ;
-(void)brailleDisplay:(id)arg1 didPanRight:(id)arg2 elementToken:(id)arg3 appToken:(id)arg4 lineOffset:(id)arg5 ;
-(void)playBorderHitSoundForBrailleDisplay:(id)arg1 ;
-(void)playCommandNotSupportedSoundForBrailleDisplay:(id)arg1 ;
-(void)brailleDisplay:(id)arg1 memorizedKey:(id)arg2 ;
-(void)brailleDisplay:(id)arg1 willMemorizeKey:(id)arg2 ;
-(void)brailleDisplay:(id)arg1 didMoveSelection:(unsigned long long)arg2 ;
-(void)brailleDisplay:(id)arg1 insertedUntranslatedText:(id)arg2 speakLiterally:(BOOL)arg3 ;
-(void)brailleDisplay:(id)arg1 deletedUntranslatedText:(id)arg2 speakLiterally:(BOOL)arg3 ;
-(void)setBrailleKeyDebounceTimeout:(double)arg1 ;
-(void)setEventHandled:(id)arg1 ;
-(void)_eventQueue_invalidate;
-(void)_mainQueue_invalidate;
-(void)_eventQueue_stop;
-(void)_disableAutoDetect;
-(void)_eventQueue_stopAlertTimer;
-(void)_enumerateActiveDisplays:(/*^block*/id)arg1 ;
-(void)_deviceConnectedHandler:(id)arg1 ;
-(void)_addDetectedIOElement:(id)arg1 withDriverIdentifier:(id)arg2 ;
-(BOOL)_eventQueue_addDetectedIOElement:(id)arg1 withDriverIdentifier:(id)arg2 ;
-(void)_loadNextDriverForIOElement:(id)arg1 ;
-(void)_eventQueue_loadNextDriverForIOElement:(id)arg1 ;
-(id)_displayWithIOElement:(id)arg1 driverIdentifier:(id)arg2 delegate:(id)arg3 ;
-(void)_eventQueue_brailleDisplayDriverDidLoad:(id)arg1 ;
-(void)_eventQueue_brailleDisplayDriverFailedToLoad:(id)arg1 ;
-(void)_eventQueue_unloadStealthDisplay;
-(void)_saveBluetoothDisplayConfiguration:(id)arg1 ;
-(id)_eventQueue_driverConfiguration;
-(void)_loadStealthDisplay;
-(void)_eventQueue_brailleDriverDisconnected:(id)arg1 ;
-(void)setUIDisplayMode;
-(void)_eventQueue_brailleDisplay:(id)arg1 isSleeping:(BOOL)arg2 ;
-(void)_unloadStealthDisplay;
-(void)_eventQueue_loadStealthDisplay;
-(void)_eventQueue_setPrimaryDisplay:(int)arg1 ;
-(void)_eventQueue_setDisplayInputAccessMode:(int)arg1 ;
-(void)setMainAttributedString:(id)arg1 forceUpdate:(BOOL)arg2 ;
-(void)_eventQueue_setMainAttributedString:(id)arg1 shouldDisplay:(BOOL)arg2 forceUpdate:(BOOL)arg3 ;
-(id)_eventQueue_mainAttributedString;
-(void)_eventQueue_doSetDisplayMode:(int)arg1 ;
-(void)tokenizeString:(id)arg1 intoFormatter:(id)arg2 selection:(NSRange*)arg3 ;
-(void)_eventQueue_resetAlertTimer;
-(void)_eventQueue_setAggregatedStatus:(id)arg1 ;
-(void)_eventQueue_setMasterStatusCellIndex:(long long)arg1 ;
-(void)_eventQueue_setVirtualStatusAlignment:(int)arg1 ;
-(void)_eventQueue_panDisplayLeft:(BOOL)arg1 token:(int)arg2 ;
-(void)_eventQueue_setDisplayMode:(int)arg1 ;
-(void)_eventQueue_exitCurrentDisplayMode;
-(id)_eventQueue_cachedMainStringForDisplayMode:(int)arg1 ;
-(void)_eventQueue_popDisplayModeStack;
-(void)_eventQueue_alertTimeoutHandler;
-(void)_eventQueue_setTableIdentifier:(id)arg1 ;
-(void)_eventQueue_setAlwaysUsesNemethCodeForTechnicalText:(BOOL)arg1 ;
-(void)_eventQueue_setContractionMode:(int)arg1 ;
-(void)_eventQueue_setShowEightDotBraille:(BOOL)arg1 ;
-(void)_eventQueue_setInputEightDotBraille:(BOOL)arg1 ;
-(void)_refreshEightDotEnabledOnDisplays;
-(void)_eventQueue_setAutomaticBrailleTranslationEnabled:(BOOL)arg1 ;
-(void)_eventQueue_setWordWrapEnabled:(BOOL)arg1 ;
-(void)_eventQueue_setAutoAdvanceEnabled:(BOOL)arg1 ;
-(void)_eventQueue_setAutoAdvanceDuration:(double)arg1 ;
-(void)_eventQueue_setInputContractionMode:(int)arg1 ;
-(void)_eventQueue_setPersistentKeyModifiers:(unsigned)arg1 ;
-(void)_eventQueue_showDotsSevenAndEight:(BOOL)arg1 ;
-(void)_eventQueue_showNextAnnouncement:(BOOL)arg1 ;
-(void)_eventQueue_setLineDescriptorCallbackEnabled:(BOOL)arg1 ;
-(id)_eventQueue_activeDisplayForToken:(int)arg1 ;
-(NSRange)rangeOfBrailleCellRepresentingCharacterAtIndex:(unsigned long long)arg1 ;
-(void)_eventQueue_simulateKeypress:(id)arg1 ;
-(void)_eventQueue_prepareToMemorizeNextKey:(BOOL)arg1 immediately:(BOOL)arg2 forDisplayWithToken:(int)arg3 ;
-(void)_eventQueue_setBatchUpdates:(BOOL)arg1 ;
-(void)_eventQueue_setSingleLetterInputIsOn:(BOOL)arg1 ;
-(void)_eventQueue_setTextSearchModeIsOn:(BOOL)arg1 ;
-(void)_eventQueue_translateBrailleToClipboard;
-(void)_eventQueue_setBrailleKeyDebounceTimeout:(double)arg1 ;
-(void)_eventQueue_resetEditingManager;
-(void)_eventQueue_refreshEightDotEnabledOnDisplays;
-(void)_enableAutoDetect;
-(void)loadBluetoothDriverWithAddress:(id)arg1 ;
-(void)removeBluetoothDriverWithAddress:(id)arg1 ;
-(void)_resetBluetoothReconnectionTimer;
-(void)_blankOutDisplaysInQueue:(id)arg1 ;
-(BOOL)hasActiveDisplays;
-(void)setDisplayInputAccessMode:(int)arg1 ;
-(int)displayInputAccessMode;
-(void)configureTableWithIdentifier:(id)arg1 ;
-(BOOL)automaticBrailleTranslation;
-(void)setLineDescriptorDisplayCallbackEnabled:(BOOL)arg1 ;
-(BOOL)lineDescriptorDisplayCallbackEnabled;
-(double)lastUserInteractionTime;
-(SCROBrailleDisplayManagedQueue *)managedDisplayQueue;
@end

