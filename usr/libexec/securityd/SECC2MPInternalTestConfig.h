//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface SECC2MPInternalTestConfig : PBCodable <NSCopying>
{
    NSString *_key;	// 8 = 0x8
    NSString *_value;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001000c6a8c
@property(retain, nonatomic) NSString *value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001000c69d8
- (unsigned long long)hash;	// IMP=0x00000001000c697c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000c68a8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000c67f8
- (void)copyTo:(id)arg1;	// IMP=0x00000001000c678c
- (void)writeTo:(id)arg1;	// IMP=0x00000001000c6728
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001000c6720
- (id)dictionaryRepresentation;	// IMP=0x00000001000c668c
- (id)description;	// IMP=0x00000001000c65d8
@property(readonly, nonatomic) _Bool hasValue;
@property(readonly, nonatomic) _Bool hasKey;

@end

