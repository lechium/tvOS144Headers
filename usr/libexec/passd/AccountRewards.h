//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteEntity.h"

@interface AccountRewards : SQLiteEntity
{
}

+ (id)_propertySettersForAccountRewards;	// IMP=0x000000010004969c
+ (id)_predicateForEventPID:(long long)arg1;	// IMP=0x0000000100049628
+ (id)databaseTable;	// IMP=0x000000010004961c
+ (void)deleteRewardsWithEventPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x00000001000491a0
+ (id)insertRewards:(id)arg1 forEventPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x0000000100048a84
+ (id)rewardsWithEventPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x000000010004883c
- (_Bool)deleteFromDatabase;	// IMP=0x0000000100049240
- (id)currencyAmount;	// IMP=0x0000000100049080
- (id)rewards;	// IMP=0x0000000100048e0c

@end
