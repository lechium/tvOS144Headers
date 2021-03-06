/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:25 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOLocation;

@interface GEORoutingPathPoint : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOLocation* _location;
	long long _roadId;
	unsigned _fow;
	unsigned _frc;
	int _type;
	struct {
		unsigned has_roadId : 1;
		unsigned has_fow : 1;
		unsigned has_frc : 1;
		unsigned has_type : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type; 
@property (assign,nonatomic) BOOL hasRoadId; 
@property (assign,nonatomic) long long roadId; 
@property (nonatomic,readonly) BOOL hasLocation; 
@property (nonatomic,retain) GEOLocation * location; 
@property (assign,nonatomic) BOOL hasFrc; 
@property (assign,nonatomic) unsigned frc; 
@property (assign,nonatomic) BOOL hasFow; 
@property (assign,nonatomic) unsigned fow; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(GEOLocation *)location;
-(void)setLocation:(GEOLocation *)arg1 ;
-(BOOL)hasLocation;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)clearSensitiveFields;
-(void)setRoadId:(long long)arg1 ;
-(void)setFrc:(unsigned)arg1 ;
-(void)setFow:(unsigned)arg1 ;
-(long long)roadId;
-(void)setHasRoadId:(BOOL)arg1 ;
-(BOOL)hasRoadId;
-(unsigned)frc;
-(void)setHasFrc:(BOOL)arg1 ;
-(BOOL)hasFrc;
-(unsigned)fow;
-(void)setHasFow:(BOOL)arg1 ;
-(BOOL)hasFow;
@end

