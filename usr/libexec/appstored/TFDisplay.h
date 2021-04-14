//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@interface TFDisplay : PBCodable <NSCopying>
{
    unsigned int _heightPixels;	// 8 = 0x8
    unsigned int _widthPixels;	// 12 = 0xc
    struct {
        unsigned int heightPixels:1;
        unsigned int widthPixels:1;
    } _has;	// 16 = 0x10
}

- (void)mergeFrom:(id)arg1;	// IMP=0x0000000100158a34
- (unsigned long long)hash;	// IMP=0x00000001001589e0
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010015890c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010015887c
- (void)copyTo:(id)arg1;	// IMP=0x0000000100158808
- (void)writeTo:(id)arg1;	// IMP=0x000000010015878c
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100158784
- (id)dictionaryRepresentation;	// IMP=0x0000000100158398
- (id)description;	// IMP=0x00000001001582e4
@property(nonatomic) _Bool hasHeightPixels;
@property(nonatomic) unsigned int heightPixels; // @synthesize heightPixels=_heightPixels;
@property(nonatomic) _Bool hasWidthPixels;
@property(nonatomic) unsigned int widthPixels; // @synthesize widthPixels=_widthPixels;

@end
