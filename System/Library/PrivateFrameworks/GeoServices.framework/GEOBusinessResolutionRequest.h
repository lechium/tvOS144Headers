/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:34 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, GEOLocation, NSString;

@interface GEOBusinessResolutionRequest : PBRequest <NSCopying> {

	PBDataReader* _reader;
	GEOLocation* _deviceLocation;
	NSString* _shortBusinessName;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	SCD_Struct_GE37 _flags;

}

@property (nonatomic,readonly) BOOL hasShortBusinessName; 
@property (nonatomic,retain) NSString * shortBusinessName; 
@property (nonatomic,readonly) BOOL hasDeviceLocation; 
@property (nonatomic,retain) GEOLocation * deviceLocation; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(GEOLocation *)deviceLocation;
-(void)setDeviceLocation:(GEOLocation *)arg1 ;
-(NSString *)shortBusinessName;
-(void)setShortBusinessName:(NSString *)arg1 ;
-(BOOL)hasShortBusinessName;
-(BOOL)hasDeviceLocation;
@end

