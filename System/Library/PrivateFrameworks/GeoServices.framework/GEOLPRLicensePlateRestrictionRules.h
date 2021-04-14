/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:19 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSMutableArray, NSData;

@interface GEOLPRLicensePlateRestrictionRules : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSMutableArray* _licensePlateRegions;
	NSData* _version;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _createTime;
	SCD_Struct_GE37 _flags;

}

@property (nonatomic,retain) NSData * version; 
@property (assign,nonatomic) unsigned createTime; 
@property (nonatomic,retain) NSMutableArray * licensePlateRegions; 
+(BOOL)isValid:(id)arg1 ;
+(Class)licensePlateRegionType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSData *)version;
-(id)dictionaryRepresentation;
-(void)setVersion:(NSData *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(void)setCreateTime:(unsigned)arg1 ;
-(void)addLicensePlateRegion:(id)arg1 ;
-(unsigned long long)licensePlateRegionsCount;
-(void)clearLicensePlateRegions;
-(id)licensePlateRegionAtIndex:(unsigned long long)arg1 ;
-(unsigned)createTime;
-(NSMutableArray *)licensePlateRegions;
-(void)setLicensePlateRegions:(NSMutableArray *)arg1 ;
@end

