//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSData;

@interface PDURLSessionProxyResponse : PBCodable <NSCopying>
{
    NSData *_archiveList;	// 8 = 0x8
    unsigned int _version;	// 16 = 0x10
    CDStruct_f20694ce _has;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x00000001000366e0
@property(retain, nonatomic) NSData *archiveList; // @synthesize archiveList=_archiveList;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000100036634
- (unsigned long long)hash;	// IMP=0x00000001000365d0
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000364f8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100036450
- (void)copyTo:(id)arg1;	// IMP=0x00000001000363d8
- (void)writeTo:(id)arg1;	// IMP=0x0000000100036368
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100036360
- (id)dictionaryRepresentation;	// IMP=0x0000000100036294
- (id)description;	// IMP=0x00000001000361e0
@property(readonly, nonatomic) _Bool hasArchiveList;
@property(nonatomic) _Bool hasVersion;

@end

