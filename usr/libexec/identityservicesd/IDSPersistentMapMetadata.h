//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@interface IDSPersistentMapMetadata : NSObject <NSCopying, NSSecureCoding>
{
    long long _versionNumber;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100110860
@property(readonly, nonatomic) long long versionNumber; // @synthesize versionNumber=_versionNumber;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001001109e4
- (unsigned long long)hash;	// IMP=0x00000001001109b0
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100110880
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000001001107c8
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001001106cc
- (id)initWithVersionNumber:(long long)arg1;	// IMP=0x000000010011060c

@end
