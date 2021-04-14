//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKChallengeInternal.h"

@class GKLeaderboardInternal, GKScoreInternal;

@interface GKScoreChallengeInternal : GKChallengeInternal
{
    GKScoreInternal *_score;	// 88 = 0x58
    GKLeaderboardInternal *_leaderboard;	// 96 = 0x60
}

+ (id)secureCodedPropertyKeys;	// IMP=0x0000000100137d40
+ (id)internalRepresentation;	// IMP=0x0000000100137d2c
@property(retain, nonatomic) GKLeaderboardInternal *leaderboard; // @synthesize leaderboard=_leaderboard;
@property(copy, nonatomic) GKScoreInternal *score; // @synthesize score=_score;
- (id)titleText;	// IMP=0x0000000100138068
- (unsigned long long)type;	// IMP=0x0000000100138060
- (id)serverRepresentationForReceivingPlayer:(id)arg1;	// IMP=0x0000000100137e5c
- (void)dealloc;	// IMP=0x0000000100137ccc

@end
