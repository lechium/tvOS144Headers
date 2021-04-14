//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ICConnectionConfiguration, JaliscoArtworkImporter, JaliscoLibrary, JaliscoMediaUpdateOperation, JaliscoUpdateGeniusDataOperation, ML3MusicLibrary, NSMutableArray, NSOperationQueue;
@protocol ICDCloudMusicLibraryJaliscoUpdateTaskHelper, OS_dispatch_group, OS_dispatch_queue;

@interface JaliscoRequestHandler : NSObject
{
    ICConnectionConfiguration *_configuration;	// 8 = 0x8
    ML3MusicLibrary *_musicLibrary;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_calloutQueue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_updateLibraryQueue;	// 32 = 0x20
    id <ICDCloudMusicLibraryJaliscoUpdateTaskHelper> _updateTaskHelper;	// 40 = 0x28
    JaliscoLibrary *_jaliscoLibrary;	// 48 = 0x30
    JaliscoUpdateGeniusDataOperation *_updateGeniusDataOperation;	// 56 = 0x38
    JaliscoArtworkImporter *_artworkImporter;	// 64 = 0x40
    JaliscoMediaUpdateOperation *_updateLibraryOperation;	// 72 = 0x48
    NSOperationQueue *_geniusUpdateOperationQueue;	// 80 = 0x50
    NSObject<OS_dispatch_queue> *_geniusUpdateQueue;	// 88 = 0x58
    NSObject<OS_dispatch_group> *_geniusUpdateGroup;	// 96 = 0x60
    NSMutableArray *_updateLibraryCompletionHandlers;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x0000000100081f24
@property(readonly, copy, nonatomic) NSMutableArray *updateLibraryCompletionHandlers; // @synthesize updateLibraryCompletionHandlers=_updateLibraryCompletionHandlers;
@property(readonly, nonatomic) NSObject<OS_dispatch_group> *geniusUpdateGroup; // @synthesize geniusUpdateGroup=_geniusUpdateGroup;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *geniusUpdateQueue; // @synthesize geniusUpdateQueue=_geniusUpdateQueue;
@property(readonly, nonatomic) NSOperationQueue *geniusUpdateOperationQueue; // @synthesize geniusUpdateOperationQueue=_geniusUpdateOperationQueue;
@property(retain, nonatomic) JaliscoMediaUpdateOperation *updateLibraryOperation; // @synthesize updateLibraryOperation=_updateLibraryOperation;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *updateLibraryQueue; // @synthesize updateLibraryQueue=_updateLibraryQueue;
@property(readonly, nonatomic) JaliscoArtworkImporter *artworkImporter; // @synthesize artworkImporter=_artworkImporter;
@property(retain, nonatomic) JaliscoUpdateGeniusDataOperation *updateGeniusDataOperation; // @synthesize updateGeniusDataOperation=_updateGeniusDataOperation;
- (id)_DAAPMediaKindFromJaliscoSupportedMediaKind:(long long)arg1;	// IMP=0x0000000100081e4c
- (void)_updateJaliscoLibraryWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100081da4
- (void)_addLibraryOperation:(id)arg1 priority:(int)arg2 noLibraryHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100081ccc
- (void)_updateGeniusDataForInitialImport:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000813cc
- (void)loadBooksForStoreIDs:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100081134
- (void)disableJaliscoGeniusWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100080c84
- (void)loadJaliscoGeniusOperationStatusWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000808fc
- (void)cancelUpdateJaliscoGeniusDataWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000806b4
- (void)updateJaliscoGeniusDataWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100080530
- (void)enableJaliscoGeniusWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100080244
- (void)setJaliscoGeniusCUID:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000800bc
- (void)loadJaliscoGeniusCUIDWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010007ff24
- (void)loadJaliscoGeniusLearnMoreURLWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010007fb3c
- (void)loadIsJaliscoGeniusSupportedWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010007f7b4
- (void)cancelAllOperationsAndWaitForOperationsToFinish:(_Bool)arg1;	// IMP=0x000000010007f430
- (void)cancelAllOperations;	// IMP=0x000000010007f420
- (void)isMediaKindDisabledForJaliscoLibrary:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010007f0a0
- (void)updateJaliscoLibraryByRemovingMediaKind:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010007ed20
- (void)updateJaliscoLibraryByAddingMediaKind:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010007e9a0
- (void)increasePriorityForAllOperations;	// IMP=0x000000010007e820
- (void)decreasePriorityForAllOperations;	// IMP=0x000000010007e6a0
- (void)cancelOperationsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010007e480
- (void)removeLibraryWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010007e304
- (void)loadMissingArtwork;	// IMP=0x000000010007e2f4
- (void)loadScreenshotInfoForPurchaseHistoryIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010007de28
- (void)loadArtworkInfoForPurchaseHistoryIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010007d9ac
- (void)deprioritizeScreenshotForPurchaseHistoryID:(unsigned long long)arg1;	// IMP=0x000000010007d960
- (void)deprioritizeItemArtworkForPurchaseHistoryID:(unsigned long long)arg1;	// IMP=0x000000010007d914
- (void)importScreenshotForPurchaseHistoryID:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010007d650
- (void)importItemArtworkForPurchaseHistoryID:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010007d38c
- (void)setItemProperties:(id)arg1 forPurchaseHistoryID:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010007d0fc
- (void)hideItemsWithPurchaseHistoryIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010007ce4c
- (void)updateLibraryWithReason:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010007b9dc
- (float)updateProgress;	// IMP=0x000000010007b8c4
- (_Bool)isUpdateInProgressWithIsInitialImport:(_Bool *)arg1;	// IMP=0x000000010007b754
- (id)jaliscoLibraryWithReason:(long long)arg1;	// IMP=0x000000010007b440
@property(readonly, nonatomic) JaliscoLibrary *jaliscoLibrary; // @synthesize jaliscoLibrary=_jaliscoLibrary;
- (void)cancelPendingChanges;	// IMP=0x000000010007b420
- (void)cancelPendingChangesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010007b2a8
- (void)addOperation:(id)arg1 priority:(int)arg2;	// IMP=0x000000010007b22c
- (void)dealloc;	// IMP=0x000000010007b0a4
- (id)initWithConfiguration:(id)arg1 updateTaskHelper:(id)arg2;	// IMP=0x000000010007aebc

@end

