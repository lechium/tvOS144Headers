//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CloudLibraryOperation.h"

@class ICCloudItemIDList, NSDictionary;

@interface SagaUpdatePlaylistOperation : CloudLibraryOperation
{
    long long _playlistPersistentID;	// 8 = 0x8
    NSDictionary *_properties;	// 16 = 0x10
    ICCloudItemIDList *_trackList;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100088878
- (void).cxx_destruct;	// IMP=0x0000000100089594
- (void)main;	// IMP=0x0000000100088d04
- (_Bool)isPersistent;	// IMP=0x0000000100088cfc
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100088c10
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100088880
- (id)initWithConfiguration:(id)arg1 playlistPersistentID:(long long)arg2 properties:(id)arg3 trackList:(id)arg4;	// IMP=0x0000000100088774
- (id)initWithPlaylistPersistentID:(long long)arg1 properties:(id)arg2 trackList:(id)arg3;	// IMP=0x00000001000886d4

@end

