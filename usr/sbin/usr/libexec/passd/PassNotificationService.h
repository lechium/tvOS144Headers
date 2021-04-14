//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteEntity.h"

@interface PassNotificationService : SQLiteEntity
{
}

+ (id)_predicateForNotificationServicePID:(id)arg1;	// IMP=0x000000010015baf8
+ (id)queryWithDatabase:(id)arg1 transactionServicePID:(unsigned long long)arg2;	// IMP=0x000000010015b610
+ (id)insertPassNotificationServiceWithNotificationService:(id)arg1 inDatabase:(id)arg2;	// IMP=0x000000010015b580
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x000000010015b528
+ (id)databaseTable;	// IMP=0x000000010015b51c
- (void)updateWithLastUpdatedTag:(id)arg1;	// IMP=0x000000010015ba14
- (void)updateWithLastUpdatedDate:(id)arg1;	// IMP=0x000000010015b984
- (void)updateWithNotificationService:(id)arg1;	// IMP=0x000000010015b934
- (void)updateWithRegistrationStatus:(unsigned long long)arg1;	// IMP=0x000000010015b8d8
- (id)lastUpdatedTagDate;	// IMP=0x000000010015b884
- (id)lastUpdatedTag;	// IMP=0x000000010015b870
- (id)lastUpdatedDate;	// IMP=0x000000010015b81c
- (unsigned long long)registrationStatus;	// IMP=0x000000010015b7c8
- (id)notificationService;	// IMP=0x000000010015b6d8
- (id)initWithNotificationServicePID:(unsigned long long)arg1 inDatabase:(id)arg2;	// IMP=0x000000010015b410

@end
