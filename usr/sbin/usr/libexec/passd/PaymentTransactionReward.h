//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteEntity.h"

@interface PaymentTransactionReward : SQLiteEntity
{
}

+ (id)_propertySettersForPaymentTransactionRewardItem;	// IMP=0x00000001002722fc
+ (id)_rewardsFromRewardsItems:(id)arg1;	// IMP=0x0000000100272294
+ (id)_predicateForInstallmentPlanPID:(id)arg1;	// IMP=0x0000000100272274
+ (id)_predicateForAccountRewardsPID:(long long)arg1;	// IMP=0x0000000100272200
+ (id)_predicateForPaymentTransaction:(id)arg1;	// IMP=0x00000001002721c4
+ (id)_predicateForPaymentTransactionIdentifier:(id)arg1;	// IMP=0x00000001002721a4
+ (id)_predicateForPaymentTransactionPIDs:(id)arg1;	// IMP=0x0000000100272184
+ (id)_predicateForPaymentTransactionPID:(long long)arg1;	// IMP=0x0000000100272110
+ (id)_predicateForRewardWithIdentifier:(id)arg1;	// IMP=0x00000001002720f0
+ (id)_paymentTransactionRewardsWithQuery:(id)arg1;	// IMP=0x0000000100271e30
+ (id)_paymentTransactionRewardsInDatabase:(id)arg1 matchingPredicate:(id)arg2;	// IMP=0x0000000100271da0
+ (void)associateRewardsToPaymentTransactions:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0000000100271844
+ (id)rewardsInDatabase:(id)arg1 forInstallmentPlanPID:(id)arg2;	// IMP=0x0000000100271790
+ (id)paymentTransactionRewardsInDatabase:(id)arg1 forAccountRewardsPID:(long long)arg2;	// IMP=0x00000001002716d8
+ (id)paymentTransactionRewardsInDatabase:(id)arg1 forPaymentTransactionIdentifier:(id)arg2;	// IMP=0x0000000100271624
+ (id)paymentTransactionRewardsInDatabase:(id)arg1 forPaymentTransaction:(id)arg2;	// IMP=0x0000000100271570
+ (void)deleteEntitiesForInstallmentPlanPID:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00000001002714bc
+ (void)deleteEntitiesForAccountRewardsPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x000000010027141c
+ (void)deleteEntitiesForPaymentTransactionPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x000000010027137c
+ (void)deleteEntitiesForPaymentTransaction:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00000001002712c8
+ (void)updateRewards:(id)arg1 forInstallmentPlanPID:(id)arg2 inDatabase:(id)arg3;	// IMP=0x0000000100271124
+ (void)updatePaymentTransactionRewards:(id)arg1 forAccountRewardsPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x0000000100270f94
+ (void)updatePaymentTransactionRewards:(id)arg1 forPaymentTransaction:(id)arg2 inDatabase:(id)arg3;	// IMP=0x0000000100270df0
+ (id)joinClauseForProperty:(id)arg1;	// IMP=0x0000000100270b6c
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x0000000100270af4
+ (id)databaseTable;	// IMP=0x0000000100270ae8
- (void)updateWithPaymentTransactionRewardItem:(id)arg1;	// IMP=0x0000000100270bdc
- (id)initWithRewardsItem:(id)arg1 installmentPlanPID:(id)arg2 inDatabase:(id)arg3;	// IMP=0x0000000100270844
- (id)initWithPaymentTransactionRewardsItem:(id)arg1 paymentTransaction:(id)arg2 inDatabase:(id)arg3;	// IMP=0x0000000100270548
- (id)initWithPaymentTransactionRewardsItem:(id)arg1 accountRewardsPID:(unsigned long long)arg2 inDatabase:(id)arg3;	// IMP=0x0000000100270278

@end
