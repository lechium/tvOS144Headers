//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "_DASActivityPolicy-Protocol.h"

@class NSArray, NSString, _CDContextualKeyPath, _DASBudgetManager;

@interface _DASWidgetRefreshBudgetPolicy : NSObject <_DASActivityPolicy>
{
    _DASBudgetManager *_budgetManager;	// 8 = 0x8
    NSString *_policyName;	// 16 = 0x10
    NSArray *_triggers;	// 24 = 0x18
    NSArray *_whiteListedWidgets;	// 32 = 0x20
    _CDContextualKeyPath *_widgetOverrideKeypath;	// 40 = 0x28
}

+ (id)policyInstance;	// IMP=0x000000010006e094
- (void).cxx_destruct;	// IMP=0x000000010006e87c
@property(retain, nonatomic) _CDContextualKeyPath *widgetOverrideKeypath; // @synthesize widgetOverrideKeypath=_widgetOverrideKeypath;
@property(retain, nonatomic) NSArray *whiteListedWidgets; // @synthesize whiteListedWidgets=_whiteListedWidgets;
@property(retain, nonatomic) NSArray *triggers; // @synthesize triggers=_triggers;
@property(retain, nonatomic) NSString *policyName; // @synthesize policyName=_policyName;
@property(retain, nonatomic) _DASBudgetManager *budgetManager; // @synthesize budgetManager=_budgetManager;
- (_Bool)shouldLogScoreToPowerLog;	// IMP=0x000000010006e810
- (double)baselineScoreForActivity:(id)arg1;	// IMP=0x000000010006e808
- (double)weightForActivity:(id)arg1;	// IMP=0x000000010006e7fc
- (_Bool)shouldIgnoreTrigger:(id)arg1 withState:(id)arg2;	// IMP=0x000000010006e78c
- (id)responseForActivity:(id)arg1 withState:(id)arg2;	// IMP=0x000000010006e264
- (id)initializeTriggers;	// IMP=0x000000010006e134
- (_Bool)appliesToActivity:(id)arg1;	// IMP=0x000000010006e054
- (id)init;	// IMP=0x000000010006dee0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
