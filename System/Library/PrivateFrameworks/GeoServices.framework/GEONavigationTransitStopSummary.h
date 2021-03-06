/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:27 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOLatLng;

@interface GEONavigationTransitStopSummary : PBCodable <NSCopying> {

	GEOLatLng* _coordinate;
	unsigned long long _stopID;
	struct {
		unsigned has_stopID : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasStopID; 
@property (assign,nonatomic) unsigned long long stopID; 
@property (nonatomic,readonly) BOOL hasCoordinate; 
@property (nonatomic,retain) GEOLatLng * coordinate; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(GEOLatLng *)coordinate;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(void)setCoordinate:(GEOLatLng *)arg1 ;
-(BOOL)hasCoordinate;
-(void)setStopID:(unsigned long long)arg1 ;
-(unsigned long long)stopID;
-(void)setHasStopID:(BOOL)arg1 ;
-(BOOL)hasStopID;
-(id)initWithTransitStop:(id)arg1 ;
@end

