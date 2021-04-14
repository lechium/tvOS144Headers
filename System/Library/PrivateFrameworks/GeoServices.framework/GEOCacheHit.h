/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:49 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOCacheHit : PBCodable <NSCopying> {

	unsigned _bytes;
	unsigned _count;
	int _requestorType;
	int _tileSourceType;
	struct {
		unsigned has_bytes : 1;
		unsigned has_count : 1;
		unsigned has_requestorType : 1;
		unsigned has_tileSourceType : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasRequestorType; 
@property (assign,nonatomic) int requestorType; 
@property (assign,nonatomic) BOOL hasTileSourceType; 
@property (assign,nonatomic) int tileSourceType; 
@property (assign,nonatomic) BOOL hasCount; 
@property (assign,nonatomic) unsigned count; 
@property (assign,nonatomic) BOOL hasBytes; 
@property (assign,nonatomic) unsigned bytes; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(unsigned)bytes;
-(unsigned)count;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setCount:(unsigned)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasCount:(BOOL)arg1 ;
-(BOOL)hasCount;
-(void)setBytes:(unsigned)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(void)setRequestorType:(int)arg1 ;
-(void)setTileSourceType:(int)arg1 ;
-(int)requestorType;
-(void)setHasRequestorType:(BOOL)arg1 ;
-(BOOL)hasRequestorType;
-(id)requestorTypeAsString:(int)arg1 ;
-(int)StringAsRequestorType:(id)arg1 ;
-(int)tileSourceType;
-(void)setHasTileSourceType:(BOOL)arg1 ;
-(BOOL)hasTileSourceType;
-(id)tileSourceTypeAsString:(int)arg1 ;
-(int)StringAsTileSourceType:(id)arg1 ;
-(void)setHasBytes:(BOOL)arg1 ;
-(BOOL)hasBytes;
@end

