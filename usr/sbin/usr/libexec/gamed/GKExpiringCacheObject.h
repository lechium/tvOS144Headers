//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKPurgeableCacheObject.h"

@class NSDate;

@interface GKExpiringCacheObject : GKPurgeableCacheObject
{
}

+ (void)invalidateObjectsMatchingPredicate:(id)arg1 context:(id)arg2;	// IMP=0x0000000100047f48
+ (void)expireObjectsMatchingPredicate:(id)arg1 context:(id)arg2;	// IMP=0x0000000100047c98
+ (id)fetchSortDescriptors;	// IMP=0x0000000100047424
- (void)awakeFromInsert;	// IMP=0x0000000100047c30
- (void)updateWithServerRepresentation:(id)arg1 expirationDate:(id)arg2;	// IMP=0x00000001000479bc
- (void)updateWithServerRepresentation:(id)arg1;	// IMP=0x0000000100047970
@property(readonly, nonatomic) _Bool expired;
- (void)expire;	// IMP=0x00000001000475f0
- (void)invalidate;	// IMP=0x00000001000474cc
- (_Bool)isValid;	// IMP=0x00000001000474a8

// Remaining properties
@property(retain, nonatomic) NSDate *expirationDate; // @dynamic expirationDate;
@property(retain, nonatomic) NSDate *timeStamp; // @dynamic timeStamp;

@end
