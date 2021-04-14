/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:13 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, GEORPTimestamp, GEOLocation, NSMutableArray;

@interface GEORPUserLocationDetails : PBCodable <NSCopying> {

	PBDataReader* _reader;
	GEORPTimestamp* _currentTime;
	GEOLocation* _currentUserLocation;
	NSMutableArray* _deviceHistoricalLocations;
	GEOLocation* _lastKnownRoadLocation;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_currentTime : 1;
		unsigned read_currentUserLocation : 1;
		unsigned read_deviceHistoricalLocations : 1;
		unsigned read_lastKnownRoadLocation : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasCurrentTime; 
@property (nonatomic,retain) GEORPTimestamp * currentTime; 
@property (nonatomic,readonly) BOOL hasCurrentUserLocation; 
@property (nonatomic,retain) GEOLocation * currentUserLocation; 
@property (nonatomic,readonly) BOOL hasLastKnownRoadLocation; 
@property (nonatomic,retain) GEOLocation * lastKnownRoadLocation; 
@property (nonatomic,retain) NSMutableArray * deviceHistoricalLocations; 
+(BOOL)isValid:(id)arg1 ;
+(Class)deviceHistoricalLocationType;
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
-(GEORPTimestamp *)currentTime;
-(void)setCurrentTime:(GEORPTimestamp *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(unsigned long long)deviceHistoricalLocationsCount;
-(NSMutableArray *)deviceHistoricalLocations;
-(GEOLocation *)currentUserLocation;
-(GEOLocation *)lastKnownRoadLocation;
-(void)setCurrentUserLocation:(GEOLocation *)arg1 ;
-(void)setLastKnownRoadLocation:(GEOLocation *)arg1 ;
-(void)addDeviceHistoricalLocation:(id)arg1 ;
-(void)clearDeviceHistoricalLocations;
-(id)deviceHistoricalLocationAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasCurrentTime;
-(BOOL)hasCurrentUserLocation;
-(BOOL)hasLastKnownRoadLocation;
-(void)setDeviceHistoricalLocations:(NSMutableArray *)arg1 ;
@end

