//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BKAlternateSystemAppManager, BKSystemAppSentinel, NSHashTable;
@protocol BKFirstBootTokenProviding, OS_dispatch_queue;

@interface BKFirstBootDetector : NSObject
{
    BKSystemAppSentinel *_systemAppSentinel;	// 8 = 0x8
    id <BKFirstBootTokenProviding> _firstBootToken;	// 16 = 0x10
    BKAlternateSystemAppManager *_alternateSystemAppManager;	// 24 = 0x18
    NSHashTable *_queue_observers;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
}

+ (id)sharedInstance;	// IMP=0x0000000100031a88
- (void).cxx_destruct;	// IMP=0x000000010003183c
@property(retain, nonatomic) BKAlternateSystemAppManager *alternateSystemAppManager; // @synthesize alternateSystemAppManager=_alternateSystemAppManager;
@property(retain, nonatomic) BKSystemAppSentinel *systemAppSentinel; // @synthesize systemAppSentinel=_systemAppSentinel;
- (void)_queue_finishBootingIfNecessaryAndTellObservers:(_Bool)arg1;	// IMP=0x0000000100031614
- (void)_systemAppDidFinishLaunching:(id)arg1;	// IMP=0x00000001000315bc
- (void)removeObserver:(id)arg1;	// IMP=0x0000000100031538
- (void)addObserver:(id)arg1;	// IMP=0x00000001000314b4
@property(readonly, nonatomic, getter=isFirstBoot) _Bool firstBoot;
- (id)description;	// IMP=0x000000010003141c
- (id)initWithSystemAppSentinel:(id)arg1 firstBootToken:(id)arg2 alternateSystemAppManager:(id)arg3;	// IMP=0x0000000100031298

@end

