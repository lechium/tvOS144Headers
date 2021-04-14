//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class KeepAlive, NSNumber, NSString, XPCRequestToken;
@protocol PurchaseHistoryBagContract;

@interface PurchaseHistoryUpdateCommand : NSObject
{
    id <PurchaseHistoryBagContract> _bagContract;	// 8 = 0x8
    NSString *_logKey;	// 16 = 0x10
    KeepAlive *_keepAlive;	// 24 = 0x18
    unsigned long long _context;	// 32 = 0x20
    NSNumber *_accountID;	// 40 = 0x28
    NSNumber *_expectedItemID;	// 48 = 0x30
    NSNumber *_serverRevision;	// 56 = 0x38
    XPCRequestToken *_requestToken;	// 64 = 0x40
    CDUnknownBlockType _replyHandler;	// 72 = 0x48
}

+ (_Bool)_shouldUpdateLocalRevision:(id)arg1 withServerRevision:(id)arg2;	// IMP=0x000000010019c260
+ (id)_localRevisionForAccountID:(id)arg1 usingDatabaseStore:(id)arg2 error:(id *)arg3;	// IMP=0x000000010019a930
+ (void)_setLastUpdatedTimestampForAccountID:(id)arg1 usingDatabaseStore:(id)arg2;	// IMP=0x000000010019a6b8
+ (id)_lastUpdatedTimestampForAccountID:(id)arg1 usingDatabaseStore:(id)arg2;	// IMP=0x000000010019a480
+ (_Bool)_historyForAccountID:(id)arg1 doesNotContainItemID:(id)arg2 usingDatabaseStore:(id)arg3;	// IMP=0x000000010019a1e4
+ (double)_updatePollingFrequencyInterval;	// IMP=0x0000000100199b54
+ (_Bool)_purchaseRefreshEnabled;	// IMP=0x00000001001999b4
+ (double)_forcedRefreshInterval;	// IMP=0x0000000100199800
+ (id)commandWithPushNotificationForAccountID:(id)arg1 serverRevision:(id)arg2;	// IMP=0x00000001001989d8
+ (id)commandWithPurchaseForAccountID:(id)arg1 expectedItemID:(id)arg2;	// IMP=0x0000000100198948
+ (id)commandWithContext:(unsigned long long)arg1 forAccountID:(id)arg2;	// IMP=0x00000001001988e8
- (void).cxx_destruct;	// IMP=0x000000010019c3a4
@property(copy) CDUnknownBlockType replyHandler; // @synthesize replyHandler=_replyHandler;
@property(retain) XPCRequestToken *requestToken; // @synthesize requestToken=_requestToken;
@property(retain) NSNumber *serverRevision; // @synthesize serverRevision=_serverRevision;
@property(retain) NSNumber *expectedItemID; // @synthesize expectedItemID=_expectedItemID;
@property(readonly) NSNumber *accountID; // @synthesize accountID=_accountID;
@property(readonly) unsigned long long context; // @synthesize context=_context;
- (id)_sendServerRevisionRequestUsingAccount:(id)arg1 databaseStore:(id)arg2;	// IMP=0x000000010019be20
- (id)_sendItemsRequestUsingAccount:(id)arg1 databaseStore:(id)arg2;	// IMP=0x000000010019b9e0
- (id)_fetchServerRevisionUsingAccount:(id)arg1 databaseStore:(id)arg2;	// IMP=0x000000010019b764
- (id)_fetchItemsUsingAccount:(id)arg1 databaseStore:(id)arg2;	// IMP=0x000000010019b43c
- (id)_generateLogKey;	// IMP=0x000000010019b2c0
- (_Bool)_updateDatabaseWithDAAPResponse:(id)arg1 databaseStore:(id)arg2 error:(id *)arg3;	// IMP=0x000000010019ab2c
- (id)_getServerRevisionRequestContextUsingAccount:(id)arg1 databaseStore:(id)arg2 withError:(id *)arg3;	// IMP=0x000000010019a0a8
- (id)_getItemsRequestContextUsingAccount:(id)arg1 databaseStore:(id)arg2 withError:(id *)arg3;	// IMP=0x0000000100199d00
- (_Bool)shouldRunUsingDatabaseStore:(id)arg1;	// IMP=0x000000010019935c
- (id)runUsingAccount:(id)arg1 databaseStore:(id)arg2;	// IMP=0x0000000100198db0
- (void)cancelWithReason:(id)arg1;	// IMP=0x0000000100198b5c
- (id)initWithAccountID:(id)arg1 context:(unsigned long long)arg2;	// IMP=0x0000000100198a68

@end

