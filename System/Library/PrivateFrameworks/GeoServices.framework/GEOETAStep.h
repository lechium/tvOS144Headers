/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:49 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOStopStepEVInfo, GEOEVStateInfo, GEOTimeCheckpoints;

@interface GEOETAStep : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOStopStepEVInfo* _evInfo;
	GEOEVStateInfo* _evStateInfo;
	GEOTimeCheckpoints* _timeCheckpoints;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	float _distanceRemaining;
	unsigned _expectedTime;
	unsigned _stepID;
	unsigned _zilchPathIndex;
	int _zilchPointIndex;
	struct {
		unsigned has_distanceRemaining : 1;
		unsigned has_expectedTime : 1;
		unsigned has_stepID : 1;
		unsigned has_zilchPathIndex : 1;
		unsigned has_zilchPointIndex : 1;
		unsigned read_unknownFields : 1;
		unsigned read_evInfo : 1;
		unsigned read_evStateInfo : 1;
		unsigned read_timeCheckpoints : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasDistanceRemaining; 
@property (assign,nonatomic) float distanceRemaining; 
@property (assign,nonatomic) BOOL hasStepID; 
@property (assign,nonatomic) unsigned stepID; 
@property (assign,nonatomic) BOOL hasExpectedTime; 
@property (assign,nonatomic) unsigned expectedTime; 
@property (assign,nonatomic) BOOL hasZilchPointIndex; 
@property (assign,nonatomic) int zilchPointIndex; 
@property (nonatomic,readonly) BOOL hasTimeCheckpoints; 
@property (nonatomic,retain) GEOTimeCheckpoints * timeCheckpoints; 
@property (assign,nonatomic) BOOL hasZilchPathIndex; 
@property (assign,nonatomic) unsigned zilchPathIndex; 
@property (nonatomic,readonly) BOOL hasEvInfo; 
@property (nonatomic,retain) GEOStopStepEVInfo * evInfo; 
@property (nonatomic,readonly) BOOL hasEvStateInfo; 
@property (nonatomic,retain) GEOEVStateInfo * evStateInfo; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(GEOEVStateInfo *)evStateInfo;
-(GEOStopStepEVInfo *)evInfo;
-(unsigned)stepID;
-(void)setStepID:(unsigned)arg1 ;
-(BOOL)hasEvInfo;
-(unsigned)expectedTime;
-(BOOL)hasExpectedTime;
-(void)setEvInfo:(GEOStopStepEVInfo *)arg1 ;
-(void)setHasStepID:(BOOL)arg1 ;
-(BOOL)hasStepID;
-(void)setZilchPathIndex:(unsigned)arg1 ;
-(unsigned)zilchPathIndex;
-(void)setHasZilchPathIndex:(BOOL)arg1 ;
-(BOOL)hasZilchPathIndex;
-(void)setEvStateInfo:(GEOEVStateInfo *)arg1 ;
-(BOOL)hasEvStateInfo;
-(void)setExpectedTime:(unsigned)arg1 ;
-(void)setHasExpectedTime:(BOOL)arg1 ;
-(GEOTimeCheckpoints *)timeCheckpoints;
-(void)setTimeCheckpoints:(GEOTimeCheckpoints *)arg1 ;
-(BOOL)hasTimeCheckpoints;
-(void)setDistanceRemaining:(float)arg1 ;
-(void)setZilchPointIndex:(int)arg1 ;
-(float)distanceRemaining;
-(int)zilchPointIndex;
-(void)setHasZilchPointIndex:(BOOL)arg1 ;
-(BOOL)hasZilchPointIndex;
-(void)setHasDistanceRemaining:(BOOL)arg1 ;
-(BOOL)hasDistanceRemaining;
@end

