/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:31 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSString;

@interface GEOPDResolvedItem : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSString* _extractedTerm;
	int _resolvedItemType;
	unsigned _resultIndex;
	SCD_Struct_GE114 _flags;

}

@property (nonatomic,readonly) BOOL hasExtractedTerm; 
@property (nonatomic,retain) NSString * extractedTerm; 
@property (assign,nonatomic) BOOL hasResolvedItemType; 
@property (assign,nonatomic) int resolvedItemType; 
@property (assign,nonatomic) BOOL hasResultIndex; 
@property (assign,nonatomic) unsigned resultIndex; 
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
-(void)setResultIndex:(unsigned)arg1 ;
-(BOOL)hasResolvedItemType;
-(int)resolvedItemType;
-(void)setResolvedItemType:(int)arg1 ;
-(BOOL)hasExtractedTerm;
-(NSString *)extractedTerm;
-(unsigned)resultIndex;
-(BOOL)hasResultIndex;
-(void)setHasResolvedItemType:(BOOL)arg1 ;
-(id)resolvedItemTypeAsString:(int)arg1 ;
-(int)StringAsResolvedItemType:(id)arg1 ;
-(void)setExtractedTerm:(NSString *)arg1 ;
-(void)setHasResultIndex:(BOOL)arg1 ;
@end

