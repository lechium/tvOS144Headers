//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface WiFiSoftErrorContext : NSObject
{
    int _errorType;	// 8 = 0x8
    int _errorState;	// 12 = 0xc
    struct __WiFiManager *_manager;	// 16 = 0x10
    struct __WiFiDeviceManager *_deviceManager;	// 24 = 0x18
    double _triggerTime;	// 32 = 0x20
    NSMutableArray *_errorContextData;	// 40 = 0x28
    NSMutableArray *_statsRecordData;	// 48 = 0x30
    double _detectionTime;	// 56 = 0x38
}

+ (id)populateWiFiChipCounterDeltaWithChipCountersFromRecord1:(id)arg1 andChipCountersFromRecord2:(id)arg2;	// IMP=0x0000000100006dec
+ (id)populateWiFiFrameCountersWithRecord1Counters:(id)arg1 andRecord2Counters:(id)arg2;	// IMP=0x0000000100006720
+ (id)populateBtCoexCounterDeltaWithCountersFromRecord1:(id)arg1 andRecord2:(id)arg2;	// IMP=0x0000000100005e80
- (void).cxx_destruct;	// IMP=0x0000000100008244
@property double detectionTime; // @synthesize detectionTime=_detectionTime;
@property int errorState; // @synthesize errorState=_errorState;
- (id)fetchSoftErrorContextData;	// IMP=0x0000000100008180
- (void)_populateAndSubmitAWDMetric:(int)arg1 withLastErrorType:(unsigned int)arg2;	// IMP=0x0000000100007784
- (void)addStatsRecord:(id)arg1;	// IMP=0x0000000100005e68
- (id)initWithErrorType:(int)arg1 deviceContext:(void *)arg2;	// IMP=0x0000000100005d70

@end

