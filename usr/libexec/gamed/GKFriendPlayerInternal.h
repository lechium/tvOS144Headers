//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKFamiliarPlayerInternal.h"

@class GKGameInternal, NSDate, NSString;

@interface GKFriendPlayerInternal : GKFamiliarPlayerInternal
{
    NSString *_status;	// 208 = 0xd0
    NSDate *_lastPlayedDate;	// 216 = 0xd8
    GKGameInternal *_lastPlayedGame;	// 224 = 0xe0
}

+ (id)secureCodedPropertyKeys;	// IMP=0x000000010013101c
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100130fa4
+ (int)familiarity;	// IMP=0x0000000100142ccc
+ (id)propertiesToFetch;	// IMP=0x0000000100142c00
- (void)setLastPlayedGame:(id)arg1;	// IMP=0x00000001001311f4
- (id)lastPlayedGame;	// IMP=0x00000001001311e4
- (void)setLastPlayedDate:(id)arg1;	// IMP=0x00000001001311d8
- (id)lastPlayedDate;	// IMP=0x00000001001311c8
- (void)setStatus:(id)arg1;	// IMP=0x00000001001311bc
- (id)status;	// IMP=0x00000001001311ac
- (int)defaultFamiliarity;	// IMP=0x00000001001311a4
- (_Bool)isFriend;	// IMP=0x000000010013119c
- (void)dealloc;	// IMP=0x0000000100130fac
- (void)updateWithProperties:(id)arg1;	// IMP=0x0000000100142cd4
- (void)updateWithCacheObject:(id)arg1;	// IMP=0x0000000100142b74

@end

