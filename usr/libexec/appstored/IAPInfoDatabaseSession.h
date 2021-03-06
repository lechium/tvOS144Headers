//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SQLiteDatabaseSession-Protocol.h"

@class NSString, SQLiteConnection;

@interface IAPInfoDatabaseSession : NSObject <SQLiteDatabaseSession>
{
    SQLiteConnection *_connection;	// 8 = 0x8
}

+ (id)_serverRevisionPropertyForAccountID:(id)arg1;	// IMP=0x000000010022d5d8
+ (id)_lastUpdatedPropertyForAccountID:(id)arg1;	// IMP=0x000000010022d598
- (void).cxx_destruct;	// IMP=0x000000010022dd58
@property(readonly) SQLiteConnection *connection; // @synthesize connection=_connection;
- (id)_valueForDatabaseProperty:(id)arg1 withError:(id *)arg2;	// IMP=0x000000010022db3c
- (id)_fetchResultsWithPredicate:(id)arg1;	// IMP=0x000000010022d618
- (id)revisionForAccountID:(id)arg1 withError:(id *)arg2;	// IMP=0x000000010022d4d0
- (id)lastUpdatedTimestampForAccountID:(id)arg1 withError:(id *)arg2;	// IMP=0x000000010022d3fc
- (id)getIAPsForActiveAccountWithAppAdamIDs:(id)arg1 forAccountID:(id)arg2 withError:(id *)arg3;	// IMP=0x000000010022d234
- (id)getIAPsForActiveAccountWithAdamIDs:(id)arg1 forAccountID:(id)arg2 withError:(id *)arg3;	// IMP=0x000000010022d06c
- (id)getIAPsForAccountID:(id)arg1 withError:(id *)arg2;	// IMP=0x000000010022cfd4
- (id)initWithConnection:(id)arg1;	// IMP=0x000000010022cf5c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

