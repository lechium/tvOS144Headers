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

@class PBDataReader, GEOCollectionDetails, GEOPublisherDetails;

@interface GEOLogMsgStateCuratedCollection : PBCodable <NSCopying> {

	PBDataReader* _reader;
	SCD_Struct_GE85* _impossibleActions;
	SCD_Struct_GE85* _possibleActions;
	GEOCollectionDetails* _collectionDetails;
	GEOPublisherDetails* _publisherDetails;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _horizontalIndex;
	int _placecardType;
	unsigned _verticalIndex;
	struct {
		unsigned has_horizontalIndex : 1;
		unsigned has_placecardType : 1;
		unsigned has_verticalIndex : 1;
		unsigned read_impossibleActions : 1;
		unsigned read_possibleActions : 1;
		unsigned read_collectionDetails : 1;
		unsigned read_publisherDetails : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasPublisherDetails; 
@property (nonatomic,retain) GEOPublisherDetails * publisherDetails; 
@property (nonatomic,readonly) BOOL hasCollectionDetails; 
@property (nonatomic,retain) GEOCollectionDetails * collectionDetails; 
@property (assign,nonatomic) BOOL hasPlacecardType; 
@property (assign,nonatomic) int placecardType; 
@property (nonatomic,readonly) unsigned long long possibleActionsCount; 
@property (nonatomic,readonly) int* possibleActions; 
@property (nonatomic,readonly) unsigned long long impossibleActionsCount; 
@property (nonatomic,readonly) int* impossibleActions; 
@property (assign,nonatomic) BOOL hasVerticalIndex; 
@property (assign,nonatomic) unsigned verticalIndex; 
@property (assign,nonatomic) BOOL hasHorizontalIndex; 
@property (assign,nonatomic) unsigned horizontalIndex; 
+(BOOL)isValid:(id)arg1 ;
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
-(void)addPossibleAction:(int)arg1 ;
-(void)setPlacecardType:(int)arg1 ;
-(void)setPublisherDetails:(GEOPublisherDetails *)arg1 ;
-(GEOPublisherDetails *)publisherDetails;
-(void)setCollectionDetails:(GEOCollectionDetails *)arg1 ;
-(GEOCollectionDetails *)collectionDetails;
-(void)setVerticalIndex:(unsigned)arg1 ;
-(void)setHorizontalIndex:(unsigned)arg1 ;
-(void)addImpossibleAction:(int)arg1 ;
-(unsigned long long)possibleActionsCount;
-(void)clearPossibleActions;
-(int)possibleActionAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)impossibleActionsCount;
-(void)clearImpossibleActions;
-(int)impossibleActionAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasPublisherDetails;
-(BOOL)hasCollectionDetails;
-(int)placecardType;
-(void)setHasPlacecardType:(BOOL)arg1 ;
-(BOOL)hasPlacecardType;
-(id)placecardTypeAsString:(int)arg1 ;
-(int)StringAsPlacecardType:(id)arg1 ;
-(int*)possibleActions;
-(void)setPossibleActions:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)possibleActionsAsString:(int)arg1 ;
-(int)StringAsPossibleActions:(id)arg1 ;
-(int*)impossibleActions;
-(void)setImpossibleActions:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)impossibleActionsAsString:(int)arg1 ;
-(int)StringAsImpossibleActions:(id)arg1 ;
-(unsigned)verticalIndex;
-(void)setHasVerticalIndex:(BOOL)arg1 ;
-(BOOL)hasVerticalIndex;
-(unsigned)horizontalIndex;
-(void)setHasHorizontalIndex:(BOOL)arg1 ;
-(BOOL)hasHorizontalIndex;
@end

