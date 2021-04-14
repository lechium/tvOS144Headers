//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AMSPurchaseResponseProtocol-Protocol.h"
#import "PurchaseManagerInterface-Protocol.h"
#import "PushMessageConsumer-Protocol.h"

@class AMSPurchaseQueue, NSHashTable, NSString, TaskQueue;
@protocol OS_dispatch_queue;

@interface PurchaseManager : NSObject <AMSPurchaseResponseProtocol, PushMessageConsumer, PurchaseManagerInterface>
{
    NSHashTable *_activeBatches;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
    TaskQueue *_taskQueue;	// 24 = 0x18
    AMSPurchaseQueue *_purchaseQueue;	// 32 = 0x20
}

+ (id)sharedManager;	// IMP=0x000000010023a3f8
- (void).cxx_destruct;	// IMP=0x000000010023e1f4
@property(retain, nonatomic) AMSPurchaseQueue *purchaseQueue; // @synthesize purchaseQueue=_purchaseQueue;
- (void)_processItemResponse:(id)arg1 inPurchaseBatch:(id)arg2 usingPurchaseInfo:(id)arg3;	// IMP=0x000000010023d800
- (void)_processPurchaseBatch:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010023d4d0
- (void)_processResultsForPurchaseBatch:(id)arg1 withTaskError:(id)arg2;	// IMP=0x000000010023d174
- (void)_processPurchaseInfos:(id)arg1 requestToken:(id)arg2 withReplyHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010023cc58
- (void)_processPurchases:(id)arg1 requestToken:(id)arg2 withReplyHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010023c79c
- (void)_processPurchase:(id)arg1 requestToken:(id)arg2 withReplyHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010023bd3c
- (void)_processPurchaseInfo:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010023b8b4
- (void)_preparePurchaseInfo:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010023b484
- (void)_macProcessPurchaseInfos:(id)arg1 requestToken:(id)arg2 withReplyHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010023b1d8
- (void)_failPurchaseWithError:(id)arg1 usingPurchaseInfo:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010023b0b8
- (void)_checkStoreQueue:(long long)arg1 withReason:(long long)arg2 usingPurchaseInfo:(id)arg3 purchaseBatch:(id)arg4;	// IMP=0x000000010023b010
- (void)_cancelDownloadForStoreItem:(id)arg1 usingPurchaseInfo:(id)arg2;	// IMP=0x000000010023adac
- (void)pushService:(id)arg1 didReceiveMessage:(id)arg2;	// IMP=0x000000010023ac8c
- (void)processPurchases:(id)arg1 requestToken:(id)arg2 withReplyHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010023aaf8
- (void)processPurchaseInfos:(id)arg1 requestToken:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010023a9e4
- (void)processPurchaseInfo:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010023a908
- (_Bool)isPurchaseInFlightForBundleID:(id)arg1;	// IMP=0x000000010023a614
- (id)prepareAndGroupPurchaseInfos:(id)arg1;	// IMP=0x000000010023a600
- (void)checkStoreQueue:(long long)arg1;	// IMP=0x000000010023a588
- (id)init;	// IMP=0x000000010023a464

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
