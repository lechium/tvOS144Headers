/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:42 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /usr/lib/libAWDSupportFramework.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDWiFiMetricActiveProbeStats : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _avgRTTLargePktSize;
	unsigned _avgRTTMediumPktSize;
	unsigned _avgRTTSmallPktSize;
	unsigned _maxRTTLargePktSize;
	unsigned _maxRTTMediumPktSize;
	unsigned _maxRTTSmallPktSize;
	unsigned _minRTTLargePktSize;
	unsigned _minRTTMediumPktSize;
	unsigned _minRTTSmallPktSize;
	unsigned _perLargePktSize;
	unsigned _perMediumPktSize;
	unsigned _perSmallPktSize;
	SCD_Struct_AW7 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasMinRTTSmallPktSize; 
@property (assign,nonatomic) unsigned minRTTSmallPktSize;               //@synthesize minRTTSmallPktSize=_minRTTSmallPktSize - In the implementation block
@property (assign,nonatomic) BOOL hasMaxRTTSmallPktSize; 
@property (assign,nonatomic) unsigned maxRTTSmallPktSize;               //@synthesize maxRTTSmallPktSize=_maxRTTSmallPktSize - In the implementation block
@property (assign,nonatomic) BOOL hasAvgRTTSmallPktSize; 
@property (assign,nonatomic) unsigned avgRTTSmallPktSize;               //@synthesize avgRTTSmallPktSize=_avgRTTSmallPktSize - In the implementation block
@property (assign,nonatomic) BOOL hasPerSmallPktSize; 
@property (assign,nonatomic) unsigned perSmallPktSize;                  //@synthesize perSmallPktSize=_perSmallPktSize - In the implementation block
@property (assign,nonatomic) BOOL hasMinRTTMediumPktSize; 
@property (assign,nonatomic) unsigned minRTTMediumPktSize;              //@synthesize minRTTMediumPktSize=_minRTTMediumPktSize - In the implementation block
@property (assign,nonatomic) BOOL hasMaxRTTMediumPktSize; 
@property (assign,nonatomic) unsigned maxRTTMediumPktSize;              //@synthesize maxRTTMediumPktSize=_maxRTTMediumPktSize - In the implementation block
@property (assign,nonatomic) BOOL hasAvgRTTMediumPktSize; 
@property (assign,nonatomic) unsigned avgRTTMediumPktSize;              //@synthesize avgRTTMediumPktSize=_avgRTTMediumPktSize - In the implementation block
@property (assign,nonatomic) BOOL hasPerMediumPktSize; 
@property (assign,nonatomic) unsigned perMediumPktSize;                 //@synthesize perMediumPktSize=_perMediumPktSize - In the implementation block
@property (assign,nonatomic) BOOL hasMinRTTLargePktSize; 
@property (assign,nonatomic) unsigned minRTTLargePktSize;               //@synthesize minRTTLargePktSize=_minRTTLargePktSize - In the implementation block
@property (assign,nonatomic) BOOL hasMaxRTTLargePktSize; 
@property (assign,nonatomic) unsigned maxRTTLargePktSize;               //@synthesize maxRTTLargePktSize=_maxRTTLargePktSize - In the implementation block
@property (assign,nonatomic) BOOL hasAvgRTTLargePktSize; 
@property (assign,nonatomic) unsigned avgRTTLargePktSize;               //@synthesize avgRTTLargePktSize=_avgRTTLargePktSize - In the implementation block
@property (assign,nonatomic) BOOL hasPerLargePktSize; 
@property (assign,nonatomic) unsigned perLargePktSize;                  //@synthesize perLargePktSize=_perLargePktSize - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setMinRTTSmallPktSize:(unsigned)arg1 ;
-(void)setHasMinRTTSmallPktSize:(BOOL)arg1 ;
-(BOOL)hasMinRTTSmallPktSize;
-(void)setMaxRTTSmallPktSize:(unsigned)arg1 ;
-(void)setHasMaxRTTSmallPktSize:(BOOL)arg1 ;
-(BOOL)hasMaxRTTSmallPktSize;
-(void)setAvgRTTSmallPktSize:(unsigned)arg1 ;
-(void)setHasAvgRTTSmallPktSize:(BOOL)arg1 ;
-(BOOL)hasAvgRTTSmallPktSize;
-(void)setPerSmallPktSize:(unsigned)arg1 ;
-(void)setHasPerSmallPktSize:(BOOL)arg1 ;
-(BOOL)hasPerSmallPktSize;
-(void)setMinRTTMediumPktSize:(unsigned)arg1 ;
-(void)setHasMinRTTMediumPktSize:(BOOL)arg1 ;
-(BOOL)hasMinRTTMediumPktSize;
-(void)setMaxRTTMediumPktSize:(unsigned)arg1 ;
-(void)setHasMaxRTTMediumPktSize:(BOOL)arg1 ;
-(BOOL)hasMaxRTTMediumPktSize;
-(void)setAvgRTTMediumPktSize:(unsigned)arg1 ;
-(void)setHasAvgRTTMediumPktSize:(BOOL)arg1 ;
-(BOOL)hasAvgRTTMediumPktSize;
-(void)setPerMediumPktSize:(unsigned)arg1 ;
-(void)setHasPerMediumPktSize:(BOOL)arg1 ;
-(BOOL)hasPerMediumPktSize;
-(void)setMinRTTLargePktSize:(unsigned)arg1 ;
-(void)setHasMinRTTLargePktSize:(BOOL)arg1 ;
-(BOOL)hasMinRTTLargePktSize;
-(void)setMaxRTTLargePktSize:(unsigned)arg1 ;
-(void)setHasMaxRTTLargePktSize:(BOOL)arg1 ;
-(BOOL)hasMaxRTTLargePktSize;
-(void)setAvgRTTLargePktSize:(unsigned)arg1 ;
-(void)setHasAvgRTTLargePktSize:(BOOL)arg1 ;
-(BOOL)hasAvgRTTLargePktSize;
-(void)setPerLargePktSize:(unsigned)arg1 ;
-(void)setHasPerLargePktSize:(BOOL)arg1 ;
-(BOOL)hasPerLargePktSize;
-(unsigned)minRTTSmallPktSize;
-(unsigned)maxRTTSmallPktSize;
-(unsigned)avgRTTSmallPktSize;
-(unsigned)perSmallPktSize;
-(unsigned)minRTTMediumPktSize;
-(unsigned)maxRTTMediumPktSize;
-(unsigned)avgRTTMediumPktSize;
-(unsigned)perMediumPktSize;
-(unsigned)minRTTLargePktSize;
-(unsigned)maxRTTLargePktSize;
-(unsigned)avgRTTLargePktSize;
-(unsigned)perLargePktSize;
@end

