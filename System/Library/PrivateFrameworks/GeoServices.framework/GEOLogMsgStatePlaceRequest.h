/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:51 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOPDPlaceRequest;

@interface GEOLogMsgStatePlaceRequest : PBCodable <NSCopying> {

	GEOPDPlaceRequest* _placeDataRequest;
	int _placeRequestType;
	SCD_Struct_GE118 _flags;

}

@property (assign,nonatomic) BOOL hasPlaceRequestType; 
@property (assign,nonatomic) int placeRequestType; 
@property (nonatomic,readonly) BOOL hasPlaceDataRequest; 
@property (nonatomic,retain) GEOPDPlaceRequest * placeDataRequest; 
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
-(void)setPlaceRequestType:(int)arg1 ;
-(int)placeRequestType;
-(void)setHasPlaceRequestType:(BOOL)arg1 ;
-(BOOL)hasPlaceRequestType;
-(id)placeRequestTypeAsString:(int)arg1 ;
-(int)StringAsPlaceRequestType:(id)arg1 ;
-(GEOPDPlaceRequest *)placeDataRequest;
-(void)setPlaceDataRequest:(GEOPDPlaceRequest *)arg1 ;
-(BOOL)hasPlaceDataRequest;
@end

