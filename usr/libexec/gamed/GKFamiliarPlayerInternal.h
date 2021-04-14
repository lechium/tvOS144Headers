//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKPlayerInternal.h"

@class NSString;

@interface GKFamiliarPlayerInternal : GKPlayerInternal
{
    NSString *_firstName;	// 184 = 0xb8
    NSString *_lastName;	// 192 = 0xc0
    NSString *_compositeName;	// 200 = 0xc8
}

+ (id)secureCodedPropertyKeys;	// IMP=0x0000000100130dbc
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100130d44
+ (int)familiarity;	// IMP=0x0000000100142a80
+ (id)propertiesToFetch;	// IMP=0x0000000100142a00
- (void)setCompositeName:(id)arg1;	// IMP=0x0000000100130f98
- (id)compositeName;	// IMP=0x0000000100130f88
- (void)setLastName:(id)arg1;	// IMP=0x0000000100130f7c
- (id)lastName;	// IMP=0x0000000100130f6c
- (void)setFirstName:(id)arg1;	// IMP=0x0000000100130f60
- (id)firstName;	// IMP=0x0000000100130f50
- (void)dealloc;	// IMP=0x0000000100130d4c
- (void)updateWithProperties:(id)arg1;	// IMP=0x0000000100142a88
- (void)updateWithCacheObject:(id)arg1;	// IMP=0x0000000100142934

@end
