//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, _DASBudgetModulator;
@protocol OS_os_log;

@interface _DASNetworkUsageTracker : NSObject
{
    _DASBudgetModulator *_modulator;	// 8 = 0x8
    NSObject<OS_os_log> *_log;	// 16 = 0x10
    NSMutableSet *_startedActivites;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x0000000100006ba4
- (void).cxx_destruct;	// IMP=0x0000000100006c80
@property(retain, nonatomic) NSMutableSet *startedActivites; // @synthesize startedActivites=_startedActivites;
@property(retain, nonatomic) NSObject<OS_os_log> *log; // @synthesize log=_log;
@property(retain) _DASBudgetModulator *modulator; // @synthesize modulator=_modulator;
- (id)init;	// IMP=0x0000000100006b0c

@end

