//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKCacheObject.h"

@class GKChallengeCacheObject, NSString;

@interface GKChallengeCompatibleBundleID : GKCacheObject
{
}

+ (id)entityName;	// IMP=0x000000010005ed64
- (id)internalRepresentation;	// IMP=0x000000010005ed70
- (void)updateWithServerRepresentation:(id)arg1;	// IMP=0x000000010005ed60

// Remaining properties
@property(retain, nonatomic) NSString *bundleID; // @dynamic bundleID;
@property(retain, nonatomic) GKChallengeCacheObject *challenge; // @dynamic challenge;

@end

