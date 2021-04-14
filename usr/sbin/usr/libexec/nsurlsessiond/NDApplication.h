//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface NDApplication : NSObject
{
    NSString *_bundleIdentifier;	// 8 = 0x8
    NSMutableArray *_observers;	// 16 = 0x10
    _Bool isInTransitionalDiscretionaryPeriod;	// 24 = 0x18
    double _currentRequestDelay;	// 32 = 0x20
}

+ (_Bool)springBoardApplicationExistsWithIdentifier:(id)arg1;	// IMP=0x0000000100038ad0
+ (id)springboardApplicationWithBundleIdentifier:(id)arg1;	// IMP=0x0000000100038998
+ (id)applicationWithIdentifier:(id)arg1;	// IMP=0x000000010003885c
+ (void)initialize;	// IMP=0x0000000100038824
- (void).cxx_destruct;	// IMP=0x000000010003860c
@property double currentRequestDelay; // @synthesize currentRequestDelay=_currentRequestDelay;
@property(retain) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property _Bool isInTransitionalDiscretionaryPeriod; // @synthesize isInTransitionalDiscretionaryPeriod;
- (void)_onqueue_resetRequestDelay;	// IMP=0x0000000100038514
- (_Bool)backgroundUpdatesEnabled;	// IMP=0x000000010003850c
- (void)invokeSelectorForAllObservers:(SEL)arg1;	// IMP=0x0000000100038484
- (void)removeObserver:(id)arg1;	// IMP=0x00000001000383d4
- (void)addObserver:(id)arg1;	// IMP=0x0000000100038344
- (_Bool)isHandlingBackgroundURLSessionWithIdentifier:(id)arg1 withSessionUUID:(id)arg2;	// IMP=0x000000010003833c
- (_Bool)hasBackgroundTaskCompletion;	// IMP=0x0000000100038334
- (_Bool)isBeingDebugged;	// IMP=0x000000010003832c
- (_Bool)isSuspended;	// IMP=0x0000000100038324
- (_Bool)canBeSuspended;	// IMP=0x000000010003831c
- (_Bool)isAwake;	// IMP=0x0000000100038314
- (_Bool)isForeground;	// IMP=0x000000010003830c
- (_Bool)hasForegroundBackgroundStates;	// IMP=0x0000000100038304
- (_Bool)wakeForSessionIdentifier:(id)arg1 withSessionUUID:(id)arg2 wakeRequirement:(long long)arg3;	// IMP=0x0000000100038170
- (_Bool)maySupportWakesLater;	// IMP=0x000000010003813c
- (_Bool)supportsWakes;	// IMP=0x00000001000380c8
- (_Bool)usesContainerManagerForAVAsset;	// IMP=0x00000001000380c0
- (id)containerURL;	// IMP=0x00000001000380b8
- (id)initWithIdentifier:(id)arg1;	// IMP=0x0000000100037fe8

@end
