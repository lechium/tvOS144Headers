//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@interface ADRapportLinkTransportOptions : NSObject <NSCopying, NSSecureCoding>
{
    long long _allowsAWDL;	// 8 = 0x8
    long long _allowsBLE;	// 16 = 0x10
    long long _allowsInfraWiFi;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000010003eda0
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x000000010003f1cc
@property(readonly, nonatomic) long long allowsInfraWiFi; // @synthesize allowsInfraWiFi=_allowsInfraWiFi;
@property(readonly, nonatomic) long long allowsBLE; // @synthesize allowsBLE=_allowsBLE;
@property(readonly, nonatomic) long long allowsAWDL; // @synthesize allowsAWDL=_allowsAWDL;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010003eee4
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010003eda8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010003ed9c
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010003ecc0
- (unsigned long long)hash;	// IMP=0x000000010003ebe4
- (id)_descriptionWithIndent:(unsigned long long)arg1;	// IMP=0x000000010003e9a0
- (id)description;	// IMP=0x000000010003e990
- (id)initWithAllowsAWDL:(long long)arg1 allowsBLE:(long long)arg2 allowsInfraWiFi:(long long)arg3;	// IMP=0x000000010003e934
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;	// IMP=0x000000010003f24c

@end

