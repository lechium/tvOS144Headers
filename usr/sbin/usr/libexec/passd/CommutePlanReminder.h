//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteEntity.h"

@interface CommutePlanReminder : SQLiteEntity
{
}

+ (id)_propertySetters;	// IMP=0x000000010019a2fc
+ (id)_predicateForPassWithUniqueIdentifier:(id)arg1;	// IMP=0x000000010019a0f4
+ (id)_predicateForCommutePlanReminder:(id)arg1 passPID:(long long)arg2;	// IMP=0x0000000100199f70
+ (id)_predicateForCommutePlanReminder:(id)arg1 passIdentifier:(id)arg2;	// IMP=0x0000000100199dd8
+ (id)databaseTable;	// IMP=0x0000000100199dcc
+ (id)insertOrUpdateCommutePlanReminder:(id)arg1 forCommutePlanIdentifier:(id)arg2 pass:(id)arg3 database:(id)arg4;	// IMP=0x0000000100199950
+ (void)deleteAnyInDatabase:(id)arg1 forPassIdentifier:(id)arg2;	// IMP=0x00000001001998b4
+ (id)commutePlanReminderInDatabase:(id)arg1 forQuery:(id)arg2;	// IMP=0x0000000100199640
+ (id)commutePlanReminderInDatabase:(id)arg1 forCommutePlanIdentifier:(id)arg2 passIdentifier:(id)arg3;	// IMP=0x000000010019956c
+ (id)joinClauseForProperty:(id)arg1;	// IMP=0x0000000100199498
- (void)updateWithCommutePlanReminder:(id)arg1;	// IMP=0x000000010019a24c
- (id)commutePlanReminder;	// IMP=0x000000010019a114
- (id)initWithCommutePlanReminder:(id)arg1 forCommutePlanIdentifier:(id)arg2 pass:(id)arg3 database:(id)arg4;	// IMP=0x0000000100199c3c

@end

