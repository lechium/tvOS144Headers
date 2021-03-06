//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GCGamepadHIDServicePlugin.h"

#import "GCLightServiceServerInterface-Protocol.h"
#import "GCMotionServiceServerInterface-Protocol.h"
#import "HIDServicePlugin-Protocol.h"

@class NSString;
@protocol GCLightServiceClientInterface, GCMotionServiceClientInterface;

@interface DualSenseHIDServicePlugin : GCGamepadHIDServicePlugin <GCLightServiceServerInterface, GCMotionServiceServerInterface, HIDServicePlugin>
{
    _Bool _powerSupplyConnected;	// 8 = 0x8
    unsigned char _batteryLevel;	// 9 = 0x9
    unsigned char _chargeStatus;	// 10 = 0xa
    _Bool _haveReportedBatteryOnce;	// 11 = 0xb
    _Bool _batteryStabilized;	// 12 = 0xc
    NSString *_supportMode;	// 16 = 0x10
    unsigned char _outputSequenceNumber;	// 24 = 0x18
    _Bool _sensorsActive;	// 25 = 0x19
    unsigned char _ledR;	// 26 = 0x1a
    unsigned char _ledG;	// 27 = 0x1b
    unsigned char _ledB;	// 28 = 0x1c
    unsigned char _flashOnDuration;	// 29 = 0x1d
    unsigned char _flashOffDuration;	// 30 = 0x1e
    double _gyroSensitivityPitch;	// 32 = 0x20
    double _gyroSensitivityYaw;	// 40 = 0x28
    double _gyroSensitivityRoll;	// 48 = 0x30
    double _accelBiasX;	// 56 = 0x38
    double _accelBiasY;	// 64 = 0x40
    double _accelBiasZ;	// 72 = 0x48
    double _accelSensitivityX;	// 80 = 0x50
    double _accelSensitivityY;	// 88 = 0x58
    double _accelSensitivityZ;	// 96 = 0x60
    long long _batteryDeviceToken;	// 104 = 0x68
    struct {
        unsigned char reportID;
        short gyroPitchBias;
        short gyroYawBias;
        short gyroRollBias;
        short gyroRefPitchPlus;
        short gyroRefPitchMinus;
        short gyroRefYawPlus;
        short gyroRefYawMinus;
        short gyroRefRollPlus;
        short gyroRefRollMinus;
        short gyroRefSpeedPlus;
        short gyroRefSpeedMinus;
        short accelRefXPlus;
        short accelRefXMinus;
        short accelRefYPlus;
        short accelRefYMinus;
        short accelRefZPlus;
        short accelRefZMinus;
        unsigned short calibrationTemp;
        unsigned int crc32;
    } _sensorCalibrationInfo;	// 112 = 0x70
    struct {
        unsigned char reportID;
        char buildDate[11];
        char buildTime[8];
        unsigned short firmwareType;
        unsigned short softwareSeries;
        unsigned int hardwareInfo;
        unsigned int mainFirmwareVersion;
        unsigned int deviceInfo[4];
        unsigned short updateVersion;
        unsigned char updateCapabilityInfo;
        unsigned char reserved[5];
        unsigned int audioSigProcFWVersion;
        unsigned int audioCodecFWVersion;
        unsigned int crc32;
    } _firmwareInfo;	// 153 = 0x99
    id <GCLightServiceClientInterface> _lightClient;	// 224 = 0xe0
    id <GCMotionServiceClientInterface> _motionClient;	// 232 = 0xe8
    CDStruct_0f7f9b7b _playerLights;	// 240 = 0xf0
    _Bool _extendedSupportEnabled;	// 245 = 0xf5
}

+ (_Bool)matchService:(unsigned int)arg1 options:(id)arg2 score:(long long *)arg3;	// IMP=0x0000000000006b94
- (void).cxx_destruct;	// IMP=0x000000000000a788
@property(nonatomic) _Bool extendedSupportEnabled; // @synthesize extendedSupportEnabled=_extendedSupportEnabled;
- (void)connectToMotionServiceWithClient:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000000a67c
- (void)updateSensorsActive:(_Bool)arg1;	// IMP=0x000000000000a508
- (void)readSensorsActiveWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000000a4f0
- (void)connectToLightServiceWithClient:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000000a3f4
- (void)updateLightWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3;	// IMP=0x000000000000a1e0
- (void)readLightWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000000a0f8
- (_Bool)io_playerLights:(id)arg1 value:(id *)arg2 modify:(_Bool)arg3;	// IMP=0x0000000000009dc4
- (void)setPlayerLights:(CDStruct_0f7f9b7b)arg1;	// IMP=0x0000000000009c10
- (id)defaultHapticMotors;	// IMP=0x0000000000009b2c
- (float)defaultHapticDispatchFrequency;	// IMP=0x0000000000009b20
- (void)dispatchHapticEvent;	// IMP=0x0000000000009ad4
- (_Bool)shouldDisconnectWhenIdle;	// IMP=0x0000000000009ac8
- (_Bool)setProperty:(id)arg1 forKey:(id)arg2 client:(id)arg3;	// IMP=0x0000000000009938
- (id)propertyForKey:(id)arg1 client:(id)arg2;	// IMP=0x0000000000009640
@property(readonly, copy) NSString *description;
- (void)updateBatteryLevel:(unsigned char)arg1 chargeStatus:(unsigned char)arg2;	// IMP=0x0000000000009278
- (void)dispatchOutputReport;	// IMP=0x0000000000008e20
- (void)setupRawReportHandling;	// IMP=0x0000000000008364
- (void)requestSensorCalibrationInfo;	// IMP=0x0000000000007704
- (void)requestFirmwareInfo;	// IMP=0x00000000000070e8
- (void)determineSupportMode;	// IMP=0x0000000000006db4
- (id)initWithService:(unsigned int)arg1;	// IMP=0x0000000000006c58

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

