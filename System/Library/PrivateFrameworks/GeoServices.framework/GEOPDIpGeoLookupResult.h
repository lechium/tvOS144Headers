/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:16 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString, GEOLatLng;

@interface GEOPDIpGeoLookupResult : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSString* _countryCode;
	NSString* _ipAddress;
	GEOLatLng* _location;
	NSString* _timeZome;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _status;
	struct {
		unsigned has_status : 1;
		unsigned read_unknownFields : 1;
		unsigned read_countryCode : 1;
		unsigned read_ipAddress : 1;
		unsigned read_location : 1;
		unsigned read_timeZome : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) int status; 
@property (nonatomic,readonly) BOOL hasIpAddress; 
@property (nonatomic,retain) NSString * ipAddress; 
@property (nonatomic,readonly) BOOL hasLocation; 
@property (nonatomic,retain) GEOLatLng * location; 
@property (nonatomic,readonly) BOOL hasCountryCode; 
@property (nonatomic,retain) NSString * countryCode; 
@property (nonatomic,readonly) BOOL hasTimeZome; 
@property (nonatomic,retain) NSString * timeZome; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)countryCode;
-(id)dictionaryRepresentation;
-(int)status;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setStatus:(int)arg1 ;
-(void)setCountryCode:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasStatus:(BOOL)arg1 ;
-(BOOL)hasStatus;
-(id)statusAsString:(int)arg1 ;
-(int)StringAsStatus:(id)arg1 ;
-(BOOL)hasCountryCode;
-(GEOLatLng *)location;
-(void)setLocation:(GEOLatLng *)arg1 ;
-(BOOL)hasLocation;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(NSString *)ipAddress;
-(void)setIpAddress:(NSString *)arg1 ;
-(BOOL)hasIpAddress;
-(NSString *)timeZome;
-(void)setTimeZome:(NSString *)arg1 ;
-(BOOL)hasTimeZome;
@end

