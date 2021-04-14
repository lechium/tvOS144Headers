//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface URLBagTimer : NSObject
{
    NSString *_bagKey;	// 8 = 0x8
    NSString *_cellularBagKey;	// 16 = 0x10
    double _defaultInterval;	// 24 = 0x18
    double _defaultWindow;	// 32 = 0x20
    CDUnknownBlockType _eventBlock;	// 40 = 0x28
    NSString *_identifier;	// 48 = 0x30
    _Bool _started;	// 56 = 0x38
    CDUnknownBlockType _preconditionsBlock;	// 64 = 0x40
    id _taskObserver;	// 72 = 0x48
}

+ (id)subscriptionRenewTimer;	// IMP=0x00000001000f8cb4
- (void).cxx_destruct;	// IMP=0x00000001000fa1a0
@property(copy, nonatomic) CDUnknownBlockType preconditionsBlock; // @synthesize preconditionsBlock=_preconditionsBlock;
@property(copy, nonatomic) CDUnknownBlockType eventBlock; // @synthesize eventBlock=_eventBlock;
@property(nonatomic) double defaultWindow; // @synthesize defaultWindow=_defaultWindow;
@property(nonatomic) double defaultInterval; // @synthesize defaultInterval=_defaultInterval;
@property(copy, nonatomic) NSString *cellularBagKey; // @synthesize cellularBagKey=_cellularBagKey;
@property(copy, nonatomic) NSString *bagKey; // @synthesize bagKey=_bagKey;
- (double)_windowWithUserDefaultsKey:(id)arg1;	// IMP=0x00000001000fa0b0
- (id)_userDefaultsKeyWindowOverride;	// IMP=0x00000001000fa098
- (id)_userDefaultsKeyWiFiOverride;	// IMP=0x00000001000fa080
- (id)_userDefaultsKeyLastTimeCheck;	// IMP=0x00000001000fa068
- (id)_userDefaultsKeyCellularOverride;	// IMP=0x00000001000fa050
- (double)_timerIntervalWithBagKey:(id)arg1 userDefaultsKey:(id)arg2;	// IMP=0x00000001000f9efc
- (double)_timerInterval;	// IMP=0x00000001000f9e04
- (void)_setLastFireDate:(id)arg1;	// IMP=0x00000001000f9d88
- (void)_resetBackgroundTaskJobs;	// IMP=0x00000001000f9b9c
- (double)_readTimeIntervalFromUserDefaultsKey:(id)arg1;	// IMP=0x00000001000f9acc
- (id)_nextFireDateWithInterval:(double)arg1;	// IMP=0x00000001000f9930
- (void)_fireTimer;	// IMP=0x00000001000f9858
- (void)_attemptFireForJob:(id)arg1 withName:(id)arg2;	// IMP=0x00000001000f95dc
- (void)_addJobWithDate:(id)arg1 window:(double)arg2 allowsCellular:(_Bool)arg3;	// IMP=0x00000001000f92e0
- (void)start;	// IMP=0x00000001000f9058
- (void)reset;	// IMP=0x00000001000f8ff4
- (void)invalidate;	// IMP=0x00000001000f8d30
- (void)dealloc;	// IMP=0x00000001000f8c34
- (id)initWithIdentifier:(id)arg1;	// IMP=0x00000001000f8a30

@end

