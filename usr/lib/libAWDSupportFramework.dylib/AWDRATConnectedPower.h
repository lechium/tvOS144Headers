/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:38 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /usr/lib/libAWDSupportFramework.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDRATConnectedPower : PBCodable <NSCopying> {

	unsigned _powerConnSetupMicroWatt;
	unsigned _powerConnectedMicroWatt;
	int _rAT;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasRAT; 
@property (assign,nonatomic) int rAT;                                       //@synthesize rAT=_rAT - In the implementation block
@property (assign,nonatomic) BOOL hasPowerConnectedMicroWatt; 
@property (assign,nonatomic) unsigned powerConnectedMicroWatt;              //@synthesize powerConnectedMicroWatt=_powerConnectedMicroWatt - In the implementation block
@property (assign,nonatomic) BOOL hasPowerConnSetupMicroWatt; 
@property (assign,nonatomic) unsigned powerConnSetupMicroWatt;              //@synthesize powerConnSetupMicroWatt=_powerConnSetupMicroWatt - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)rAT;
-(void)setRAT:(int)arg1 ;
-(void)setHasRAT:(BOOL)arg1 ;
-(BOOL)hasRAT;
-(id)rATAsString:(int)arg1 ;
-(int)StringAsRAT:(id)arg1 ;
-(void)setPowerConnectedMicroWatt:(unsigned)arg1 ;
-(void)setHasPowerConnectedMicroWatt:(BOOL)arg1 ;
-(BOOL)hasPowerConnectedMicroWatt;
-(void)setPowerConnSetupMicroWatt:(unsigned)arg1 ;
-(void)setHasPowerConnSetupMicroWatt:(BOOL)arg1 ;
-(BOOL)hasPowerConnSetupMicroWatt;
-(unsigned)powerConnectedMicroWatt;
-(unsigned)powerConnSetupMicroWatt;
@end

