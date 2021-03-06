//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, NSMutableSet;

@interface CSVoiceTriggerXPCServiceProxy : NSObject
{
    _Bool _isPhraseSpotterBypassed;	// 8 = 0x8
    _Bool _isRaiseToSpeakBypassed;	// 9 = 0x9
    NSMutableSet *_activationAssertions;	// 16 = 0x10
    NSHashTable *_observers;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x000000010000d078
- (void).cxx_destruct;	// IMP=0x000000010000e628
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(nonatomic) _Bool isRaiseToSpeakBypassed; // @synthesize isRaiseToSpeakBypassed=_isRaiseToSpeakBypassed;
@property(nonatomic) _Bool isPhraseSpotterBypassed; // @synthesize isPhraseSpotterBypassed=_isPhraseSpotterBypassed;
@property(retain, nonatomic) NSMutableSet *activationAssertions; // @synthesize activationAssertions=_activationAssertions;
- (id)fetchVoiceTriggerStats;	// IMP=0x000000010000e584
- (void)notifyServiceConnectionLost;	// IMP=0x000000010000e36c
- (void)notifyVoiceTriggeredSiriSessionCancelled;	// IMP=0x000000010000e2c8
- (void)setRaiseToSpeakBypassing:(_Bool)arg1 timeout:(double)arg2;	// IMP=0x000000010000dcc8
- (void)setPhraseSpotterBypassing:(_Bool)arg1 timeout:(double)arg2;	// IMP=0x000000010000d698
- (void)enableVoiceTrigger:(_Bool)arg1 withAssertion:(id)arg2 timestamp:(double)arg3;	// IMP=0x000000010000d104
- (void)unregisterObserver:(id)arg1;	// IMP=0x000000010000d0f4
- (void)registerObserver:(id)arg1;	// IMP=0x000000010000d0e4
- (id)init;	// IMP=0x000000010000cfd4

@end

