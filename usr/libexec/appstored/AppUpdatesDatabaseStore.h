//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteDatabaseStore.h"

@interface AppUpdatesDatabaseStore : SQLiteDatabaseStore
{
}

+ (_Bool)createOrMigrateStoreUsingSchema:(id)arg1;	// IMP=0x000000010014c394
+ (id)storeDescriptor;	// IMP=0x000000010014b678
+ (id)sharedInstance;	// IMP=0x000000010014b56c
- (_Bool)setUpdateState:(long long)arg1 usingPurchaseInfo:(id)arg2;	// IMP=0x000000010014c268
- (_Bool)setUpdateState:(long long)arg1 forBundleIDs:(id)arg2 logKey:(id)arg3;	// IMP=0x000000010014bddc
- (_Bool)resetUpdateWithBundleID:(id)arg1 logKey:(id)arg2;	// IMP=0x000000010014bc4c
- (_Bool)finishAppUpdateForBundleID:(id)arg1 withUpdateState:(long long)arg2;	// IMP=0x000000010014b6f8

@end

