//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteDatabaseStore.h"

@interface AppInstallsDatabaseStore : SQLiteDatabaseStore
{
}

+ (_Bool)createOrMigrateStoreUsingSchema:(id)arg1;	// IMP=0x00000001002a6914
+ (id)storeDescriptor;	// IMP=0x00000001002a6894
+ (id)sharedInstance;	// IMP=0x00000001002a6788
- (void)_applyExternalChangesForChangeset:(id)arg1;	// IMP=0x00000001002a7b70
- (id)_restoresForPIDS:(id)arg1;	// IMP=0x00000001002a784c
- (void)_applyChangesForChangeset:(id)arg1 transaction:(id)arg2;	// IMP=0x00000001002a6ef4
- (void)scheduleUsingTransaction:(CDUnknownBlockType)arg1;	// IMP=0x00000001002a6c8c
- (void)readUsingSession:(CDUnknownBlockType)arg1;	// IMP=0x00000001002a6b6c
- (void)modifyUsingTransaction:(CDUnknownBlockType)arg1;	// IMP=0x00000001002a6928

@end

