//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GCBatteryServiceServerInterface-Protocol.h"
#import "GCHIDXPCInterface-Protocol.h"
#import "HIDServicePlugin-Protocol.h"
#import "_GCDriverClientInterface-Protocol.h"

@class HIDConnection, HIDDevice, HIDUserDevice, MISSING_TYPE, NSArray, NSNumber, NSString, NSXPCConnection;
@protocol GCBatteryServiceClientInterface, HIDEventDispatcher, OS_dispatch_queue, OS_dispatch_source;

@interface GCGamepadHIDServicePlugin : NSObject <_GCDriverClientInterface, GCBatteryServiceServerInterface, HIDServicePlugin, GCHIDXPCInterface>
{
    CDUnknownBlockType _cancelHandler;	// 8 = 0x8
    NSNumber *_prop;	// 16 = 0x10
    _Bool _activated;	// 24 = 0x18
    _Bool _clientAdded;	// 25 = 0x19
    NSObject<OS_dispatch_source> *_idleDispatchSource;	// 32 = 0x20
    struct BTSessionImpl *_session;	// 40 = 0x28
    _Bool _buttonHome;	// 48 = 0x30
    _Bool _buttonMenu;	// 49 = 0x31
    _Bool _buttonOptions;	// 50 = 0x32
    _Bool _buttonShare;	// 51 = 0x33
    struct {
        double directionPadUp;
        double directionPadDown;
        double directionPadLeft;
        double directionPadRight;
        double buttonA;
        double buttonB;
        double buttonX;
        double buttonY;
        double buttonL1;
        double buttonR1;
        double buttonL2;
        double buttonR2;
        _Bool leftThumbstick__rightThumbstick__buttonL3;
        _Bool buttonR3;
        unsigned int controllerType;
    } _gameControllerState;	// 56 = 0x38
    CDStruct_5be5f302 _gameControllerExtendedState;	// 176 = 0xb0
    unsigned int _motionSequenceNumber;	// 352 = 0x160
    CDStruct_06597ee6 _motionState;	// 360 = 0x168
    _Bool _hapticsActive;	// 464 = 0x1d0
    int _pendingHapticZeroReports;	// 468 = 0x1d4
    float _hapticDispatchFrequency;	// 472 = 0x1d8
    double _currentHapticClipTime;	// 480 = 0x1e0
    struct timespec _currentHapticDispatchTime;	// 488 = 0x1e8
    _Bool _loopHapticEvent;	// 504 = 0x1f8
    NSObject<OS_dispatch_source> *_hapticDispatchSource;	// 512 = 0x200
    NSXPCConnection *_daemonConnection;	// 520 = 0x208
    id <GCBatteryServiceClientInterface> _batteryClient;	// 528 = 0x210
    NSObject<OS_dispatch_queue> *_internalQueue;	// 536 = 0x218
    _Bool _bluetoothClassic;	// 544 = 0x220
    _Bool _usb;	// 545 = 0x221
    _Bool _bluetoothLE;	// 546 = 0x222
    _Bool _virtualDevice;	// 547 = 0x223
    unsigned int _service;	// 548 = 0x224
    float _idleTimeoutDuration;	// 552 = 0x228
    float _leftThumbstickNoiseBuffer;	// 556 = 0x22c
    float _rightThumbstickNoiseBuffer;	// 560 = 0x230
    float _leftThumbstickDeadzoneRadius;	// 564 = 0x234
    float _leftThumbstickAxisSnapRadius;	// 568 = 0x238
    float _rightThumbstickDeadzoneRadius;	// 572 = 0x23c
    float _rightThumbstickAxisSnapRadius;	// 576 = 0x240
    HIDConnection *_client;	// 584 = 0x248
    id <HIDEventDispatcher> _dispatcher;	// 592 = 0x250
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 600 = 0x258
    HIDDevice *_device;	// 608 = 0x260
    HIDUserDevice *_batteryUserDevice;	// 616 = 0x268
    unsigned long long _regID;	// 624 = 0x270
    unsigned long long _lastEventTime;	// 632 = 0x278
    NSString *_uniqueIdentifier;	// 640 = 0x280
    CDStruct_f4b747e6 *_batteryReport;	// 648 = 0x288
    NSArray *_hapticMotors;	// 656 = 0x290
}

+ (_Bool)matchService:(unsigned int)arg1 options:(id)arg2 score:(long long *)arg3;	// IMP=0x00000000000076a0
- (void).cxx_destruct;	// IMP=0x000000000000b858
@property(nonatomic) float rightThumbstickAxisSnapRadius; // @synthesize rightThumbstickAxisSnapRadius=_rightThumbstickAxisSnapRadius;
@property(nonatomic) float rightThumbstickDeadzoneRadius; // @synthesize rightThumbstickDeadzoneRadius=_rightThumbstickDeadzoneRadius;
@property(nonatomic) float leftThumbstickAxisSnapRadius; // @synthesize leftThumbstickAxisSnapRadius=_leftThumbstickAxisSnapRadius;
@property(nonatomic) float leftThumbstickDeadzoneRadius; // @synthesize leftThumbstickDeadzoneRadius=_leftThumbstickDeadzoneRadius;
@property(retain, nonatomic) NSArray *hapticMotors; // @synthesize hapticMotors=_hapticMotors;
@property(nonatomic) float rightThumbstickNoiseBuffer; // @synthesize rightThumbstickNoiseBuffer=_rightThumbstickNoiseBuffer;
@property(nonatomic) float leftThumbstickNoiseBuffer; // @synthesize leftThumbstickNoiseBuffer=_leftThumbstickNoiseBuffer;
@property(nonatomic) float idleTimeoutDuration; // @synthesize idleTimeoutDuration=_idleTimeoutDuration;
@property(readonly, nonatomic, getter=isVirtualDevice) _Bool virtualDevice; // @synthesize virtualDevice=_virtualDevice;
@property(readonly, nonatomic, getter=isBluetoothLE) _Bool bluetoothLE; // @synthesize bluetoothLE=_bluetoothLE;
@property(readonly, nonatomic, getter=isUSB) _Bool usb; // @synthesize usb=_usb;
@property(readonly, nonatomic, getter=isBluetoothClassic) _Bool bluetoothClassic; // @synthesize bluetoothClassic=_bluetoothClassic;
@property(readonly, nonatomic) CDStruct_f4b747e6 *batteryReport; // @synthesize batteryReport=_batteryReport;
@property(readonly, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(readonly, nonatomic) unsigned long long lastEventTime; // @synthesize lastEventTime=_lastEventTime;
@property(readonly, nonatomic) unsigned long long regID; // @synthesize regID=_regID;
@property(readonly, nonatomic) HIDUserDevice *batteryUserDevice; // @synthesize batteryUserDevice=_batteryUserDevice;
@property(readonly, nonatomic) HIDDevice *device; // @synthesize device=_device;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(readonly, nonatomic) unsigned int service; // @synthesize service=_service;
@property(nonatomic) __weak id <HIDEventDispatcher> dispatcher; // @synthesize dispatcher=_dispatcher;
@property(nonatomic) __weak HIDConnection *client; // @synthesize client=_client;
- (void)readBatteryWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000000b680
- (void)connectToBatteryServiceWithClient:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000000b58c
- (void)connectToMotionServiceWithClient:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000000b578
- (void)connectToLightServiceWithClient:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000000b564
- (void)enqueueTransient:(id)arg1 hapticMotor:(unsigned long long)arg2;	// IMP=0x000000000000b48c
- (void)setHapticMotor:(unsigned long long)arg1 frequency:(float)arg2 amplitude:(float)arg3;	// IMP=0x000000000000b414
- (void)fetchDeviceRegistryIDWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000000b380
- (void)requestServiceWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000000b2a4
- (void)ping;	// IMP=0x000000000000b238
- (float)defaultHapticDispatchFrequency;	// IMP=0x000000000000b22c
- (id)defaultHapticMotors;	// IMP=0x000000000000b218
- (float)defaultRightAxisSnapRadius;	// IMP=0x000000000000b210
- (float)defaultLeftAxisSnapRadius;	// IMP=0x000000000000b208
- (float)defaultRightThumbstickDeadzoneRadius;	// IMP=0x000000000000b200
- (float)defaultLeftThumbstickDeadzoneRadius;	// IMP=0x000000000000b1f8
- (float)defaultIdleTimeoutDuration;	// IMP=0x000000000000b1ec
- (float)defaultRightThumbstickNoiseBuffer;	// IMP=0x000000000000b1e4
- (float)defaultLeftThumbstickNoiseBuffer;	// IMP=0x000000000000b1dc
- (void)enableHaptics;	// IMP=0x000000000000af30
- (_Bool)updateHapticMotor:(id)arg1;	// IMP=0x000000000000ae18
- (void)stopHaptics;	// IMP=0x000000000000ac70
- (unsigned int)numberOfTimesToSendZeroHapticReport;	// IMP=0x000000000000ac68
- (_Bool)isHapticsActive;	// IMP=0x000000000000ac60
- (void)updateHaptics:(_Bool)arg1;	// IMP=0x000000000000ac5c
- (void)dispatchHapticEvent;	// IMP=0x000000000000ac58
- (_Bool)isAnyHapticMotorEnabled;	// IMP=0x000000000000aa74
- (void)dispatchShareButtonEventWithValue:(_Bool)arg1;	// IMP=0x000000000000a980
- (void)dispatchOptionsButtonEventWithValue:(_Bool)arg1;	// IMP=0x000000000000a88c
- (void)dispatchMenuButtonEventWithValue:(_Bool)arg1;	// IMP=0x000000000000a798
- (void)dispatchHomeButtonEventWithValue:(_Bool)arg1;	// IMP=0x000000000000a6a4
- (void)dispatchGameControllerExtendedEventWithState:(CDStruct_5be5f302)arg1;	// IMP=0x000000000000a198
- (void)dispatchMotionEventWithState:(CDStruct_06597ee6)arg1;	// IMP=0x0000000000009efc
- (_Bool)isTwoAxisInputIdle:(MISSING_TYPE **)arg1 prevInput:(MISSING_TYPE **)arg2 noiseBuffer:(float)arg3;	// IMP=0x0000000000009ea0
- (void)applyDeadzone:(float)arg1 axisSnapRadius:(float)arg2 input:(MISSING_TYPE **)arg3;	// IMP=0x0000000000009dec
- (void)dispatchEvent:(id)arg1;	// IMP=0x0000000000009ddc
- (void)dispatchEvent:(id)arg1 updateLastEventTime:(_Bool)arg2;	// IMP=0x0000000000009d68
- (id)createEvent:(unsigned int)arg1;	// IMP=0x0000000000009d10
- (_Bool)shouldDisconnectWhenIdle;	// IMP=0x0000000000009d08
- (_Bool)isIdle;	// IMP=0x0000000000009bb0
- (void)updateIdleState;	// IMP=0x0000000000009af8
- (void)scheduleIdleTimer;	// IMP=0x00000000000099a8
- (_Bool)shouldCreateBatteryDevice;	// IMP=0x00000000000099a0
- (void)sendBatteryReport;	// IMP=0x0000000000009894
- (void)updateClientBattery;	// IMP=0x00000000000097bc
- (void)createVirtualHIDDeviceForBattery;	// IMP=0x0000000000009468
- (void)disconnect;	// IMP=0x000000000000921c
- (void)setupRawReportHandling;	// IMP=0x0000000000009218
- (void)clientNotification:(id)arg1 added:(_Bool)arg2;	// IMP=0x0000000000009130
- (void)setDispatchQueue:(id)arg1;	// IMP=0x000000000000903c
- (void)cancel;	// IMP=0x0000000000008eec
- (void)activate;	// IMP=0x0000000000008e64
- (void)setCancelHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000008c58
- (void)setEventDispatcher:(id)arg1;	// IMP=0x0000000000008b88
- (id)eventMatching:(id)arg1 forClient:(id)arg2;	// IMP=0x0000000000008a10
- (_Bool)setProperty:(id)arg1 forKey:(id)arg2 client:(id)arg3;	// IMP=0x00000000000088dc
- (id)propertyForKey:(id)arg1 client:(id)arg2;	// IMP=0x0000000000008564
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x000000000000823c
- (id)initWithService:(unsigned int)arg1;	// IMP=0x0000000000007a98
- (void)initGameControllerDaemonXPC;	// IMP=0x00000000000076a8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
