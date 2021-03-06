//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ASDPurchaseServiceProtocol-Protocol.h"

@protocol AdoptionManagerInterface, OS_dispatch_queue, PurchaseManagerInterface;

@interface PurchaseService : NSObject <ASDPurchaseServiceProtocol>
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    id <AdoptionManagerInterface> _adoptionInterface;	// 16 = 0x10
    id <PurchaseManagerInterface> _legacyPurchaseInterface;	// 24 = 0x18
    id <PurchaseManagerInterface> _purchaseInterface;	// 32 = 0x20
}

+ (id)defaultService;	// IMP=0x00000001002989c4
- (void).cxx_destruct;	// IMP=0x000000010029afd4
@property(retain) id <PurchaseManagerInterface> purchaseInterface; // @synthesize purchaseInterface=_purchaseInterface;
@property(retain) id <PurchaseManagerInterface> legacyPurchaseInterface; // @synthesize legacyPurchaseInterface=_legacyPurchaseInterface;
@property(retain) id <AdoptionManagerInterface> adoptionInterface; // @synthesize adoptionInterface=_adoptionInterface;
@property(retain) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)startPurchase:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010029a610
- (void)processPurchase:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100299d1c
- (void)notifyAutenticationDialogCompleteForPurchaseID:(id)arg1 result:(long long)arg2 checkboxChecked:(_Bool)arg3 withResultHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100299784
- (void)notifyDialogCompleteForPurchaseID:(id)arg1 result:(_Bool)arg2 selectedButton:(long long)arg3 withResultHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000010029917c
- (void)checkStoreQueue:(long long)arg1;	// IMP=0x0000000100298e9c
- (void)adoptableBundleIdentifiersWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100298cdc
- (void)adopt:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100298ae4
- (id)init;	// IMP=0x0000000100298a30

@end

