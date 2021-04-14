//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import "NSCopying-Protocol.h"

@class NSData;

@interface SDUnlockClassALongTermKeyRequest : PBRequest <NSCopying>
{
    NSData *_longTermKey;	// 8 = 0x8
    unsigned int _sessionID;	// 16 = 0x10
    unsigned int _version;	// 20 = 0x14
    CDStruct_6358cc24 _has;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001001585a8
@property(retain, nonatomic) NSData *longTermKey; // @synthesize longTermKey=_longTermKey;
@property(nonatomic) unsigned int sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001001584c8
- (unsigned long long)hash;	// IMP=0x0000000100158444
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100158344
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100158278
- (void)copyTo:(id)arg1;	// IMP=0x00000001001581dc
- (void)writeTo:(id)arg1;	// IMP=0x0000000100158144
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010015813c
- (id)dictionaryRepresentation;	// IMP=0x0000000100157d0c
- (id)description;	// IMP=0x0000000100157c58
@property(readonly, nonatomic) _Bool hasLongTermKey;
@property(nonatomic) _Bool hasSessionID;
@property(nonatomic) _Bool hasVersion;

@end

