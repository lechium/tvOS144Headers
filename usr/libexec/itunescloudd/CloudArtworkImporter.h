//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MPMediaDownloadObserver-Protocol.h"

@class CloudArtworkOperationQueue, ICConnectionConfiguration, ICURLSession, ML3MusicLibrary, MPMediaDownloadManager, MSVWatchdog, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface CloudArtworkImporter : NSObject <MPMediaDownloadObserver>
{
    ML3MusicLibrary *_musicLibrary;	// 8 = 0x8
    ICConnectionConfiguration *_configuration;	// 16 = 0x10
    long long _sourceType;	// 24 = 0x18
    ICURLSession *_artworkDownloadSession;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_artworkDownloadAccessQueue;	// 40 = 0x28
    CloudArtworkOperationQueue *_artworkDownloadOperationQueue;	// 48 = 0x30
    NSMutableDictionary *_artworkDownloadOperationMap;	// 56 = 0x38
    NSString *_powerAssertionIdentifier;	// 64 = 0x40
    MSVWatchdog *_artworkDownloadWatchdog;	// 72 = 0x48
    MPMediaDownloadManager *_downloadManager;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000001000c6aa8
@property(retain, nonatomic) MPMediaDownloadManager *downloadManager; // @synthesize downloadManager=_downloadManager;
@property(retain, nonatomic) MSVWatchdog *artworkDownloadWatchdog; // @synthesize artworkDownloadWatchdog=_artworkDownloadWatchdog;
@property(copy, nonatomic) NSString *powerAssertionIdentifier; // @synthesize powerAssertionIdentifier=_powerAssertionIdentifier;
@property(retain, nonatomic) NSMutableDictionary *artworkDownloadOperationMap; // @synthesize artworkDownloadOperationMap=_artworkDownloadOperationMap;
@property(retain, nonatomic) CloudArtworkOperationQueue *artworkDownloadOperationQueue; // @synthesize artworkDownloadOperationQueue=_artworkDownloadOperationQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *artworkDownloadAccessQueue; // @synthesize artworkDownloadAccessQueue=_artworkDownloadAccessQueue;
@property(retain, nonatomic) ICURLSession *artworkDownloadSession; // @synthesize artworkDownloadSession=_artworkDownloadSession;
@property(readonly, nonatomic) long long sourceType; // @synthesize sourceType=_sourceType;
@property(readonly, nonatomic) ICConnectionConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) ML3MusicLibrary *musicLibrary; // @synthesize musicLibrary=_musicLibrary;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000001000c6660
- (void)_adjustOperationQueueStatusForMediaDownloads;	// IMP=0x00000001000c64dc
- (void)downloadManager:(id)arg1 didCancelAssets:(id)arg2;	// IMP=0x00000001000c64d0
- (void)downloadManager:(id)arg1 didFinishAsset:(id)arg2 withError:(id)arg3;	// IMP=0x00000001000c64c4
- (void)downloadManager:(id)arg1 didUpdateDownloadProgress:(id)arg2;	// IMP=0x00000001000c64b8
- (void)downloadManager:(id)arg1 didEnqueueAssetDownloads:(id)arg2 didRemoveAssetDownloads:(id)arg3;	// IMP=0x00000001000c64ac
- (void)cancelAllImports;	// IMP=0x00000001000c649c
- (void)cancelAllImportsAndWaitForOperationsToFinish:(_Bool)arg1;	// IMP=0x00000001000c6360
- (void)increasePriorityForAllOperations;	// IMP=0x00000001000c62a0
- (void)decreasePriorityForAllOperations;	// IMP=0x00000001000c61e0
- (void)deprioritizeImportArtworkForCloudID:(unsigned long long)arg1 artworkType:(long long)arg2;	// IMP=0x00000001000c5f30
- (void)importCloudArtworkForRequests:(id)arg1;	// IMP=0x00000001000c52ac
- (void)importArtworkForCloudID:(unsigned long long)arg1 artworkType:(long long)arg2 token:(id)arg3 mediaType:(unsigned int)arg4 allowsCellularData:(_Bool)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x00000001000c5128
- (void)dealloc;	// IMP=0x00000001000c4fd0
- (id)initWithConfiguration:(id)arg1 sourceType:(long long)arg2;	// IMP=0x00000001000c4718
- (id)initWithMusicLibrary:(id)arg1 sourceType:(long long)arg2;	// IMP=0x00000001000c4688

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

