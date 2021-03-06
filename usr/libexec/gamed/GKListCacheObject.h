//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKExpiringCacheObject.h"

@class NSOrderedSet, NSString;

@interface GKListCacheObject : GKExpiringCacheObject
{
}

+ (id)relationshipKeyPathsForPrefetch;	// IMP=0x0000000100051398
+ (Class)entryClass;	// IMP=0x000000010005138c
- (id)entriesPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x000000010005224c
- (id)entryPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x00000001000520c0
- (id)findEntry:(CDUnknownBlockType)arg1;	// IMP=0x0000000100051ed0
- (void)updateEntriesWithRepresentations:(id)arg1 entryForRepresentation:(CDUnknownBlockType)arg2 reuseEntriesByIndex:(_Bool)arg3;	// IMP=0x00000001000519ac
- (void)removeEntriesMatchingPredicate:(id)arg1;	// IMP=0x0000000100051804
- (void)reorderEntry:(id)arg1 toIndex:(long long)arg2;	// IMP=0x0000000100051674
- (id)internalRepresentation;	// IMP=0x000000010005141c
- (void)updateSeed;	// IMP=0x00000001000513d0

// Remaining properties
@property(nonatomic) _Bool detailsLoaded; // @dynamic detailsLoaded;
@property(retain, nonatomic) NSOrderedSet *entries; // @dynamic entries;
@property(retain, nonatomic) NSString *seed; // @dynamic seed;

@end

