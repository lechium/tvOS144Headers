//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSData, PDURLSessionProxyTaskMessage;

@interface PDURLSessionProxyResumeTask : PBCodable <NSCopying>
{
    NSData *_additionalProperties;	// 8 = 0x8
    PDURLSessionProxyTaskMessage *_task;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001000319d0
@property(retain, nonatomic) NSData *additionalProperties; // @synthesize additionalProperties=_additionalProperties;
@property(retain, nonatomic) PDURLSessionProxyTaskMessage *task; // @synthesize task=_task;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000100031904
- (unsigned long long)hash;	// IMP=0x00000001000318a8
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000317d4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100031724
- (void)copyTo:(id)arg1;	// IMP=0x00000001000316b8
- (void)writeTo:(id)arg1;	// IMP=0x0000000100031654
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100031440
- (id)dictionaryRepresentation;	// IMP=0x0000000100031388
- (id)description;	// IMP=0x00000001000312d4
@property(readonly, nonatomic) _Bool hasAdditionalProperties;
@property(readonly, nonatomic) _Bool hasTask;

@end

