//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ASDOctaneServiceCombinedProtocol-Protocol.h"

@interface StoreKitTestingService : NSObject <ASDOctaneServiceCombinedProtocol>
{
}

+ (id)defaultService;	// IMP=0x000000010025a650
- (void)_logExitForMethodCall:(const char *)arg1 context:(id)arg2;	// IMP=0x000000010025d344
- (id)_logAndValidateMethodCall:(const char *)arg1 context:(id)arg2;	// IMP=0x000000010025ccb4
- (_Bool)_isAppleSignedApp:(id)arg1;	// IMP=0x000000010025cc60
- (_Bool)_connectionHasEntitlement:(id)arg1 entitlementName:(id)arg2;	// IMP=0x000000010025cbd0
- (id)_bundleIDForConnection:(id)arg1;	// IMP=0x000000010025cbbc
- (void)updatePort:(long long)arg1;	// IMP=0x000000010025cb18
- (void)transactionUpdated:(id)arg1 forBundleID:(id)arg2;	// IMP=0x000000010025c964
- (void)transactionDeleted:(unsigned long long)arg1 productID:(id)arg2 forBundleID:(id)arg3;	// IMP=0x000000010025c724
- (void)revokeEntitlementsForProductIdentifiers:(id)arg1 forBundleId:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010025c5b0
- (void)refreshQueueForBundleId:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010025c3cc
- (void)setStorefront:(id)arg1 forBundleID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010025c278
- (void)setStringValue:(id)arg1 forIdentifier:(unsigned long long)arg2 forBundleID:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010025c11c
- (void)getStringValueForIdentifier:(unsigned long long)arg1 forBundleID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010025bfdc
- (void)setIntegerValue:(long long)arg1 forIdentifier:(unsigned long long)arg2 forBundleID:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010025be8c
- (void)getIntegerValueForIdentifier:(unsigned long long)arg1 forBundleID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010025bd5c
- (void)startObservingTransactionsForBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010025bb64
- (void)saveConfigurationData:(id)arg1 forBundleID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010025ba28
- (void)saveSigningData:(id)arg1 forBundleID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010025b8ec
- (void)removeConfigurationForBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010025b7d4
- (void)performAction:(long long)arg1 transactionID:(unsigned long long)arg2 bundleID:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010025b57c
- (void)invalidateBag;	// IMP=0x000000010025b480
- (void)getTransactionDataForBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010025b348
- (void)getActivePortWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010025b0d8
- (void)getStorefrontForBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010025afa0
- (void)forceRenewalOfSubscriptionWithProductID:(id)arg1 bundleID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010025ae48
- (void)expireSubscriptionWithProductID:(id)arg1 bundleID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010025acf0
- (void)deleteAllTransactionsForBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010025abc0
- (void)completeAskToBuyRequestWithResponse:(_Bool)arg1 transactionID:(unsigned long long)arg2 bundleID:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010025aa80
- (void)clearOverridesForBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010025a950
- (void)changeAutoRenewStatus:(_Bool)arg1 transactionID:(unsigned long long)arg2 bundleID:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010025a810
- (void)buyProductWithID:(id)arg1 bundleID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010025a6bc

@end
