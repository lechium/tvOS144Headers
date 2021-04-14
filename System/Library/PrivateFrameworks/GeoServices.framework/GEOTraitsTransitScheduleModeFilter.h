/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:40 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOTraitsTransitScheduleTimeRange;

@interface GEOTraitsTransitScheduleModeFilter : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOTraitsTransitScheduleTimeRange* _timeRange;
	unsigned _numAdditionalDepartures;
	SCD_Struct_GE118 _flags;

}

@property (nonatomic,readonly) BOOL hasTimeRange; 
@property (nonatomic,retain) GEOTraitsTransitScheduleTimeRange * timeRange; 
@property (assign,nonatomic) BOOL hasNumAdditionalDepartures; 
@property (assign,nonatomic) unsigned numAdditionalDepartures; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setTimeRange:(GEOTraitsTransitScheduleTimeRange *)arg1 ;
-(GEOTraitsTransitScheduleTimeRange *)timeRange;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(BOOL)hasTimeRange;
-(BOOL)hasNumAdditionalDepartures;
-(void)setNumAdditionalDepartures:(unsigned)arg1 ;
-(void)configureWithDefaultStartTime:(double)arg1 duration:(double)arg2 numAdditionalDepartures:(unsigned)arg3 ;
-(unsigned)numAdditionalDepartures;
-(void)setHasNumAdditionalDepartures:(BOOL)arg1 ;
@end

