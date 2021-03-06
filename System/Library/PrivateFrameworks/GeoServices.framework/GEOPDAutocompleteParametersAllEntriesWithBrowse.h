/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:15 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSData, GEOPDAutocompleteEntry, NSString, GEOPDRetainedSearchMetadata, GEOPDVenueIdentifier, GEOPDViewportInfo;

@interface GEOPDAutocompleteParametersAllEntriesWithBrowse : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE85* _supportedAutocompleteResultCellTypes;
	SCD_Struct_GE85* _supportedListTypes;
	NSData* _categorySuggestionEntryMetadata;
	GEOPDAutocompleteEntry* _categorySuggestionEntry;
	GEOPDAutocompleteEntry* _querySuggestionEntry;
	NSString* _query;
	GEOPDRetainedSearchMetadata* _retainedSearch;
	GEOPDVenueIdentifier* _venueIdentifier;
	GEOPDViewportInfo* _viewportInfo;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _maxQueryBuilderSuggestions;
	int _maxResults;
	BOOL _highlightDiff;
	BOOL _interleaveCategorySuggestions;
	BOOL _supportClientRankingFeatureMetadata;
	BOOL _supportDirectionIntentSuggestions;
	BOOL _supportRapAffordance;
	BOOL _supportSectionHeader;
	BOOL _supportUnresolvedDirectionIntent;
	struct {
		unsigned has_maxQueryBuilderSuggestions : 1;
		unsigned has_maxResults : 1;
		unsigned has_highlightDiff : 1;
		unsigned has_interleaveCategorySuggestions : 1;
		unsigned has_supportClientRankingFeatureMetadata : 1;
		unsigned has_supportDirectionIntentSuggestions : 1;
		unsigned has_supportRapAffordance : 1;
		unsigned has_supportSectionHeader : 1;
		unsigned has_supportUnresolvedDirectionIntent : 1;
		unsigned read_unknownFields : 1;
		unsigned read_supportedAutocompleteResultCellTypes : 1;
		unsigned read_supportedListTypes : 1;
		unsigned read_categorySuggestionEntryMetadata : 1;
		unsigned read_categorySuggestionEntry : 1;
		unsigned read_querySuggestionEntry : 1;
		unsigned read_query : 1;
		unsigned read_retainedSearch : 1;
		unsigned read_venueIdentifier : 1;
		unsigned read_viewportInfo : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasQuery; 
@property (nonatomic,retain) NSString * query; 
@property (nonatomic,readonly) BOOL hasViewportInfo; 
@property (nonatomic,retain) GEOPDViewportInfo * viewportInfo; 
@property (assign,nonatomic) BOOL hasMaxResults; 
@property (assign,nonatomic) int maxResults; 
@property (assign,nonatomic) BOOL hasHighlightDiff; 
@property (assign,nonatomic) BOOL highlightDiff; 
@property (nonatomic,readonly) BOOL hasCategorySuggestionEntryMetadata; 
@property (nonatomic,retain) NSData * categorySuggestionEntryMetadata; 
@property (nonatomic,readonly) BOOL hasCategorySuggestionEntry; 
@property (nonatomic,retain) GEOPDAutocompleteEntry * categorySuggestionEntry; 
@property (assign,nonatomic) BOOL hasInterleaveCategorySuggestions; 
@property (assign,nonatomic) BOOL interleaveCategorySuggestions; 
@property (nonatomic,readonly) BOOL hasVenueIdentifier; 
@property (nonatomic,retain) GEOPDVenueIdentifier * venueIdentifier; 
@property (assign,nonatomic) BOOL hasSupportDirectionIntentSuggestions; 
@property (assign,nonatomic) BOOL supportDirectionIntentSuggestions; 
@property (nonatomic,readonly) BOOL hasRetainedSearch; 
@property (nonatomic,retain) GEOPDRetainedSearchMetadata * retainedSearch; 
@property (assign,nonatomic) BOOL hasSupportUnresolvedDirectionIntent; 
@property (assign,nonatomic) BOOL supportUnresolvedDirectionIntent; 
@property (nonatomic,readonly) unsigned long long supportedListTypesCount; 
@property (nonatomic,readonly) int* supportedListTypes; 
@property (nonatomic,readonly) BOOL hasQuerySuggestionEntry; 
@property (nonatomic,retain) GEOPDAutocompleteEntry * querySuggestionEntry; 
@property (assign,nonatomic) BOOL hasSupportClientRankingFeatureMetadata; 
@property (assign,nonatomic) BOOL supportClientRankingFeatureMetadata; 
@property (assign,nonatomic) BOOL hasMaxQueryBuilderSuggestions; 
@property (assign,nonatomic) int maxQueryBuilderSuggestions; 
@property (assign,nonatomic) BOOL hasSupportSectionHeader; 
@property (assign,nonatomic) BOOL supportSectionHeader; 
@property (nonatomic,readonly) unsigned long long supportedAutocompleteResultCellTypesCount; 
@property (nonatomic,readonly) int* supportedAutocompleteResultCellTypes; 
@property (assign,nonatomic) BOOL hasSupportRapAffordance; 
@property (assign,nonatomic) BOOL supportRapAffordance; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
-(NSString *)query;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setQuery:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)clearSensitiveFields;
-(GEOPDViewportInfo *)viewportInfo;
-(void)setMaxResults:(int)arg1 ;
-(void)setViewportInfo:(GEOPDViewportInfo *)arg1 ;
-(int)maxResults;
-(void)setHasMaxResults:(BOOL)arg1 ;
-(BOOL)hasMaxResults;
-(BOOL)hasViewportInfo;
-(void)setHighlightDiff:(BOOL)arg1 ;
-(BOOL)hasQuery;
-(BOOL)highlightDiff;
-(void)setHasHighlightDiff:(BOOL)arg1 ;
-(BOOL)hasHighlightDiff;
-(NSData *)categorySuggestionEntryMetadata;
-(GEOPDAutocompleteEntry *)categorySuggestionEntry;
-(GEOPDVenueIdentifier *)venueIdentifier;
-(GEOPDRetainedSearchMetadata *)retainedSearch;
-(GEOPDAutocompleteEntry *)querySuggestionEntry;
-(void)setCategorySuggestionEntryMetadata:(NSData *)arg1 ;
-(void)setCategorySuggestionEntry:(GEOPDAutocompleteEntry *)arg1 ;
-(void)setInterleaveCategorySuggestions:(BOOL)arg1 ;
-(void)setVenueIdentifier:(GEOPDVenueIdentifier *)arg1 ;
-(void)setSupportDirectionIntentSuggestions:(BOOL)arg1 ;
-(void)setRetainedSearch:(GEOPDRetainedSearchMetadata *)arg1 ;
-(void)setSupportUnresolvedDirectionIntent:(BOOL)arg1 ;
-(void)addSupportedListType:(int)arg1 ;
-(void)setQuerySuggestionEntry:(GEOPDAutocompleteEntry *)arg1 ;
-(void)setSupportClientRankingFeatureMetadata:(BOOL)arg1 ;
-(void)setMaxQueryBuilderSuggestions:(int)arg1 ;
-(void)setSupportSectionHeader:(BOOL)arg1 ;
-(void)addSupportedAutocompleteResultCellType:(int)arg1 ;
-(void)setSupportRapAffordance:(BOOL)arg1 ;
-(BOOL)hasCategorySuggestionEntry;
-(BOOL)hasQuerySuggestionEntry;
-(unsigned long long)supportedListTypesCount;
-(void)clearSupportedListTypes;
-(int)supportedListTypeAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)supportedAutocompleteResultCellTypesCount;
-(void)clearSupportedAutocompleteResultCellTypes;
-(int)supportedAutocompleteResultCellTypeAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasCategorySuggestionEntryMetadata;
-(BOOL)interleaveCategorySuggestions;
-(void)setHasInterleaveCategorySuggestions:(BOOL)arg1 ;
-(BOOL)hasInterleaveCategorySuggestions;
-(BOOL)hasVenueIdentifier;
-(BOOL)supportDirectionIntentSuggestions;
-(void)setHasSupportDirectionIntentSuggestions:(BOOL)arg1 ;
-(BOOL)hasSupportDirectionIntentSuggestions;
-(BOOL)hasRetainedSearch;
-(BOOL)supportUnresolvedDirectionIntent;
-(void)setHasSupportUnresolvedDirectionIntent:(BOOL)arg1 ;
-(BOOL)hasSupportUnresolvedDirectionIntent;
-(int*)supportedListTypes;
-(void)setSupportedListTypes:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)supportedListTypesAsString:(int)arg1 ;
-(int)StringAsSupportedListTypes:(id)arg1 ;
-(BOOL)supportClientRankingFeatureMetadata;
-(void)setHasSupportClientRankingFeatureMetadata:(BOOL)arg1 ;
-(BOOL)hasSupportClientRankingFeatureMetadata;
-(int)maxQueryBuilderSuggestions;
-(void)setHasMaxQueryBuilderSuggestions:(BOOL)arg1 ;
-(BOOL)hasMaxQueryBuilderSuggestions;
-(BOOL)supportSectionHeader;
-(void)setHasSupportSectionHeader:(BOOL)arg1 ;
-(BOOL)hasSupportSectionHeader;
-(int*)supportedAutocompleteResultCellTypes;
-(void)setSupportedAutocompleteResultCellTypes:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)supportedAutocompleteResultCellTypesAsString:(int)arg1 ;
-(int)StringAsSupportedAutocompleteResultCellTypes:(id)arg1 ;
-(BOOL)supportRapAffordance;
-(void)setHasSupportRapAffordance:(BOOL)arg1 ;
-(BOOL)hasSupportRapAffordance;
@end

