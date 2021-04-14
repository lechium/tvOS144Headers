//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import "NSCopying-Protocol.h"

@class NSData, NSString;

@interface SDAutoUnlockAuthPromptRequest : PBRequest <NSCopying>
{
    NSString *_appName;	// 8 = 0x8
    NSData *_iconHash;	// 16 = 0x10
    unsigned int _version;	// 24 = 0x18
    CDStruct_f20694ce _has;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x00000001001c6814
@property(retain, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(retain, nonatomic) NSData *iconHash; // @synthesize iconHash=_iconHash;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001001c6724
- (unsigned long long)hash;	// IMP=0x00000001001c6698
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001001c658c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001001c64b0
- (void)copyTo:(id)arg1;	// IMP=0x00000001001c6418
- (void)writeTo:(id)arg1;	// IMP=0x00000001001c638c
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001001c6384
- (id)dictionaryRepresentation;	// IMP=0x00000001001c6018
- (id)description;	// IMP=0x00000001001c5f64
@property(readonly, nonatomic) _Bool hasAppName;
@property(readonly, nonatomic) _Bool hasIconHash;
@property(nonatomic) _Bool hasVersion;

@end
