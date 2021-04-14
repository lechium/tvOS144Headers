//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteEntity.h"

@interface VirtualCard : SQLiteEntity
{
}

+ (id)_propertySettersForVirtualCard;	// IMP=0x0000000100247f7c
+ (void)deleteVirtualCardsForVirtualCardStatusUpdatePID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x0000000100247edc
+ (id)insertVirtualCards:(id)arg1 forVirtualCardStatusUpdatePID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x0000000100247d10
+ (id)virtualCardsForVirtualCardStatusUpdatePID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x0000000100247ac8
+ (id)_predicateForVirtualCardStatusUpdatePID:(long long)arg1;	// IMP=0x0000000100247484
+ (id)_predicateForCreditAccountDetailsPID:(long long)arg1;	// IMP=0x0000000100247410
+ (id)_predicateForVirtualCardIdentifier:(id)arg1;	// IMP=0x00000001002473f0
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x00000001002473b8
+ (id)databaseTable;	// IMP=0x00000001002473ac
+ (void)deleteVirtualCardEncryptedDataForCreditAccountDetailsPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x00000001002471f8
+ (void)deleteVirtualCardsForCreditAccountDetailsPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x0000000100247158
+ (id)insertOrUpdateVirtualCards:(id)arg1 forCreditAccountDetailsPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x0000000100246574
+ (id)virtualCardsForCreditAccountDetailsPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x000000010024632c
+ (id)virtualCardForIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0000000100246288
+ (id)insertOrUpdateVirtualCard:(id)arg1 forCreditAccountDetailsPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00000001002461a0
- (id)initWithVirtualCard:(id)arg1 forVirtualCardStatusUpdatePID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x0000000100247668
- (id)virtualCard;	// IMP=0x00000001002474f8
- (void)removeVirtualCardEncryptedData;	// IMP=0x0000000100247064
- (void)updateWithVirtualCard:(id)arg1;	// IMP=0x0000000100246b1c
- (id)initWithVirtualCard:(id)arg1 forCreditAccountDetailsPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x0000000100245ce4

@end
