//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "BLBaseBookInstallOperation.h"

@class BLMediaLibraryManager;

__attribute__((visibility("hidden")))
@interface BLAudiobookInstallOperation : BLBaseBookInstallOperation
{
    BLMediaLibraryManager *_mediaLibraryManager;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100041df8
@property(readonly, nonatomic) BLMediaLibraryManager *mediaLibraryManager; // @synthesize mediaLibraryManager=_mediaLibraryManager;
- (id)_newMediaLibraryItem;	// IMP=0x0000000100041b18
- (id)_installDaemonOwnedDownload:(id *)arg1;	// IMP=0x000000010004180c
- (id)_destinationDirectoryPath;	// IMP=0x0000000100041780
- (_Bool)_installAssetFrom:(id)arg1 to:(id)arg2 error:(id *)arg3;	// IMP=0x00000001000413bc
- (void)main;	// IMP=0x00000001000405d8
- (_Bool)_unprotectedMediaAsset:(id *)arg1;	// IMP=0x0000000100040210
- (id)initWithInfo:(id)arg1 mediaLibraryManager:(id)arg2;	// IMP=0x0000000100040020

@end

