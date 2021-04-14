//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "AsyncTask.h"

#import "AMSURLProtocolDelegate-Protocol.h"

@class AssetPromise, InAppDownloadStatus, InAppDownloadTimeEstimator, NSDictionary, NSNumber, NSString, NSTimer;

@interface InAppDownloadTask : AsyncTask <AMSURLProtocolDelegate>
{
    AssetPromise *_assetPromise;	// 8 = 0x8
    NSDictionary *_downloadInfo;	// 16 = 0x10
    NSString *_downloadPath;	// 24 = 0x18
    NSString *_installPath;	// 32 = 0x20
    NSTimer *_statusTimer;	// 40 = 0x28
    InAppDownloadStatus *_pendingDownloadStatus;	// 48 = 0x30
    InAppDownloadTimeEstimator *_timeEstimator;	// 56 = 0x38
    _Bool _paused;	// 64 = 0x40
    struct _BOMCopier *_copier;	// 72 = 0x48
    unsigned long long _expectedInstallSize;	// 80 = 0x50
    unsigned long long _totalInstalledSize;	// 88 = 0x58
    NSNumber *_downloadID;	// 96 = 0x60
    CDUnknownBlockType _statusBlock;	// 104 = 0x68
    InAppDownloadStatus *_status;	// 112 = 0x70
    NSString *_bundleID;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x00000001000a6ab4
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(retain, nonatomic) InAppDownloadStatus *status; // @synthesize status=_status;
@property(copy, nonatomic) CDUnknownBlockType statusBlock; // @synthesize statusBlock=_statusBlock;
@property(copy, nonatomic) NSNumber *downloadID; // @synthesize downloadID=_downloadID;
- (id)_bomInstallPath;	// IMP=0x00000001000a67b8
- (void)_bomInstall;	// IMP=0x00000001000a5ffc
- (void)_updateDownloadStatus:(id)arg1;	// IMP=0x00000001000a5f78
- (void)_sendDownloadStatus;	// IMP=0x00000001000a5eb8
- (void)_finalizeTaskWithError:(id)arg1;	// IMP=0x00000001000a5ca4
- (void)_downloadedBytes:(long long)arg1 expectedBytes:(long long)arg2;	// IMP=0x00000001000a5b94
- (void)pause;	// IMP=0x00000001000a5a3c
- (void)cancel;	// IMP=0x00000001000a5874
- (void)main;	// IMP=0x00000001000a4c78
- (id)initWithDownloadID:(id)arg1 info:(id)arg2 client:(id)arg3;	// IMP=0x00000001000a4af4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
