/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:50 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSMutableArray;

@interface GEOLogMsgEventHardStop : PBCodable <NSCopying> {

	PBDataReader* _reader;
	SCD_Struct_GE17* _digits;
	NSMutableArray* _cities;
	double _score;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned has_score : 1;
		unsigned read_digits : 1;
		unsigned read_cities : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) unsigned long long digitsCount; 
@property (nonatomic,readonly) unsigned* digits; 
@property (nonatomic,retain) NSMutableArray * cities; 
@property (assign,nonatomic) BOOL hasScore; 
@property (assign,nonatomic) double score; 
+(BOOL)isValid:(id)arg1 ;
+(Class)citiesType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(double)score;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned*)digits;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setScore:(double)arg1 ;
-(void)setHasScore:(BOOL)arg1 ;
-(BOOL)hasScore;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(void)addDigits:(unsigned)arg1 ;
-(NSMutableArray *)cities;
-(void)setCities:(NSMutableArray *)arg1 ;
-(void)addCities:(id)arg1 ;
-(unsigned long long)digitsCount;
-(void)clearDigits;
-(unsigned)digitsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)citiesCount;
-(void)clearCities;
-(id)citiesAtIndex:(unsigned long long)arg1 ;
-(void)setDigits:(unsigned*)arg1 count:(unsigned long long)arg2 ;
@end

