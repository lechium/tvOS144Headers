//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AXSSInterDeviceActionReceiver-Protocol.h"
#import "SCATHardwareInputSourceDelegate-Protocol.h"
#import "SCATInterDeviceInputSourceDelegate-Protocol.h"
#import "SCATScreenInputSourceDelegate-Protocol.h"

@class AXAccessQueue, AXDispatchTimer, AXSSInterDeviceCommunicator, AXSwitchRecipe, AXUIClient, NSString, SCATATVRemoteInputSource, SCATInterDeviceInputSource, SCATKeyboardInputSource, SCATMFIInputSource, SCATMIDIInputSource, SCATScreenInputSource;
@protocol SCATInputControllerDelegate;

@interface SCATInputController : NSObject <SCATHardwareInputSourceDelegate, SCATInterDeviceInputSourceDelegate, AXSSInterDeviceActionReceiver, SCATScreenInputSourceDelegate>
{
    _Bool _valid;	// 8 = 0x8
    _Bool _isInputHoldEnabled;	// 9 = 0x9
    _Bool _isInputRepeatEnabled;	// 10 = 0xa
    _Bool _isInputCoalesceEnabled;	// 11 = 0xb
    _Bool _hasInitializedInputSources;	// 12 = 0xc
    AXSwitchRecipe *_recipe;	// 16 = 0x10
    SCATKeyboardInputSource *_keyboardInputSource;	// 24 = 0x18
    id <SCATInputControllerDelegate> _delegate;	// 32 = 0x20
    AXAccessQueue *_queue;	// 40 = 0x28
    SCATMFIInputSource *_mfiInputSource;	// 48 = 0x30
    SCATScreenInputSource *_screenInputSource;	// 56 = 0x38
    SCATATVRemoteInputSource *_atvRemoteInputSource;	// 64 = 0x40
    SCATMIDIInputSource *_midiInputSource;	// 72 = 0x48
    AXSSInterDeviceCommunicator *_interDeviceCommunicator;	// 80 = 0x50
    SCATInterDeviceInputSource *_interDeviceInputSource;	// 88 = 0x58
    double _timeIntervalBeforeSendAction;	// 96 = 0x60
    double _timeIntervalBeforeSendLongPressAction;	// 104 = 0x68
    double _timeIntervalBeforeSendRepeatAction;	// 112 = 0x70
    double _timeIntervalBetweenDidSendActions;	// 120 = 0x78
    double _timeIntervalSinceDidSendAction;	// 128 = 0x80
    AXDispatchTimer *_inputHoldTimer;	// 136 = 0x88
    AXDispatchTimer *_inputRepeatTimer;	// 144 = 0x90
    AXDispatchTimer *_inputLongPressTimer;	// 152 = 0x98
}

- (void).cxx_destruct;	// IMP=0x00000001000561d4
@property(nonatomic) _Bool hasInitializedInputSources; // @synthesize hasInitializedInputSources=_hasInitializedInputSources;
@property(retain, nonatomic) AXDispatchTimer *inputLongPressTimer; // @synthesize inputLongPressTimer=_inputLongPressTimer;
@property(retain, nonatomic) AXDispatchTimer *inputRepeatTimer; // @synthesize inputRepeatTimer=_inputRepeatTimer;
@property(retain, nonatomic) AXDispatchTimer *inputHoldTimer; // @synthesize inputHoldTimer=_inputHoldTimer;
@property(nonatomic) _Bool isInputCoalesceEnabled; // @synthesize isInputCoalesceEnabled=_isInputCoalesceEnabled;
@property(nonatomic) _Bool isInputRepeatEnabled; // @synthesize isInputRepeatEnabled=_isInputRepeatEnabled;
@property(nonatomic) _Bool isInputHoldEnabled; // @synthesize isInputHoldEnabled=_isInputHoldEnabled;
@property(nonatomic) double timeIntervalSinceDidSendAction; // @synthesize timeIntervalSinceDidSendAction=_timeIntervalSinceDidSendAction;
@property(nonatomic) double timeIntervalBetweenDidSendActions; // @synthesize timeIntervalBetweenDidSendActions=_timeIntervalBetweenDidSendActions;
@property(nonatomic) double timeIntervalBeforeSendRepeatAction; // @synthesize timeIntervalBeforeSendRepeatAction=_timeIntervalBeforeSendRepeatAction;
@property(nonatomic) double timeIntervalBeforeSendLongPressAction; // @synthesize timeIntervalBeforeSendLongPressAction=_timeIntervalBeforeSendLongPressAction;
@property(nonatomic) double timeIntervalBeforeSendAction; // @synthesize timeIntervalBeforeSendAction=_timeIntervalBeforeSendAction;
@property(retain, nonatomic) SCATInterDeviceInputSource *interDeviceInputSource; // @synthesize interDeviceInputSource=_interDeviceInputSource;
@property(readonly, nonatomic) AXSSInterDeviceCommunicator *interDeviceCommunicator; // @synthesize interDeviceCommunicator=_interDeviceCommunicator;
@property(retain, nonatomic) SCATMIDIInputSource *midiInputSource; // @synthesize midiInputSource=_midiInputSource;
@property(retain, nonatomic) SCATATVRemoteInputSource *atvRemoteInputSource; // @synthesize atvRemoteInputSource=_atvRemoteInputSource;
@property(retain, nonatomic) SCATScreenInputSource *screenInputSource; // @synthesize screenInputSource=_screenInputSource;
@property(retain, nonatomic) SCATMFIInputSource *mfiInputSource; // @synthesize mfiInputSource=_mfiInputSource;
@property(retain, nonatomic) AXAccessQueue *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <SCATInputControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isValid) _Bool valid; // @synthesize valid=_valid;
@property(retain, nonatomic) SCATKeyboardInputSource *keyboardInputSource; // @synthesize keyboardInputSource=_keyboardInputSource;
@property(retain, nonatomic) AXSwitchRecipe *recipe; // @synthesize recipe=_recipe;
- (void)performSysdiagnose;	// IMP=0x0000000100055ff0
- (void)didReceiveSwitchEvent:(id)arg1 forDeviceWithName:(id)arg2;	// IMP=0x0000000100055f68
- (void)_showState:(id)arg1 forSource:(unsigned long long)arg2;	// IMP=0x0000000100055e64
- (void)_showAlert:(id)arg1 forSource:(unsigned long long)arg2;	// IMP=0x0000000100055d60
- (void)_hideStateForSource:(unsigned long long)arg1;	// IMP=0x0000000100055c8c
- (void)_hideAlertForSource:(unsigned long long)arg1;	// IMP=0x0000000100055bb8
@property(readonly, nonatomic) AXUIClient *userInterfaceClient;
- (void)setDelegate:(id)arg1 queue:(id)arg2;	// IMP=0x0000000100055ae4
- (void)updateWhetherSwitchConfigurationHasScreenSwitch;	// IMP=0x0000000100055a80
- (void)updateWhetherSwitchConfigurationRendersDeviceUnusable;	// IMP=0x0000000100055a7c
- (_Bool)isSwitchWithSource:(id)arg1;	// IMP=0x00000001000558f8
@property(readonly, nonatomic) long long role;
- (id)_allSwitchesInUse;	// IMP=0x0000000100055488
- (void)_sharedInit;	// IMP=0x0000000100054acc
- (id)initWithInterDeviceCommunicator:(id)arg1;	// IMP=0x0000000100054a30
- (void)dealloc;	// IMP=0x00000001000547c0
- (void)_setupInputTimers;	// IMP=0x0000000100054674
- (void)_removeInputTimers;	// IMP=0x00000001000545c4
- (_Bool)_switchConfigurationHasScreenSwitch;	// IMP=0x000000010005447c
- (_Bool)_switchConfigurationRendersDeviceUnusable;	// IMP=0x00000001000539c0
- (void)_updateInputSources;	// IMP=0x0000000100053928
- (void)_updateInterDeviceInputSource;	// IMP=0x000000010005380c
- (void)_updateScreenInputSource;	// IMP=0x000000010005367c
- (void)_updateMFIInputSource;	// IMP=0x000000010005356c
- (void)_updateMIDIInputSource;	// IMP=0x000000010005336c
- (void)_updateKeyboardInputSource;	// IMP=0x00000001000531f0
- (void)_updateATVRemoteInputSource;	// IMP=0x000000010005306c
- (void)_removeInputSources;	// IMP=0x0000000100052d14
- (void)_configureMFIAccessoryIfNecessary:(id)arg1;	// IMP=0x00000001000528e4
- (void)interDeviceInputSource:(id)arg1 didReceiveActionWithIdentifier:(long long)arg2 start:(_Bool)arg3 ignoreInputHold:(_Bool)arg4;	// IMP=0x00000001000528cc
- (void)screenInputSource:(id)arg1 didReceiveActionWithIdentifier:(long long)arg2 start:(_Bool)arg3 ignoreInputHold:(_Bool)arg4;	// IMP=0x00000001000528b4
- (void)hardwareInputSource:(id)arg1 didUpdateAvailability:(_Bool)arg2 withDetail:(unsigned long long)arg3;	// IMP=0x0000000100052804
- (void)hardwareInputSource:(id)arg1 didReceiveActionWithIdentifier:(long long)arg2 start:(_Bool)arg3 ignoreInputHold:(_Bool)arg4;	// IMP=0x00000001000527ec
- (void)handleInterDeviceBailOutForInputSource:(id)arg1;	// IMP=0x0000000100052664
- (void)inputSource:(id)arg1 forwardSwitchEvent:(id)arg2;	// IMP=0x00000001000525f8
- (_Bool)shouldForwardSwitchEventsForInputSource:(id)arg1;	// IMP=0x00000001000525d4
- (void)didEndLongPressForInputSource:(id)arg1;	// IMP=0x000000010005258c
- (void)didBeginLongPressForInputSource:(id)arg1;	// IMP=0x0000000100052544
- (void)_updateIsInputCoalesceEnabled;	// IMP=0x00000001000524e4
- (void)_updateIsInputRepeatEnabled;	// IMP=0x0000000100052484
- (void)_updateIsInputHoldEnabled;	// IMP=0x0000000100052424
- (void)_updateTimeIntervalBetweenDidSendActions;	// IMP=0x00000001000523c8
- (void)_updateTimeIntervalBeforeSendRepeatAction;	// IMP=0x000000010005236c
- (void)_updateTimeIntervalBeforeSendAction;	// IMP=0x0000000100052310
- (void)_sendActionWithIdentifier:(long long)arg1;	// IMP=0x0000000100051f04
- (void)_endAction;	// IMP=0x0000000100051e88
- (void)_didReceiveActionWithIdentifier:(long long)arg1 start:(_Bool)arg2 ignoreInputHold:(_Bool)arg3;	// IMP=0x0000000100051cc8
- (_Bool)_handleHoldAtPointForActionIdentifier:(long long)arg1 start:(_Bool)arg2;	// IMP=0x00000001000519fc
- (void)_updateActionsForSource:(id)arg1;	// IMP=0x0000000100051964

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

