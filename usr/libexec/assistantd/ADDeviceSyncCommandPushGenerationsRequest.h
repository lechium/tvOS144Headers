//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSDictionary;

@interface ADDeviceSyncCommandPushGenerationsRequest : NSObject <NSCopying, NSSecureCoding>
{
    NSDictionary *_generationsByDataType;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100189278
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x0000000100189554
- (void).cxx_destruct;	// IMP=0x00000001001893a8
@property(readonly, copy, nonatomic) NSDictionary *generationsByDataType; // @synthesize generationsByDataType=_generationsByDataType;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010018937c
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100189280
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100189274
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001001891b4
- (unsigned long long)hash;	// IMP=0x00000001001891a4
- (id)_descriptionWithIndent:(unsigned long long)arg1;	// IMP=0x0000000100189024
- (id)description;	// IMP=0x0000000100189014
- (id)initWithGenerationsByDataType:(id)arg1;	// IMP=0x0000000100188f94
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;	// IMP=0x00000001001895d4

@end

