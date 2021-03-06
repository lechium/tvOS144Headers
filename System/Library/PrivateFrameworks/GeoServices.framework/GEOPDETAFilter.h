/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:29 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOAutomobileOptions, GEOClientCapabilities, GEOCyclingOptions, GEOTransitOptions, GEOWalkingOptions;

@interface GEOPDETAFilter : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE85* _transportTypes;
	GEOAutomobileOptions* _automobileOptions;
	GEOClientCapabilities* _clientCapabilities;
	GEOCyclingOptions* _cyclingOptions;
	GEOTransitOptions* _transitOptions;
	GEOWalkingOptions* _walkingOptions;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	BOOL _includeHistoricTravelTime;
	BOOL _includeRouteTrafficDetail;
	struct {
		unsigned has_includeHistoricTravelTime : 1;
		unsigned has_includeRouteTrafficDetail : 1;
		unsigned read_unknownFields : 1;
		unsigned read_transportTypes : 1;
		unsigned read_automobileOptions : 1;
		unsigned read_clientCapabilities : 1;
		unsigned read_cyclingOptions : 1;
		unsigned read_transitOptions : 1;
		unsigned read_walkingOptions : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) unsigned long long transportTypesCount; 
@property (nonatomic,readonly) int* transportTypes; 
@property (assign,nonatomic) BOOL hasIncludeHistoricTravelTime; 
@property (assign,nonatomic) BOOL includeHistoricTravelTime; 
@property (nonatomic,readonly) BOOL hasAutomobileOptions; 
@property (nonatomic,retain) GEOAutomobileOptions * automobileOptions; 
@property (nonatomic,readonly) BOOL hasCyclingOptions; 
@property (nonatomic,retain) GEOCyclingOptions * cyclingOptions; 
@property (nonatomic,readonly) BOOL hasTransitOptions; 
@property (nonatomic,retain) GEOTransitOptions * transitOptions; 
@property (nonatomic,readonly) BOOL hasWalkingOptions; 
@property (nonatomic,retain) GEOWalkingOptions * walkingOptions; 
@property (assign,nonatomic) BOOL hasIncludeRouteTrafficDetail; 
@property (assign,nonatomic) BOOL includeRouteTrafficDetail; 
@property (nonatomic,readonly) BOOL hasClientCapabilities; 
@property (nonatomic,retain) GEOClientCapabilities * clientCapabilities; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(id)_etaFilterWithTransportTypes:(int*)arg1 transportTypesCount:(unsigned long long)arg2 automobileOptions:(id)arg3 transitOptions:(id)arg4 walkingOptions:(id)arg5 cyclingOptions:(id)arg6 ;
+(id)etaFilterForTraits:(id)arg1 ;
+(id)etaFilterForRouteAttributes:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
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
-(GEOClientCapabilities *)clientCapabilities;
-(void)setClientCapabilities:(GEOClientCapabilities *)arg1 ;
-(BOOL)hasClientCapabilities;
-(GEOAutomobileOptions *)automobileOptions;
-(BOOL)hasAutomobileOptions;
-(BOOL)hasTransitOptions;
-(BOOL)hasWalkingOptions;
-(BOOL)hasCyclingOptions;
-(GEOCyclingOptions *)cyclingOptions;
-(unsigned long long)transportTypesCount;
-(void)setIncludeHistoricTravelTime:(BOOL)arg1 ;
-(BOOL)includeHistoricTravelTime;
-(void)setHasIncludeHistoricTravelTime:(BOOL)arg1 ;
-(BOOL)hasIncludeHistoricTravelTime;
-(GEOTransitOptions *)transitOptions;
-(GEOWalkingOptions *)walkingOptions;
-(void)setAutomobileOptions:(GEOAutomobileOptions *)arg1 ;
-(void)setCyclingOptions:(GEOCyclingOptions *)arg1 ;
-(void)setTransitOptions:(GEOTransitOptions *)arg1 ;
-(void)setWalkingOptions:(GEOWalkingOptions *)arg1 ;
-(int*)transportTypes;
-(void)setTransportTypes:(int*)arg1 count:(unsigned long long)arg2 ;
-(void)addTransportType:(int)arg1 ;
-(void)setIncludeRouteTrafficDetail:(BOOL)arg1 ;
-(void)clearTransportTypes;
-(int)transportTypeAtIndex:(unsigned long long)arg1 ;
-(id)transportTypesAsString:(int)arg1 ;
-(int)StringAsTransportTypes:(id)arg1 ;
-(BOOL)includeRouteTrafficDetail;
-(void)setHasIncludeRouteTrafficDetail:(BOOL)arg1 ;
-(BOOL)hasIncludeRouteTrafficDetail;
@end

