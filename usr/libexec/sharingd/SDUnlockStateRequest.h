//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import "NSCopying-Protocol.h"

@interface SDUnlockStateRequest : PBRequest <NSCopying>
{
    unsigned int _version;	// 8 = 0x8
    CDStruct_f20694ce _has;	// 12 = 0xc
}

@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001000c828c
- (unsigned long long)hash;	// IMP=0x00000001000c8258
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000c81ac
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000c8140
- (void)copyTo:(id)arg1;	// IMP=0x00000001000c8110
- (void)writeTo:(id)arg1;	// IMP=0x00000001000c80e4
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001000c80dc
- (id)dictionaryRepresentation;	// IMP=0x00000001000c7e14
- (id)description;	// IMP=0x00000001000c7d60
@property(nonatomic) _Bool hasVersion;

@end

