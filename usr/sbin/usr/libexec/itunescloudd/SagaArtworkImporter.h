//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CloudArtworkImporter.h"

@interface SagaArtworkImporter : CloudArtworkImporter
{
}

- (void)_importOriginalContainerArtwork;	// IMP=0x00000001000eac5c
- (void)_importOriginalItemArtwork;	// IMP=0x00000001000ea954
- (void)importContainerArtworkForSagaID:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000ea6b0
- (void)importScreenshotForSagaID:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000ea3c8
- (void)importItemArtworkForSagaID:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000ea0e0
- (void)importAllItemArtwork;	// IMP=0x00000001000ea0ac
- (id)initWithConfiguration:(id)arg1;	// IMP=0x00000001000ea074

@end

