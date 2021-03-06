//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GKDatabaseWriter-Protocol.h"

@class GKDatabaseConnection, NSDictionary, NSString;

@interface GKDelayedIssueFriendRequestsCacheWriter : NSObject <GKDatabaseWriter>
{
    GKDatabaseConnection *_connection;	// 8 = 0x8
    NSDictionary *_gameDescriptor;	// 16 = 0x10
}

+ (id)writerWithDatabaseConnection:(id)arg1 gameDescriptor:(id)arg2;	// IMP=0x000000010012d0a4
@property(retain, nonatomic) NSDictionary *gameDescriptor; // @synthesize gameDescriptor=_gameDescriptor;
@property(retain, nonatomic) GKDatabaseConnection *connection; // @synthesize connection=_connection;
- (void)writeResources:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010012d8d4
- (void)writeToDatabase:(struct sqlite3 *)arg1 statementStore:(id)arg2 withInsertSQL:(id)arg3 updateSQL:(id)arg4 bindOperation:(CDUnknownBlockType)arg5;	// IMP=0x000000010012d6b4
- (void)bindParametersForStatement:(struct sqlite3_stmt *)arg1 payload:(id)arg2 requestsRowID:(long long)arg3;	// IMP=0x000000010012d650
- (id)issueFriendRequestsInsertSQL;	// IMP=0x000000010012d608
- (void)bindParametersForRequestsStatement:(struct sqlite3_stmt *)arg1 playerID:(id)arg2;	// IMP=0x000000010012d5b4
- (void)deleteSubmittedRequestsWithIDs:(id)arg1 onConnection:(id)arg2;	// IMP=0x000000010012d214
- (id)requestsInsertSQL;	// IMP=0x000000010012d1cc
@property(readonly, nonatomic) GKDatabaseConnection *databaseConnection;
- (void)dealloc;	// IMP=0x000000010012d164
- (id)initWithDatabaseConnection:(id)arg1 gameDescriptor:(id)arg2;	// IMP=0x000000010012d0e4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

