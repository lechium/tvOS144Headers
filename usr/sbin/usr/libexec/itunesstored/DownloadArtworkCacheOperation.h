//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class NSData, NSURL;

@interface DownloadArtworkCacheOperation : ISOperation
{
    NSData *_artworkData;	// 96 = 0x60
    long long _downloadID;	// 104 = 0x68
    _Bool _isStoreDownload;	// 112 = 0x70
    NSURL *_thumbnailURL;	// 120 = 0x78
}

- (void)_setArtworkData:(id)arg1;	// IMP=0x00000001000ce408
- (void)run;	// IMP=0x00000001000cde14
@property(readonly) NSData *artworkData;
- (void)dealloc;	// IMP=0x00000001000cdd60
- (id)initWithStoreDownloadIdentifier:(long long)arg1 thumbnailURL:(id)arg2;	// IMP=0x00000001000cdcd0
- (id)initWithDownloadIdentifier:(long long)arg1 thumbnailURL:(id)arg2;	// IMP=0x00000001000cdc50

@end

