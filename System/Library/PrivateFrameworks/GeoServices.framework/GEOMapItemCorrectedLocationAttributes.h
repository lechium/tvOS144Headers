/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:39 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString, GEOAddress, GEOLatLng;

@interface GEOMapItemCorrectedLocationAttributes : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSString* _correctedAddressSecondaryStreetLine;
	GEOAddress* _correctedAddress;
	GEOLatLng* _correctedCoordinate;
	NSString* _customLabel;
	double _lastUpdateDate;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	BOOL _hasSubmittedRAP;
	struct {
		unsigned has_lastUpdateDate : 1;
		unsigned has_hasSubmittedRAP : 1;
		unsigned read_unknownFields : 1;
		unsigned read_correctedAddressSecondaryStreetLine : 1;
		unsigned read_correctedAddress : 1;
		unsigned read_correctedCoordinate : 1;
		unsigned read_customLabel : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasCorrectedCoordinate; 
@property (nonatomic,retain) GEOLatLng * correctedCoordinate; 
@property (nonatomic,readonly) BOOL hasCorrectedAddress; 
@property (nonatomic,retain) GEOAddress * correctedAddress; 
@property (nonatomic,readonly) BOOL hasCorrectedAddressSecondaryStreetLine; 
@property (nonatomic,retain) NSString * correctedAddressSecondaryStreetLine; 
@property (nonatomic,readonly) BOOL hasCustomLabel; 
@property (nonatomic,retain) NSString * customLabel; 
@property (assign,nonatomic) BOOL hasLastUpdateDate; 
@property (assign,nonatomic) double lastUpdateDate; 
@property (assign,nonatomic) BOOL hasHasSubmittedRAP; 
@property (assign,nonatomic) BOOL hasSubmittedRAP; 
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
-(BOOL)hasCorrectedCoordinate;
-(GEOLatLng *)correctedCoordinate;
-(BOOL)hasCorrectedAddress;
-(GEOAddress *)correctedAddress;
-(void)setCorrectedCoordinate:(GEOLatLng *)arg1 ;
-(NSString *)correctedAddressSecondaryStreetLine;
-(NSString *)customLabel;
-(void)setCorrectedAddress:(GEOAddress *)arg1 ;
-(void)setCorrectedAddressSecondaryStreetLine:(NSString *)arg1 ;
-(void)setCustomLabel:(NSString *)arg1 ;
-(void)setLastUpdateDate:(double)arg1 ;
-(void)setHasSubmittedRAP:(BOOL)arg1 ;
-(BOOL)hasCorrectedAddressSecondaryStreetLine;
-(BOOL)hasCustomLabel;
-(double)lastUpdateDate;
-(void)setHasLastUpdateDate:(BOOL)arg1 ;
-(BOOL)hasLastUpdateDate;
-(BOOL)hasSubmittedRAP;
-(void)setHasHasSubmittedRAP:(BOOL)arg1 ;
-(BOOL)hasHasSubmittedRAP;
@end

