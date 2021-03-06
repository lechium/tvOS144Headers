//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSMutableArray, NSString;

@interface TFFeedback : PBCodable <NSCopying>
{
    NSString *_comment;	// 8 = 0x8
    NSString *_email;	// 16 = 0x10
    NSString *_incidentId;	// 24 = 0x18
    NSMutableArray *_screenshots;	// 32 = 0x20
}

+ (Class)screenshotsType;	// IMP=0x00000001002aef54
- (void).cxx_destruct;	// IMP=0x00000001002afda4
@property(retain, nonatomic) NSString *incidentId; // @synthesize incidentId=_incidentId;
@property(retain, nonatomic) NSString *comment; // @synthesize comment=_comment;
@property(retain, nonatomic) NSMutableArray *screenshots; // @synthesize screenshots=_screenshots;
@property(retain, nonatomic) NSString *email; // @synthesize email=_email;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001002afb78
- (unsigned long long)hash;	// IMP=0x00000001002afaec
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001002af9c0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001002af7c8
- (void)copyTo:(id)arg1;	// IMP=0x00000001002af694
- (void)writeTo:(id)arg1;	// IMP=0x00000001002af514
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001002af50c
- (id)dictionaryRepresentation;	// IMP=0x00000001002af044
- (id)description;	// IMP=0x00000001002aef90
@property(readonly, nonatomic) _Bool hasIncidentId;
@property(readonly, nonatomic) _Bool hasComment;
- (id)screenshotsAtIndex:(unsigned long long)arg1;	// IMP=0x00000001002aef3c
- (unsigned long long)screenshotsCount;	// IMP=0x00000001002aef24
- (void)addScreenshots:(id)arg1;	// IMP=0x00000001002aeeb0
- (void)clearScreenshots;	// IMP=0x00000001002aee98
@property(readonly, nonatomic) _Bool hasEmail;

@end

