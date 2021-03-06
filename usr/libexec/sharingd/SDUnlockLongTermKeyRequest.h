//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import "NSCopying-Protocol.h"

@class NSData, NSString;

@interface SDUnlockLongTermKeyRequest : PBRequest <NSCopying>
{
    NSData *_longTermKey;	// 8 = 0x8
    NSString *_requestID;	// 16 = 0x10
    unsigned int _version;	// 24 = 0x18
    CDStruct_f20694ce _has;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x000000010005f6d8
@property(retain, nonatomic) NSData *longTermKey; // @synthesize longTermKey=_longTermKey;
@property(retain, nonatomic) NSString *requestID; // @synthesize requestID=_requestID;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010005f5e8
- (unsigned long long)hash;	// IMP=0x000000010005f55c
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010005f450
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010005f374
- (void)copyTo:(id)arg1;	// IMP=0x000000010005f2dc
- (void)writeTo:(id)arg1;	// IMP=0x000000010005f250
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010005f248
- (id)dictionaryRepresentation;	// IMP=0x000000010005eed8
- (id)description;	// IMP=0x000000010005ee24
@property(readonly, nonatomic) _Bool hasLongTermKey;
@property(readonly, nonatomic) _Bool hasRequestID;
@property(nonatomic) _Bool hasVersion;

@end

