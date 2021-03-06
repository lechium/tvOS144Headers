//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FLSQLiteExecutor;

@interface FLStoreMigrator : NSObject
{
    FLSQLiteExecutor *_queryExecutor;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100010b20
@property(retain) FLSQLiteExecutor *queryExecutor; // @synthesize queryExecutor=_queryExecutor;
- (void)_dropTables;	// IMP=0x0000000100010a68
- (void)_createCurrentDatabaseWithTableSuffix:(id)arg1;	// IMP=0x000000010001088c
- (void)_migrateFujitailToCurrent;	// IMP=0x0000000100010380
- (void)_migrateToCurrentFrom:(long long)arg1;	// IMP=0x000000010000fa40
- (void)_createCleanCurrentDatabase;	// IMP=0x000000010000fa04
- (void)_migrateSchema:(long long)arg1 toSchema:(long long)arg2;	// IMP=0x000000010000f838
- (long long)_schemaVersion;	// IMP=0x000000010000f708
- (void)migrateSchemeIfNecessary;	// IMP=0x000000010000f6b8
- (id)initWithExecutor:(id)arg1;	// IMP=0x000000010000f654

@end

