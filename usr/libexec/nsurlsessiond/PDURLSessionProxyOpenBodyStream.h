//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class PDURLSessionProxyTaskMessage;

@interface PDURLSessionProxyOpenBodyStream : PBCodable <NSCopying>
{
    PDURLSessionProxyTaskMessage *_task;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100040930
@property(retain, nonatomic) PDURLSessionProxyTaskMessage *task; // @synthesize task=_task;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001000408a8
- (unsigned long long)hash;	// IMP=0x0000000100040890
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000407f0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100040774
- (void)copyTo:(id)arg1;	// IMP=0x000000010004074c
- (void)writeTo:(id)arg1;	// IMP=0x000000010004072c
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100040544
- (id)dictionaryRepresentation;	// IMP=0x00000001000404b8
- (id)description;	// IMP=0x0000000100040404
@property(readonly, nonatomic) _Bool hasTask;

@end

