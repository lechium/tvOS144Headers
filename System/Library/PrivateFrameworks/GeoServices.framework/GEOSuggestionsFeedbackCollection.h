/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:12 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSData, GEOPDAutocompleteEntry;

@interface GEOSuggestionsFeedbackCollection : PBCodable <NSCopying> {

	PBDataReader* _reader;
	GEOSessionID _sessionID;
	NSData* _suggestionEntryMetadata;
	GEOPDAutocompleteEntry* _suggestionEntry;
	NSData* _suggestionMetadata;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _suggestionEntryIndex;
	int _suggestionsEntryListIndex;
	struct {
		unsigned has_sessionID : 1;
		unsigned has_suggestionEntryIndex : 1;
		unsigned has_suggestionsEntryListIndex : 1;
		unsigned read_suggestionEntryMetadata : 1;
		unsigned read_suggestionEntry : 1;
		unsigned read_suggestionMetadata : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasSessionID; 
@property (assign,nonatomic) GEOSessionID sessionID; 
@property (assign,nonatomic) BOOL hasSuggestionsEntryListIndex; 
@property (assign,nonatomic) int suggestionsEntryListIndex; 
@property (assign,nonatomic) BOOL hasSuggestionEntryIndex; 
@property (assign,nonatomic) int suggestionEntryIndex; 
@property (nonatomic,readonly) BOOL hasSuggestionMetadata; 
@property (nonatomic,retain) NSData * suggestionMetadata; 
@property (nonatomic,readonly) BOOL hasSuggestionEntryMetadata; 
@property (nonatomic,retain) NSData * suggestionEntryMetadata; 
@property (nonatomic,readonly) BOOL hasSuggestionEntry; 
@property (nonatomic,retain) GEOPDAutocompleteEntry * suggestionEntry; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(GEOSessionID)sessionID;
-(void)setSessionID:(GEOSessionID)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(void)setHasSessionID:(BOOL)arg1 ;
-(BOOL)hasSessionID;
-(NSData *)suggestionMetadata;
-(NSData *)suggestionEntryMetadata;
-(GEOPDAutocompleteEntry *)suggestionEntry;
-(void)setSuggestionsEntryListIndex:(int)arg1 ;
-(void)setSuggestionEntryIndex:(int)arg1 ;
-(void)setSuggestionMetadata:(NSData *)arg1 ;
-(void)setSuggestionEntryMetadata:(NSData *)arg1 ;
-(void)setSuggestionEntry:(GEOPDAutocompleteEntry *)arg1 ;
-(int)suggestionsEntryListIndex;
-(void)setHasSuggestionsEntryListIndex:(BOOL)arg1 ;
-(BOOL)hasSuggestionsEntryListIndex;
-(int)suggestionEntryIndex;
-(void)setHasSuggestionEntryIndex:(BOOL)arg1 ;
-(BOOL)hasSuggestionEntryIndex;
-(BOOL)hasSuggestionMetadata;
-(BOOL)hasSuggestionEntryMetadata;
-(BOOL)hasSuggestionEntry;
@end

