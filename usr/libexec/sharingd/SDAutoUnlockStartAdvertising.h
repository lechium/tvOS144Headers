//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@interface SDAutoUnlockStartAdvertising : PBCodable <NSCopying>
{
    unsigned int _version;	// 8 = 0x8
    CDStruct_f20694ce _has;	// 12 = 0xc
}

@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010016c694
- (unsigned long long)hash;	// IMP=0x000000010016c660
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010016c5b4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010016c548
- (void)copyTo:(id)arg1;	// IMP=0x000000010016c518
- (void)writeTo:(id)arg1;	// IMP=0x000000010016c4ec
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010016c4e4
- (id)dictionaryRepresentation;	// IMP=0x000000010016c21c
- (id)description;	// IMP=0x000000010016c168
@property(nonatomic) _Bool hasVersion;

@end

