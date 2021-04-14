/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:41 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /usr/lib/libAWDSupportFramework.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface AWDWiFiBlacklistingEvent : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _blacklistedDuration;
	unsigned _blacklistedReason;
	unsigned _blacklistedSubreason;
	unsigned _networkFlags;
	NSData* _oui;
	unsigned _securityType;
	unsigned _unblacklistingReason;
	SCD_Struct_AW16 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;               //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasOui; 
@property (nonatomic,retain) NSData * oui;                               //@synthesize oui=_oui - In the implementation block
@property (assign,nonatomic) BOOL hasNetworkFlags; 
@property (assign,nonatomic) unsigned networkFlags;                      //@synthesize networkFlags=_networkFlags - In the implementation block
@property (assign,nonatomic) BOOL hasSecurityType; 
@property (assign,nonatomic) unsigned securityType;                      //@synthesize securityType=_securityType - In the implementation block
@property (assign,nonatomic) BOOL hasBlacklistedReason; 
@property (assign,nonatomic) unsigned blacklistedReason;                 //@synthesize blacklistedReason=_blacklistedReason - In the implementation block
@property (assign,nonatomic) BOOL hasBlacklistedSubreason; 
@property (assign,nonatomic) unsigned blacklistedSubreason;              //@synthesize blacklistedSubreason=_blacklistedSubreason - In the implementation block
@property (assign,nonatomic) BOOL hasBlacklistedDuration; 
@property (assign,nonatomic) unsigned blacklistedDuration;               //@synthesize blacklistedDuration=_blacklistedDuration - In the implementation block
@property (assign,nonatomic) BOOL hasUnblacklistingReason; 
@property (assign,nonatomic) unsigned unblacklistingReason;              //@synthesize unblacklistingReason=_unblacklistingReason - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setSecurityType:(unsigned)arg1 ;
-(unsigned)securityType;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setOui:(NSData *)arg1 ;
-(BOOL)hasOui;
-(NSData *)oui;
-(void)setNetworkFlags:(unsigned)arg1 ;
-(void)setHasNetworkFlags:(BOOL)arg1 ;
-(BOOL)hasNetworkFlags;
-(void)setHasSecurityType:(BOOL)arg1 ;
-(BOOL)hasSecurityType;
-(void)setBlacklistedReason:(unsigned)arg1 ;
-(void)setHasBlacklistedReason:(BOOL)arg1 ;
-(BOOL)hasBlacklistedReason;
-(void)setBlacklistedSubreason:(unsigned)arg1 ;
-(void)setHasBlacklistedSubreason:(BOOL)arg1 ;
-(BOOL)hasBlacklistedSubreason;
-(void)setBlacklistedDuration:(unsigned)arg1 ;
-(void)setHasBlacklistedDuration:(BOOL)arg1 ;
-(BOOL)hasBlacklistedDuration;
-(void)setUnblacklistingReason:(unsigned)arg1 ;
-(void)setHasUnblacklistingReason:(BOOL)arg1 ;
-(BOOL)hasUnblacklistingReason;
-(unsigned)networkFlags;
-(unsigned)blacklistedReason;
-(unsigned)blacklistedSubreason;
-(unsigned)blacklistedDuration;
-(unsigned)unblacklistingReason;
@end

