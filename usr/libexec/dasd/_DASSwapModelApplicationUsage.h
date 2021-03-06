//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "_DASSwapModeling-Protocol.h"

@class NSDate, NSDictionary;
@protocol OS_os_log, _DKKnowledgeQuerying;

@interface _DASSwapModelApplicationUsage : NSObject <_DASSwapModeling>
{
    id <_DKKnowledgeQuerying> _knowledgeStore;	// 8 = 0x8
    NSObject<OS_os_log> *_log;	// 16 = 0x10
    NSDictionary *_currentProbabilities;	// 24 = 0x18
    NSDate *_transitionDate;	// 32 = 0x20
    NSDictionary *_nextProbabilities;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000100041080
@property(retain) NSDictionary *nextProbabilities; // @synthesize nextProbabilities=_nextProbabilities;
@property(retain) NSDate *transitionDate; // @synthesize transitionDate=_transitionDate;
@property(retain) NSDictionary *currentProbabilities; // @synthesize currentProbabilities=_currentProbabilities;
@property(retain, nonatomic) NSObject<OS_os_log> *log; // @synthesize log=_log;
@property(retain, nonatomic) id <_DKKnowledgeQuerying> knowledgeStore; // @synthesize knowledgeStore=_knowledgeStore;
- (void)updateScores;	// IMP=0x0000000100041010
- (id)scoresForAllApplicationsAtDate:(id)arg1;	// IMP=0x0000000100040f64
- (double)scoreForApplication:(id)arg1 atDate:(id)arg2;	// IMP=0x0000000100040e58
- (void)updateTimeline;	// IMP=0x0000000100040c98
- (void)convertTimelineToApplicationDictionaries:(id)arg1;	// IMP=0x0000000100040c94
- (id)init;	// IMP=0x0000000100040bec

@end

