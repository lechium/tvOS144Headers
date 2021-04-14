//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSData;

@interface SDAutoUnlockAuthPromptResponse : PBCodable <NSCopying>
{
    unsigned int _errorCode;	// 8 = 0x8
    NSData *_keyData;	// 16 = 0x10
    unsigned int _version;	// 24 = 0x18
    _Bool _needsImageData;	// 28 = 0x1c
    struct {
        unsigned int errorCode:1;
        unsigned int version:1;
        unsigned int needsImageData:1;
    } _has;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000100057130
@property(nonatomic) unsigned int errorCode; // @synthesize errorCode=_errorCode;
@property(nonatomic) _Bool needsImageData; // @synthesize needsImageData=_needsImageData;
@property(retain, nonatomic) NSData *keyData; // @synthesize keyData=_keyData;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000100057014
- (unsigned long long)hash;	// IMP=0x0000000100056f60
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100056e24
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100056d2c
- (void)copyTo:(id)arg1;	// IMP=0x0000000100056c64
- (void)writeTo:(id)arg1;	// IMP=0x0000000100056bac
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100056ba4
- (id)dictionaryRepresentation;	// IMP=0x0000000100056660
- (id)description;	// IMP=0x00000001000565ac
@property(nonatomic) _Bool hasErrorCode;
@property(nonatomic) _Bool hasNeedsImageData;
@property(readonly, nonatomic) _Bool hasKeyData;
@property(nonatomic) _Bool hasVersion;

@end

