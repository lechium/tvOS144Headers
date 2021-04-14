//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MTSingleton.h"

@class NSMutableSet;

@interface MTVisitedEpisodeManager : MTSingleton
{
    NSMutableSet *_startedEpisodeUuids;	// 8 = 0x8
    NSMutableSet *_endedEpisodeUuids;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001001767d8
@property(retain, nonatomic) NSMutableSet *endedEpisodeUuids; // @synthesize endedEpisodeUuids=_endedEpisodeUuids;
@property(retain, nonatomic) NSMutableSet *startedEpisodeUuids; // @synthesize startedEpisodeUuids=_startedEpisodeUuids;
- (void)flushVisitedEpisodes;	// IMP=0x0000000100176480
- (unsigned long long)countOfEndedEpisodes;	// IMP=0x0000000100176434
- (unsigned long long)countOfStartedEpisodes;	// IMP=0x00000001001763e8
- (_Bool)hasEndedVisitingEpisode:(id)arg1;	// IMP=0x0000000100176348
- (void)startVisitingEpisode:(id)arg1;	// IMP=0x0000000100176274
- (void)endVisitingEpisode:(id)arg1;	// IMP=0x00000001001761d4
- (id)init;	// IMP=0x00000001001760e0

@end

