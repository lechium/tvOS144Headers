//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteEntity.h"

@interface PaymentAutomaticSelectionCriterion : SQLiteEntity
{
}

+ (id)_propertySettersForCriterion;	// IMP=0x0000000100245b10
+ (id)_predicateForPaymentApplicationPID:(long long)arg1;	// IMP=0x0000000100245a9c
+ (id)_predicateForPaymentApplication:(id)arg1;	// IMP=0x0000000100245a34
+ (id)insertCriteria:(id)arg1 withPaymentApplication:(id)arg2 inDatabase:(id)arg3;	// IMP=0x0000000100245398
+ (void)deleteEntitiesInDatabase:(id)arg1 forPaymentApplication:(id)arg2;	// IMP=0x00000001002452fc
+ (id)_criteriaInDatabase:(id)arg1 forPredicate:(id)arg2;	// IMP=0x0000000100244ff0
+ (id)criteriaInDatabase:(id)arg1 forPaymentApplicationPID:(long long)arg2;	// IMP=0x0000000100244f60
+ (id)criteriaInDatabase:(id)arg1 forPaymentApplication:(id)arg2;	// IMP=0x0000000100244ed4
+ (id)databaseTable;	// IMP=0x0000000100244ec8
- (_Bool)deleteFromDatabase;	// IMP=0x000000010024599c
- (id)initWithCriterion:(id)arg1 forPaymentApplication:(id)arg2 database:(id)arg3;	// IMP=0x000000010024570c

@end

