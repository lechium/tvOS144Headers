/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:17 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOPDResolvedItem, GEOPDRelatedSearchSuggestion, GEOPDDirectionIntent, NSMutableArray, GEOMapRegion, NSString, GEOPDSearchClientBehavior;

@interface GEOPDSearchResult : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOPDResolvedItem* _clientResolvedResult;
	GEOPDRelatedSearchSuggestion* _defaultRelatedSearchSuggestion;
	GEOPDDirectionIntent* _directionIntent;
	NSMutableArray* _disambiguationLabels;
	NSMutableArray* _displayHeaderSubstitutes;
	GEOMapRegion* _displayMapRegion;
	NSMutableArray* _relatedEntitySections;
	NSMutableArray* _relatedSearchSuggestions;
	NSMutableArray* _resultDetourInfos;
	NSString* _resultDisplayHeader;
	NSMutableArray* _retainSearchs;
	GEOPDSearchClientBehavior* _searchClientBehavior;
	NSMutableArray* _searchResultSections;
	NSMutableArray* _searchTierMetadatas;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _dymSuggestionVisibleTime;
	unsigned _retainSearchTime;
	int _searchResultType;
	BOOL _enablePartialClientization;
	BOOL _isChainResultSet;
	BOOL _showDymSuggestionCloseButton;
	struct {
		unsigned has_dymSuggestionVisibleTime : 1;
		unsigned has_retainSearchTime : 1;
		unsigned has_searchResultType : 1;
		unsigned has_enablePartialClientization : 1;
		unsigned has_isChainResultSet : 1;
		unsigned has_showDymSuggestionCloseButton : 1;
		unsigned read_unknownFields : 1;
		unsigned read_clientResolvedResult : 1;
		unsigned read_defaultRelatedSearchSuggestion : 1;
		unsigned read_directionIntent : 1;
		unsigned read_disambiguationLabels : 1;
		unsigned read_displayHeaderSubstitutes : 1;
		unsigned read_displayMapRegion : 1;
		unsigned read_relatedEntitySections : 1;
		unsigned read_relatedSearchSuggestions : 1;
		unsigned read_resultDetourInfos : 1;
		unsigned read_resultDisplayHeader : 1;
		unsigned read_retainSearchs : 1;
		unsigned read_searchClientBehavior : 1;
		unsigned read_searchResultSections : 1;
		unsigned read_searchTierMetadatas : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasDisplayMapRegion; 
@property (nonatomic,retain) GEOMapRegion * displayMapRegion; 
@property (nonatomic,retain) NSMutableArray * disambiguationLabels; 
@property (assign,nonatomic) BOOL hasIsChainResultSet; 
@property (assign,nonatomic) BOOL isChainResultSet; 
@property (nonatomic,retain) NSMutableArray * relatedSearchSuggestions; 
@property (assign,nonatomic) BOOL hasSearchResultType; 
@property (assign,nonatomic) int searchResultType; 
@property (nonatomic,readonly) BOOL hasResultDisplayHeader; 
@property (nonatomic,retain) NSString * resultDisplayHeader; 
@property (nonatomic,readonly) BOOL hasDefaultRelatedSearchSuggestion; 
@property (nonatomic,retain) GEOPDRelatedSearchSuggestion * defaultRelatedSearchSuggestion; 
@property (nonatomic,readonly) BOOL hasSearchClientBehavior; 
@property (nonatomic,retain) GEOPDSearchClientBehavior * searchClientBehavior; 
@property (nonatomic,retain) NSMutableArray * resultDetourInfos; 
@property (nonatomic,readonly) BOOL hasDirectionIntent; 
@property (nonatomic,retain) GEOPDDirectionIntent * directionIntent; 
@property (nonatomic,readonly) BOOL hasClientResolvedResult; 
@property (nonatomic,retain) GEOPDResolvedItem * clientResolvedResult; 
@property (nonatomic,retain) NSMutableArray * displayHeaderSubstitutes; 
@property (assign,nonatomic) BOOL hasEnablePartialClientization; 
@property (assign,nonatomic) BOOL enablePartialClientization; 
@property (assign,nonatomic) BOOL hasDymSuggestionVisibleTime; 
@property (assign,nonatomic) unsigned dymSuggestionVisibleTime; 
@property (assign,nonatomic) BOOL hasShowDymSuggestionCloseButton; 
@property (assign,nonatomic) BOOL showDymSuggestionCloseButton; 
@property (assign,nonatomic) BOOL hasRetainSearchTime; 
@property (assign,nonatomic) unsigned retainSearchTime; 
@property (nonatomic,retain) NSMutableArray * retainSearchs; 
@property (nonatomic,retain) NSMutableArray * searchResultSections; 
@property (nonatomic,retain) NSMutableArray * relatedEntitySections; 
@property (nonatomic,retain) NSMutableArray * searchTierMetadatas; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)disambiguationLabelType;
+(Class)relatedSearchSuggestionType;
+(Class)resultDetourInfoType;
+(Class)relatedEntitySectionType;
+(Class)searchTierMetadataType;
+(Class)displayHeaderSubstituteType;
+(Class)retainSearchType;
+(Class)searchResultSectionType;
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
-(void)addDisambiguationLabel:(id)arg1 ;
-(unsigned long long)disambiguationLabelsCount;
-(void)clearDisambiguationLabels;
-(id)disambiguationLabelAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)disambiguationLabels;
-(void)setDisambiguationLabels:(NSMutableArray *)arg1 ;
-(void)setRetainSearchTime:(unsigned)arg1 ;
-(unsigned)retainSearchTime;
-(void)setHasRetainSearchTime:(BOOL)arg1 ;
-(BOOL)hasRetainSearchTime;
-(GEOMapRegion *)displayMapRegion;
-(GEOPDRelatedSearchSuggestion *)defaultRelatedSearchSuggestion;
-(GEOPDSearchClientBehavior *)searchClientBehavior;
-(void)setDisplayMapRegion:(GEOMapRegion *)arg1 ;
-(void)setIsChainResultSet:(BOOL)arg1 ;
-(void)addRelatedSearchSuggestion:(id)arg1 ;
-(void)addResultDetourInfo:(id)arg1 ;
-(void)setDefaultRelatedSearchSuggestion:(GEOPDRelatedSearchSuggestion *)arg1 ;
-(void)setSearchClientBehavior:(GEOPDSearchClientBehavior *)arg1 ;
-(void)setEnablePartialClientization:(BOOL)arg1 ;
-(void)addRelatedEntitySection:(id)arg1 ;
-(void)addSearchTierMetadata:(id)arg1 ;
-(unsigned long long)relatedSearchSuggestionsCount;
-(void)clearRelatedSearchSuggestions;
-(id)relatedSearchSuggestionAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)resultDetourInfosCount;
-(void)clearResultDetourInfos;
-(id)resultDetourInfoAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)relatedEntitySectionsCount;
-(void)clearRelatedEntitySections;
-(id)relatedEntitySectionAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)searchTierMetadatasCount;
-(void)clearSearchTierMetadatas;
-(id)searchTierMetadataAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasDisplayMapRegion;
-(BOOL)isChainResultSet;
-(void)setHasIsChainResultSet:(BOOL)arg1 ;
-(BOOL)hasIsChainResultSet;
-(NSMutableArray *)relatedSearchSuggestions;
-(void)setRelatedSearchSuggestions:(NSMutableArray *)arg1 ;
-(NSMutableArray *)resultDetourInfos;
-(void)setResultDetourInfos:(NSMutableArray *)arg1 ;
-(BOOL)hasDefaultRelatedSearchSuggestion;
-(BOOL)hasSearchClientBehavior;
-(BOOL)enablePartialClientization;
-(void)setHasEnablePartialClientization:(BOOL)arg1 ;
-(BOOL)hasEnablePartialClientization;
-(NSMutableArray *)relatedEntitySections;
-(void)setRelatedEntitySections:(NSMutableArray *)arg1 ;
-(NSMutableArray *)searchTierMetadatas;
-(void)setSearchTierMetadatas:(NSMutableArray *)arg1 ;
-(NSString *)resultDisplayHeader;
-(GEOPDDirectionIntent *)directionIntent;
-(GEOPDResolvedItem *)clientResolvedResult;
-(void)setSearchResultType:(int)arg1 ;
-(void)setResultDisplayHeader:(NSString *)arg1 ;
-(void)setDirectionIntent:(GEOPDDirectionIntent *)arg1 ;
-(void)setClientResolvedResult:(GEOPDResolvedItem *)arg1 ;
-(void)addDisplayHeaderSubstitute:(id)arg1 ;
-(void)setDymSuggestionVisibleTime:(unsigned)arg1 ;
-(void)setShowDymSuggestionCloseButton:(BOOL)arg1 ;
-(void)addRetainSearch:(id)arg1 ;
-(void)addSearchResultSection:(id)arg1 ;
-(unsigned long long)displayHeaderSubstitutesCount;
-(void)clearDisplayHeaderSubstitutes;
-(id)displayHeaderSubstituteAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)retainSearchsCount;
-(void)clearRetainSearchs;
-(id)retainSearchAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)searchResultSectionsCount;
-(void)clearSearchResultSections;
-(id)searchResultSectionAtIndex:(unsigned long long)arg1 ;
-(int)searchResultType;
-(void)setHasSearchResultType:(BOOL)arg1 ;
-(BOOL)hasSearchResultType;
-(id)searchResultTypeAsString:(int)arg1 ;
-(int)StringAsSearchResultType:(id)arg1 ;
-(BOOL)hasResultDisplayHeader;
-(BOOL)hasDirectionIntent;
-(BOOL)hasClientResolvedResult;
-(NSMutableArray *)displayHeaderSubstitutes;
-(void)setDisplayHeaderSubstitutes:(NSMutableArray *)arg1 ;
-(unsigned)dymSuggestionVisibleTime;
-(void)setHasDymSuggestionVisibleTime:(BOOL)arg1 ;
-(BOOL)hasDymSuggestionVisibleTime;
-(BOOL)showDymSuggestionCloseButton;
-(void)setHasShowDymSuggestionCloseButton:(BOOL)arg1 ;
-(BOOL)hasShowDymSuggestionCloseButton;
-(NSMutableArray *)retainSearchs;
-(void)setRetainSearchs:(NSMutableArray *)arg1 ;
-(NSMutableArray *)searchResultSections;
-(void)setSearchResultSections:(NSMutableArray *)arg1 ;
@end

