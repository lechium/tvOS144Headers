//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GKSQLiteStatementStore-Protocol.h"

@class NSString;
@protocol OS_dispatch_queue;

@interface GKDatabaseConnection : NSObject <GKSQLiteStatementStore>
{
    struct __CFDictionary *_stmtCache;	// 8 = 0x8
    NSString *_path;	// 16 = 0x10
    struct sqlite3 *_database;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_databaseQueue;	// 32 = 0x20
}

+ (id)connectionWithDatabasePath:(id)arg1;	// IMP=0x00000001000deb1c
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *databaseQueue; // @synthesize databaseQueue=_databaseQueue;
@property(nonatomic) struct sqlite3 *database; // @synthesize database=_database;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
- (void)performAsyncTransaction:(CDUnknownBlockType)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000e0350
- (void)performAsync:(CDUnknownBlockType)arg1;	// IMP=0x00000001000e01bc
- (void)performSync:(CDUnknownBlockType)arg1;	// IMP=0x00000001000e0028
- (void)close;	// IMP=0x00000001000dfd44
- (void)open;	// IMP=0x00000001000df0dc
- (int)getStatement:(struct sqlite3_stmt **)arg1 forSQL:(id)arg2;	// IMP=0x00000001000dee54
- (void)dealloc;	// IMP=0x00000001000dede0
- (void)checkAndOpenDatabase;	// IMP=0x00000001000decd8
- (id)initWithDatabasePath:(id)arg1;	// IMP=0x00000001000deb54

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
