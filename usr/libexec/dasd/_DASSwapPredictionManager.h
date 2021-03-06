//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, _DASAppResumePLLogger;
@protocol OS_dispatch_queue, OS_dispatch_source, _DASSwapModelAggregating;

@interface _DASSwapPredictionManager : NSObject
{
    int _notifyToken;	// 8 = 0x8
    id <_DASSwapModelAggregating> _aggregator;	// 16 = 0x10
    _DASAppResumePLLogger *_pLLogger;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    NSObject<OS_dispatch_source> *_timer;	// 40 = 0x28
    NSDictionary *_currentPredictions;	// 48 = 0x30
}

+ (id)sharedInstance;	// IMP=0x0000000100040958
- (void).cxx_destruct;	// IMP=0x0000000100040b98
@property(retain, nonatomic) NSDictionary *currentPredictions; // @synthesize currentPredictions=_currentPredictions;
@property(nonatomic) int notifyToken; // @synthesize notifyToken=_notifyToken;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) _DASAppResumePLLogger *pLLogger; // @synthesize pLLogger=_pLLogger;
@property(retain, nonatomic) id <_DASSwapModelAggregating> aggregator; // @synthesize aggregator=_aggregator;
- (void)stop;	// IMP=0x0000000100040b1c
- (void)start;	// IMP=0x0000000100040ac0
- (void)updateSwapScoresWithDictionary:(id)arg1;	// IMP=0x000000010004047c
- (void)updateScores;	// IMP=0x00000001000403cc
- (id)initWithAlgorithms:(id)arg1;	// IMP=0x0000000100040154

@end

