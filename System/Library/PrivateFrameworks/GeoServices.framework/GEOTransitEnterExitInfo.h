/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:13 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOTransitEnterExitInfo : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	unsigned _accessPointIndex;
	unsigned _stopIndex;
	unsigned _transferTime;
	BOOL _displayStop;
	BOOL _uncertainArrival;
	struct {
		unsigned has_accessPointIndex : 1;
		unsigned has_stopIndex : 1;
		unsigned has_transferTime : 1;
		unsigned has_displayStop : 1;
		unsigned has_uncertainArrival : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasAccessPointIndex; 
@property (assign,nonatomic) unsigned accessPointIndex; 
@property (assign,nonatomic) BOOL hasStopIndex; 
@property (assign,nonatomic) unsigned stopIndex; 
@property (assign,nonatomic) BOOL hasDisplayStop; 
@property (assign,nonatomic) BOOL displayStop; 
@property (assign,nonatomic) BOOL hasTransferTime; 
@property (assign,nonatomic) unsigned transferTime; 
@property (assign,nonatomic) BOOL hasUncertainArrival; 
@property (assign,nonatomic) BOOL uncertainArrival; 
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
-(void)setAccessPointIndex:(unsigned)arg1 ;
-(void)setStopIndex:(unsigned)arg1 ;
-(void)setDisplayStop:(BOOL)arg1 ;
-(void)setTransferTime:(unsigned)arg1 ;
-(void)setUncertainArrival:(BOOL)arg1 ;
-(unsigned)accessPointIndex;
-(void)setHasAccessPointIndex:(BOOL)arg1 ;
-(BOOL)hasAccessPointIndex;
-(unsigned)stopIndex;
-(void)setHasStopIndex:(BOOL)arg1 ;
-(BOOL)hasStopIndex;
-(BOOL)displayStop;
-(void)setHasDisplayStop:(BOOL)arg1 ;
-(BOOL)hasDisplayStop;
-(unsigned)transferTime;
-(void)setHasTransferTime:(BOOL)arg1 ;
-(BOOL)hasTransferTime;
-(BOOL)uncertainArrival;
-(void)setHasUncertainArrival:(BOOL)arg1 ;
-(BOOL)hasUncertainArrival;
@end

