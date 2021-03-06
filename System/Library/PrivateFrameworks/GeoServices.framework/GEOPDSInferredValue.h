/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:18 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOPDSRawAttribute;

@interface GEOPDSInferredValue : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOPDSRawAttribute* _attribute;
	int _priceRange;
	int _tradingHours;
	BOOL _negateInferredValue;
	SCD_Struct_GE37 _flags;

}

@property (assign,nonatomic) BOOL hasPriceRange; 
@property (assign,nonatomic) int priceRange; 
@property (assign,nonatomic) BOOL hasTradingHours; 
@property (assign,nonatomic) int tradingHours; 
@property (nonatomic,readonly) BOOL hasAttribute; 
@property (nonatomic,retain) GEOPDSRawAttribute * attribute; 
@property (assign,nonatomic) BOOL hasNegateInferredValue; 
@property (assign,nonatomic) BOOL negateInferredValue; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(GEOPDSRawAttribute *)attribute;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)setPriceRange:(int)arg1 ;
-(void)setTradingHours:(int)arg1 ;
-(void)setAttribute:(GEOPDSRawAttribute *)arg1 ;
-(void)setNegateInferredValue:(BOOL)arg1 ;
-(int)priceRange;
-(void)setHasPriceRange:(BOOL)arg1 ;
-(BOOL)hasPriceRange;
-(id)priceRangeAsString:(int)arg1 ;
-(int)StringAsPriceRange:(id)arg1 ;
-(int)tradingHours;
-(void)setHasTradingHours:(BOOL)arg1 ;
-(BOOL)hasTradingHours;
-(id)tradingHoursAsString:(int)arg1 ;
-(int)StringAsTradingHours:(id)arg1 ;
-(BOOL)hasAttribute;
-(BOOL)negateInferredValue;
-(void)setHasNegateInferredValue:(BOOL)arg1 ;
-(BOOL)hasNegateInferredValue;
@end

