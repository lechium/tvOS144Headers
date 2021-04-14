/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:45 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, GEOSubactionMetaData, NSString;

@interface GEOClientACSuggestionEntry : PBCodable <NSCopying> {

	PBDataReader* _reader;
	double _contactRelevanceScore;
	double _fractionOfMatch;
	double _mapsSuggestionsContactRevelanceScore;
	double _mapsSuggestionsIsTouristScore;
	double _mapsSuggestionsPoiRevelanceScore;
	GEOSubactionMetaData* _subactionMetaData;
	NSString* _suggestionSectionType;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _age;
	int _autocompleteResultCellType;
	int _distanceToSuggestion;
	int _peopleSuggesterRank;
	int _poiOpenState;
	int _serverEntryType;
	int _serverItemIndexInSection;
	int _serverSectionIndex;
	int _suggestionType;
	int _tapBehavior;
	BOOL _discreteFeatureValuesAvailable;
	BOOL _isFavorite;
	BOOL _isProminentResult;
	BOOL _matchedUsingAddress;
	BOOL _matchedUsingEventName;
	BOOL _matchedUsingLabel;
	BOOL _matchedUsingName;
	BOOL _matchedUsingOrganization;
	BOOL _shownToUser;
	struct {
		unsigned has_contactRelevanceScore : 1;
		unsigned has_fractionOfMatch : 1;
		unsigned has_mapsSuggestionsContactRevelanceScore : 1;
		unsigned has_mapsSuggestionsIsTouristScore : 1;
		unsigned has_mapsSuggestionsPoiRevelanceScore : 1;
		unsigned has_age : 1;
		unsigned has_autocompleteResultCellType : 1;
		unsigned has_distanceToSuggestion : 1;
		unsigned has_peopleSuggesterRank : 1;
		unsigned has_poiOpenState : 1;
		unsigned has_serverEntryType : 1;
		unsigned has_serverItemIndexInSection : 1;
		unsigned has_serverSectionIndex : 1;
		unsigned has_suggestionType : 1;
		unsigned has_tapBehavior : 1;
		unsigned has_discreteFeatureValuesAvailable : 1;
		unsigned has_isFavorite : 1;
		unsigned has_isProminentResult : 1;
		unsigned has_matchedUsingAddress : 1;
		unsigned has_matchedUsingEventName : 1;
		unsigned has_matchedUsingLabel : 1;
		unsigned has_matchedUsingName : 1;
		unsigned has_matchedUsingOrganization : 1;
		unsigned has_shownToUser : 1;
		unsigned read_subactionMetaData : 1;
		unsigned read_suggestionSectionType : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasSuggestionType; 
@property (assign,nonatomic) int suggestionType; 
@property (assign,nonatomic) BOOL hasShownToUser; 
@property (assign,nonatomic) BOOL shownToUser; 
@property (assign,nonatomic) BOOL hasFractionOfMatch; 
@property (assign,nonatomic) double fractionOfMatch; 
@property (assign,nonatomic) BOOL hasDistanceToSuggestion; 
@property (assign,nonatomic) int distanceToSuggestion; 
@property (assign,nonatomic) BOOL hasContactRelevanceScore; 
@property (assign,nonatomic) double contactRelevanceScore; 
@property (assign,nonatomic) BOOL hasMatchedUsingName; 
@property (assign,nonatomic) BOOL matchedUsingName; 
@property (assign,nonatomic) BOOL hasMatchedUsingOrganization; 
@property (assign,nonatomic) BOOL matchedUsingOrganization; 
@property (assign,nonatomic) BOOL hasMatchedUsingAddress; 
@property (assign,nonatomic) BOOL matchedUsingAddress; 
@property (assign,nonatomic) BOOL hasMatchedUsingLabel; 
@property (assign,nonatomic) BOOL matchedUsingLabel; 
@property (assign,nonatomic) BOOL hasMatchedUsingEventName; 
@property (assign,nonatomic) BOOL matchedUsingEventName; 
@property (assign,nonatomic) BOOL hasPeopleSuggesterRank; 
@property (assign,nonatomic) int peopleSuggesterRank; 
@property (assign,nonatomic) BOOL hasAge; 
@property (assign,nonatomic) int age; 
@property (assign,nonatomic) BOOL hasServerEntryType; 
@property (assign,nonatomic) int serverEntryType; 
@property (assign,nonatomic) BOOL hasIsFavorite; 
@property (assign,nonatomic) BOOL isFavorite; 
@property (assign,nonatomic) BOOL hasPoiOpenState; 
@property (assign,nonatomic) int poiOpenState; 
@property (assign,nonatomic) BOOL hasMapsSuggestionsContactRevelanceScore; 
@property (assign,nonatomic) double mapsSuggestionsContactRevelanceScore; 
@property (assign,nonatomic) BOOL hasMapsSuggestionsPoiRevelanceScore; 
@property (assign,nonatomic) double mapsSuggestionsPoiRevelanceScore; 
@property (assign,nonatomic) BOOL hasMapsSuggestionsIsTouristScore; 
@property (assign,nonatomic) double mapsSuggestionsIsTouristScore; 
@property (assign,nonatomic) BOOL hasDiscreteFeatureValuesAvailable; 
@property (assign,nonatomic) BOOL discreteFeatureValuesAvailable; 
@property (nonatomic,readonly) BOOL hasSuggestionSectionType; 
@property (nonatomic,retain) NSString * suggestionSectionType; 
@property (assign,nonatomic) BOOL hasIsProminentResult; 
@property (assign,nonatomic) BOOL isProminentResult; 
@property (nonatomic,readonly) BOOL hasSubactionMetaData; 
@property (nonatomic,retain) GEOSubactionMetaData * subactionMetaData; 
@property (assign,nonatomic) BOOL hasAutocompleteResultCellType; 
@property (assign,nonatomic) int autocompleteResultCellType; 
@property (assign,nonatomic) BOOL hasServerSectionIndex; 
@property (assign,nonatomic) int serverSectionIndex; 
@property (assign,nonatomic) BOOL hasServerItemIndexInSection; 
@property (assign,nonatomic) int serverItemIndexInSection; 
@property (assign,nonatomic) BOOL hasTapBehavior; 
@property (assign,nonatomic) int tapBehavior; 
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
-(int)age;
-(void)setAge:(int)arg1 ;
-(void)setHasAge:(BOOL)arg1 ;
-(BOOL)hasAge;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(void)setSuggestionType:(int)arg1 ;
-(int)suggestionType;
-(void)setHasSuggestionType:(BOOL)arg1 ;
-(BOOL)hasSuggestionType;
-(id)suggestionTypeAsString:(int)arg1 ;
-(int)StringAsSuggestionType:(id)arg1 ;
-(void)setAutocompleteResultCellType:(int)arg1 ;
-(int)autocompleteResultCellType;
-(void)setHasAutocompleteResultCellType:(BOOL)arg1 ;
-(BOOL)hasAutocompleteResultCellType;
-(id)autocompleteResultCellTypeAsString:(int)arg1 ;
-(int)StringAsAutocompleteResultCellType:(id)arg1 ;
-(void)setTapBehavior:(int)arg1 ;
-(int)tapBehavior;
-(void)setHasTapBehavior:(BOOL)arg1 ;
-(BOOL)hasTapBehavior;
-(id)tapBehaviorAsString:(int)arg1 ;
-(int)StringAsTapBehavior:(id)arg1 ;
-(void)setIsProminentResult:(BOOL)arg1 ;
-(BOOL)isProminentResult;
-(void)setHasIsProminentResult:(BOOL)arg1 ;
-(BOOL)hasIsProminentResult;
-(NSString *)suggestionSectionType;
-(GEOSubactionMetaData *)subactionMetaData;
-(void)setShownToUser:(BOOL)arg1 ;
-(void)setFractionOfMatch:(double)arg1 ;
-(void)setDistanceToSuggestion:(int)arg1 ;
-(void)setContactRelevanceScore:(double)arg1 ;
-(void)setMatchedUsingName:(BOOL)arg1 ;
-(void)setMatchedUsingOrganization:(BOOL)arg1 ;
-(void)setMatchedUsingAddress:(BOOL)arg1 ;
-(void)setMatchedUsingLabel:(BOOL)arg1 ;
-(void)setMatchedUsingEventName:(BOOL)arg1 ;
-(void)setPeopleSuggesterRank:(int)arg1 ;
-(void)setServerEntryType:(int)arg1 ;
-(void)setIsFavorite:(BOOL)arg1 ;
-(void)setPoiOpenState:(int)arg1 ;
-(void)setMapsSuggestionsContactRevelanceScore:(double)arg1 ;
-(void)setMapsSuggestionsPoiRevelanceScore:(double)arg1 ;
-(void)setMapsSuggestionsIsTouristScore:(double)arg1 ;
-(void)setDiscreteFeatureValuesAvailable:(BOOL)arg1 ;
-(void)setSuggestionSectionType:(NSString *)arg1 ;
-(void)setSubactionMetaData:(GEOSubactionMetaData *)arg1 ;
-(void)setServerSectionIndex:(int)arg1 ;
-(void)setServerItemIndexInSection:(int)arg1 ;
-(BOOL)shownToUser;
-(void)setHasShownToUser:(BOOL)arg1 ;
-(BOOL)hasShownToUser;
-(double)fractionOfMatch;
-(void)setHasFractionOfMatch:(BOOL)arg1 ;
-(BOOL)hasFractionOfMatch;
-(int)distanceToSuggestion;
-(void)setHasDistanceToSuggestion:(BOOL)arg1 ;
-(BOOL)hasDistanceToSuggestion;
-(double)contactRelevanceScore;
-(void)setHasContactRelevanceScore:(BOOL)arg1 ;
-(BOOL)hasContactRelevanceScore;
-(BOOL)matchedUsingName;
-(void)setHasMatchedUsingName:(BOOL)arg1 ;
-(BOOL)hasMatchedUsingName;
-(BOOL)matchedUsingOrganization;
-(void)setHasMatchedUsingOrganization:(BOOL)arg1 ;
-(BOOL)hasMatchedUsingOrganization;
-(BOOL)matchedUsingAddress;
-(void)setHasMatchedUsingAddress:(BOOL)arg1 ;
-(BOOL)hasMatchedUsingAddress;
-(BOOL)matchedUsingLabel;
-(void)setHasMatchedUsingLabel:(BOOL)arg1 ;
-(BOOL)hasMatchedUsingLabel;
-(BOOL)matchedUsingEventName;
-(void)setHasMatchedUsingEventName:(BOOL)arg1 ;
-(BOOL)hasMatchedUsingEventName;
-(int)peopleSuggesterRank;
-(void)setHasPeopleSuggesterRank:(BOOL)arg1 ;
-(BOOL)hasPeopleSuggesterRank;
-(int)serverEntryType;
-(void)setHasServerEntryType:(BOOL)arg1 ;
-(BOOL)hasServerEntryType;
-(id)serverEntryTypeAsString:(int)arg1 ;
-(int)StringAsServerEntryType:(id)arg1 ;
-(BOOL)isFavorite;
-(void)setHasIsFavorite:(BOOL)arg1 ;
-(BOOL)hasIsFavorite;
-(int)poiOpenState;
-(void)setHasPoiOpenState:(BOOL)arg1 ;
-(BOOL)hasPoiOpenState;
-(id)poiOpenStateAsString:(int)arg1 ;
-(int)StringAsPoiOpenState:(id)arg1 ;
-(double)mapsSuggestionsContactRevelanceScore;
-(void)setHasMapsSuggestionsContactRevelanceScore:(BOOL)arg1 ;
-(BOOL)hasMapsSuggestionsContactRevelanceScore;
-(double)mapsSuggestionsPoiRevelanceScore;
-(void)setHasMapsSuggestionsPoiRevelanceScore:(BOOL)arg1 ;
-(BOOL)hasMapsSuggestionsPoiRevelanceScore;
-(double)mapsSuggestionsIsTouristScore;
-(void)setHasMapsSuggestionsIsTouristScore:(BOOL)arg1 ;
-(BOOL)hasMapsSuggestionsIsTouristScore;
-(BOOL)discreteFeatureValuesAvailable;
-(void)setHasDiscreteFeatureValuesAvailable:(BOOL)arg1 ;
-(BOOL)hasDiscreteFeatureValuesAvailable;
-(BOOL)hasSuggestionSectionType;
-(BOOL)hasSubactionMetaData;
-(int)serverSectionIndex;
-(void)setHasServerSectionIndex:(BOOL)arg1 ;
-(BOOL)hasServerSectionIndex;
-(int)serverItemIndexInSection;
-(void)setHasServerItemIndexInSection:(BOOL)arg1 ;
-(BOOL)hasServerItemIndexInSection;
@end

