//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSData;

__attribute__((visibility("hidden")))
@interface SecDbBackupMetadataClassKey : PBCodable <NSCopying>
{
    NSData *_backupWrappedMetadataKey;	// 8 = 0x8
    int _keyClass;	// 16 = 0x10
    CDStruct_9ea6736c _has;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x000000010005fc38
@property(retain, nonatomic) NSData *backupWrappedMetadataKey; // @synthesize backupWrappedMetadataKey=_backupWrappedMetadataKey;
@property(nonatomic) int keyClass; // @synthesize keyClass=_keyClass;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010005fb8c
- (unsigned long long)hash;	// IMP=0x000000010005fb28
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010005fa50
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010005f9a8
- (void)copyTo:(id)arg1;	// IMP=0x000000010005f930
- (void)writeTo:(id)arg1;	// IMP=0x000000010005f8c0
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010005f668
- (id)dictionaryRepresentation;	// IMP=0x000000010005f59c
- (id)description;	// IMP=0x000000010005f4e8
@property(readonly, nonatomic) _Bool hasBackupWrappedMetadataKey;
@property(nonatomic) _Bool hasKeyClass;

@end
