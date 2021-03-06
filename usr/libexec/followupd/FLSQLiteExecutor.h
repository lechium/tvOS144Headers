//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_os_transaction;

@interface FLSQLiteExecutor : NSObject
{
    struct sqlite3 *_database;	// 8 = 0x8
    NSString *_databasePath;	// 16 = 0x10
    NSObject<OS_os_transaction> *_transaction;	// 24 = 0x18
    _Bool _shouldAutomaticallyMigrate;	// 32 = 0x20
}

+ (id)_databaseQueue;	// IMP=0x00000001000047b4
+ (void)performBlockAndWait:(CDUnknownBlockType)arg1;	// IMP=0x00000001000046bc
+ (void)performBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100004568
- (void).cxx_destruct;	// IMP=0x0000000100006034
@property(nonatomic) _Bool shouldAutomaticallyMigrate; // @synthesize shouldAutomaticallyMigrate=_shouldAutomaticallyMigrate;
- (void)_unsafe_closeDatabase;	// IMP=0x0000000100005edc
- (void)closeDatabase;	// IMP=0x0000000100005e68
- (void)_unsafe_wipeDatabase;	// IMP=0x0000000100005d24
- (void)wipeDatabase;	// IMP=0x0000000100005c18
- (int)_unsafe_createDataBase;	// IMP=0x0000000100005988
- (_Bool)_unsafe_openDatabase:(id *)arg1;	// IMP=0x0000000100005770
- (_Bool)openDatabase:(id *)arg1;	// IMP=0x0000000100005550
- (id)_currentDataBaseError;	// IMP=0x00000001000053d8
- (_Bool)_handleDatabaseFailureError:(id *)arg1;	// IMP=0x00000001000051c4
- (_Bool)_finalizeStatement:(struct sqlite3_stmt *)arg1 error:(id *)arg2;	// IMP=0x00000001000050e4
- (struct sqlite3_stmt *)_prepareStatementForQuery:(id)arg1 error:(id *)arg2;	// IMP=0x000000010000503c
- (void)_stepThroughRowsWithQuery:(id)arg1 statement:(struct sqlite3_stmt *)arg2;	// IMP=0x0000000100004f78
- (void)_printStatement:(struct sqlite3_stmt *)arg1;	// IMP=0x0000000100004ebc
- (long long)performInsertQuery:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100004d90
- (_Bool)performQuery:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100004c40
- (_Bool)performQuery:(id)arg1 rowHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100004b14
- (_Bool)performQuery:(id)arg1;	// IMP=0x0000000100004b04
- (long long)performInsertQuery:(id)arg1;	// IMP=0x0000000100004aa0
- (int)_executeQuery:(id)arg1;	// IMP=0x0000000100004924
- (void)rollbackTransaction;	// IMP=0x0000000100004910
- (void)commitTransaction;	// IMP=0x00000001000048c4
- (void)openTransaction;	// IMP=0x00000001000048b0
- (void)performTransactionBlockAndWait:(CDUnknownBlockType)arg1;	// IMP=0x000000010000484c
@property(readonly, nonatomic) NSString *databasePath;
@property(readonly, nonatomic) struct sqlite3 *database;
- (id)initWithDatabasePath:(id)arg1;	// IMP=0x00000001000044ec

@end

