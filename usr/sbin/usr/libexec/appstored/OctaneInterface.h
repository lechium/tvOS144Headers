//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface OctaneInterface : NSObject
{
}

+ (id)setStringValue:(id)arg1 forIdentifier:(unsigned long long)arg2 withContext:(id)arg3;	// IMP=0x000000010000e3d0
+ (id)getStringValueForIdentifier:(unsigned long long)arg1 withContext:(id)arg2;	// IMP=0x000000010000e320
+ (id)setIntegerValue:(long long)arg1 forIdentifier:(unsigned long long)arg2 withContext:(id)arg3;	// IMP=0x000000010000e260
+ (long long)getIntegerValueForIdentifier:(unsigned long long)arg1 withContext:(id)arg2;	// IMP=0x000000010000e1b8
+ (void)useConfigurationDirectory:(id)arg1 forBundleID:(id)arg2;	// IMP=0x000000010000e130
+ (id)setStorefront:(id)arg1 withContext:(id)arg2;	// IMP=0x000000010000e06c
+ (id)resolveIssueWithContext:(id)arg1;	// IMP=0x000000010000dfac
+ (id)refundTransactionWithContext:(id)arg1;	// IMP=0x000000010000deec
+ (id)getTransactionDataWithContext:(id)arg1;	// IMP=0x000000010000de44
+ (id)getStorefrontWithContext:(id)arg1;	// IMP=0x000000010000dd9c
+ (id)expireOrRenewSubscriptionWithProductID:(id)arg1 expire:(_Bool)arg2 withContext:(id)arg3;	// IMP=0x000000010000dcc8
+ (id)deleteTransactionWithContext:(id)arg1;	// IMP=0x000000010000dc08
+ (id)deleteAllTransactionsWithContext:(id)arg1;	// IMP=0x000000010000db60
+ (id)completeAskToBuyRequestWithResponse:(_Bool)arg1 withContext:(id)arg2;	// IMP=0x000000010000da90
+ (id)clearOverridesWithContext:(id)arg1;	// IMP=0x000000010000d9e8
+ (id)changeAutoRenewStatus:(_Bool)arg1 withContext:(id)arg2;	// IMP=0x000000010000d918
+ (id)cancelTransactionWithContext:(id)arg1;	// IMP=0x000000010000d858
+ (id)buyProductWithID:(id)arg1 withContext:(id)arg2;	// IMP=0x000000010000d794
+ (long long)activePort;	// IMP=0x000000010000d73c
+ (void)appRemovedWithBundleID:(id)arg1;	// IMP=0x000000010000d6d8

@end

