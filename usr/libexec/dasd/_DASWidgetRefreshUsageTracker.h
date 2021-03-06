//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableDictionary;
@protocol OS_dispatch_queue, OS_os_log, _CDLocalContext;

@interface _DASWidgetRefreshUsageTracker : NSObject
{
    unsigned int _maxWidgetRefreshBudgetForSystemDaily;	// 8 = 0x8
    unsigned int _maxWidgetRefreshBudgetForIndividualDaily;	// 12 = 0xc
    NSMutableDictionary *_trackingWidgets;	// 16 = 0x10
    NSMutableDictionary *_dailyComputedBudgetsForAllWidgets;	// 24 = 0x18
    NSDate *_computedBudgetDate;	// 32 = 0x20
    id <_CDLocalContext> _context;	// 40 = 0x28
    NSObject<OS_os_log> *_log;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_queue;	// 56 = 0x38
}

+ (id)sharedInstance;	// IMP=0x000000010000829c
- (void).cxx_destruct;	// IMP=0x00000001000096fc
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSObject<OS_os_log> *log; // @synthesize log=_log;
@property(retain, nonatomic) id <_CDLocalContext> context; // @synthesize context=_context;
@property(retain, nonatomic) NSDate *computedBudgetDate; // @synthesize computedBudgetDate=_computedBudgetDate;
@property(retain, nonatomic) NSMutableDictionary *dailyComputedBudgetsForAllWidgets; // @synthesize dailyComputedBudgetsForAllWidgets=_dailyComputedBudgetsForAllWidgets;
@property(retain, nonatomic) NSMutableDictionary *trackingWidgets; // @synthesize trackingWidgets=_trackingWidgets;
@property(nonatomic) unsigned int maxWidgetRefreshBudgetForIndividualDaily; // @synthesize maxWidgetRefreshBudgetForIndividualDaily=_maxWidgetRefreshBudgetForIndividualDaily;
@property(nonatomic) unsigned int maxWidgetRefreshBudgetForSystemDaily; // @synthesize maxWidgetRefreshBudgetForSystemDaily=_maxWidgetRefreshBudgetForSystemDaily;
- (double)stopTrackingActivity:(id)arg1;	// IMP=0x0000000100009568
- (void)startTrackingActivity:(id)arg1;	// IMP=0x00000001000094d0
- (int)allocateBudgetForViews:(int)arg1;	// IMP=0x0000000100009488
- (id)getAverageWidgetViewsPerDayWithStore:(id)arg1;	// IMP=0x0000000100008d8c
- (void)invalidateComputedBudgetCache;	// IMP=0x0000000100008d48
- (void)computeBudgetFromHistoryForAllWidgets;	// IMP=0x00000001000087d0
- (id)dailyBudgetsForAllWidgets;	// IMP=0x0000000100008638
- (id)dailyBudgetForWidget:(id)arg1;	// IMP=0x00000001000085c8
- (void)setBudgetMaximums;	// IMP=0x0000000100008498
- (id)init;	// IMP=0x0000000100008338

@end

