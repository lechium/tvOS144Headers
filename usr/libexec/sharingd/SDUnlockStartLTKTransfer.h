//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@interface SDUnlockStartLTKTransfer : PBCodable <NSCopying>
{
    unsigned int _version;	// 8 = 0x8
    CDStruct_f20694ce _has;	// 12 = 0xc
}

@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001000e2bc0
- (unsigned long long)hash;	// IMP=0x00000001000e2b8c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000e2ae0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000e2a74
- (void)copyTo:(id)arg1;	// IMP=0x00000001000e2a44
- (void)writeTo:(id)arg1;	// IMP=0x00000001000e2a18
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001000e2a10
- (id)dictionaryRepresentation;	// IMP=0x00000001000e2748
- (id)description;	// IMP=0x00000001000e2694
@property(nonatomic) _Bool hasVersion;

@end

