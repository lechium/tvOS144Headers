/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:36 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOVLBuild : PBCodable <NSCopying> {

	unsigned long long _identifier;
	unsigned _dataFormatVersion;
	unsigned _dataOutputVersion;
	unsigned _routingKey;
	struct {
		unsigned has_identifier : 1;
		unsigned has_dataFormatVersion : 1;
		unsigned has_dataOutputVersion : 1;
		unsigned has_routingKey : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasIdentifier; 
@property (assign,nonatomic) unsigned long long identifier; 
@property (assign,nonatomic) BOOL hasDataOutputVersion; 
@property (assign,nonatomic) unsigned dataOutputVersion; 
@property (assign,nonatomic) BOOL hasDataFormatVersion; 
@property (assign,nonatomic) unsigned dataFormatVersion; 
@property (assign,nonatomic) BOOL hasRoutingKey; 
@property (assign,nonatomic) unsigned routingKey; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)identifier;
-(void)setIdentifier:(unsigned long long)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)hasIdentifier;
-(void)setHasIdentifier:(BOOL)arg1 ;
-(void)setDataOutputVersion:(unsigned)arg1 ;
-(void)setDataFormatVersion:(unsigned)arg1 ;
-(void)setRoutingKey:(unsigned)arg1 ;
-(unsigned)dataOutputVersion;
-(void)setHasDataOutputVersion:(BOOL)arg1 ;
-(BOOL)hasDataOutputVersion;
-(unsigned)dataFormatVersion;
-(void)setHasDataFormatVersion:(BOOL)arg1 ;
-(BOOL)hasDataFormatVersion;
-(unsigned)routingKey;
-(void)setHasRoutingKey:(BOOL)arg1 ;
-(BOOL)hasRoutingKey;
@end

