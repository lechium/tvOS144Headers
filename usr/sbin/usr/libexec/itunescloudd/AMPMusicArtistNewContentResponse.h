//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSData, NSMutableArray, NSString;

@interface AMPMusicArtistNewContentResponse : PBCodable <NSCopying>
{
    NSMutableArray *_artistContents;	// 8 = 0x8
    NSData *_model;	// 16 = 0x10
    NSString *_recoId;	// 24 = 0x18
}

+ (Class)artistContentType;	// IMP=0x00000001000a9e90
- (void).cxx_destruct;	// IMP=0x00000001000aabb0
@property(retain, nonatomic) NSData *model; // @synthesize model=_model;
@property(retain, nonatomic) NSString *recoId; // @synthesize recoId=_recoId;
@property(retain, nonatomic) NSMutableArray *artistContents; // @synthesize artistContents=_artistContents;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001000aa9c8
- (unsigned long long)hash;	// IMP=0x00000001000aa954
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000aa854
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000aa67c
- (void)copyTo:(id)arg1;	// IMP=0x00000001000aa568
- (void)writeTo:(id)arg1;	// IMP=0x00000001000aa404
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001000aa3fc
- (id)dictionaryRepresentation;	// IMP=0x00000001000a9f80
- (id)description;	// IMP=0x00000001000a9ecc
@property(readonly, nonatomic) _Bool hasModel;
@property(readonly, nonatomic) _Bool hasRecoId;
- (id)artistContentAtIndex:(unsigned long long)arg1;	// IMP=0x00000001000a9e78
- (unsigned long long)artistContentsCount;	// IMP=0x00000001000a9e60
- (void)addArtistContent:(id)arg1;	// IMP=0x00000001000a9dec
- (void)clearArtistContents;	// IMP=0x00000001000a9dd4

@end
