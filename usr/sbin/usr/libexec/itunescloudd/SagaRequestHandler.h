//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ICEnvironmentMonitorObserver-Protocol.h"

@class CloudUpdateLibraryOperation, ICConnectionConfiguration, ML3MusicLibrary, NSMutableArray, NSString, SagaArtworkImporter, SagaLibrary;
@protocol ICDCloudMusicLibrarySagaUpdateTaskHelper, OS_dispatch_queue, OS_dispatch_source;

@interface SagaRequestHandler : NSObject <ICEnvironmentMonitorObserver>
{
    SagaLibrary *_library;	// 8 = 0x8
    SagaArtworkImporter *_artworkImporter;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_uploadItemPropertiesQueue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_uploadPlaylistPropertiesQueue;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_updateCloudLibraryQueue;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_calloutQueue;	// 48 = 0x30
    CloudUpdateLibraryOperation *_updateCloudLibraryOperation;	// 56 = 0x38
    NSMutableArray *_updateLibraryCompletionHandlers;	// 64 = 0x40
    NSObject<OS_dispatch_source> *_itemPropertiesCoalescingTimer;	// 72 = 0x48
    NSObject<OS_dispatch_source> *_playlistPropertiesCoalescingTimer;	// 80 = 0x50
    id <ICDCloudMusicLibrarySagaUpdateTaskHelper> _updateTaskHelper;	// 88 = 0x58
    ICConnectionConfiguration *_configuration;	// 96 = 0x60
    ML3MusicLibrary *_musicLibrary;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x0000000100064850
- (void)_handleCloudLibraryUpdateOperationFinishedWithError:(id)arg1;	// IMP=0x00000001000645c0
- (void)updateLibraryWithReason:(long long)arg1 allowNoisyAuthPrompt:(_Bool)arg2 isExplicitUserAction:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100063344
- (void)_addLibraryOperation:(id)arg1 priority:(int)arg2 noLibraryHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010006326c
- (id)_library;	// IMP=0x0000000100063208
- (void)environmentMonitorDidChangePower:(id)arg1;	// IMP=0x0000000100063094
- (float)updateProgress;	// IMP=0x0000000100062fc4
- (void)setItemProperties:(id)arg1 forSagaID:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100062bac
- (void)loadGeniusItemsForSagaID:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000628ec
- (void)loadScreenshotInfoForSagaIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100062420
- (void)loadArtworkInfoForContainerSagaIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100062064
- (void)loadArtworkInfoForSagaIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100061c38
- (void)deprioritizeContainerArtworkForSagaID:(unsigned long long)arg1;	// IMP=0x0000000100061c24
- (void)deprioritizeScreenshotForSagaID:(unsigned long long)arg1;	// IMP=0x0000000100061c10
- (void)deprioritizeItemArtworkForSagaID:(unsigned long long)arg1;	// IMP=0x0000000100061bfc
- (void)importContainerArtworkForSagaID:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100061954
- (void)importScreenshotForSagaID:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000616ac
- (void)importItemArtworkForSagaID:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100061404
- (_Bool)isUpdateInProgressWithIsInitialImport:(_Bool *)arg1;	// IMP=0x00000001000612ec
- (void)setAlbumProperties:(id)arg1 forItemsWithAlbumPersistentID:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100061014
- (void)setCloudAddToPlaylistBehavior:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100060d40
- (void)addStorePlaylistWithGlobalID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100060a54
- (void)addStoreItemWithOpaqueID:(id)arg1 requestingBundleID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000607d8
- (void)addStoreItemWithAdamID:(long long)arg1 referral:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100060300
- (void)updateSubscribedPlaylistsWithSagaIDs:(id)arg1 ignoreMinRefreshInterval:(_Bool)arg2 requestReason:(long long)arg3 pinnedOnly:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000010005fff8
- (void)uploadArtworkForPlaylistWithPersistentID:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010005fd2c
- (void)removePlaylistsWithSagaIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010005fa68
- (void)removeItemsWithSagaIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010005f7a4
- (void)publishPlaylistWithSagaID:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010005f484
- (void)setPlaylistProperties:(id)arg1 trackList:(id)arg2 forPlaylistPersistentID:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000010005f120
- (void)addStoreItemWithOpaqueID:(id)arg1 toPlaylistWithPersistentID:(long long)arg2 requestingBundleID:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000010005ee98
- (void)addItemWithSagaID:(unsigned long long)arg1 toPlaylistWithPersistentID:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010005ebd8
- (void)addStoreItemWithAdamID:(long long)arg1 referral:(id)arg2 toPlaylistWithPersistentID:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000010005e6f8
- (void)addGeniusPlaylistWithPersistentID:(long long)arg1 name:(id)arg2 seedItemIDs:(id)arg3 itemIDs:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000010005e38c
- (void)createPlaylistWithPersistentID:(long long)arg1 properties:(id)arg2 trackList:(id)arg3 requestingBundleID:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000010005dfe8
- (void)createPlaylistWithPersistentID:(long long)arg1 properties:(id)arg2 trackList:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000010005dc30
- (void)uploadPlaylistPropertiesWithMinimumTimeInterval:(double)arg1;	// IMP=0x000000010005d6ac
- (void)uploadItemPropertiesWithMinimumTimeInterval:(double)arg1;	// IMP=0x000000010005d094
- (void)updatePlaylistPlayDataWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010005cd34
- (void)updateItemPlayDataWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010005c9d4
- (void)increasePriorityForAllOperations;	// IMP=0x000000010005c844
- (void)decreasePriorityForAllOperations;	// IMP=0x000000010005c6b4
- (void)cancelOperations;	// IMP=0x000000010005c3c4
- (void)cancelOperationsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010005c0d0
- (void)cancelPendingChanges;	// IMP=0x000000010005c0c0
- (void)cancelPendingChangesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010005bf48
- (void)addBackgroundOperation:(id)arg1 priority:(int)arg2;	// IMP=0x000000010005becc
- (void)addOperation:(id)arg1 priority:(int)arg2;	// IMP=0x000000010005be50
- (id)initWithConfiguration:(id)arg1 progressObserver:(id)arg2;	// IMP=0x000000010005ba8c
- (id)init;	// IMP=0x000000010005ba3c
- (void)dealloc;	// IMP=0x000000010005b8b4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
