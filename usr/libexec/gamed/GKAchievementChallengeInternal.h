//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKChallengeInternal.h"

@class GKAchievementInternal;

@interface GKAchievementChallengeInternal : GKChallengeInternal
{
    GKAchievementInternal *_achievement;	// 88 = 0x58
}

+ (id)secureCodedPropertyKeys;	// IMP=0x00000001001381d8
+ (id)internalRepresentation;	// IMP=0x00000001001381c4
@property(copy, nonatomic) GKAchievementInternal *achievement; // @synthesize achievement=_achievement;
- (id)titleText;	// IMP=0x0000000100138448
- (unsigned long long)type;	// IMP=0x0000000100138440
- (id)serverRepresentationForReceivingPlayer:(id)arg1;	// IMP=0x00000001001382cc
- (void)dealloc;	// IMP=0x0000000100138174

@end

