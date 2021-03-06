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

@class PBUnknownFields, NSMutableArray;

@interface GEOPDWifiFingerprintParameters : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSMutableArray* _measurements;
	unsigned _maxLabels;
	struct {
		unsigned has_maxLabels : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * measurements; 
@property (assign,nonatomic) BOOL hasMaxLabels; 
@property (assign,nonatomic) unsigned maxLabels; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)measurementType;
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
-(void)clearSensitiveFields;
-(void)addMeasurement:(id)arg1 ;
-(void)setMaxLabels:(unsigned)arg1 ;
-(NSMutableArray *)measurements;
-(unsigned long long)measurementsCount;
-(void)clearMeasurements;
-(id)measurementAtIndex:(unsigned long long)arg1 ;
-(void)setMeasurements:(NSMutableArray *)arg1 ;
-(unsigned)maxLabels;
-(void)setHasMaxLabels:(BOOL)arg1 ;
-(BOOL)hasMaxLabels;
@end

