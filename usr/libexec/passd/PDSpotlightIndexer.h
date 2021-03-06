//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PDPaymentWebServiceCoordinatorDelegate-Protocol.h"
#import "PDScheduledActivityClient-Protocol.h"
#import "PDWorldRegionAggregatorObserver-Protocol.h"

@class NSHashTable, NSMutableArray, NSString, PDDatabaseManager, PDPaymentWebServiceCoordinator, PDTransactionReceiptFileManager, PDWorldRegionAggregator, PKPeerPaymentContactResolver, PKServicePaymentTransactionImageGenerator;
@protocol OS_dispatch_queue, PKCancelable;

@interface PDSpotlightIndexer : NSObject <PDScheduledActivityClient, PDWorldRegionAggregatorObserver, PDPaymentWebServiceCoordinatorDelegate>
{
    _Bool _performingOperation;	// 8 = 0x8
    _Bool _performingOverallIndexing;	// 9 = 0x9
    _Bool _resetPending;	// 10 = 0xa
    _Bool _hasCompletedIndexingSetup;	// 11 = 0xb
    _Bool _willRequireIndexing;	// 12 = 0xc
    struct os_unfair_lock_s _lockOperation;	// 16 = 0x10
    struct os_unfair_lock_s _lockObservers;	// 20 = 0x14
    PDWorldRegionAggregator *_worldRegionAggregator;	// 24 = 0x18
    PDDatabaseManager *_databaseManager;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_indexAccessQueue;	// 40 = 0x28
    PKServicePaymentTransactionImageGenerator *_imageGenerator;	// 48 = 0x30
    id <PKCancelable> _metadataOperation;	// 56 = 0x38
    id <PKCancelable> _indexingOperation;	// 64 = 0x40
    NSMutableArray *_resetCompletions;	// 72 = 0x48
    NSHashTable *_observers;	// 80 = 0x50
    CDUnknownBlockType _worldRegionAggregatorCompletion;	// 88 = 0x58
    PDTransactionReceiptFileManager *_receiptFileManager;	// 96 = 0x60
    PDPaymentWebServiceCoordinator *_paymentWebServiceCoordinator;	// 104 = 0x68
    PKPeerPaymentContactResolver *_contactResolver;	// 112 = 0x70
}

+ (_Bool)isIndexingAvailable;	// IMP=0x000000010023a474
- (void).cxx_destruct;	// IMP=0x000000010023d62c
@property(retain, nonatomic) PKPeerPaymentContactResolver *contactResolver; // @synthesize contactResolver=_contactResolver;
@property(retain, nonatomic) PDPaymentWebServiceCoordinator *paymentWebServiceCoordinator; // @synthesize paymentWebServiceCoordinator=_paymentWebServiceCoordinator;
@property(retain, nonatomic) PDTransactionReceiptFileManager *receiptFileManager; // @synthesize receiptFileManager=_receiptFileManager;
@property(copy, nonatomic) CDUnknownBlockType worldRegionAggregatorCompletion; // @synthesize worldRegionAggregatorCompletion=_worldRegionAggregatorCompletion;
@property(nonatomic) struct os_unfair_lock_s lockObservers; // @synthesize lockObservers=_lockObservers;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(nonatomic) struct os_unfair_lock_s lockOperation; // @synthesize lockOperation=_lockOperation;
@property(nonatomic) _Bool willRequireIndexing; // @synthesize willRequireIndexing=_willRequireIndexing;
@property(nonatomic) _Bool hasCompletedIndexingSetup; // @synthesize hasCompletedIndexingSetup=_hasCompletedIndexingSetup;
@property(retain, nonatomic) NSMutableArray *resetCompletions; // @synthesize resetCompletions=_resetCompletions;
@property(nonatomic) _Bool resetPending; // @synthesize resetPending=_resetPending;
@property(nonatomic) _Bool performingOverallIndexing; // @synthesize performingOverallIndexing=_performingOverallIndexing;
@property(nonatomic) _Bool performingOperation; // @synthesize performingOperation=_performingOperation;
@property(retain, nonatomic) id <PKCancelable> indexingOperation; // @synthesize indexingOperation=_indexingOperation;
@property(retain, nonatomic) id <PKCancelable> metadataOperation; // @synthesize metadataOperation=_metadataOperation;
@property(retain, nonatomic) PKServicePaymentTransactionImageGenerator *imageGenerator; // @synthesize imageGenerator=_imageGenerator;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *indexAccessQueue; // @synthesize indexAccessQueue=_indexAccessQueue;
@property(retain, nonatomic) PDDatabaseManager *databaseManager; // @synthesize databaseManager=_databaseManager;
@property(retain, nonatomic) PDWorldRegionAggregator *worldRegionAggregator; // @synthesize worldRegionAggregator=_worldRegionAggregator;
- (void)_accessObserversWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010023d2cc
- (void)removeObserver:(id)arg1;	// IMP=0x000000010023d268
- (void)addObserver:(id)arg1;	// IMP=0x000000010023d204
- (id)updateRegionWithIdentifier:(id)arg1 localizedName:(id)arg2 boundingRegion:(CDStruct_2b0c6e0b)arg3 mapsIdentifier:(unsigned long long)arg4 providerIdentifier:(int)arg5;	// IMP=0x000000010023d158
- (void)placemarkFound:(id)arg1 forTransaction:(id)arg2;	// IMP=0x000000010023d108
- (void)worldRegionProcessingCompletedWithSuccess:(_Bool)arg1;	// IMP=0x000000010023d054
- (void)worldRegionProcessingStarted;	// IMP=0x000000010023d048
- (void)transaction:(id)arg1 associatedToWorldRegion:(id)arg2;	// IMP=0x000000010023d044
- (void)paymentWebServiceCoordinator:(id)arg1 didDownloadTransactionReceipt:(id)arg2 forTransactionWithIdentifier:(id)arg3;	// IMP=0x000000010023cfac
- (void)transactionSourceIdentifier:(id)arg1 didReceiveTransaction:(id)arg2 oldTransaction:(id)arg3;	// IMP=0x000000010023ced8
- (void)transactionSourceIdentifier:(id)arg1 didRemoveTransactionWithIdentifier:(id)arg2;	// IMP=0x000000010023ce2c
- (void)transactionFetchCompletedForPassUniqueID:(id)arg1;	// IMP=0x000000010023cd3c
- (void)passDidDisappear:(id)arg1;	// IMP=0x000000010023ccec
- (void)passAddedOrUpdated:(id)arg1;	// IMP=0x000000010023ccd0
- (void)_queue_processAllIndexingBatchesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010023cccc
- (void)_queue_fetchTransactionsMetadataWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010023c8bc
- (void)_queue_fetchPassesMetadataWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010023c570
- (void)resetCoordinatesForAllRegions;	// IMP=0x000000010023c530
- (void)resetRegions;	// IMP=0x000000010023c4ec
- (void)_performQueryWithQueryString:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010023c4d0
- (void)_indexedItemCountsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010023bf40
- (void)statusWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010023b930
- (void)_performIndexingOperationsFromUserAction:(_Bool)arg1;	// IMP=0x000000010023acac
- (void)_performIndexingOperations;	// IMP=0x000000010023ac9c
- (void)_indexingCompleted;	// IMP=0x000000010023abe8
- (void)_indexingStarted;	// IMP=0x000000010023ab34
- (_Bool)isIndexing;	// IMP=0x000000010023aafc
- (void)triggerIndexing;	// IMP=0x000000010023aa94
- (void)_queue_completeReset;	// IMP=0x000000010023aa4c
- (void)resetWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010023a8e8
- (void)reindexContentForIdentifiers:(id)arg1;	// IMP=0x000000010023a580
- (void)reindexAllContent;	// IMP=0x000000010023a47c
- (void)_cleanupIndexingState;	// IMP=0x0000000100239ef8
- (void)_setupXPCActivity;	// IMP=0x0000000100239d78
- (id)initWithDatabaseManager:(id)arg1 transactionReceiptFileManager:(id)arg2 paymentWebServiceCoordinator:(id)arg3;	// IMP=0x0000000100239b94

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

