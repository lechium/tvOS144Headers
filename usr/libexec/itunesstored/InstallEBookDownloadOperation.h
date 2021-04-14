//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "FinishDownloadStepOperation.h"

@class NSString;

@interface InstallEBookDownloadOperation : FinishDownloadStepOperation
{
    _Bool _isSharedDownload;	// 91 = 0x5b
    NSString *_bookPath;	// 96 = 0x60
}

+ (id)sharedBookContainerPath;	// IMP=0x000000010014d204
+ (id)sharedBookContainerCachesPath;	// IMP=0x000000010014d1fc
- (void).cxx_destruct;	// IMP=0x000000010014ffd4
- (id)_syncedBooksPath;	// IMP=0x000000010014ff40
- (id)_storeFrontIdentifier;	// IMP=0x000000010014fde8
- (void)_removeDuplicateEntry:(id)arg1;	// IMP=0x000000010014fbc4
- (id)_newManifestEntry:(_Bool)arg1 withFileName:(id)arg2;	// IMP=0x000000010014f14c
- (id)_newManifestEntry:(id)arg1;	// IMP=0x000000010014f138
- (_Bool)_installMediaAsset:(id)arg1 assetInstalledPath:(id *)arg2 fileName:(id *)arg3 drmPath:(id *)arg4 error:(id *)arg5;	// IMP=0x000000010014dd64
- (id)_existingManifestEntry;	// IMP=0x000000010014dbd8
- (id)_bookManifest;	// IMP=0x000000010014d9a0
- (void)_addPurchaseManifestItem:(_Bool)arg1;	// IMP=0x000000010014d20c
- (void)run;	// IMP=0x000000010014bad4

@end

