//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@interface SDUnlockStashConfirmation : PBCodable <NSCopying>
{
    unsigned int _sessionID;	// 8 = 0x8
    unsigned int _version;	// 12 = 0xc
    _Bool _success;	// 16 = 0x10
    struct {
        unsigned int sessionID:1;
        unsigned int version:1;
        unsigned int success:1;
    } _has;	// 20 = 0x14
}

@property(nonatomic) _Bool success; // @synthesize success=_success;
@property(nonatomic) unsigned int sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000100035fd4
- (unsigned long long)hash;	// IMP=0x0000000100035f60
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100035e64
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100035da4
- (void)copyTo:(id)arg1;	// IMP=0x0000000100035d00
- (void)writeTo:(id)arg1;	// IMP=0x0000000100035c58
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100035c50
- (id)dictionaryRepresentation;	// IMP=0x0000000100035758
- (id)description;	// IMP=0x00000001000356a4
@property(nonatomic) _Bool hasSuccess;
@property(nonatomic) _Bool hasSessionID;
@property(nonatomic) _Bool hasVersion;

@end

