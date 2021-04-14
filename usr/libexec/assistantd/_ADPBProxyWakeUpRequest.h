//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface _ADPBProxyWakeUpRequest : PBRequest <NSCopying>
{
    NSString *_streamId;	// 8 = 0x8
}

+ (unsigned short)_ADPBProxyRequestType;	// IMP=0x000000010010f2a8
- (void).cxx_destruct;	// IMP=0x0000000100090570
@property(retain, nonatomic) NSString *streamId; // @synthesize streamId=_streamId;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010009052c
- (unsigned long long)hash;	// IMP=0x0000000100090514
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100090474
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000903f8
- (void)copyTo:(id)arg1;	// IMP=0x00000001000903d0
- (void)writeTo:(id)arg1;	// IMP=0x00000001000903b0
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001000903a8
- (id)dictionaryRepresentation;	// IMP=0x00000001000901ac
- (id)description;	// IMP=0x00000001000900f8
@property(readonly, nonatomic) _Bool hasStreamId;
- (void)_ad_performWithPeerStreamConnection:(id)arg1 context:(id)arg2;	// IMP=0x000000010005b50c

@end
