//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AXUISoftwareKeyboardManagerDelegate-Protocol.h"

@class AXDispatchTimer, AXNamedReplayableGesture, AXPIFingerController, AXPIFingerModel, HNDAssistiveTouchServer, HNDDisplayManager, HNDEventManager, NSArray, NSMutableDictionary, NSPointerArray, NSString;

@interface HNDHandManager : NSObject <AXUISoftwareKeyboardManagerDelegate>
{
    HNDEventManager *_eventManager;	// 8 = 0x8
    HNDDisplayManager *_displayManager;	// 16 = 0x10
    HNDAssistiveTouchServer *_assistiveTouchServer;	// 24 = 0x18
    AXPIFingerController *_fingerController;	// 32 = 0x20
    int _orientation;	// 40 = 0x28
    _Bool _primaryButtonDown;	// 44 = 0x2c
    _Bool _inBrokenHomeButtonMode;	// 45 = 0x2d
    _Bool _isRecording;	// 46 = 0x2e
    _Bool _finishedRecording;	// 47 = 0x2f
    _Bool _waitingForScreenshot;	// 48 = 0x30
    _Bool _isFingerDown;	// 49 = 0x31
    double _touchSpeed;	// 56 = 0x38
    _Bool _openMenuWithSwaggle;	// 64 = 0x40
    _Bool _alwaysShowMenu;	// 65 = 0x41
    NSArray *_customGestures;	// 72 = 0x48
    AXNamedReplayableGesture *_currentCustomGesture;	// 80 = 0x50
    struct CGPoint _orbGestureLocation;	// 88 = 0x58
    int _preparedScrollAction;	// 104 = 0x68
    _Bool _inMultiFingerGesture;	// 108 = 0x6c
    _Bool _resettingPinch;	// 109 = 0x6d
    unsigned long long _pinchMode;	// 112 = 0x70
    unsigned long long _pinchState;	// 120 = 0x78
    _Bool _hotCornerLocked;	// 128 = 0x80
    _Bool _hoverNubbitLocked;	// 129 = 0x81
    struct CGPoint _dragStartPoint;	// 136 = 0x88
    _Bool _inDragMode;	// 152 = 0x98
    _Bool _isDragNubbitMode;	// 153 = 0x99
    _Bool _isPerformingDragPressEvent;	// 154 = 0x9a
    AXPIFingerModel *_realSelectedPinchFinger;	// 160 = 0xa0
    _Bool _areFingersPressedDown;	// 168 = 0xa8
    struct CGPoint _pressedPinchFingerStartPoint;	// 176 = 0xb0
    struct CGPoint _pressedPinchFingerFulcrum;	// 192 = 0xc0
    double _pressedPinchFingerMovementFromStart;	// 208 = 0xd0
    NSMutableDictionary *_avPlayers;	// 216 = 0xd8
    _Bool _inCustomGestureMovement;	// 224 = 0xe0
    AXDispatchTimer *_orientationUpdateTimer;	// 232 = 0xe8
    double _lastOrbValue;	// 240 = 0xf0
    _Bool _shouldSkipElementFetchForAXScroll;	// 248 = 0xf8
    _Bool _voiceControl;	// 249 = 0xf9
    NSPointerArray *_eventHandlers;	// 256 = 0x100
}

+ (struct CGPoint)_pointByAvoidingDisplayCornerRadius:(double)arg1 forPoint:(struct CGPoint)arg2;	// IMP=0x0000000100022ba8
+ (double)_displayCornerRadius;	// IMP=0x0000000100022ac0
+ (id)sharedManager;	// IMP=0x000000010001e060
+ (void)initialize;	// IMP=0x000000010001e028
- (void).cxx_destruct;	// IMP=0x0000000100025048
@property(nonatomic) _Bool voiceControl; // @synthesize voiceControl=_voiceControl;
@property(retain, nonatomic) NSPointerArray *eventHandlers; // @synthesize eventHandlers=_eventHandlers;
@property(retain, nonatomic) NSArray *customGestures; // @synthesize customGestures=_customGestures;
@property(nonatomic) _Bool openMenuWithSwaggle; // @synthesize openMenuWithSwaggle=_openMenuWithSwaggle;
@property(nonatomic) double touchSpeed; // @synthesize touchSpeed=_touchSpeed;
@property(nonatomic) _Bool alwaysShowMenu; // @synthesize alwaysShowMenu=_alwaysShowMenu;
- (_Bool)isPerformingDragPress;	// IMP=0x0000000100024fe0
- (struct CGPoint)startPointForDrag;	// IMP=0x0000000100024fd8
- (void)performFingerUpAtPoint:(struct CGPoint)arg1;	// IMP=0x0000000100024fa4
- (void)performFingerMoveToPoint:(struct CGPoint)arg1;	// IMP=0x0000000100024f70
- (void)performFingerDownAtPoint:(struct CGPoint)arg1;	// IMP=0x0000000100024f3c
- (struct CGPoint)_fingerControllerPointForScreenPoint:(struct CGPoint)arg1;	// IMP=0x0000000100024e64
- (id)fingerController;	// IMP=0x0000000100024e18
- (void)showMenu:(_Bool)arg1;	// IMP=0x0000000100024e08
- (struct CGPoint)rotateEventFromOrientation:(struct CGPoint)arg1;	// IMP=0x0000000100024dd0
- (struct CGPoint)rotateNormalizedPointToOrientation:(struct CGPoint)arg1;	// IMP=0x0000000100024d80
- (void)didFailToFloatApp;	// IMP=0x0000000100024d70
- (void)didFailToPinApp;	// IMP=0x0000000100024d60
- (void)volumeChanged;	// IMP=0x0000000100024d50
@property(readonly, nonatomic) _Bool isVoiceControlRunning; // @dynamic isVoiceControlRunning;
@property(readonly, nonatomic) double volumeLevel; // @dynamic volumeLevel;
- (void)rotateEventToOrientation:(id)arg1;	// IMP=0x0000000100024c30
- (void)handleCustomHomeButtonAction:(int)arg1;	// IMP=0x0000000100024bd0
- (void)performButtonAction:(id)arg1 type:(int)arg2 state:(int)arg3;	// IMP=0x0000000100024b3c
- (struct CGPoint)preferredMenuDisplayPoint;	// IMP=0x0000000100024a94
- (void)reloadFingerAppearance;	// IMP=0x0000000100024994
- (void)removeFingersToPoint:(struct CGPoint)arg1;	// IMP=0x0000000100024980
- (void)resetFingersToPoint:(struct CGPoint)arg1 active:(_Bool)arg2;	// IMP=0x00000001000247fc
- (void)resetFingersToPoint:(struct CGPoint)arg1;	// IMP=0x00000001000247ec
- (void)resetFingersIfActive;	// IMP=0x00000001000247e8
- (void)resetFingersIfNeeded;	// IMP=0x00000001000247e4
- (_Bool)isFingersPressedDown;	// IMP=0x00000001000246b0
- (_Bool)canShowASTMousePointer;	// IMP=0x0000000100024690
- (void)menuExited;	// IMP=0x0000000100024650
- (void)notifyUserEventOccurred;	// IMP=0x0000000100024608
- (void)startPinchModeWithPoint:(struct CGPoint)arg1 mode:(unsigned long long)arg2;	// IMP=0x000000010002459c
- (id)_scrollFallbackGestureAtPoint:(struct CGPoint)arg1 vertical:(_Bool)arg2 forward:(_Bool)arg3 max:(_Bool)arg4;	// IMP=0x0000000100024428
- (_Bool)_performAXScrollActionAtPoint:(struct CGPoint)arg1 action:(int)arg2;	// IMP=0x0000000100023f7c
- (void)prepareScrollAtPoint:(struct CGPoint)arg1 vertical:(_Bool)arg2 forward:(_Bool)arg3 max:(_Bool)arg4;	// IMP=0x0000000100023ee4
- (void)handleMultiTouchStandard:(long long)arg1 withExistingFingerMidPoint:(struct CGPoint)arg2;	// IMP=0x0000000100023bcc
- (void)handlePrimaryButtonPress:(int)arg1;	// IMP=0x00000001000237fc
- (void)_handleAction:(id)arg1 type:(int)arg2 state:(int)arg3;	// IMP=0x00000001000236dc
- (void)handleButtonEvent:(id)arg1;	// IMP=0x0000000100023584
- (_Bool)softwareKeyboardManagerShouldSetHardwareKeyboardAttached:(id)arg1 hardwareKeyboardIsCurrentlyAttached:(_Bool)arg2 newHardwareKeyboardAttachedValue:(_Bool *)arg3;	// IMP=0x000000010002357c
- (void)softwareKeyboardManagerDidChangeHardwareKeyboardAttached:(id)arg1;	// IMP=0x0000000100023578
- (void)softwareKeyboardManager:(id)arg1 didSetHardwareKeyboardAttached:(_Bool)arg2;	// IMP=0x0000000100023574
- (void)softwareKeyboardManagerWillUpdateKeyboardState:(id)arg1;	// IMP=0x0000000100023570
- (struct CGPoint)currentPointForPointer;	// IMP=0x0000000100023500
@property(readonly, nonatomic) _Bool dwellControlEnabled;
- (void)_setApplicationAccessibilityEnabledIfNeeded;	// IMP=0x0000000100023398
- (id)_avPlayerForSound:(id)arg1;	// IMP=0x0000000100023228
- (_Bool)inCustomGesture;	// IMP=0x0000000100023218
- (_Bool)_isInNubbitHitbox:(struct CGPoint)arg1;	// IMP=0x0000000100023160
- (void)moveFingerToPoint:(struct CGPoint)arg1;	// IMP=0x0000000100022eac
- (void)moveFingerByDelta:(struct CGPoint)arg1;	// IMP=0x0000000100022e34
- (void)_menuOpenTracker:(struct CGPoint)arg1;	// IMP=0x0000000100022900
@property(nonatomic) _Bool nubbitMoving;
- (void)setCaptureEvents:(_Bool)arg1;	// IMP=0x0000000100022818
- (void)_resetMenuOpenTracker;	// IMP=0x00000001000227e0
- (void)prepareGesture:(id)arg1;	// IMP=0x0000000100022604
- (_Bool)isCapturingRealEvents;	// IMP=0x00000001000225f4
- (struct CGPoint)_eventManagerPointForGesture:(id)arg1 fingerIdentifier:(id)arg2 eventIndex:(unsigned long long)arg3;	// IMP=0x0000000100022550
- (_Bool)_shouldRepeatGesture;	// IMP=0x0000000100022548
- (void)_performCustomGesture;	// IMP=0x000000010002223c
- (id)_shiftGestureIfNeeded:(id)arg1 toMidpoint:(struct CGPoint)arg2;	// IMP=0x00000001000221a4
- (void)performPreparedGesture;	// IMP=0x000000010002218c
- (_Bool)isPerformingGesture;	// IMP=0x000000010002217c
- (void)cancelCurrentGesture;	// IMP=0x000000010002216c
@property(readonly, nonatomic) double touchSpeedMultiplier; // @dynamic touchSpeedMultiplier;
@property(readonly, nonatomic) _Bool nubbitVisible;
- (void)updateSoftwareKeyboardState;	// IMP=0x00000001000220d0
- (void)updateMenuVisibility;	// IMP=0x0000000100021f78
- (void)updateAllSettings;	// IMP=0x0000000100021e70
- (void)removeEventHandler:(id)arg1;	// IMP=0x0000000100021d28
- (void)addEventHandler:(id)arg1;	// IMP=0x00000001000219ec
- (void)_modifyPinchToolMoveToPoint:(struct CGPoint)arg1;	// IMP=0x00000001000215d8
- (void)mediaPlaybackChanged;	// IMP=0x0000000100021584
- (void)screenshotDidFire;	// IMP=0x00000001000213ec
- (void)screenshotWillFire;	// IMP=0x00000001000211f0
- (void)mediaControlsChanged:(_Bool)arg1;	// IMP=0x00000001000211dc
- (void)resetNubbitLocation;	// IMP=0x00000001000211cc
- (void)_startOrientationUpdateTimer;	// IMP=0x00000001000210c8
- (void)orientationChanged:(long long)arg1;	// IMP=0x0000000100020fe8
- (void)orientationChanged;	// IMP=0x0000000100020e40
- (int)deviceOrientation;	// IMP=0x0000000100020e08
- (_Bool)inDragMode;	// IMP=0x0000000100020e00
- (_Bool)inPinchMode;	// IMP=0x0000000100020df0
- (_Bool)inRockerMode;	// IMP=0x0000000100020de0
- (void)systemServerDied;	// IMP=0x0000000100020d7c
- (void)substantialTransitionOccurred;	// IMP=0x0000000100020ba8
- (void)rotationLockChanged;	// IMP=0x0000000100020b98
- (void)ringerSwitchChanged;	// IMP=0x0000000100020b88
- (void)handleRealEvent:(id)arg1;	// IMP=0x0000000100020810
- (_Bool)usingSpecialTool;	// IMP=0x00000001000207b8
- (void)specialToolUsageEnded;	// IMP=0x00000001000206fc
- (_Bool)_shouldHandleRealEventWithMultiTouchTool;	// IMP=0x0000000100020634
- (void)_handleMultiTouchToolEvent:(id)arg1;	// IMP=0x00000001000202f4
- (_Bool)_shouldEnableMultiTouchToolBackground;	// IMP=0x000000010002028c
- (void)_handleRealCustomGestureUp:(struct CGPoint)arg1;	// IMP=0x0000000100020244
- (void)_handleRealCustomGestureMove:(struct CGPoint)arg1;	// IMP=0x0000000100020208
- (void)_handleRealCustomGestureDown:(struct CGPoint)arg1;	// IMP=0x00000001000201d8
- (void)_moveFingersForRealEventToPoint:(struct CGPoint)arg1;	// IMP=0x0000000100020194
- (void)_handleRealMultiFingerUp:(struct CGPoint)arg1;	// IMP=0x000000010002017c
- (void)_handleRealMultiFingerDown:(struct CGPoint)arg1;	// IMP=0x0000000100020104
- (void)_handleRealMultiFingerMove:(struct CGPoint)arg1;	// IMP=0x00000001000200c8
- (void)_handleRealPinchToolMove:(struct CGPoint)arg1;	// IMP=0x0000000100020058
- (void)_handleRealPinchToolUp:(struct CGPoint)arg1;	// IMP=0x000000010001ffd0
- (id)mainWindow;	// IMP=0x000000010001ffc0
- (void)resetPinchFingers;	// IMP=0x000000010001fd60
- (void)_handleRealPinchToolDown:(struct CGPoint)arg1;	// IMP=0x000000010001fca8
- (void)_handlePinchFingerDownWithFinger:(id)arg1;	// IMP=0x000000010001fc3c
- (void)_handleRealDragToolMove:(struct CGPoint)arg1;	// IMP=0x000000010001fc1c
- (void)_handleRealDragToolUp:(struct CGPoint)arg1;	// IMP=0x000000010001fbb4
- (void)endDragModeAtPoint:(struct CGPoint)arg1 completed:(_Bool)arg2;	// IMP=0x000000010001f6bc
- (void)beginDragAtPoint:(struct CGPoint)arg1;	// IMP=0x000000010001f6b8
- (void)beginDragMenuAtPoint:(struct CGPoint)arg1;	// IMP=0x000000010001f6a4
- (void)startDragMode;	// IMP=0x000000010001f558
- (void)moveFingersToPointInFingerCoordinateSpace:(struct CGPoint)arg1 allowOutOfBounds:(_Bool)arg2;	// IMP=0x000000010001f070
- (void)_moveFingersToPointInFingerCoordinateSpace:(struct CGPoint)arg1 allowOutOfBounds:(_Bool)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010001ef68
- (void)_moveFingersToPoint:(struct CGPoint)arg1;	// IMP=0x000000010001ef2c
- (void)keyboardVisible:(_Bool)arg1 withFrame:(struct CGRect)arg2;	// IMP=0x000000010001ef1c
- (void)systemServerConnected;	// IMP=0x000000010001ecc8
- (void)refreshOrientation;	// IMP=0x000000010001eaac
- (void)_registerForSettingsNotifications;	// IMP=0x000000010001e58c
- (void)_handleUsageConfirmation;	// IMP=0x000000010001e52c
- (void)_bootstrapRegister;	// IMP=0x000000010001e47c
- (void)dealloc;	// IMP=0x000000010001e448
- (id)init;	// IMP=0x000000010001e06c
- (id)testingEventManager;	// IMP=0x00000001000250d8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

