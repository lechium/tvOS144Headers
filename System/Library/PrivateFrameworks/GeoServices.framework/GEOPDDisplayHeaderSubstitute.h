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

@class PBDataReader, PBUnknownFields, NSString, GEOPDRelatedSearchSuggestion;

@interface GEOPDDisplayHeaderSubstitute : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSString* _interpretedQuery;
	GEOPDRelatedSearchSuggestion* _relatedSearchSuggestion;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _substituteType;
	struct {
		unsigned has_substituteType : 1;
		unsigned read_unknownFields : 1;
		unsigned read_interpretedQuery : 1;
		unsigned read_relatedSearchSuggestion : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasSubstituteType; 
@property (assign,nonatomic) int substituteType; 
@property (nonatomic,readonly) BOOL hasInterpretedQuery; 
@property (nonatomic,retain) NSString * interpretedQuery; 
@property (nonatomic,readonly) BOOL hasRelatedSearchSuggestion; 
@property (nonatomic,retain) GEOPDRelatedSearchSuggestion * relatedSearchSuggestion; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
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
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(GEOPDRelatedSearchSuggestion *)relatedSearchSuggestion;
-(void)setRelatedSearchSuggestion:(GEOPDRelatedSearchSuggestion *)arg1 ;
-(BOOL)hasRelatedSearchSuggestion;
-(NSString *)interpretedQuery;
-(void)setSubstituteType:(int)arg1 ;
-(void)setInterpretedQuery:(NSString *)arg1 ;
-(int)substituteType;
-(void)setHasSubstituteType:(BOOL)arg1 ;
-(BOOL)hasSubstituteType;
-(id)substituteTypeAsString:(int)arg1 ;
-(int)StringAsSubstituteType:(id)arg1 ;
-(BOOL)hasInterpretedQuery;
@end
