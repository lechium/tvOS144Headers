//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSString;

@interface ADDeviceSyncCommandPullSnapshotRequest : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_dataType;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100053640
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x00000001000538b4
- (void).cxx_destruct;	// IMP=0x0000000100053708
@property(readonly, copy, nonatomic) NSString *dataType; // @synthesize dataType=_dataType;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000001000536dc
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100053648
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010005363c
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010005357c
- (unsigned long long)hash;	// IMP=0x000000010005356c
- (id)_descriptionWithIndent:(unsigned long long)arg1;	// IMP=0x00000001000533ec
- (id)description;	// IMP=0x00000001000533dc
- (id)initWithDataType:(id)arg1;	// IMP=0x000000010005335c
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;	// IMP=0x0000000100053934

@end

