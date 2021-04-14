//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKInternalRepresentation.h"

@class NSArray;

@interface GKTournamentParticipantRequestInternal : GKInternalRepresentation
{
    _Bool _friendsOnly;	// 8 = 0x8
    NSArray *_participantStates;	// 16 = 0x10
    long long _startIndex;	// 24 = 0x18
    long long _count;	// 32 = 0x20
}

+ (id)secureCodedPropertyKeys;	// IMP=0x00000001000fbf58
- (void).cxx_destruct;	// IMP=0x00000001000fc154
@property(nonatomic) long long count; // @synthesize count=_count;
@property(nonatomic) long long startIndex; // @synthesize startIndex=_startIndex;
@property(nonatomic) _Bool friendsOnly; // @synthesize friendsOnly=_friendsOnly;
@property(retain, nonatomic) NSArray *participantStates; // @synthesize participantStates=_participantStates;

@end

