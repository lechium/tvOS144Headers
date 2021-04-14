//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface DaemonPBFuseItemPreference : PBCodable <NSCopying>
{
    long long _adamId;	// 8 = 0x8
    long long _createdOffsetMillis;	// 16 = 0x10
    NSString *_externalId;	// 24 = 0x18
    int _preference;	// 32 = 0x20
    int _preferenceType;	// 36 = 0x24
    struct {
        unsigned int adamId:1;
        unsigned int createdOffsetMillis:1;
        unsigned int preferenceType:1;
    } _has;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000001001d9390
@property(nonatomic) long long createdOffsetMillis; // @synthesize createdOffsetMillis=_createdOffsetMillis;
@property(retain, nonatomic) NSString *externalId; // @synthesize externalId=_externalId;
@property(nonatomic) long long adamId; // @synthesize adamId=_adamId;
@property(nonatomic) int preference; // @synthesize preference=_preference;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001001d9254
- (unsigned long long)hash;	// IMP=0x00000001001d918c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001001d9040
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001001d8f38
- (void)writeTo:(id)arg1;	// IMP=0x00000001001d8e6c
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001001d8e64
- (id)dictionaryRepresentation;	// IMP=0x00000001001d8844
- (id)description;	// IMP=0x00000001001d8790
@property(nonatomic) _Bool hasPreferenceType;
@property(nonatomic) int preferenceType; // @synthesize preferenceType=_preferenceType;
@property(nonatomic) _Bool hasCreatedOffsetMillis;
@property(readonly, nonatomic) _Bool hasExternalId;
@property(nonatomic) _Bool hasAdamId;

@end
