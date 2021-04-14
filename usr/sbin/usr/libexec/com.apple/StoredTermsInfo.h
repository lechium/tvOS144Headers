//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class SecureBackupTermsInfo;

@interface StoredTermsInfo : PBCodable <NSCopying>
{
    unsigned long long _storageVersion;	// 8 = 0x8
    SecureBackupTermsInfo *_termsInfo;	// 16 = 0x10
    struct {
        unsigned int storageVersion:1;
    } _has;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010001f380
@property(retain, nonatomic) SecureBackupTermsInfo *termsInfo; // @synthesize termsInfo=_termsInfo;
@property(nonatomic) unsigned long long storageVersion; // @synthesize storageVersion=_storageVersion;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010001f2bc
- (unsigned long long)hash;	// IMP=0x000000010001f258
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010001f180
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010001f0d8
- (void)copyTo:(id)arg1;	// IMP=0x000000010001f060
- (void)writeTo:(id)arg1;	// IMP=0x000000010001eff0
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010001efe8
- (id)dictionaryRepresentation;	// IMP=0x000000010001ec50
- (id)description;	// IMP=0x000000010001eb9c
@property(readonly, nonatomic) _Bool hasTermsInfo;
@property(nonatomic) _Bool hasStorageVersion;

@end
