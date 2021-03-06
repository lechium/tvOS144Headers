//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GKDataReader-Protocol.h"
#import "GKPlayerListReaderDelegate-Protocol.h"

@class GKPlayerListReader, NSString;

@interface GKFriendsReader : NSObject <GKPlayerListReaderDelegate, GKDataReader>
{
    _Bool _shouldFilter;	// 8 = 0x8
    GKPlayerListReader *_listReader;	// 16 = 0x10
    NSString *_localPlayerID;	// 24 = 0x18
}

+ (id)readerWithReaderConnection:(id)arg1 writerConnection:(id)arg2 transport:(id)arg3 localPlayer:(id)arg4 filterFriendsInCommon:(_Bool)arg5;	// IMP=0x000000010012bc28
@property(nonatomic) _Bool shouldFilter; // @synthesize shouldFilter=_shouldFilter;
@property(retain, nonatomic) NSString *localPlayerID; // @synthesize localPlayerID=_localPlayerID;
@property(retain, nonatomic) GKPlayerListReader *listReader; // @synthesize listReader=_listReader;
- (id)localPlayerForLoadingProfileRelativeToPlayer:(id)arg1;	// IMP=0x000000010012c54c
- (int)familiarityForProfileLoadWithRelativePlayer:(id)arg1;	// IMP=0x000000010012c518
- (id)mergeNetworkLoadedProfileResources:(id)arg1 withSparseListResources:(id)arg2;	// IMP=0x000000010012bee0
- (id)listCacheWriterWithLanguage:(id)arg1 connection:(id)arg2;	// IMP=0x000000010012bec8
- (id)listNetworkReaderWithTransport:(id)arg1 cachedListResponse:(id)arg2;	// IMP=0x000000010012beac
- (id)listCacheReaderWithLanguage:(id)arg1 connection:(id)arg2;	// IMP=0x000000010012be88
- (void)readResources:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010012bd98
- (void)dealloc;	// IMP=0x000000010012bd48
- (id)initWithReaderConnection:(id)arg1 writerConnection:(id)arg2 transport:(id)arg3 localPlayer:(id)arg4 filterFriendsInCommon:(_Bool)arg5;	// IMP=0x000000010012bc8c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

