//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSData;

@interface NIDiscoveryToken : NSObject <NSCopying, NSSecureCoding>
{
    NSData *_rawToken;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100155b94
- (void).cxx_destruct;	// IMP=0x0000000100156088
@property(retain) NSData *rawToken; // @synthesize rawToken=_rawToken;
- (id)descriptionInternal;	// IMP=0x0000000100155f0c
- (id)description;	// IMP=0x0000000100155e40
- (unsigned long long)hash;	// IMP=0x0000000100155e30
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100155d38
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100155c0c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100155bdc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100155b9c
- (id)initWithBytes:(id)arg1;	// IMP=0x0000000100155a78

@end
