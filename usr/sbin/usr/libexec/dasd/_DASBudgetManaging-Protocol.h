//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSString, _CDContextualKeyPath, _DASActivity;

@protocol _DASBudgetManaging <NSObject>
+ (id)sharedInstance;
- (void)reportActivityNoLongerRunning:(_DASActivity *)arg1;
- (void)reportActivityRunning:(_DASActivity *)arg1;
- (void)setCapacity:(double)arg1 forBudgetWithName:(NSString *)arg2;
- (void)setBalance:(double)arg1 forBudgetWithName:(NSString *)arg2;
- (double)remainingBalanceForBudgetWithName:(NSString *)arg1;
- (NSArray *)allBudgets;

@optional
- (_CDContextualKeyPath *)budgetKeyPathForBudgetName:(NSString *)arg1;
- (void)reportUpdateForActivity:(_DASActivity *)arg1 withDataConsumed:(NSDictionary *)arg2;
- (void)reportActivityNoLongerRunningWithParameters:(NSDictionary *)arg1;
- (void)reportActivityRunningWithParameters:(NSDictionary *)arg1;
- (void)reinstantiateConfiguredBudgets;
@end

