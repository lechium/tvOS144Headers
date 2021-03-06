/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:27 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, GEOPDClientMetadata, NSMutableArray;

@interface GEOWiFiQualityServiceRequest : PBRequest <NSCopying> {

	PBDataReader* _reader;
	GEOPDClientMetadata* _clientMetadata;
	NSMutableArray* _locationSearches;
	NSMutableArray* _networkSearches;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_clientMetadata : 1;
		unsigned read_locationSearches : 1;
		unsigned read_networkSearches : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasClientMetadata; 
@property (nonatomic,retain) GEOPDClientMetadata * clientMetadata; 
@property (nonatomic,retain) NSMutableArray * locationSearches; 
@property (nonatomic,retain) NSMutableArray * networkSearches; 
+(BOOL)isValid:(id)arg1 ;
+(Class)locationSearchesType;
+(Class)networkSearchesType;
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
-(GEOPDClientMetadata *)clientMetadata;
-(void)setClientMetadata:(GEOPDClientMetadata *)arg1 ;
-(BOOL)hasClientMetadata;
-(NSMutableArray *)networkSearches;
-(void)addLocationSearches:(id)arg1 ;
-(void)addNetworkSearches:(id)arg1 ;
-(unsigned long long)locationSearchesCount;
-(void)clearLocationSearches;
-(id)locationSearchesAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)networkSearchesCount;
-(void)clearNetworkSearches;
-(id)networkSearchesAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)locationSearches;
-(void)setLocationSearches:(NSMutableArray *)arg1 ;
-(void)setNetworkSearches:(NSMutableArray *)arg1 ;
@end

