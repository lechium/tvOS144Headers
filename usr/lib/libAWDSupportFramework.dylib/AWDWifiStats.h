/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:45 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /usr/lib/libAWDSupportFramework.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDWifiStats : PBCodable <NSCopying> {

	unsigned long long _rxbytes;
	unsigned long long _txbytes;
	unsigned _averageCCA;
	unsigned _avgJitterRx;
	unsigned _avgLatencyTx;
	unsigned _avgRetx;
	int _avgRssi;
	unsigned _avgTimeBackoff;
	unsigned _dataTransferRateMpbs;
	unsigned _effectiveDataTransferRateMpbs;
	unsigned _effectiveLinkRateMpbs;
	unsigned _linkRateMbps;
	unsigned _phyType;
	unsigned _powerSaveDur;
	SCD_Struct_AW22 _has;

}

@property (assign,nonatomic) BOOL hasPhyType; 
@property (assign,nonatomic) unsigned phyType;                                    //@synthesize phyType=_phyType - In the implementation block
@property (assign,nonatomic) BOOL hasTxbytes; 
@property (assign,nonatomic) unsigned long long txbytes;                          //@synthesize txbytes=_txbytes - In the implementation block
@property (assign,nonatomic) BOOL hasRxbytes; 
@property (assign,nonatomic) unsigned long long rxbytes;                          //@synthesize rxbytes=_rxbytes - In the implementation block
@property (assign,nonatomic) BOOL hasAvgLatencyTx; 
@property (assign,nonatomic) unsigned avgLatencyTx;                               //@synthesize avgLatencyTx=_avgLatencyTx - In the implementation block
@property (assign,nonatomic) BOOL hasAvgJitterRx; 
@property (assign,nonatomic) unsigned avgJitterRx;                                //@synthesize avgJitterRx=_avgJitterRx - In the implementation block
@property (assign,nonatomic) BOOL hasAvgRssi; 
@property (assign,nonatomic) int avgRssi;                                         //@synthesize avgRssi=_avgRssi - In the implementation block
@property (assign,nonatomic) BOOL hasAvgRetx; 
@property (assign,nonatomic) unsigned avgRetx;                                    //@synthesize avgRetx=_avgRetx - In the implementation block
@property (assign,nonatomic) BOOL hasAvgTimeBackoff; 
@property (assign,nonatomic) unsigned avgTimeBackoff;                             //@synthesize avgTimeBackoff=_avgTimeBackoff - In the implementation block
@property (assign,nonatomic) BOOL hasPowerSaveDur; 
@property (assign,nonatomic) unsigned powerSaveDur;                               //@synthesize powerSaveDur=_powerSaveDur - In the implementation block
@property (assign,nonatomic) BOOL hasLinkRateMbps; 
@property (assign,nonatomic) unsigned linkRateMbps;                               //@synthesize linkRateMbps=_linkRateMbps - In the implementation block
@property (assign,nonatomic) BOOL hasEffectiveLinkRateMpbs; 
@property (assign,nonatomic) unsigned effectiveLinkRateMpbs;                      //@synthesize effectiveLinkRateMpbs=_effectiveLinkRateMpbs - In the implementation block
@property (assign,nonatomic) BOOL hasDataTransferRateMpbs; 
@property (assign,nonatomic) unsigned dataTransferRateMpbs;                       //@synthesize dataTransferRateMpbs=_dataTransferRateMpbs - In the implementation block
@property (assign,nonatomic) BOOL hasEffectiveDataTransferRateMpbs; 
@property (assign,nonatomic) unsigned effectiveDataTransferRateMpbs;              //@synthesize effectiveDataTransferRateMpbs=_effectiveDataTransferRateMpbs - In the implementation block
@property (assign,nonatomic) BOOL hasAverageCCA; 
@property (assign,nonatomic) unsigned averageCCA;                                 //@synthesize averageCCA=_averageCCA - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setLinkRateMbps:(unsigned)arg1 ;
-(void)setHasLinkRateMbps:(BOOL)arg1 ;
-(BOOL)hasLinkRateMbps;
-(void)setEffectiveLinkRateMpbs:(unsigned)arg1 ;
-(void)setHasEffectiveLinkRateMpbs:(BOOL)arg1 ;
-(BOOL)hasEffectiveLinkRateMpbs;
-(void)setDataTransferRateMpbs:(unsigned)arg1 ;
-(void)setHasDataTransferRateMpbs:(BOOL)arg1 ;
-(BOOL)hasDataTransferRateMpbs;
-(void)setEffectiveDataTransferRateMpbs:(unsigned)arg1 ;
-(void)setHasEffectiveDataTransferRateMpbs:(BOOL)arg1 ;
-(BOOL)hasEffectiveDataTransferRateMpbs;
-(unsigned)linkRateMbps;
-(unsigned)effectiveLinkRateMpbs;
-(unsigned)dataTransferRateMpbs;
-(unsigned)effectiveDataTransferRateMpbs;
-(void)setAvgRssi:(int)arg1 ;
-(void)setHasAvgRssi:(BOOL)arg1 ;
-(BOOL)hasAvgRssi;
-(int)avgRssi;
-(void)setPhyType:(unsigned)arg1 ;
-(void)setHasPhyType:(BOOL)arg1 ;
-(BOOL)hasPhyType;
-(void)setTxbytes:(unsigned long long)arg1 ;
-(void)setHasTxbytes:(BOOL)arg1 ;
-(BOOL)hasTxbytes;
-(void)setRxbytes:(unsigned long long)arg1 ;
-(void)setHasRxbytes:(BOOL)arg1 ;
-(BOOL)hasRxbytes;
-(void)setAvgLatencyTx:(unsigned)arg1 ;
-(void)setHasAvgLatencyTx:(BOOL)arg1 ;
-(BOOL)hasAvgLatencyTx;
-(void)setAvgJitterRx:(unsigned)arg1 ;
-(void)setHasAvgJitterRx:(BOOL)arg1 ;
-(BOOL)hasAvgJitterRx;
-(void)setAvgRetx:(unsigned)arg1 ;
-(void)setHasAvgRetx:(BOOL)arg1 ;
-(BOOL)hasAvgRetx;
-(void)setAvgTimeBackoff:(unsigned)arg1 ;
-(void)setHasAvgTimeBackoff:(BOOL)arg1 ;
-(BOOL)hasAvgTimeBackoff;
-(void)setPowerSaveDur:(unsigned)arg1 ;
-(void)setHasPowerSaveDur:(BOOL)arg1 ;
-(BOOL)hasPowerSaveDur;
-(void)setAverageCCA:(unsigned)arg1 ;
-(void)setHasAverageCCA:(BOOL)arg1 ;
-(BOOL)hasAverageCCA;
-(unsigned)phyType;
-(unsigned long long)txbytes;
-(unsigned long long)rxbytes;
-(unsigned)avgLatencyTx;
-(unsigned)avgJitterRx;
-(unsigned)avgRetx;
-(unsigned)avgTimeBackoff;
-(unsigned)powerSaveDur;
-(unsigned)averageCCA;
@end

