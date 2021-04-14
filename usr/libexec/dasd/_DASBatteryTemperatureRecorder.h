//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class _DKEventStream;
@protocol OS_dispatch_queue, OS_os_log, _DKKnowledgeSaving;

@interface _DASBatteryTemperatureRecorder : NSObject
{
    unsigned int _powerService;	// 8 = 0x8
    unsigned int _batteryNotification;	// 12 = 0xc
    long long _currentBatteryTemperature;	// 16 = 0x10
    struct IONotificationPort *_notifyPort;	// 24 = 0x18
    NSObject<OS_os_log> *_log;	// 32 = 0x20
    _DKEventStream *_targetStream;	// 40 = 0x28
    id <_DKKnowledgeSaving> _knowledgeStore;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_queue;	// 56 = 0x38
    long long _recentBatteryTemperature;	// 64 = 0x40
    double _lowTemperatureCeiling;	// 72 = 0x48
    double _mediumTemperatureCeiling;	// 80 = 0x50
    double _lowTemperatureDelta;	// 88 = 0x58
    double _mediumTemperatureDelta;	// 96 = 0x60
    double _highTemperatureDelta;	// 104 = 0x68
    double _nonPluggedInDelta;	// 112 = 0x70
}

+ (id)sharedInstance;	// IMP=0x0000000100036af4
- (void).cxx_destruct;	// IMP=0x00000001000374cc
@property(nonatomic) double nonPluggedInDelta; // @synthesize nonPluggedInDelta=_nonPluggedInDelta;
@property(nonatomic) double highTemperatureDelta; // @synthesize highTemperatureDelta=_highTemperatureDelta;
@property(nonatomic) double mediumTemperatureDelta; // @synthesize mediumTemperatureDelta=_mediumTemperatureDelta;
@property(nonatomic) double lowTemperatureDelta; // @synthesize lowTemperatureDelta=_lowTemperatureDelta;
@property(nonatomic) double mediumTemperatureCeiling; // @synthesize mediumTemperatureCeiling=_mediumTemperatureCeiling;
@property(nonatomic) double lowTemperatureCeiling; // @synthesize lowTemperatureCeiling=_lowTemperatureCeiling;
@property(nonatomic) long long recentBatteryTemperature; // @synthesize recentBatteryTemperature=_recentBatteryTemperature;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) id <_DKKnowledgeSaving> knowledgeStore; // @synthesize knowledgeStore=_knowledgeStore;
@property(retain, nonatomic) _DKEventStream *targetStream; // @synthesize targetStream=_targetStream;
@property(retain, nonatomic) NSObject<OS_os_log> *log; // @synthesize log=_log;
@property(nonatomic) struct IONotificationPort *notifyPort; // @synthesize notifyPort=_notifyPort;
@property(nonatomic) unsigned int batteryNotification; // @synthesize batteryNotification=_batteryNotification;
@property(nonatomic) unsigned int powerService; // @synthesize powerService=_powerService;
@property(nonatomic) long long currentBatteryTemperature; // @synthesize currentBatteryTemperature=_currentBatteryTemperature;
- (long long)roundedTemperature:(long long)arg1;	// IMP=0x00000001000373ac
- (_Bool)storeBatteryTemperatureEvent:(long long)arg1 metaData:(id)arg2;	// IMP=0x00000001000371d0
- (id)getBatteryStatus;	// IMP=0x0000000100037018
- (void)handleBatteryNotification;	// IMP=0x0000000100036d08
- (void)startRecording;	// IMP=0x0000000100036b78
- (id)init;	// IMP=0x0000000100036a34

@end

