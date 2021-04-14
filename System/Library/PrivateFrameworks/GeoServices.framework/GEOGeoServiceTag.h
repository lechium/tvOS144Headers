/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:44 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSString;

@interface GEOGeoServiceTag : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSString* _tag;
	int _serviceType;
	SCD_Struct_GE118 _flags;

}

@property (assign,nonatomic) BOOL hasServiceType; 
@property (assign,nonatomic) int serviceType; 
@property (nonatomic,retain) NSString * tag; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(id)defaultTag;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(int)serviceType;
-(void)setServiceType:(int)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)tag;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasServiceType:(BOOL)arg1 ;
-(BOOL)hasServiceType;
-(void)setTag:(NSString *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(id)serviceTypeAsString:(int)arg1 ;
-(int)StringAsServiceType:(id)arg1 ;
@end

