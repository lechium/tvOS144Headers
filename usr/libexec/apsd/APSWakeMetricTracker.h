//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTimer;

@interface APSWakeMetricTracker : NSObject
{
    _Bool _startedConnected;	// 8 = 0x8
    _Bool _didConnect;	// 9 = 0x9
    _Bool _hasReceivedStoredMessage;	// 10 = 0xa
    double _onConnectedInterval;	// 16 = 0x10
    double _onDisconnectedInterval;	// 24 = 0x18
    CDUnknownBlockType _metricSubmissionBlock;	// 32 = 0x20
    NSTimer *_metricSubmitTimer;	// 40 = 0x28
    unsigned long long _state;	// 48 = 0x30
    double _startTime;	// 56 = 0x38
    double _connectedTime;	// 64 = 0x40
    double _tentativeConnectedTime;	// 72 = 0x48
    double _lastSignificantTime;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000010004065c
@property(nonatomic) _Bool hasReceivedStoredMessage; // @synthesize hasReceivedStoredMessage=_hasReceivedStoredMessage;
@property(nonatomic) double lastSignificantTime; // @synthesize lastSignificantTime=_lastSignificantTime;
@property(nonatomic) _Bool didConnect; // @synthesize didConnect=_didConnect;
@property(nonatomic) _Bool startedConnected; // @synthesize startedConnected=_startedConnected;
@property(nonatomic) double tentativeConnectedTime; // @synthesize tentativeConnectedTime=_tentativeConnectedTime;
@property(nonatomic) double connectedTime; // @synthesize connectedTime=_connectedTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSTimer *metricSubmitTimer; // @synthesize metricSubmitTimer=_metricSubmitTimer;
@property(copy, nonatomic) CDUnknownBlockType metricSubmissionBlock; // @synthesize metricSubmissionBlock=_metricSubmissionBlock;
@property(nonatomic) double onDisconnectedInterval; // @synthesize onDisconnectedInterval=_onDisconnectedInterval;
@property(nonatomic) double onConnectedInterval; // @synthesize onConnectedInterval=_onConnectedInterval;
- (void)_clearState;	// IMP=0x000000010004054c
- (void)_fireMetricIfNeeded;	// IMP=0x00000001000403e8
- (void)_timerFired:(id)arg1;	// IMP=0x00000001000403b4
- (void)noteReceivedLiveMessage;	// IMP=0x00000001000403a8
- (void)noteSystemWillSleep;	// IMP=0x000000010004039c
- (void)noteReceivedStoredMessage;	// IMP=0x0000000100040338
- (void)noteDidConnect;	// IMP=0x00000001000402a8
- (void)noteSystemDidFullWakeWhileConnected:(_Bool)arg1;	// IMP=0x00000001000401e8
- (id)initWithOnConnectedInterval:(double)arg1 onDisconnectedInterval:(double)arg2 metricSubmissionBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000001000400ec
- (id)init;	// IMP=0x000000010003ff68

@end
