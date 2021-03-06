//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSUserDefaults;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface UPOStepper : NSObject
{
    _Bool _useWeightedRa;	// 8 = 0x8
    _Bool _waitingForUPOData;	// 9 = 0x9
    int _trueRA;	// 12 = 0xc
    int _effectiveRA;	// 16 = 0x10
    int _probeDuration;	// 20 = 0x14
    int _upoCount;	// 24 = 0x18
    int _mitigationStateToken;	// 28 = 0x1c
    int _mitigationsDisabledToken;	// 32 = 0x20
    int _testProbeDurationReachedToken;	// 36 = 0x24
    unsigned int _powerSourceNotification;	// 40 = 0x28
    unsigned long long _mitigationState;	// 48 = 0x30
    long long _secondsSinceLastUpdate;	// 56 = 0x38
    long long _checkpointTime;	// 64 = 0x40
    NSUserDefaults *_defaults;	// 72 = 0x48
    NSObject<OS_dispatch_source> *_raUpdateTimer;	// 80 = 0x50
    NSObject<OS_dispatch_source> *_checkpointTimer;	// 88 = 0x58
    NSDate *_lastRAModulationDate;	// 96 = 0x60
    NSObject<OS_dispatch_queue> *_queue;	// 104 = 0x68
    NSObject<OS_dispatch_queue> *_connQueue;	// 112 = 0x70
    NSObject<OS_dispatch_queue> *_notifyQueue;	// 120 = 0x78
    NSObject<OS_dispatch_source> *_powerLogTimer;	// 128 = 0x80
    struct IONotificationPort *_powerSourcePort;	// 136 = 0x88
    NSObject<OS_dispatch_queue> *_iokitQueue;	// 144 = 0x90
    struct __CFRunLoop *_iokitPortRunLoop;	// 152 = 0x98
}

+ (id)log;	// IMP=0x000000010001b734
+ (id)newStepperWithTrueRA:(int)arg1 withUPOCount:(int)arg2 fromConfiguration:(id)arg3 useWeightedRa:(_Bool)arg4;	// IMP=0x000000010001b6e4
+ (id)newStepperWithTrueRA:(int)arg1 withUPOCount:(int)arg2 fromConfiguration:(id)arg3 withDefaultsDomain:(id)arg4 useWeightedRa:(_Bool)arg5;	// IMP=0x000000010001b348
+ (void)initParameterValues:(_Bool)arg1;	// IMP=0x000000010001b29c
+ (void)readConfigurationParameters:(id)arg1 useWeightedRa:(_Bool)arg2;	// IMP=0x000000010001afd0
+ (void)initIntParameter:(int *)arg1 ForKey:(id)arg2 WithConfig:(id)arg3 useWeightedRa:(_Bool)arg4;	// IMP=0x000000010001af24
+ (id)defaultsDomainFromKey:(id)arg1;	// IMP=0x000000010001a7ac
@property(nonatomic) _Bool waitingForUPOData; // @synthesize waitingForUPOData=_waitingForUPOData;
@property(nonatomic) unsigned int powerSourceNotification; // @synthesize powerSourceNotification=_powerSourceNotification;
@property(nonatomic) struct __CFRunLoop *iokitPortRunLoop; // @synthesize iokitPortRunLoop=_iokitPortRunLoop;
@property(nonatomic) NSObject<OS_dispatch_queue> *iokitQueue; // @synthesize iokitQueue=_iokitQueue;
@property(nonatomic) struct IONotificationPort *powerSourcePort; // @synthesize powerSourcePort=_powerSourcePort;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *powerLogTimer; // @synthesize powerLogTimer=_powerLogTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *notifyQueue; // @synthesize notifyQueue=_notifyQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *connQueue; // @synthesize connQueue=_connQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) int testProbeDurationReachedToken; // @synthesize testProbeDurationReachedToken=_testProbeDurationReachedToken;
@property(nonatomic) int mitigationsDisabledToken; // @synthesize mitigationsDisabledToken=_mitigationsDisabledToken;
@property(nonatomic) int mitigationStateToken; // @synthesize mitigationStateToken=_mitigationStateToken;
@property(retain) NSDate *lastRAModulationDate; // @synthesize lastRAModulationDate=_lastRAModulationDate;
@property(nonatomic) int upoCount; // @synthesize upoCount=_upoCount;
@property(nonatomic) _Bool useWeightedRa; // @synthesize useWeightedRa=_useWeightedRa;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *checkpointTimer; // @synthesize checkpointTimer=_checkpointTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *raUpdateTimer; // @synthesize raUpdateTimer=_raUpdateTimer;
@property(retain, nonatomic) NSUserDefaults *defaults; // @synthesize defaults=_defaults;
@property(nonatomic) long long checkpointTime; // @synthesize checkpointTime=_checkpointTime;
@property(nonatomic) long long secondsSinceLastUpdate; // @synthesize secondsSinceLastUpdate=_secondsSinceLastUpdate;
@property(nonatomic) int probeDuration; // @synthesize probeDuration=_probeDuration;
@property(nonatomic) int effectiveRA; // @synthesize effectiveRA=_effectiveRA;
@property(nonatomic) int trueRA; // @synthesize trueRA=_trueRA;
@property(nonatomic) unsigned long long mitigationState; // @synthesize mitigationState=_mitigationState;
- (id)description;	// IMP=0x000000010001d808
- (void)updateUPOMetricsAtTime:(long long)arg1 withTrueRa:(long long)arg2 withEffectiveRa:(long long)arg3 withProbeDuration:(long long)arg4 withMitigationState:(unsigned long long)arg5 wasMitigatedUPO:(_Bool)arg6;	// IMP=0x000000010001d478
- (void)clearMitigatedUPOCount;	// IMP=0x000000010001d3c4
- (void)recordDataToPowerLog;	// IMP=0x000000010001d258
- (void)notifyMitigationsEnabled;	// IMP=0x000000010001cf90
- (void)disableMitigations;	// IMP=0x000000010001cf70
- (void)reset:(_Bool)arg1;	// IMP=0x000000010001ce3c
- (void)updateTrueRA:(int)arg1;	// IMP=0x000000010001cdd8
- (void)updateUPOCount:(int)arg1;	// IMP=0x000000010001cd74
- (void)reduceEffectiveRA:(_Bool)arg1;	// IMP=0x000000010001cb84
- (void)checkpoint;	// IMP=0x000000010001ca48
- (unsigned long long)secondsSinceBoot;	// IMP=0x000000010001ca18
- (long long)convertContinuousTimeToSeconds:(unsigned long long)arg1;	// IMP=0x000000010001c9c0
- (void)deregisterForBatteryInformationChanges;	// IMP=0x000000010001c998
- (void)registerForBatteryInformationChanges;	// IMP=0x000000010001c778
- (id)allocBatteryShutdownData;	// IMP=0x000000010001c6e8
- (_Bool)tooManyUPOs;	// IMP=0x000000010001c670
- (_Bool)upoDataIsAvailable;	// IMP=0x000000010001c5cc
- (void)obtainUPOSoC:(int *)arg1 andTemp:(int *)arg2 andTimestamp:(long long *)arg3;	// IMP=0x000000010001c3c4
- (void)handleUPO;	// IMP=0x000000010001bf78
- (void)updateStateWithSavedState:(id)arg1 withUPOCount:(int)arg2 haveUPOData:(_Bool)arg3;	// IMP=0x000000010001b8e0
- (id)currentBootSessionUUID;	// IMP=0x000000010001b874
- (char *)currentBootSessionUUIDStr;	// IMP=0x000000010001b7d4
- (void)updateMitigationState:(unsigned long long)arg1;	// IMP=0x000000010001b7a0
- (void)dealloc;	// IMP=0x000000010001aea4
- (void)invalidate;	// IMP=0x000000010001ae5c
- (id)initWithTrueRA:(int)arg1 withUPOCount:(int)arg2 withDefaultsDomain:(id)arg3 useWeightedRa:(_Bool)arg4;	// IMP=0x000000010001a7fc

@end

