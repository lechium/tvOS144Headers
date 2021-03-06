//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "DownloadsSession.h"

@class DownloadsChangeset, ExternalDownloadState;

@interface DownloadsExternalTransaction : DownloadsSession
{
    DownloadsChangeset *_changeset;	// 16 = 0x10
    ExternalDownloadState *_externalState;	// 24 = 0x18
}

@property(readonly, copy, nonatomic) DownloadsChangeset *changeset; // @synthesize changeset=_changeset;
- (void)unionChangeset:(id)arg1;	// IMP=0x0000000100196d58
- (void)setValue:(id)arg1 forExternalProperty:(id)arg2 ofDownloadID:(long long)arg3;	// IMP=0x0000000100196d40
- (void)setValue:(id)arg1 forExternalProperty:(id)arg2 ofAssetID:(long long)arg3;	// IMP=0x0000000100196d28
- (void)setRestoreReason:(id)arg1;	// IMP=0x0000000100196d10
- (void)setExternalPropertyValues:(id)arg1 forDownloadWithID:(long long)arg2;	// IMP=0x0000000100196bd4
- (void)setExternalPropertyValues:(id)arg1 forAssetWithID:(long long)arg2;	// IMP=0x0000000100196a98
- (void)setBytesUploaded:(long long)arg1 forAssetID:(long long)arg2 ofDownloadID:(long long)arg3;	// IMP=0x0000000100196a80
- (void)setBytesDownloaded:(long long)arg1 forAssetID:(long long)arg2 ofDownloadID:(long long)arg3;	// IMP=0x0000000100196a68
- (void)removeExternalValuesForDownloadID:(long long)arg1;	// IMP=0x0000000100196a50
- (void)removeExternalValuesForAssetID:(long long)arg1;	// IMP=0x0000000100196a38
- (void)addDownloadChangeTypes:(long long)arg1;	// IMP=0x0000000100196a20
- (void)dealloc;	// IMP=0x00000001001969c0
- (id)initWithSessionDescriptor:(id)arg1;	// IMP=0x000000010019693c

@end

