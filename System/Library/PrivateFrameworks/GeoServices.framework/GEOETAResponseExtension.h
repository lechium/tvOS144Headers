/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:42 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOETAServiceResponseSummary;

@interface GEOETAResponseExtension : PBCodable <NSCopying> {

	unsigned long long _debugServerLatencyMs;
	GEOETAServiceResponseSummary* _etaServiceSummary;
	SCD_Struct_GE118 _flags;

}

@property (nonatomic,readonly) BOOL hasEtaServiceSummary; 
@property (nonatomic,retain) GEOETAServiceResponseSummary * etaServiceSummary; 
@property (assign,nonatomic) BOOL hasDebugServerLatencyMs; 
@property (assign,nonatomic) unsigned long long debugServerLatencyMs; 
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
-(GEOETAServiceResponseSummary *)etaServiceSummary;
-(void)setEtaServiceSummary:(GEOETAServiceResponseSummary *)arg1 ;
-(void)setDebugServerLatencyMs:(unsigned long long)arg1 ;
-(BOOL)hasEtaServiceSummary;
-(unsigned long long)debugServerLatencyMs;
-(void)setHasDebugServerLatencyMs:(BOOL)arg1 ;
-(BOOL)hasDebugServerLatencyMs;
@end

