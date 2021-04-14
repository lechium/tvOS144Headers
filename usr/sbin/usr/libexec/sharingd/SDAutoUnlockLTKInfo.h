//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSData;

@interface SDAutoUnlockLTKInfo : PBCodable <NSCopying>
{
    NSData *_ltk;	// 8 = 0x8
    NSData *_ltkID;	// 16 = 0x10
    unsigned int _version;	// 24 = 0x18
    _Bool _signout;	// 28 = 0x1c
    struct {
        unsigned int version:1;
        unsigned int signout:1;
    } _has;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000010012c508
@property(nonatomic) _Bool signout; // @synthesize signout=_signout;
@property(retain, nonatomic) NSData *ltkID; // @synthesize ltkID=_ltkID;
@property(retain, nonatomic) NSData *ltk; // @synthesize ltk=_ltk;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010012c3dc
- (unsigned long long)hash;	// IMP=0x000000010012c324
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010012c1e4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010012c0e4
- (void)copyTo:(id)arg1;	// IMP=0x000000010012c020
- (void)writeTo:(id)arg1;	// IMP=0x000000010012bf6c
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010012bf64
- (id)dictionaryRepresentation;	// IMP=0x000000010012badc
- (id)description;	// IMP=0x000000010012ba28
@property(nonatomic) _Bool hasSignout;
@property(readonly, nonatomic) _Bool hasLtkID;
@property(readonly, nonatomic) _Bool hasLtk;
@property(nonatomic) _Bool hasVersion;

@end

