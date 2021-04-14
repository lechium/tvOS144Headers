//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSMutableArray, NSString;

@interface AMPMusicArtistContent : PBCodable <NSCopying>
{
    long long _adamId;	// 8 = 0x8
    NSMutableArray *_catalogContents;	// 16 = 0x10
    NSString *_name;	// 24 = 0x18
    struct {
        unsigned int adamId:1;
    } _has;	// 32 = 0x20
}

+ (Class)catalogContentType;	// IMP=0x000000010008c1f8
- (void).cxx_destruct;	// IMP=0x000000010008cfd8
@property(retain, nonatomic) NSMutableArray *catalogContents; // @synthesize catalogContents=_catalogContents;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long adamId; // @synthesize adamId=_adamId;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010008cdf8
- (unsigned long long)hash;	// IMP=0x000000010008cd6c
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010008cc60
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010008ca94
- (void)copyTo:(id)arg1;	// IMP=0x000000010008c974
- (void)writeTo:(id)arg1;	// IMP=0x000000010008c804
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010008c7fc
- (id)dictionaryRepresentation;	// IMP=0x000000010008c2b8
- (id)description;	// IMP=0x000000010008c204
- (id)catalogContentAtIndex:(unsigned long long)arg1;	// IMP=0x000000010008c1e0
- (unsigned long long)catalogContentsCount;	// IMP=0x000000010008c1c8
- (void)addCatalogContent:(id)arg1;	// IMP=0x000000010008c154
- (void)clearCatalogContents;	// IMP=0x000000010008c13c
@property(readonly, nonatomic) _Bool hasName;
@property(nonatomic) _Bool hasAdamId;

@end
