//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKInternalRepresentation.h"

@class GKGameRecordInternal, GKPlayerInternal, NSDate;

@interface GKRecentMatchInternal : GKInternalRepresentation
{
    GKPlayerInternal *_player;	// 8 = 0x8
    GKGameRecordInternal *_game;	// 16 = 0x10
    NSDate *_date;	// 24 = 0x18
}

+ (id)secureCodedPropertyKeys;	// IMP=0x000000010012b260
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(retain, nonatomic) GKGameRecordInternal *game; // @synthesize game=_game;
@property(retain, nonatomic) GKPlayerInternal *player; // @synthesize player=_player;
- (unsigned long long)hash;	// IMP=0x000000010012b4a4
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010012b364
- (void)dealloc;	// IMP=0x000000010012b1f0

@end

