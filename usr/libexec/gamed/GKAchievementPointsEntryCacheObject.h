//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKListEntryCacheObject.h"

@class GKGameRecordCacheObject;

@interface GKAchievementPointsEntryCacheObject : GKListEntryCacheObject
{
}

+ (id)entityName;	// IMP=0x0000000100059b88
- (id)internalRepresentation;	// IMP=0x0000000100059cf4
- (void)updateWithServerRepresentation:(id)arg1;	// IMP=0x0000000100059b94

// Remaining properties
@property(retain, nonatomic) GKGameRecordCacheObject *gameRecord; // @dynamic gameRecord;

@end

