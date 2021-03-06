//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SQLiteDatabase;

@interface SQLiteDatabaseStore : NSObject
{
    SQLiteDatabase *_database;	// 8 = 0x8
}

+ (_Bool)createOrMigrateStoreUsingSchema:(id)arg1;	// IMP=0x0000000100097490
+ (id)storeDescriptor;	// IMP=0x0000000100097474
- (void).cxx_destruct;	// IMP=0x00000001000974f0
@property(readonly) SQLiteDatabase *database; // @synthesize database=_database;
- (void)readUsingSession:(CDUnknownBlockType)arg1;	// IMP=0x00000001000974cc
- (void)modifyUsingTransactionClass:(Class)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001000974b0
- (void)modifyUsingTransaction:(CDUnknownBlockType)arg1;	// IMP=0x0000000100097498
- (id)initWithDatabase:(id)arg1;	// IMP=0x00000001000973fc

@end

