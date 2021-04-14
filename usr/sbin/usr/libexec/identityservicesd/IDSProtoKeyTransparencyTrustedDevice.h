//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSData, NSMutableArray;

@interface IDSProtoKeyTransparencyTrustedDevice : PBCodable <NSCopying>
{
    NSData *_pushToken;	// 8 = 0x8
    NSMutableArray *_trustedServices;	// 16 = 0x10
}

+ (Class)trustedServicesType;	// IMP=0x00000001001a7974
- (void).cxx_destruct;	// IMP=0x00000001001a8e98
@property(retain, nonatomic) NSMutableArray *trustedServices; // @synthesize trustedServices=_trustedServices;
@property(retain, nonatomic) NSData *pushToken; // @synthesize pushToken=_pushToken;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001001a8bbc
- (unsigned long long)hash;	// IMP=0x00000001001a8b38
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001001a8974
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001001a86e4
- (void)copyTo:(id)arg1;	// IMP=0x00000001001a8588
- (void)writeTo:(id)arg1;	// IMP=0x00000001001a8394
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001001a8324
- (id)dictionaryRepresentation;	// IMP=0x00000001001a7a8c
- (id)description;	// IMP=0x00000001001a79a4
- (id)trustedServicesAtIndex:(unsigned long long)arg1;	// IMP=0x00000001001a7924
- (unsigned long long)trustedServicesCount;	// IMP=0x00000001001a78dc
- (void)addTrustedServices:(id)arg1;	// IMP=0x00000001001a7814
- (void)clearTrustedServices;	// IMP=0x00000001001a77cc
@property(readonly, nonatomic) _Bool hasPushToken;

@end
