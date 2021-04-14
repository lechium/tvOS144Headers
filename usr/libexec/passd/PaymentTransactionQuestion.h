//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteEntity.h"

@interface PaymentTransactionQuestion : SQLiteEntity
{
}

+ (id)_propertySettersForPaymentTransactionQuestion;	// IMP=0x000000010026ae2c
+ (id)_predicateForPaymentTransactionPIDs:(id)arg1;	// IMP=0x000000010026ae0c
+ (id)_predicateForPaymentTransaction:(id)arg1;	// IMP=0x000000010026add0
+ (id)_predicateForPaymentTransactionIdentifier:(id)arg1;	// IMP=0x000000010026adb0
+ (id)_predicateForPaymentTransactionPID:(long long)arg1;	// IMP=0x000000010026ad3c
+ (id)_predicateForQuestionWithType:(long long)arg1;	// IMP=0x000000010026acc8
+ (id)_paymentTransactionQuestionsWithQuery:(id)arg1;	// IMP=0x000000010026aae8
+ (id)_paymentTransactionQuestionsInDatabase:(id)arg1 matchingPredicate:(id)arg2;	// IMP=0x000000010026aa58
+ (void)associateQuestionsToPaymentTransactions:(id)arg1 inDatabase:(id)arg2;	// IMP=0x000000010026a5d8
+ (id)paymentTransactionQuestionsInDatabase:(id)arg1 forPaymentTransactionIdentifier:(id)arg2;	// IMP=0x000000010026a54c
+ (id)paymentTransactionQuestionsInDatabase:(id)arg1 forPaymentTransaction:(id)arg2;	// IMP=0x000000010026a4c0
+ (void)deleteEntitiesForPaymentTransactionPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x000000010026a420
+ (void)deleteEntitiesForPaymentTransaction:(id)arg1 inDatabase:(id)arg2;	// IMP=0x000000010026a36c
+ (void)updatePaymentTransactionQuestions:(id)arg1 forPaymentTransaction:(id)arg2 inDatabase:(id)arg3;	// IMP=0x0000000100269ecc
+ (id)joinClauseForProperty:(id)arg1;	// IMP=0x0000000100269d24
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x0000000100269cec
+ (id)databaseTable;	// IMP=0x0000000100269ce0
- (void)updateWithPaymentTransactionQuestion:(id)arg1;	// IMP=0x0000000100269d54
- (id)initWithPaymentTransactionQuestion:(id)arg1 paymentTransaction:(id)arg2 inDatabase:(id)arg3;	// IMP=0x0000000100269ae0

@end
