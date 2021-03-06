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

@class PBDataReader, PBUnknownFields, NSMutableArray, GEOPDSCategorySearchResultSection, GEOPDRelatedSearchSuggestion, GEOMapRegion, GEOPDSearchClientBehavior;

@interface GEOPDCategorySearchResult : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _browseCategorys;
	GEOPDSCategorySearchResultSection* _categorySearchResultSection;
	GEOPDRelatedSearchSuggestion* _defaultRelatedSearchSuggestion;
	GEOMapRegion* _displayMapRegion;
	NSMutableArray* _relatedEntitySections;
	NSMutableArray* _relatedSearchSuggestions;
	NSMutableArray* _resultDetourInfos;
	GEOPDSearchClientBehavior* _searchClientBehavior;
	NSMutableArray* _searchTierMetadatas;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	BOOL _enablePartialClientization;
	BOOL _isChainResultSet;
	struct {
		unsigned has_enablePartialClientization : 1;
		unsigned has_isChainResultSet : 1;
		unsigned read_unknownFields : 1;
		unsigned read_browseCategorys : 1;
		unsigned read_categorySearchResultSection : 1;
		unsigned read_defaultRelatedSearchSuggestion : 1;
		unsigned read_displayMapRegion : 1;
		unsigned read_relatedEntitySections : 1;
		unsigned read_relatedSearchSuggestions : 1;
		unsigned read_resultDetourInfos : 1;
		unsigned read_searchClientBehavior : 1;
		unsigned read_searchTierMetadatas : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasDisplayMapRegion; 
@property (nonatomic,retain) GEOMapRegion * displayMapRegion; 
@property (assign,nonatomic) BOOL hasIsChainResultSet; 
@property (assign,nonatomic) BOOL isChainResultSet; 
@property (nonatomic,retain) NSMutableArray * relatedSearchSuggestions; 
@property (nonatomic,retain) NSMutableArray * resultDetourInfos; 
@property (nonatomic,readonly) BOOL hasDefaultRelatedSearchSuggestion; 
@property (nonatomic,retain) GEOPDRelatedSearchSuggestion * defaultRelatedSearchSuggestion; 
@property (nonatomic,readonly) BOOL hasSearchClientBehavior; 
@property (nonatomic,retain) GEOPDSearchClientBehavior * searchClientBehavior; 
@property (assign,nonatomic) BOOL hasEnablePartialClientization; 
@property (assign,nonatomic) BOOL enablePartialClientization; 
@property (nonatomic,retain) NSMutableArray * browseCategorys; 
@property (nonatomic,readonly) BOOL hasCategorySearchResultSection; 
@property (nonatomic,retain) GEOPDSCategorySearchResultSection * categorySearchResultSection; 
@property (nonatomic,retain) NSMutableArray * relatedEntitySections; 
@property (nonatomic,retain) NSMutableArray * searchTierMetadatas; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)relatedSearchSuggestionType;
+(Class)resultDetourInfoType;
+(Class)browseCategoryType;
+(Class)relatedEntitySectionType;
+(Class)searchTierMetadataType;
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
-(GEOMapRegion *)displayMapRegion;
-(GEOPDRelatedSearchSuggestion *)defaultRelatedSearchSuggestion;
-(GEOPDSearchClientBehavior *)searchClientBehavior;
-(GEOPDSCategorySearchResultSection *)categorySearchResultSection;
-(void)setDisplayMapRegion:(GEOMapRegion *)arg1 ;
-(void)setIsChainResultSet:(BOOL)arg1 ;
-(void)addRelatedSearchSuggestion:(id)arg1 ;
-(void)addResultDetourInfo:(id)arg1 ;
-(void)setDefaultRelatedSearchSuggestion:(GEOPDRelatedSearchSuggestion *)arg1 ;
-(void)setSearchClientBehavior:(GEOPDSearchClientBehavior *)arg1 ;
-(void)setEnablePartialClientization:(BOOL)arg1 ;
-(void)addBrowseCategory:(id)arg1 ;
-(void)setCategorySearchResultSection:(GEOPDSCategorySearchResultSection *)arg1 ;
-(void)addRelatedEntitySection:(id)arg1 ;
-(void)addSearchTierMetadata:(id)arg1 ;
-(unsigned long long)relatedSearchSuggestionsCount;
-(void)clearRelatedSearchSuggestions;
-(id)relatedSearchSuggestionAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)resultDetourInfosCount;
-(void)clearResultDetourInfos;
-(id)resultDetourInfoAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)browseCategorysCount;
-(void)clearBrowseCategorys;
-(id)browseCategoryAtIndex:(unsigned long long)arg1 ;
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
-(NSMutableArray *)browseCategorys;
-(void)setBrowseCategorys:(NSMutableArray *)arg1 ;
-(BOOL)hasCategorySearchResultSection;
-(NSMutableArray *)relatedEntitySections;
-(void)setRelatedEntitySections:(NSMutableArray *)arg1 ;
-(NSMutableArray *)searchTierMetadatas;
-(void)setSearchTierMetadatas:(NSMutableArray *)arg1 ;
@end

