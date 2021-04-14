//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "Task.h"

@class NSString, PurchaseBatch, PurchaseInfo;

@interface CheckStoreQueueTask : Task
{
    NSString *_logKey;	// 8 = 0x8
    long long _queueType;	// 16 = 0x10
    long long _reason;	// 24 = 0x18
    PurchaseBatch *_purchaseBatch;	// 32 = 0x20
    PurchaseInfo *_purchaseInfo;	// 40 = 0x28
}

+ (id)_installedApplicationForStoreItem:(id)arg1;	// IMP=0x0000000100142c68
+ (id)checkQueueForPurchaseUsingPurchaseInfo:(id)arg1 purchaseBatch:(id)arg2;	// IMP=0x0000000100141e1c
- (void).cxx_destruct;	// IMP=0x0000000100143178
@property(readonly, nonatomic) PurchaseInfo *purchaseInfo; // @synthesize purchaseInfo=_purchaseInfo;
@property(readonly, nonatomic) PurchaseBatch *purchaseBatch; // @synthesize purchaseBatch=_purchaseBatch;
@property(readonly, nonatomic) long long reason; // @synthesize reason=_reason;
@property(readonly, nonatomic) long long queueType; // @synthesize queueType=_queueType;
- (id)_purchaseInfoForStoreItem:(id)arg1 withAccount:(id)arg2 installedApplication:(id)arg3;	// IMP=0x0000000100142cd0
- (void)main;	// IMP=0x0000000100142054
- (id)initWithQueueType:(long long)arg1 forReason:(long long)arg2 usingPurchaseInfo:(id)arg3 purchaseBatch:(id)arg4;	// IMP=0x0000000100141e98

@end

