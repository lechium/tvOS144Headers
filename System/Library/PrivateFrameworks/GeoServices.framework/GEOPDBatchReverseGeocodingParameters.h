/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:16 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray;

@interface GEOPDBatchReverseGeocodingParameters : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE85* _additionalPlaceTypes;
	NSMutableArray* _assetLocations;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_additionalPlaceTypes : 1;
		unsigned read_assetLocations : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * assetLocations; 
@property (nonatomic,readonly) unsigned long long additionalPlaceTypesCount; 
@property (nonatomic,readonly) int* additionalPlaceTypes; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)assetLocationType;
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
-(void)clearSensitiveFields;
-(void)addAssetLocation:(id)arg1 ;
-(void)addAdditionalPlaceType:(int)arg1 ;
-(NSMutableArray *)assetLocations;
-(unsigned long long)assetLocationsCount;
-(void)clearAssetLocations;
-(id)assetLocationAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)additionalPlaceTypesCount;
-(void)clearAdditionalPlaceTypes;
-(int)additionalPlaceTypeAtIndex:(unsigned long long)arg1 ;
-(void)setAssetLocations:(NSMutableArray *)arg1 ;
-(int*)additionalPlaceTypes;
-(void)setAdditionalPlaceTypes:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)additionalPlaceTypesAsString:(int)arg1 ;
-(int)StringAsAdditionalPlaceTypes:(id)arg1 ;
@end

