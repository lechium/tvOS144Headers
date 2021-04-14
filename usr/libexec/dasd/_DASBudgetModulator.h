//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSMutableDictionary, _DKKnowledgeStore, _DKPredictionTimeline;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_log, _DASBudgetPersisting;

@interface _DASBudgetModulator : NSObject
{
    id <_DASBudgetPersisting> _persistence;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSDate *_lastModulationDate;	// 24 = 0x18
    NSDate *_lastUsageTimelineUpdate;	// 32 = 0x20
    NSArray *_budgets;	// 40 = 0x28
    NSObject<OS_dispatch_source> *_timer;	// 48 = 0x30
    _DKKnowledgeStore *_store;	// 56 = 0x38
    _DKPredictionTimeline *_usage;	// 64 = 0x40
    NSDate *_lastStartOfADayPeriodForBudgetAllocation;	// 72 = 0x48
    NSMutableDictionary *_lastPredictionUpdateForWidgets;	// 80 = 0x50
    NSMutableDictionary *_predictedBudgetsForWidgets;	// 88 = 0x58
    NSObject<OS_os_log> *_log;	// 96 = 0x60
}

+ (id)modulatorWithBudgets:(id)arg1 persistence:(id)arg2 withQueue:(id)arg3 withStore:(id)arg4;	// IMP=0x0000000100002e24
- (void).cxx_destruct;	// IMP=0x0000000100004e08
@property(retain, nonatomic) NSObject<OS_os_log> *log; // @synthesize log=_log;
@property(retain, nonatomic) NSMutableDictionary *predictedBudgetsForWidgets; // @synthesize predictedBudgetsForWidgets=_predictedBudgetsForWidgets;
@property(retain, nonatomic) NSMutableDictionary *lastPredictionUpdateForWidgets; // @synthesize lastPredictionUpdateForWidgets=_lastPredictionUpdateForWidgets;
@property(retain, nonatomic) NSDate *lastStartOfADayPeriodForBudgetAllocation; // @synthesize lastStartOfADayPeriodForBudgetAllocation=_lastStartOfADayPeriodForBudgetAllocation;
@property(retain, nonatomic) _DKPredictionTimeline *usage; // @synthesize usage=_usage;
@property(retain, nonatomic) _DKKnowledgeStore *store; // @synthesize store=_store;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSArray *budgets; // @synthesize budgets=_budgets;
@property(retain, nonatomic) NSDate *lastUsageTimelineUpdate; // @synthesize lastUsageTimelineUpdate=_lastUsageTimelineUpdate;
@property(retain, nonatomic) NSDate *lastModulationDate; // @synthesize lastModulationDate=_lastModulationDate;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) id <_DASBudgetPersisting> persistence; // @synthesize persistence=_persistence;
- (double)areaUnderTrapeziodWithFirstValue:(double)arg1 andSecondValue:(double)arg2;	// IMP=0x0000000100004cf0
- (double)gaussianKDEatDate:(id)arg1 withTimeline:(id)arg2 withNormalizer:(double)arg3;	// IMP=0x0000000100004ae4
- (double)budgetProportionAtDate:(id)arg1 withTimeline:(id)arg2 withNormalizer:(double)arg3;	// IMP=0x0000000100004a00
- (id)usageTimelineForWidget:(id)arg1 withStartDate:(id)arg2;	// IMP=0x0000000100004844
- (double)unlocked_budgetAllocationProportionAtDate:(id)arg1 forWidget:(id)arg2;	// IMP=0x0000000100003f74
- (int)computeSlotForDate:(id)arg1 relativeToDate:(id)arg2;	// IMP=0x0000000100003ebc
- (void)updateCapacity:(double)arg1 forBudgetWithName:(id)arg2;	// IMP=0x0000000100003d10
- (void)modulateBudgets:(id)arg1 lastModulatedAt:(id)arg2 forNumberOfModulationSlots:(int)arg3 atDate:(id)arg4;	// IMP=0x0000000100003768
- (void)_queue_modulateBudgets;	// IMP=0x0000000100003598
- (id)usageTimeline;	// IMP=0x0000000100003484
- (double)relativeUsageAtDate:(id)arg1 withTimeline:(id)arg2;	// IMP=0x0000000100002fd8
- (int)numberOfModulationFromDate:(id)arg1 toDate:(id)arg2;	// IMP=0x0000000100002f60
- (void)unlocked_addBudgetsToBeModulated:(id)arg1;	// IMP=0x0000000100002edc
- (id)initWithBudgets:(id)arg1 persistence:(id)arg2 withQueue:(id)arg3 withStore:(id)arg4;	// IMP=0x0000000100002a34

@end
