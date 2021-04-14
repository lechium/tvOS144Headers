//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SQLiteDatabaseSession-Protocol.h"

@class NSString, SQLiteConnection;

@interface PurchaseHistoryDatabaseSession : NSObject <SQLiteDatabaseSession>
{
    SQLiteConnection *_connection;	// 8 = 0x8
}

+ (id)_serverRevisionPropertyForAccountID:(id)arg1;	// IMP=0x00000001002b264c
+ (id)_propertyForSortOptionName:(id)arg1;	// IMP=0x00000001002b24f8
+ (id)_predicateFromQuery:(id)arg1;	// IMP=0x00000001002b1dac
+ (id)_lastUpdatedPropertyForAccountID:(id)arg1;	// IMP=0x00000001002b1d6c
- (void).cxx_destruct;	// IMP=0x00000001002b28a8
@property(readonly) SQLiteConnection *connection; // @synthesize connection=_connection;
- (id)_valueForDatabaseProperty:(id)arg1 withError:(id *)arg2;	// IMP=0x00000001002b268c
- (id)revisionForAccountID:(id)arg1 withError:(id *)arg2;	// IMP=0x00000001002b1ca4
- (id)lastUpdatedTimestampForAccountID:(id)arg1 withError:(id *)arg2;	// IMP=0x00000001002b1bd0
- (id)executeQuery:(id)arg1 withError:(id *)arg2;	// IMP=0x00000001002b08cc
- (id)countQuery:(id)arg1;	// IMP=0x00000001002b07fc
- (id)initWithConnection:(id)arg1;	// IMP=0x00000001002b0784

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
