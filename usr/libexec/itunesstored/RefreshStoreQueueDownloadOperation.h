//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@interface RefreshStoreQueueDownloadOperation : ISOperation
{
    long long _downloadID;	// 96 = 0x60
}

- (id)_URLBagKeyForDownload:(id)arg1;	// IMP=0x00000001001ba72c
- (_Bool)_refreshDownload:(id)arg1 error:(id *)arg2;	// IMP=0x00000001001b9f78
- (void)run;	// IMP=0x00000001001b9d24
@property(readonly) long long downloadIdentifier;
- (id)initWithDownloadIdentifier:(long long)arg1;	// IMP=0x00000001001b9cc4

@end

