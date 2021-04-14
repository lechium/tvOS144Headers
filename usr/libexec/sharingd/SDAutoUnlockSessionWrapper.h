//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSData;

@interface SDAutoUnlockSessionWrapper : PBCodable <NSCopying>
{
    unsigned int _aksSessionID;	// 8 = 0x8
    NSData *_authTag;	// 16 = 0x10
    unsigned int _awdlCacheID;	// 24 = 0x18
    NSData *_encryptedPayload;	// 32 = 0x20
    unsigned int _messageType;	// 40 = 0x28
    NSData *_nonce;	// 48 = 0x30
    NSData *_payload;	// 56 = 0x38
    NSData *_senderID;	// 64 = 0x40
    NSData *_sessionID;	// 72 = 0x48
    unsigned int _version;	// 80 = 0x50
    _Bool _useProxy;	// 84 = 0x54
    struct {
        unsigned int aksSessionID:1;
        unsigned int awdlCacheID:1;
        unsigned int messageType:1;
        unsigned int version:1;
        unsigned int useProxy:1;
    } _has;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00000001000e25b0
@property(retain, nonatomic) NSData *nonce; // @synthesize nonce=_nonce;
@property(retain, nonatomic) NSData *authTag; // @synthesize authTag=_authTag;
@property(retain, nonatomic) NSData *encryptedPayload; // @synthesize encryptedPayload=_encryptedPayload;
@property(nonatomic) unsigned int aksSessionID; // @synthesize aksSessionID=_aksSessionID;
@property(nonatomic) unsigned int awdlCacheID; // @synthesize awdlCacheID=_awdlCacheID;
@property(nonatomic) _Bool useProxy; // @synthesize useProxy=_useProxy;
@property(retain, nonatomic) NSData *senderID; // @synthesize senderID=_senderID;
@property(nonatomic) unsigned int messageType; // @synthesize messageType=_messageType;
@property(retain, nonatomic) NSData *payload; // @synthesize payload=_payload;
@property(retain, nonatomic) NSData *sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001000e22cc
- (unsigned long long)hash;	// IMP=0x00000001000e2150
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000e1edc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000e1cc4
- (void)copyTo:(id)arg1;	// IMP=0x00000001000e1b08
- (void)writeTo:(id)arg1;	// IMP=0x00000001000e1978
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001000e1970
- (id)dictionaryRepresentation;	// IMP=0x00000001000e10f8
- (id)description;	// IMP=0x00000001000e1044
@property(readonly, nonatomic) _Bool hasNonce;
@property(readonly, nonatomic) _Bool hasAuthTag;
@property(readonly, nonatomic) _Bool hasEncryptedPayload;
@property(nonatomic) _Bool hasAksSessionID;
@property(nonatomic) _Bool hasAwdlCacheID;
@property(nonatomic) _Bool hasUseProxy;
@property(readonly, nonatomic) _Bool hasSenderID;
@property(nonatomic) _Bool hasMessageType;
@property(readonly, nonatomic) _Bool hasPayload;
@property(readonly, nonatomic) _Bool hasSessionID;
@property(nonatomic) _Bool hasVersion;

@end

