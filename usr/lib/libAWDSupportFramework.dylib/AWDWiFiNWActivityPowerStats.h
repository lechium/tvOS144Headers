/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:44 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /usr/lib/libAWDSupportFramework.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDWiFiNWActivityPowerStats : PBCodable <NSCopying> {

	unsigned long long _kRadioPhyReportRxDur;
	unsigned long long _kRadioPhyReportTxDur;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) BOOL hasKRadioPhyReportTxDur; 
@property (assign,nonatomic) unsigned long long kRadioPhyReportTxDur;              //@synthesize kRadioPhyReportTxDur=_kRadioPhyReportTxDur - In the implementation block
@property (assign,nonatomic) BOOL hasKRadioPhyReportRxDur; 
@property (assign,nonatomic) unsigned long long kRadioPhyReportRxDur;              //@synthesize kRadioPhyReportRxDur=_kRadioPhyReportRxDur - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setKRadioPhyReportTxDur:(unsigned long long)arg1 ;
-(void)setHasKRadioPhyReportTxDur:(BOOL)arg1 ;
-(BOOL)hasKRadioPhyReportTxDur;
-(void)setKRadioPhyReportRxDur:(unsigned long long)arg1 ;
-(void)setHasKRadioPhyReportRxDur:(BOOL)arg1 ;
-(BOOL)hasKRadioPhyReportRxDur;
-(unsigned long long)kRadioPhyReportTxDur;
-(unsigned long long)kRadioPhyReportRxDur;
@end

