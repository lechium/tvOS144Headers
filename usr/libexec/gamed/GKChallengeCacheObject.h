//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKListEntryCacheObject.h"

#import "GKCacheObjectImageProtocol-Protocol.h"

@class NSDate, NSOrderedSet, NSSet, NSString;

@interface GKChallengeCacheObject : GKListEntryCacheObject <GKCacheObjectImageProtocol>
{
}

+ (id)entityName;	// IMP=0x000000010005ebd4
+ (id)fetchSortDescriptors;	// IMP=0x000000010005e0b4
+ (id)challengeWithServerRepresentation:(id)arg1 context:(id)arg2;	// IMP=0x000000010005de34
+ (id)challengesWithChallengeIDs:(id)arg1 context:(id)arg2;	// IMP=0x000000010005dce8
+ (const void *)uniqueObjectIDLookupKey;	// IMP=0x000000010005dcdc
+ (id)uniqueAttributeName;	// IMP=0x000000010005dcd0
- (void)invalidate;	// IMP=0x000000010005ed0c
- (_Bool)hasDetails;	// IMP=0x000000010005ebe0
- (void)updateWithServerRepresentation:(id)arg1;	// IMP=0x000000010005e6f4
- (id)orderedSetOfCompatibleBundleIDs;	// IMP=0x000000010005e470
- (id)internalRepresentation;	// IMP=0x000000010005e140
- (Class)classForInternalRepresentation;	// IMP=0x000000010005e138

// Remaining properties
@property(retain, nonatomic) NSString *bundleID; // @dynamic bundleID;
@property(retain, nonatomic) NSString *challengeID; // @dynamic challengeID;
@property(retain, nonatomic) NSOrderedSet *compatibleBundleIDs; // @dynamic compatibleBundleIDs;
@property(retain, nonatomic) NSDate *completionDate; // @dynamic completionDate;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSDate *detailsExpirationDate; // @dynamic detailsExpirationDate;
@property(retain, nonatomic) NSString *groupIdentifier; // @dynamic groupIdentifier;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSString *identifier; // @dynamic identifier;
@property(retain, nonatomic) NSString *image128; // @dynamic image128;
@property(retain, nonatomic) NSString *image256; // @dynamic image256;
@property(retain, nonatomic) NSString *image512; // @dynamic image512;
@property(retain, nonatomic) NSString *image64; // @dynamic image64;
@property(retain, nonatomic) NSString *imageTemplate; // @dynamic imageTemplate;
@property(retain, nonatomic) NSDate *issueDate; // @dynamic issueDate;
@property(retain, nonatomic) NSString *issuingPlayerID; // @dynamic issuingPlayerID;
@property(retain, nonatomic) NSSet *listEntries; // @dynamic listEntries;
@property(retain, nonatomic) NSString *message; // @dynamic message;
@property(retain, nonatomic) NSString *receivingPlayerID; // @dynamic receivingPlayerID;
@property(nonatomic) unsigned int state; // @dynamic state;
@property(readonly) Class superclass;
@property(nonatomic) _Bool wasViewed; // @dynamic wasViewed;

@end

