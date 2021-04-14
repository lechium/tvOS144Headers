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

@class PBUnknownFields;

@interface GEOPDSSearchTierMetadata : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	unsigned _endIndex;
	unsigned _startIndex;
	int _tierType;
	SCD_Struct_GE37 _flags;

}

@property (assign,nonatomic) BOOL hasTierType; 
@property (assign,nonatomic) int tierType; 
@property (assign,nonatomic) BOOL hasStartIndex; 
@property (assign,nonatomic) unsigned startIndex; 
@property (assign,nonatomic) BOOL hasEndIndex; 
@property (assign,nonatomic) unsigned endIndex; 
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
-(void)setEndIndex:(unsigned)arg1 ;
-(unsigned)endIndex;
-(void)setStartIndex:(unsigned)arg1 ;
-(unsigned)startIndex;
-(void)setHasStartIndex:(BOOL)arg1 ;
-(BOOL)hasStartIndex;
-(void)setHasEndIndex:(BOOL)arg1 ;
-(BOOL)hasEndIndex;
-(void)setTierType:(int)arg1 ;
-(int)tierType;
-(void)setHasTierType:(BOOL)arg1 ;
-(BOOL)hasTierType;
-(id)tierTypeAsString:(int)arg1 ;
-(int)StringAsTierType:(id)arg1 ;
@end
