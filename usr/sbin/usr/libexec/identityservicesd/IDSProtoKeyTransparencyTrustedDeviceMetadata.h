//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@interface IDSProtoKeyTransparencyTrustedDeviceMetadata : PBCodable <NSCopying>
{
    unsigned int _status;	// 8 = 0x8
    struct {
        unsigned int status:1;
    } _has;	// 12 = 0xc
}

@property(nonatomic) unsigned int status; // @synthesize status=_status;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010010dd74
- (unsigned long long)hash;	// IMP=0x000000010010dcb0
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010010dab0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010010d9a4
- (void)copyTo:(id)arg1;	// IMP=0x000000010010d8e0
- (void)writeTo:(id)arg1;	// IMP=0x000000010010d840
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010010d7d0
- (id)dictionaryRepresentation;	// IMP=0x000000010010d094
- (id)description;	// IMP=0x000000010010cfac
@property(nonatomic) _Bool hasStatus;

@end
