//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@interface SDAutoUnlockKeyDeviceLocked : PBCodable <NSCopying>
{
    unsigned int _version;	// 8 = 0x8
    CDStruct_f20694ce _has;	// 12 = 0xc
}

@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001000c884c
- (unsigned long long)hash;	// IMP=0x00000001000c8818
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000c876c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000c8700
- (void)copyTo:(id)arg1;	// IMP=0x00000001000c86d0
- (void)writeTo:(id)arg1;	// IMP=0x00000001000c86a4
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001000c869c
- (id)dictionaryRepresentation;	// IMP=0x00000001000c83d4
- (id)description;	// IMP=0x00000001000c8320
@property(nonatomic) _Bool hasVersion;

@end

