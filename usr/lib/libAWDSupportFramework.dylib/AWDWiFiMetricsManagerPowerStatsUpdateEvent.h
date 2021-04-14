/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:43 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /usr/lib/libAWDSupportFramework.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDWiFiMetricsManagerPowerStatsUpdateEvent : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _associatedSleepDur;
	unsigned _roamDur;
	unsigned _totalDur;
	unsigned _type;
	unsigned _unassociatedSleepDur;
	SCD_Struct_AW10 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;               //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) unsigned type;                              //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL hasUnassociatedSleepDur; 
@property (assign,nonatomic) unsigned unassociatedSleepDur;              //@synthesize unassociatedSleepDur=_unassociatedSleepDur - In the implementation block
@property (assign,nonatomic) BOOL hasAssociatedSleepDur; 
@property (assign,nonatomic) unsigned associatedSleepDur;                //@synthesize associatedSleepDur=_associatedSleepDur - In the implementation block
@property (assign,nonatomic) BOOL hasRoamDur; 
@property (assign,nonatomic) unsigned roamDur;                           //@synthesize roamDur=_roamDur - In the implementation block
@property (assign,nonatomic) BOOL hasTotalDur; 
@property (assign,nonatomic) unsigned totalDur;                          //@synthesize totalDur=_totalDur - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)setType:(unsigned)arg1 ;
-(unsigned)type;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(void)setUnassociatedSleepDur:(unsigned)arg1 ;
-(void)setHasUnassociatedSleepDur:(BOOL)arg1 ;
-(BOOL)hasUnassociatedSleepDur;
-(void)setAssociatedSleepDur:(unsigned)arg1 ;
-(void)setHasAssociatedSleepDur:(BOOL)arg1 ;
-(BOOL)hasAssociatedSleepDur;
-(void)setRoamDur:(unsigned)arg1 ;
-(void)setHasRoamDur:(BOOL)arg1 ;
-(BOOL)hasRoamDur;
-(void)setTotalDur:(unsigned)arg1 ;
-(void)setHasTotalDur:(BOOL)arg1 ;
-(BOOL)hasTotalDur;
-(unsigned)unassociatedSleepDur;
-(unsigned)associatedSleepDur;
-(unsigned)roamDur;
-(unsigned)totalDur;
@end

