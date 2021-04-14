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

@class PBUnknownFields, NSString;

@interface GEOMuninBucket : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSString* _bucketURL;
	unsigned _bucketID;
	unsigned _lodLevel;
	struct {
		unsigned has_bucketID : 1;
		unsigned has_lodLevel : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasBucketID; 
@property (assign,nonatomic) unsigned bucketID; 
@property (nonatomic,readonly) BOOL hasBucketURL; 
@property (nonatomic,retain) NSString * bucketURL; 
@property (assign,nonatomic) BOOL hasLodLevel; 
@property (assign,nonatomic) unsigned lodLevel; 
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
-(NSString *)bucketURL;
-(void)setBucketID:(unsigned)arg1 ;
-(void)setBucketURL:(NSString *)arg1 ;
-(void)setLodLevel:(unsigned)arg1 ;
-(unsigned)bucketID;
-(void)setHasBucketID:(BOOL)arg1 ;
-(BOOL)hasBucketID;
-(BOOL)hasBucketURL;
-(unsigned)lodLevel;
-(void)setHasLodLevel:(BOOL)arg1 ;
-(BOOL)hasLodLevel;
@end

