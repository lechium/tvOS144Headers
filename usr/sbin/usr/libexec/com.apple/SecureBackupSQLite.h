//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SecureBackupDB-Protocol.h"

@class NSData, NSString, NSURL;

@interface SecureBackupSQLite : NSObject <SecureBackupDB>
{
    struct sqlite3 *_db;	// 8 = 0x8
    NSURL *_url;	// 16 = 0x10
    NSString *_recordID;	// 24 = 0x18
}

+ (struct sqlite3 *)openDBWithURL:(id)arg1 truncate:(_Bool)arg2;	// IMP=0x0000000100015d94
- (void).cxx_destruct;	// IMP=0x00000001000177e4
@property(copy) NSString *recordID; // @synthesize recordID=_recordID;
@property(readonly) NSURL *url; // @synthesize url=_url;
@property struct sqlite3 *db; // @synthesize db=_db;
- (void)closeDB;	// IMP=0x0000000100017714
- (void)dbManagementTasks;	// IMP=0x00000001000175c0
- (long long)sqliteExecInteger:(id)arg1;	// IMP=0x0000000100017430
- (void)resetDBWithKeybag:(id)arg1;	// IMP=0x0000000100017078
- (_Bool)sqliteExec:(id)arg1;	// IMP=0x0000000100016f00
- (void)enumerateKeysAndItemsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100016c98
@property(readonly) NSData *keybag;
@property(readonly) NSData *keybagDigest;
@property(readonly) NSData *manifestHash;
- (_Bool)removeItemWithKey:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100016528
- (_Bool)addItem:(id)arg1 withKey:(id)arg2 forClass:(id)arg3 error:(id *)arg4;	// IMP=0x0000000100016118
- (id)sqliteErrorForDB:(struct sqlite3 *)arg1;	// IMP=0x0000000100015fe8
- (id)initWithURL:(id)arg1 recordID:(id)arg2;	// IMP=0x0000000100015ea8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

