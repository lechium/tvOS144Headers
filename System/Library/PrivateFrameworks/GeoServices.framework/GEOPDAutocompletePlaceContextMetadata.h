/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:28 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray, NSString;

@interface GEOPDAutocompletePlaceContextMetadata : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE85* _clientizationFeatures;
	NSMutableArray* _alternateSearchableNames;
	NSString* _matchedDisplayNameLanguageCode;
	NSString* _matchedDisplayName;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _distanceDisplayThreshold;
	BOOL _enableLookInsideActionForVenuePois;
	BOOL _isDefaultName;
	BOOL _isLookAroundActionAllowed;
	BOOL _isProminentResult;
	BOOL _shouldSuppressDirectionsAction;
	struct {
		unsigned has_distanceDisplayThreshold : 1;
		unsigned has_enableLookInsideActionForVenuePois : 1;
		unsigned has_isDefaultName : 1;
		unsigned has_isLookAroundActionAllowed : 1;
		unsigned has_isProminentResult : 1;
		unsigned has_shouldSuppressDirectionsAction : 1;
		unsigned read_unknownFields : 1;
		unsigned read_clientizationFeatures : 1;
		unsigned read_alternateSearchableNames : 1;
		unsigned read_matchedDisplayNameLanguageCode : 1;
		unsigned read_matchedDisplayName : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasMatchedDisplayName; 
@property (nonatomic,retain) NSString * matchedDisplayName; 
@property (assign,nonatomic) BOOL hasIsDefaultName; 
@property (assign,nonatomic) BOOL isDefaultName; 
@property (assign,nonatomic) BOOL hasIsProminentResult; 
@property (assign,nonatomic) BOOL isProminentResult; 
@property (nonatomic,readonly) unsigned long long clientizationFeaturesCount; 
@property (nonatomic,readonly) int* clientizationFeatures; 
@property (nonatomic,readonly) BOOL hasMatchedDisplayNameLanguageCode; 
@property (nonatomic,retain) NSString * matchedDisplayNameLanguageCode; 
@property (assign,nonatomic) BOOL hasShouldSuppressDirectionsAction; 
@property (assign,nonatomic) BOOL shouldSuppressDirectionsAction; 
@property (assign,nonatomic) BOOL hasIsLookAroundActionAllowed; 
@property (assign,nonatomic) BOOL isLookAroundActionAllowed; 
@property (nonatomic,retain) NSMutableArray * alternateSearchableNames; 
@property (assign,nonatomic) BOOL hasDistanceDisplayThreshold; 
@property (assign,nonatomic) unsigned distanceDisplayThreshold; 
@property (assign,nonatomic) BOOL hasEnableLookInsideActionForVenuePois; 
@property (assign,nonatomic) BOOL enableLookInsideActionForVenuePois; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)alternateSearchableNameType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
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
-(NSString *)matchedDisplayName;
-(NSString *)matchedDisplayNameLanguageCode;
-(void)setMatchedDisplayName:(NSString *)arg1 ;
-(void)setIsDefaultName:(BOOL)arg1 ;
-(void)setIsProminentResult:(BOOL)arg1 ;
-(void)addClientizationFeature:(int)arg1 ;
-(void)setMatchedDisplayNameLanguageCode:(NSString *)arg1 ;
-(void)setShouldSuppressDirectionsAction:(BOOL)arg1 ;
-(void)setIsLookAroundActionAllowed:(BOOL)arg1 ;
-(void)addAlternateSearchableName:(id)arg1 ;
-(void)setDistanceDisplayThreshold:(unsigned)arg1 ;
-(void)setEnableLookInsideActionForVenuePois:(BOOL)arg1 ;
-(unsigned long long)clientizationFeaturesCount;
-(void)clearClientizationFeatures;
-(int)clientizationFeatureAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)alternateSearchableNamesCount;
-(void)clearAlternateSearchableNames;
-(id)alternateSearchableNameAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasMatchedDisplayName;
-(BOOL)isDefaultName;
-(void)setHasIsDefaultName:(BOOL)arg1 ;
-(BOOL)hasIsDefaultName;
-(BOOL)isProminentResult;
-(void)setHasIsProminentResult:(BOOL)arg1 ;
-(BOOL)hasIsProminentResult;
-(int*)clientizationFeatures;
-(void)setClientizationFeatures:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)clientizationFeaturesAsString:(int)arg1 ;
-(int)StringAsClientizationFeatures:(id)arg1 ;
-(BOOL)hasMatchedDisplayNameLanguageCode;
-(BOOL)shouldSuppressDirectionsAction;
-(void)setHasShouldSuppressDirectionsAction:(BOOL)arg1 ;
-(BOOL)hasShouldSuppressDirectionsAction;
-(BOOL)isLookAroundActionAllowed;
-(void)setHasIsLookAroundActionAllowed:(BOOL)arg1 ;
-(BOOL)hasIsLookAroundActionAllowed;
-(NSMutableArray *)alternateSearchableNames;
-(void)setAlternateSearchableNames:(NSMutableArray *)arg1 ;
-(unsigned)distanceDisplayThreshold;
-(void)setHasDistanceDisplayThreshold:(BOOL)arg1 ;
-(BOOL)hasDistanceDisplayThreshold;
-(BOOL)enableLookInsideActionForVenuePois;
-(void)setHasEnableLookInsideActionForVenuePois:(BOOL)arg1 ;
-(BOOL)hasEnableLookInsideActionForVenuePois;
@end

