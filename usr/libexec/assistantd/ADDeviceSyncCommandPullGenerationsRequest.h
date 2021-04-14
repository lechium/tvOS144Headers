//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSArray;

@interface ADDeviceSyncCommandPullGenerationsRequest : NSObject <NSCopying, NSSecureCoding>
{
    NSArray *_dataTypes;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000010008fcf4
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x000000010008ffb4
- (void).cxx_destruct;	// IMP=0x000000010008fe08
@property(readonly, copy, nonatomic) NSArray *dataTypes; // @synthesize dataTypes=_dataTypes;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010008fddc
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010008fcfc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010008fcf0
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010008fc30
- (unsigned long long)hash;	// IMP=0x000000010008fc20
- (id)_descriptionWithIndent:(unsigned long long)arg1;	// IMP=0x000000010008faa0
- (id)description;	// IMP=0x000000010008fa90
- (id)initWithDataTypes:(id)arg1;	// IMP=0x000000010008fa10
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;	// IMP=0x0000000100090034

@end
