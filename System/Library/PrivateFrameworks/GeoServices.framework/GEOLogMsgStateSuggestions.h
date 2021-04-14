/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:51 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSMutableArray, NSString;

@interface GEOLogMsgStateSuggestions : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSMutableArray* _displayedResults;
	NSString* _searchString;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _acSequenceNumber;
	int _searchFieldType;
	int _selectedIndex;
	struct {
		unsigned has_acSequenceNumber : 1;
		unsigned has_searchFieldType : 1;
		unsigned has_selectedIndex : 1;
		unsigned read_displayedResults : 1;
		unsigned read_searchString : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasSearchString; 
@property (nonatomic,retain) NSString * searchString; 
@property (nonatomic,retain) NSMutableArray * displayedResults; 
@property (assign,nonatomic) BOOL hasSelectedIndex; 
@property (assign,nonatomic) int selectedIndex; 
@property (assign,nonatomic) BOOL hasSearchFieldType; 
@property (assign,nonatomic) int searchFieldType; 
@property (assign,nonatomic) BOOL hasAcSequenceNumber; 
@property (assign,nonatomic) int acSequenceNumber; 
+(BOOL)isValid:(id)arg1 ;
+(Class)displayedResultType;
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
-(NSString *)searchString;
-(void)setSearchString:(NSString *)arg1 ;
-(BOOL)hasSearchString;
-(void)setAcSequenceNumber:(int)arg1 ;
-(void)setSelectedIndex:(int)arg1 ;
-(void)setSearchFieldType:(int)arg1 ;
-(void)addDisplayedResult:(id)arg1 ;
-(int)selectedIndex;
-(void)setHasSelectedIndex:(BOOL)arg1 ;
-(BOOL)hasSelectedIndex;
-(unsigned long long)displayedResultsCount;
-(void)clearDisplayedResults;
-(id)displayedResultAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)displayedResults;
-(void)setDisplayedResults:(NSMutableArray *)arg1 ;
-(int)searchFieldType;
-(void)setHasSearchFieldType:(BOOL)arg1 ;
-(BOOL)hasSearchFieldType;
-(id)searchFieldTypeAsString:(int)arg1 ;
-(int)StringAsSearchFieldType:(id)arg1 ;
-(int)acSequenceNumber;
-(void)setHasAcSequenceNumber:(BOOL)arg1 ;
-(BOOL)hasAcSequenceNumber;
@end

