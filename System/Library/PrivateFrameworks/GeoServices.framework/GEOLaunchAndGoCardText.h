/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:24 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOPlaceFormattedString, GEOFormattedString;

@interface GEOLaunchAndGoCardText : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOPlaceFormattedString* _body;
	GEOFormattedString* _cardTitle;
	GEOPlaceFormattedString* _commuteTitle;
	GEOFormattedString* _routeDescription;
	GEOFormattedString* _routeTitle;
	GEOPlaceFormattedString* _title;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_body : 1;
		unsigned read_cardTitle : 1;
		unsigned read_commuteTitle : 1;
		unsigned read_routeDescription : 1;
		unsigned read_routeTitle : 1;
		unsigned read_title : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasCardTitle; 
@property (nonatomic,retain) GEOFormattedString * cardTitle; 
@property (nonatomic,readonly) BOOL hasRouteTitle; 
@property (nonatomic,retain) GEOFormattedString * routeTitle; 
@property (nonatomic,readonly) BOOL hasRouteDescription; 
@property (nonatomic,retain) GEOFormattedString * routeDescription; 
@property (nonatomic,readonly) BOOL hasTitle; 
@property (nonatomic,retain) GEOPlaceFormattedString * title; 
@property (nonatomic,readonly) BOOL hasCommuteTitle; 
@property (nonatomic,retain) GEOPlaceFormattedString * commuteTitle; 
@property (nonatomic,readonly) BOOL hasBody; 
@property (nonatomic,retain) GEOPlaceFormattedString * body; 
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
-(GEOPlaceFormattedString *)title;
-(void)setTitle:(GEOPlaceFormattedString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setBody:(GEOPlaceFormattedString *)arg1 ;
-(GEOPlaceFormattedString *)body;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(BOOL)hasTitle;
-(GEOFormattedString *)routeDescription;
-(GEOFormattedString *)cardTitle;
-(GEOFormattedString *)routeTitle;
-(BOOL)hasBody;
-(GEOPlaceFormattedString *)commuteTitle;
-(void)setCardTitle:(GEOFormattedString *)arg1 ;
-(void)setRouteTitle:(GEOFormattedString *)arg1 ;
-(void)setRouteDescription:(GEOFormattedString *)arg1 ;
-(void)setCommuteTitle:(GEOPlaceFormattedString *)arg1 ;
-(BOOL)hasCardTitle;
-(BOOL)hasRouteTitle;
-(BOOL)hasRouteDescription;
-(BOOL)hasCommuteTitle;
@end

