/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:17 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOLatLng;

@interface GEOPDSearchZeroKeywordCategorySuggestionParameters : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	double _requestLocalTimestamp;
	GEOLatLng* _significantLocation;
	unsigned _maxNumCategoriesPerEntry;
	int _userPreferredTransportType;
	BOOL _shouldMatchNoQueryStateSuggestions;
	struct {
		unsigned has_requestLocalTimestamp : 1;
		unsigned has_maxNumCategoriesPerEntry : 1;
		unsigned has_userPreferredTransportType : 1;
		unsigned has_shouldMatchNoQueryStateSuggestions : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasRequestLocalTimestamp; 
@property (assign,nonatomic) double requestLocalTimestamp; 
@property (nonatomic,readonly) BOOL hasSignificantLocation; 
@property (nonatomic,retain) GEOLatLng * significantLocation; 
@property (assign,nonatomic) BOOL hasMaxNumCategoriesPerEntry; 
@property (assign,nonatomic) unsigned maxNumCategoriesPerEntry; 
@property (assign,nonatomic) BOOL hasUserPreferredTransportType; 
@property (assign,nonatomic) int userPreferredTransportType; 
@property (assign,nonatomic) BOOL hasShouldMatchNoQueryStateSuggestions; 
@property (assign,nonatomic) BOOL shouldMatchNoQueryStateSuggestions; 
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
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)setRequestLocalTimestamp:(double)arg1 ;
-(double)requestLocalTimestamp;
-(void)setHasRequestLocalTimestamp:(BOOL)arg1 ;
-(BOOL)hasRequestLocalTimestamp;
-(GEOLatLng *)significantLocation;
-(void)setSignificantLocation:(GEOLatLng *)arg1 ;
-(void)setMaxNumCategoriesPerEntry:(unsigned)arg1 ;
-(void)setUserPreferredTransportType:(int)arg1 ;
-(void)setShouldMatchNoQueryStateSuggestions:(BOOL)arg1 ;
-(BOOL)hasSignificantLocation;
-(unsigned)maxNumCategoriesPerEntry;
-(void)setHasMaxNumCategoriesPerEntry:(BOOL)arg1 ;
-(BOOL)hasMaxNumCategoriesPerEntry;
-(int)userPreferredTransportType;
-(void)setHasUserPreferredTransportType:(BOOL)arg1 ;
-(BOOL)hasUserPreferredTransportType;
-(id)userPreferredTransportTypeAsString:(int)arg1 ;
-(int)StringAsUserPreferredTransportType:(id)arg1 ;
-(BOOL)shouldMatchNoQueryStateSuggestions;
-(void)setHasShouldMatchNoQueryStateSuggestions:(BOOL)arg1 ;
-(BOOL)hasShouldMatchNoQueryStateSuggestions;
@end
