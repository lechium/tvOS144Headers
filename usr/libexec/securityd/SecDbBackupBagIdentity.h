//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSData;

__attribute__((visibility("hidden")))
@interface SecDbBackupBagIdentity : PBCodable <NSCopying>
{
    NSData *_baghash;	// 8 = 0x8
    NSData *_baguuid;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100172df8
@property(retain, nonatomic) NSData *baghash; // @synthesize baghash=_baghash;
@property(retain, nonatomic) NSData *baguuid; // @synthesize baguuid=_baguuid;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000100172d44
- (unsigned long long)hash;	// IMP=0x0000000100172ce8
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100172c14
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100172b64
- (void)copyTo:(id)arg1;	// IMP=0x0000000100172af8
- (void)writeTo:(id)arg1;	// IMP=0x0000000100172a94
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100172a8c
- (id)dictionaryRepresentation;	// IMP=0x00000001001729f8
- (id)description;	// IMP=0x0000000100172944
@property(readonly, nonatomic) _Bool hasBaghash;
@property(readonly, nonatomic) _Bool hasBaguuid;

@end
