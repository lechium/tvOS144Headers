//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKPlayerInternal.h"

@class NSString;

@interface GKAnonymousGuestPlayerInternal : GKPlayerInternal
{
    GKPlayerInternal *_hostPlayerInternal;	// 184 = 0xb8
    NSString *_guestIdentifier;	// 192 = 0xc0
}

+ (id)secureCodedPropertyKeys;	// IMP=0x00000001001324f8
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100132328
- (void)setGuestIdentifier:(id)arg1;	// IMP=0x0000000100132684
- (id)guestIdentifier;	// IMP=0x0000000100132674
@property(retain, nonatomic) GKPlayerInternal *hostPlayerInternal; // @synthesize hostPlayerInternal=_hostPlayerInternal;
- (_Bool)isGuestPlayer;	// IMP=0x00000001001324f0
- (id)playerID;	// IMP=0x0000000100132478
- (id)initWithHostPlayerInternal:(id)arg1 guestIdentifier:(id)arg2;	// IMP=0x0000000100132390
- (void)dealloc;	// IMP=0x0000000100132330

@end

