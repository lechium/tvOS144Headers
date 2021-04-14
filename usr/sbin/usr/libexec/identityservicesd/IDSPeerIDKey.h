//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class IDSURI, NSString;

@interface IDSPeerIDKey : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _hasMatchingURIs;	// 8 = 0x8
    NSString *_service;	// 16 = 0x10
    IDSURI *_fromURI;	// 24 = 0x18
    IDSURI *_toURI;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000001001c7e18
+ (id)peerIDKeyWithService:(id)arg1 fromURI:(id)arg2 toURI:(id)arg3;	// IMP=0x00000001001c76c0
- (void).cxx_destruct;	// IMP=0x00000001001c8224
@property(nonatomic) _Bool hasMatchingURIs; // @synthesize hasMatchingURIs=_hasMatchingURIs;
@property(readonly, nonatomic) IDSURI *toURI; // @synthesize toURI=_toURI;
@property(readonly, nonatomic) IDSURI *fromURI; // @synthesize fromURI=_fromURI;
@property(readonly, nonatomic) NSString *service; // @synthesize service=_service;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000001001c8024
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001001c7e38
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001001c7dfc
- (id)description;	// IMP=0x00000001001c7cf8
- (unsigned long long)hash;	// IMP=0x00000001001c7c08
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001001c794c
- (id)initWithService:(id)arg1 fromURI:(id)arg2 toURI:(id)arg3;	// IMP=0x00000001001c779c

@end

