//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteEntity.h"

@interface AccountPaymentReminder : SQLiteEntity
{
}

+ (id)_propertySettersForAccountPaymentReminder;	// IMP=0x00000001001d09a4
+ (id)_predicateForEventPID:(long long)arg1;	// IMP=0x00000001001d0930
+ (id)databaseTable;	// IMP=0x00000001001d0924
+ (void)deletePaymentReminderWithEventPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x00000001001d0884
+ (id)insertPaymentReminder:(id)arg1 forEventPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00000001001d0568
+ (id)paymentRemindersWithEventPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x00000001001d0320
- (id)paymentReminder;	// IMP=0x00000001001d074c

@end

