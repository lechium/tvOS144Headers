//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteEntity.h"

@interface PaymentMessage : SQLiteEntity
{
}

+ (id)_propertySettersForPaymentMessage;	// IMP=0x000000010019bbbc
+ (id)_predicateForMessageDateNewerThanDate:(id)arg1;	// IMP=0x000000010019bb54
+ (id)_predicateForMessageType:(unsigned long long)arg1;	// IMP=0x000000010019bae0
+ (id)_predicateForNonExpiredMessages;	// IMP=0x000000010019babc
+ (id)_predicateForServiceIdentifier:(id)arg1;	// IMP=0x000000010019ba9c
+ (id)_predicateForIdentifier:(id)arg1;	// IMP=0x000000010019ba7c
+ (id)_predicateForPassWithUniqueIdentifier:(id)arg1;	// IMP=0x000000010019ba5c
+ (id)_predicateForPaymentPass:(id)arg1;	// IMP=0x000000010019b9d0
+ (id)_paymentMessagesInDatabase:(id)arg1 matchingPredicate:(id)arg2;	// IMP=0x000000010019b7bc
+ (unsigned long long)numberOfPaymentMessagesInDatabase:(id)arg1 forPassUniqueIdentifier:(id)arg2 newerThanDate:(id)arg3;	// IMP=0x000000010019b2d4
+ (id)paymentMessagesInDatabase:(id)arg1 forPaymentPassUniqueIdentifier:(id)arg2;	// IMP=0x000000010019b1b4
+ (id)anyInDatabase:(id)arg1 withServiceIdentifier:(id)arg2 forPassWithUniqueIdentifier:(id)arg3;	// IMP=0x000000010019b048
+ (id)anyInDatabase:(id)arg1 forPassWithUniqueIdentifier:(id)arg2;	// IMP=0x000000010019afbc
+ (id)messagesInDatabase:(id)arg1 withIdentifier:(id)arg2;	// IMP=0x000000010019ae24
+ (void)archiveMessagesOfType:(unsigned long long)arg1 forPass:(id)arg2 inDatabase:(id)arg3;	// IMP=0x000000010019ac04
+ (void)truncateEntitiesForPass:(id)arg1 inDatabase:(id)arg2 toCount:(long long)arg3;	// IMP=0x000000010019a9b8
+ (void)deleteEntitiesForPass:(id)arg1 inDatabase:(id)arg2;	// IMP=0x000000010019a904
+ (id)insertPaymentMessage:(id)arg1 withPaymentPass:(id)arg2 paymentApplication:(id)arg3 inDatabase:(id)arg4;	// IMP=0x000000010019a850
+ (id)joinClauseForProperty:(id)arg1;	// IMP=0x000000010019a77c
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x000000010019a724
+ (id)databaseTable;	// IMP=0x000000010019a718
- (_Bool)isArchived;	// IMP=0x000000010019b768
- (id)paymentMessage;	// IMP=0x000000010019b630
- (void)archive;	// IMP=0x000000010019b614
- (void)updateWithPaymentMessage:(id)arg1;	// IMP=0x000000010019b450
- (id)initWithPaymentMessage:(id)arg1 paymentPass:(id)arg2 paymentApplication:(id)arg3 inDatabase:(id)arg4;	// IMP=0x000000010019a3c8

@end

