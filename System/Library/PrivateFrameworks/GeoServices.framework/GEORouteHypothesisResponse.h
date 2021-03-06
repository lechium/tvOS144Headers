/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:22 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, GEODirectionsResponse, GEOETAResponse;

@interface GEORouteHypothesisResponse : PBCodable <NSCopying> {

	PBDataReader* _reader;
	GEODirectionsResponse* _directionsResponse;
	GEOETAResponse* _etaResponse;
	double _updatedTimeStamp;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned has_updatedTimeStamp : 1;
		unsigned read_directionsResponse : 1;
		unsigned read_etaResponse : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasDirectionsResponse; 
@property (nonatomic,retain) GEODirectionsResponse * directionsResponse; 
@property (nonatomic,readonly) BOOL hasEtaResponse; 
@property (nonatomic,retain) GEOETAResponse * etaResponse; 
@property (assign,nonatomic) BOOL hasUpdatedTimeStamp; 
@property (assign,nonatomic) double updatedTimeStamp; 
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
-(GEODirectionsResponse *)directionsResponse;
-(GEOETAResponse *)etaResponse;
-(void)setDirectionsResponse:(GEODirectionsResponse *)arg1 ;
-(void)setEtaResponse:(GEOETAResponse *)arg1 ;
-(void)setUpdatedTimeStamp:(double)arg1 ;
-(BOOL)hasDirectionsResponse;
-(BOOL)hasEtaResponse;
-(double)updatedTimeStamp;
-(void)setHasUpdatedTimeStamp:(BOOL)arg1 ;
-(BOOL)hasUpdatedTimeStamp;
@end

