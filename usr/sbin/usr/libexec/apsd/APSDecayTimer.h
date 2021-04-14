//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString, PCSimpleTimer;
@protocol APSDecayTimerDelegate;

@interface APSDecayTimer : NSObject
{
    unsigned long long _maxCost;	// 8 = 0x8
    unsigned long long _hourlyCostThreshold;	// 16 = 0x10
    unsigned long long _currentCost;	// 24 = 0x18
    NSDate *_lastCostDecayAdjustment;	// 32 = 0x20
    NSString *_identifier;	// 40 = 0x28
    PCSimpleTimer *_decayTimer;	// 48 = 0x30
    id <APSDecayTimerDelegate> _delegate;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000010007fde8
@property(readonly, nonatomic) unsigned long long currentCost; // @synthesize currentCost=_currentCost;
- (void)_clearDecayTimer;	// IMP=0x000000010007fdac
- (void)_decayTimerFired;	// IMP=0x000000010007fcc0
- (void)_decayCost;	// IMP=0x000000010007fa24
- (void)_handleSignificantTimeChange;	// IMP=0x000000010007f94c
- (void)forceTimerFire;	// IMP=0x000000010007f940
- (void)addCost:(unsigned long long)arg1;	// IMP=0x000000010007f8fc
- (void)performDecay;	// IMP=0x000000010007f8f0
- (void)setDelegate:(id)arg1;	// IMP=0x000000010007f8e4
- (void)dealloc;	// IMP=0x000000010007f880
- (id)initWithHourlyCostThreshold:(unsigned long long)arg1 costMaximum:(unsigned long long)arg2 identifier:(id)arg3;	// IMP=0x000000010007f6f0

@end

