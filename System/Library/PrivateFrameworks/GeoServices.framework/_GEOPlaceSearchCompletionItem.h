/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:20 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEOCompletionItemPrivate.h>

@protocol GEOMapItem;
@class GEOPDAutocompleteEntry, GEOMapServiceTraits, NSArray, GEOSearchCategory, GEOCollectionResult, GEOPublisherResult, GEOResolvedItem, GEODirectionIntent, GEORetainedSearchMetadata, GEOServerResultScoreMetadata, NSData, GEOMapItemIdentifier, NSString;

@interface _GEOPlaceSearchCompletionItem : NSObject <GEOCompletionItemPrivate> {

	GEOMapServiceTraits* _traits;
	int _entryListIndex;
	int _entryIndex;
	GEOPDAutocompleteEntry* _entry;
	NSArray* _displayLines;
	NSArray* _lineHighlights;
	id<GEOMapItem> _mapItem;
	GEOSearchCategory* _category;
	GEOCollectionResult* _collectionResult;
	GEOPublisherResult* _publisherResult;

}

@property (nonatomic,readonly) GEOPDAutocompleteEntry * entry;                                                                      //@synthesize entry=_entry - In the implementation block
@property (getter=_placeDataAutocompleteEntry,nonatomic,readonly) GEOPDAutocompleteEntry * placeDataAutocompleteEntry; 
@property (nonatomic,readonly) NSArray * displayLines;                                                                              //@synthesize displayLines=_displayLines - In the implementation block
@property (nonatomic,readonly) id<GEOMapItem> geoMapItem; 
@property (nonatomic,readonly) GEOSearchCategory * searchCategory; 
@property (nonatomic,readonly) GEOResolvedItem * clientResolved; 
@property (nonatomic,readonly) GEODirectionIntent * directionIntent; 
@property (nonatomic,readonly) GEORetainedSearchMetadata * retainedSearchMetadata; 
@property (nonatomic,readonly) BOOL hasSortPriority; 
@property (nonatomic,readonly) long long sortPriority; 
@property (nonatomic,readonly) long long entryTapBehavior; 
@property (nonatomic,readonly) long long autocompleteCellType; 
@property (nonatomic,readonly) GEOServerResultScoreMetadata * serverResultScoreMetadata; 
@property (nonatomic,readonly) NSData * entryMetadata; 
@property (nonatomic,readonly) NSData * metadata; 
@property (nonatomic,readonly) long long type; 
@property (nonatomic,readonly) GEOMapItemIdentifier * identifier; 
@property (nonatomic,readonly) int placeType; 
@property (nonatomic,readonly) BOOL hasDisambiguationRadiusMeters; 
@property (nonatomic,readonly) float disambiguationRadiusMeters; 
@property (nonatomic,readonly) BOOL hasQueryAcceleratorAffordanceEnabled; 
@property (nonatomic,readonly) NSString * queryAcceleratorCompletionString; 
@property (nonatomic,readonly) GEOCollectionResult * collectionResult; 
@property (nonatomic,readonly) GEOPublisherResult * publisherResult; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(long long)type;
-(GEOMapItemIdentifier *)identifier;
-(NSData *)metadata;
-(int)placeType;
-(GEOPDAutocompleteEntry *)entry;
-(long long)sortPriority;
-(BOOL)hasSortPriority;
-(GEODirectionIntent *)directionIntent;
-(GEOResolvedItem *)clientResolved;
-(GEOServerResultScoreMetadata *)serverResultScoreMetadata;
-(NSString *)queryAcceleratorCompletionString;
-(float)disambiguationRadiusMeters;
-(BOOL)hasDisambiguationRadiusMeters;
-(id<GEOMapItem>)geoMapItem;
-(GEORetainedSearchMetadata *)retainedSearchMetadata;
-(id)initWithEntry:(id)arg1 traits:(id)arg2 entryListIndex:(int)arg3 entryIndex:(int)arg4 mapItems:(id)arg5 collections:(id)arg6 publishers:(id)arg7 ;
-(id)queryLine;
-(id)highlightsForLine:(unsigned long long)arg1 ;
-(id)calloutTitle;
-(BOOL)getCoordinate:(GEOCoarseLocationLatLng*)arg1 ;
-(void)sendFeedback;
-(NSArray *)displayLines;
-(GEOSearchCategory *)searchCategory;
-(long long)entryTapBehavior;
-(long long)autocompleteCellType;
-(NSData *)entryMetadata;
-(BOOL)hasQueryAcceleratorAffordanceEnabled;
-(GEOCollectionResult *)collectionResult;
-(GEOPublisherResult *)publisherResult;
-(id)_placeDataAutocompleteEntry;
@end

