//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKRecommendationEntryCacheObject.h"

@class NSNumber, NSString;

@interface GKGameRecommendationEntryCacheObject : GKRecommendationEntryCacheObject
{
}

+ (id)entityName;	// IMP=0x000000010005906c
- (id)internalRepresentation;	// IMP=0x0000000100059278
- (void)updateWithServerRepresentation:(id)arg1;	// IMP=0x0000000100059078

// Remaining properties
@property(retain, nonatomic) NSNumber *adamID; // @dynamic adamID;
@property(retain, nonatomic) NSString *bundleID; // @dynamic bundleID;
@property(retain, nonatomic) NSString *engineID; // @dynamic engineID;
@property(retain, nonatomic) NSString *reason; // @dynamic reason;

@end
