/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:38 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSData;

@interface GEOSuggestionsOptions : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSData* _suggestionEntryMetadata;
	NSData* _suggestionMetadata;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _entriesType;
	int _listType;
	BOOL _includeRankingFeatures;
	BOOL _normalizePOIs;
	struct {
		unsigned has_entriesType : 1;
		unsigned has_listType : 1;
		unsigned has_includeRankingFeatures : 1;
		unsigned has_normalizePOIs : 1;
		unsigned read_unknownFields : 1;
		unsigned read_suggestionEntryMetadata : 1;
		unsigned read_suggestionMetadata : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasListType; 
@property (assign,nonatomic) int listType; 
@property (assign,nonatomic) BOOL hasEntriesType; 
@property (assign,nonatomic) int entriesType; 
@property (nonatomic,readonly) BOOL hasSuggestionMetadata; 
@property (nonatomic,retain) NSData * suggestionMetadata; 
@property (nonatomic,readonly) BOOL hasSuggestionEntryMetadata; 
@property (nonatomic,retain) NSData * suggestionEntryMetadata; 
@property (assign,nonatomic) BOOL hasNormalizePOIs; 
@property (assign,nonatomic) BOOL normalizePOIs; 
@property (assign,nonatomic) BOOL hasIncludeRankingFeatures; 
@property (assign,nonatomic) BOOL includeRankingFeatures; 
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
-(NSData *)suggestionMetadata;
-(NSData *)suggestionEntryMetadata;
-(void)setSuggestionMetadata:(NSData *)arg1 ;
-(void)setSuggestionEntryMetadata:(NSData *)arg1 ;
-(BOOL)hasSuggestionMetadata;
-(BOOL)hasSuggestionEntryMetadata;
-(void)setListType:(int)arg1 ;
-(int)listType;
-(void)setHasListType:(BOOL)arg1 ;
-(BOOL)hasListType;
-(id)listTypeAsString:(int)arg1 ;
-(int)StringAsListType:(id)arg1 ;
-(int)entriesType;
-(void)setEntriesType:(int)arg1 ;
-(void)setNormalizePOIs:(BOOL)arg1 ;
-(void)setIncludeRankingFeatures:(BOOL)arg1 ;
-(void)setHasEntriesType:(BOOL)arg1 ;
-(BOOL)hasEntriesType;
-(id)entriesTypeAsString:(int)arg1 ;
-(int)StringAsEntriesType:(id)arg1 ;
-(BOOL)normalizePOIs;
-(void)setHasNormalizePOIs:(BOOL)arg1 ;
-(BOOL)hasNormalizePOIs;
-(BOOL)includeRankingFeatures;
-(void)setHasIncludeRankingFeatures:(BOOL)arg1 ;
-(BOOL)hasIncludeRankingFeatures;
@end

