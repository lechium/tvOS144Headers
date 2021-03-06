//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKInternalRepresentation.h"

@class GKPlayerInternal, GKTournamentDefinitionInternal, NSDate, NSString;

@interface GKCustomTournamentRequestInternal : GKInternalRepresentation
{
    _Bool _isCreatorInTournament;	// 8 = 0x8
    GKTournamentDefinitionInternal *_tournamentDefinition;	// 16 = 0x10
    GKPlayerInternal *_tournamentCreator;	// 24 = 0x18
    NSString *_tournamentName;	// 32 = 0x20
    NSString *_icon;	// 40 = 0x28
    long long _seedingMethod;	// 48 = 0x30
    long long _scoringMethod;	// 56 = 0x38
    long long _maxPlayers;	// 64 = 0x40
    long long _minPlayers;	// 72 = 0x48
    double _duration;	// 80 = 0x50
    NSDate *_startTime;	// 88 = 0x58
    long long _maxReplays;	// 96 = 0x60
}

+ (id)customTournamentRequestWithTournamentDefinition:(id)arg1 player:(id)arg2;	// IMP=0x00000001000fb87c
+ (id)secureCodedPropertyKeys;	// IMP=0x00000001000fb680
- (void).cxx_destruct;	// IMP=0x00000001000fbc38
@property(nonatomic) _Bool isCreatorInTournament; // @synthesize isCreatorInTournament=_isCreatorInTournament;
@property(nonatomic) long long maxReplays; // @synthesize maxReplays=_maxReplays;
@property(retain, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) long long minPlayers; // @synthesize minPlayers=_minPlayers;
@property(nonatomic) long long maxPlayers; // @synthesize maxPlayers=_maxPlayers;
@property(nonatomic) long long scoringMethod; // @synthesize scoringMethod=_scoringMethod;
@property(nonatomic) long long seedingMethod; // @synthesize seedingMethod=_seedingMethod;
@property(retain, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) NSString *tournamentName; // @synthesize tournamentName=_tournamentName;
@property(retain, nonatomic) GKPlayerInternal *tournamentCreator; // @synthesize tournamentCreator=_tournamentCreator;
@property(retain, nonatomic) GKTournamentDefinitionInternal *tournamentDefinition; // @synthesize tournamentDefinition=_tournamentDefinition;

@end

