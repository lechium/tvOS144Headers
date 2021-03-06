/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:26 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, GEOMapItemStorage, GEOPlace;

@interface GEOURLItem : PBCodable <NSCopying> {

	PBDataReader* _reader;
	GEOMapItemStorage* _mapItemStorage;
	GEOPlace* _place;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	BOOL _currentLocation;
	struct {
		unsigned has_currentLocation : 1;
		unsigned read_mapItemStorage : 1;
		unsigned read_place : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasPlace; 
@property (nonatomic,retain) GEOPlace * place; 
@property (assign,nonatomic) BOOL hasCurrentLocation; 
@property (assign,nonatomic) BOOL currentLocation; 
@property (nonatomic,readonly) BOOL hasMapItemStorage; 
@property (nonatomic,retain) GEOMapItemStorage * mapItemStorage; 
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
-(void)setMapItem:(id)arg1 ;
-(id)mapItem;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)currentLocation;
-(BOOL)hasPlace;
-(GEOPlace *)place;
-(void)setCurrentLocation:(BOOL)arg1 ;
-(BOOL)hasMapItemStorage;
-(void)setPlace:(GEOPlace *)arg1 ;
-(GEOMapItemStorage *)mapItemStorage;
-(void)setMapItemStorage:(GEOMapItemStorage *)arg1 ;
-(void)setHasCurrentLocation:(BOOL)arg1 ;
-(BOOL)hasCurrentLocation;
@end

