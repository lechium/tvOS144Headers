//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSFilePresenter-Protocol.h"

@class NSCountedSet, NSOperationQueue, NSSet, NSString, NSURL;
@protocol OS_dispatch_queue, PDUbiquityManagerDelegate;

@interface PDUbiquityManager : NSObject <NSFilePresenter>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_accessQueue;	// 16 = 0x10
    NSOperationQueue *_operationQueue;	// 24 = 0x18
    NSCountedSet *_filesModified;	// 32 = 0x20
    NSCountedSet *_filesToWrite;	// 40 = 0x28
    NSCountedSet *_filesToDelete;	// 48 = 0x30
    _Atomic int _ubiquityState;	// 56 = 0x38
    _Atomic unsigned int _ubiquityStartToken;	// 60 = 0x3c
    _Bool _addedToFilePresenter;	// 64 = 0x40
    id <PDUbiquityManagerDelegate> _delegate;	// 72 = 0x48
    NSURL *_ubiquitousURL;	// 80 = 0x50
}

+ (void)removeLastEventIdentifier;	// IMP=0x000000010010b554
- (void).cxx_destruct;	// IMP=0x000000010011225c
@property(retain) NSURL *ubiquitousURL; // @synthesize ubiquitousURL=_ubiquitousURL;
@property(nonatomic) __weak id <PDUbiquityManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (unsigned long long)lastPresentedItemEventIdentifier;	// IMP=0x000000010011213c
- (void)setLastPresentedItemEventIdentifier:(unsigned long long)arg1;	// IMP=0x0000000100111ff8
- (void)accommodatePresentedSubitemDeletionAtURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100111eac
- (void)presentedSubitemDidAppearAtURL:(id)arg1;	// IMP=0x0000000100111c88
- (void)presentedSubitemDidChangeAtURL:(id)arg1;	// IMP=0x00000001001115c0
- (void)presentedItemDidMoveToURL:(id)arg1;	// IMP=0x00000001001114d4
- (void)presentedItemDidGainVersion:(id)arg1;	// IMP=0x000000010011137c
@property(readonly, retain) NSOperationQueue *presentedItemOperationQueue;
@property(readonly, copy) NSURL *presentedItemURL;
- (void)_queue_resolveURLIfNecessary:(id)arg1 fileCoordinator:(id)arg2;	// IMP=0x0000000100110dc0
- (void)_queue_resolveURLIfNecessary:(id)arg1;	// IMP=0x0000000100110d48
- (void)_queue_addedToFilePresenter;	// IMP=0x0000000100110920
- (void)_queue_removeFromFilePresenter;	// IMP=0x00000001001108e8
- (void)_queue_addToFilePresenter;	// IMP=0x0000000100110834
- (void)_queue_copyCatalogToUbiquity:(id)arg1;	// IMP=0x0000000100110614
- (void)_queue_copyCatalogToLocalStore:(id)arg1;	// IMP=0x0000000100110490
- (void)_queue_handleCatalogUpdate;	// IMP=0x00000001001102ec
- (void)_queue_handlePassUpdate:(id)arg1;	// IMP=0x000000010010f9fc
- (void)_queue_compareCatalogsAndTakeNewerVersion;	// IMP=0x000000010010f524
- (void)_queue_comparePassesAndTakeNewerVersion:(id)arg1;	// IMP=0x000000010010edf8
- (void)_queue_copyPassesFromLocalStoreToUbiquity:(id)arg1;	// IMP=0x000000010010ea5c
- (void)_queue_copyPassesFromUbiquityToLocalStore:(id)arg1;	// IMP=0x000000010010e560
- (id)_queue_passUniqueIDs;	// IMP=0x000000010010dfe8
- (void)_queue_mergeUbiquityWithLocalStore;	// IMP=0x000000010010dccc
- (_Bool)_queue_startNotYetUbiquitousWithDestinationURL:(id)arg1;	// IMP=0x000000010010d898
- (void)_queue_startAlreadyUbiquitous;	// IMP=0x000000010010d894
- (void)_attemptCoordinatedReadWithoutChangesAtURL:(id)arg1 withAccessor:(CDUnknownBlockType)arg2;	// IMP=0x000000010010d598
- (id)_urlForCatalogRelativeToDirectoryURL:(id)arg1;	// IMP=0x000000010010d57c
- (id)_urlForCardWithUniqueID:(id)arg1 relativeToDirectoryURL:(id)arg2;	// IMP=0x000000010010d4d8
- (void)_handleUbiquityIdentityChanged:(id)arg1;	// IMP=0x000000010010d44c
- (void)updateUbiquitousCatalog:(id)arg1;	// IMP=0x000000010010d114
- (void)removeUbiquitousPassWithUniqueID:(id)arg1 completed:(_Bool)arg2;	// IMP=0x000000010010cc0c
- (void)prepareToRemoveUbiquitousPassWithUniqueID:(id)arg1;	// IMP=0x000000010010cb78
- (_Bool)passWillBeDeleted:(id)arg1;	// IMP=0x000000010010ca7c
- (void)updateUbiquitousPass:(id)arg1;	// IMP=0x000000010010bfe4
- (void)restart;	// IMP=0x000000010010bf3c
- (void)_startWithToken:(unsigned int)arg1;	// IMP=0x000000010010b5f0
- (void)start;	// IMP=0x000000010010b5dc
- (void)dealloc;	// IMP=0x000000010010b4a4
- (id)initWithDelegate:(id)arg1;	// IMP=0x000000010010b2dc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property(readonly, copy) NSURL *primaryPresentedItemURL;
@property(readonly) Class superclass;

@end

