//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class PDURLSessionProxyRequest, PDURLSessionProxyTaskMessage;

@interface PDURLSessionProxyWillPerformRedirectionReply : PBCodable <NSCopying>
{
    PDURLSessionProxyRequest *_request;	// 8 = 0x8
    PDURLSessionProxyTaskMessage *_task;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010003b2c4
@property(retain, nonatomic) PDURLSessionProxyRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) PDURLSessionProxyTaskMessage *task; // @synthesize task=_task;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010003b1e0
- (unsigned long long)hash;	// IMP=0x000000010003b184
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010003b0b0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010003b000
- (void)copyTo:(id)arg1;	// IMP=0x000000010003af94
- (void)writeTo:(id)arg1;	// IMP=0x000000010003af30
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010003acf8
- (id)dictionaryRepresentation;	// IMP=0x000000010003ac18
- (id)description;	// IMP=0x000000010003ab64
@property(readonly, nonatomic) _Bool hasRequest;
@property(readonly, nonatomic) _Bool hasTask;

@end

