//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@interface GKInternalRepresentation : NSObject <NSCoding, NSCopying, NSSecureCoding>
{
}

+ (id)secureCodedPropertyKeys;	// IMP=0x0000000100081450
+ (id)codedPropertyKeys;	// IMP=0x000000010008142c
+ (id)internalRepresentation;	// IMP=0x0000000100080f60
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100080f58
+ (id)internalRepresentationWithProperties:(id)arg1;	// IMP=0x0000000100140374
+ (id)propertiesToFetch;	// IMP=0x0000000100140298
+ (id)internalRepresentationForCacheObject:(id)arg1;	// IMP=0x000000010013fe68
- (void)mergePropertiesFrom:(id)arg1;	// IMP=0x0000000100081b28
- (id)serverRepresentation;	// IMP=0x0000000100081b1c
- (id)description;	// IMP=0x0000000100081b0c
- (id)_gkDescriptionWithChildren:(long long)arg1;	// IMP=0x0000000100081468
- (id)descriptionSubstitutionMap;	// IMP=0x000000010008145c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000812b0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100081168
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100080f74
- (void)updateWithProperties:(id)arg1;	// IMP=0x0000000100140404
- (id)initWithProperties:(id)arg1;	// IMP=0x00000001001403a4
- (void)updateWithCacheObject:(id)arg1;	// IMP=0x000000010013fff4
- (id)initWithCacheObject:(id)arg1;	// IMP=0x000000010013fe98

@end

