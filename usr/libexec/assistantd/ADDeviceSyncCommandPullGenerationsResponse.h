//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSDictionary;

@interface ADDeviceSyncCommandPullGenerationsResponse : NSObject <NSCopying, NSSecureCoding>
{
    NSDictionary *_generationsByDataType;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000001002b0bd4
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x00000001002b0eb0
- (void).cxx_destruct;	// IMP=0x00000001002b0d04
@property(readonly, copy, nonatomic) NSDictionary *generationsByDataType; // @synthesize generationsByDataType=_generationsByDataType;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000001002b0cd8
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001002b0bdc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001002b0bd0
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001002b0b10
- (unsigned long long)hash;	// IMP=0x00000001002b0b00
- (id)_descriptionWithIndent:(unsigned long long)arg1;	// IMP=0x00000001002b0980
- (id)description;	// IMP=0x00000001002b0970
- (id)initWithGenerationsByDataType:(id)arg1;	// IMP=0x00000001002b08f0
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;	// IMP=0x00000001002b0f30

@end

