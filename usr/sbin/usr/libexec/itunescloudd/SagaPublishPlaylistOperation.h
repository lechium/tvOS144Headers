//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CloudLibraryOperation.h"

@class NSString;

@interface SagaPublishPlaylistOperation : CloudLibraryOperation
{
    unsigned long long _sagaID;	// 8 = 0x8
    NSString *_playlistGlobalID;	// 16 = 0x10
    NSString *_playlistShareURL;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100030e90
@property(readonly, nonatomic) NSString *playlistShareURL; // @synthesize playlistShareURL=_playlistShareURL;
@property(readonly, nonatomic) NSString *playlistGlobalID; // @synthesize playlistGlobalID=_playlistGlobalID;
- (void)main;	// IMP=0x000000010003068c
- (id)initWithConfiguration:(id)arg1 sagaID:(unsigned long long)arg2;	// IMP=0x000000010003063c
- (id)initWithSagaID:(unsigned long long)arg1;	// IMP=0x00000001000305dc

@end

