//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MigrateToManagedTask.h"

#import "ASDBagConsumer-Protocol.h"

@class ApplicationProxy, NSArray, NSDate, NSDictionary, NSMutableDictionary, NSString;

@interface VerifyReceiptsTask : MigrateToManagedTask <ASDBagConsumer>
{
    NSMutableDictionary *_expiring;	// 8 = 0x8
    ApplicationProxy *_soonestExpiring;	// 16 = 0x10
    NSDate *_soonestExpiringDate;	// 24 = 0x18
    NSMutableDictionary *_revoked;	// 32 = 0x20
    NSDictionary *_qaVerficationExpiredApps;	// 40 = 0x28
    NSArray *_qaVerficationRevokedApps;	// 48 = 0x30
    _Bool _refreshStoreOriginated;	// 56 = 0x38
    NSString *_logKey;	// 64 = 0x40
}

+ (void)addRequiredBagKeysToAggregator:(id)arg1;	// IMP=0x00000001002724fc
+ (id)bagKeySet;	// IMP=0x0000000100272418
- (void).cxx_destruct;	// IMP=0x0000000100274a7c
@property(nonatomic) _Bool refreshStoreOriginated; // @synthesize refreshStoreOriginated=_refreshStoreOriginated;
@property(copy, nonatomic) NSString *logKey; // @synthesize logKey=_logKey;
- (void)_refreshReceiptForApp:(id)arg1 receipt:(id)arg2;	// IMP=0x000000010027448c
- (id)_receiptExperationDateForReceipt:(id)arg1;	// IMP=0x0000000100274458
- (void)_postNotificationForExpiring;	// IMP=0x0000000100273ce8
- (void)_postNotificationForRevoked;	// IMP=0x0000000100273574
- (void)_checkExpirationNotificationDate:(id)arg1 receipt:(id)arg2;	// IMP=0x0000000100272e74
- (void)main;	// IMP=0x00000001002725e4
- (id)init;	// IMP=0x0000000100272308

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

