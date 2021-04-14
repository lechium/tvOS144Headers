//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSData;

@interface SDUnlockStashKeyExchangeResponse : PBCodable <NSCopying>
{
    unsigned int _errorCode;	// 8 = 0x8
    NSData *_key;	// 16 = 0x10
    unsigned int _sessionID;	// 24 = 0x18
    unsigned int _version;	// 28 = 0x1c
    CDStruct_e173124d _has;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000100059d9c
@property(nonatomic) unsigned int errorCode; // @synthesize errorCode=_errorCode;
@property(retain, nonatomic) NSData *key; // @synthesize key=_key;
@property(nonatomic) unsigned int sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000100059c80
- (unsigned long long)hash;	// IMP=0x0000000100059bcc
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100059a98
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000599a0
- (void)copyTo:(id)arg1;	// IMP=0x00000001000598d8
- (void)writeTo:(id)arg1;	// IMP=0x0000000100059820
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100059818
- (id)dictionaryRepresentation;	// IMP=0x00000001000592e4
- (id)description;	// IMP=0x0000000100059230
@property(nonatomic) _Bool hasErrorCode;
@property(readonly, nonatomic) _Bool hasKey;
@property(nonatomic) _Bool hasSessionID;
@property(nonatomic) _Bool hasVersion;

@end

