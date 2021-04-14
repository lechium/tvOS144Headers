/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:31 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSMutableArray;

@interface GEOPDRating : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSMutableArray* _appleRatingCategorys;
	double _maxScore;
	double _score;
	int _numRatingsUsedForScore;
	int _ratingType;
	struct {
		unsigned has_maxScore : 1;
		unsigned has_score : 1;
		unsigned has_numRatingsUsedForScore : 1;
		unsigned has_ratingType : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasRatingType; 
@property (assign,nonatomic) int ratingType; 
@property (assign,nonatomic) BOOL hasScore; 
@property (assign,nonatomic) double score; 
@property (assign,nonatomic) BOOL hasMaxScore; 
@property (assign,nonatomic) double maxScore; 
@property (assign,nonatomic) BOOL hasNumRatingsUsedForScore; 
@property (assign,nonatomic) int numRatingsUsedForScore; 
@property (nonatomic,retain) NSMutableArray * appleRatingCategorys; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(id)ratingListForPlaceData:(id)arg1 type:(int)arg2 ;
+(id)ratingForPlaceData:(id)arg1 type:(int)arg2 ;
+(Class)appleRatingCategoryType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(double)score;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(double)maxScore;
-(void)setMaxScore:(double)arg1 ;
-(void)setScore:(double)arg1 ;
-(void)setHasScore:(BOOL)arg1 ;
-(BOOL)hasScore;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(int)ratingType;
-(NSMutableArray *)appleRatingCategorys;
-(id)displayTitle;
-(void)setRatingType:(int)arg1 ;
-(void)setNumRatingsUsedForScore:(int)arg1 ;
-(void)addAppleRatingCategory:(id)arg1 ;
-(unsigned long long)appleRatingCategorysCount;
-(void)clearAppleRatingCategorys;
-(id)appleRatingCategoryAtIndex:(unsigned long long)arg1 ;
-(void)setHasRatingType:(BOOL)arg1 ;
-(BOOL)hasRatingType;
-(id)ratingTypeAsString:(int)arg1 ;
-(int)StringAsRatingType:(id)arg1 ;
-(void)setHasMaxScore:(BOOL)arg1 ;
-(BOOL)hasMaxScore;
-(int)numRatingsUsedForScore;
-(void)setHasNumRatingsUsedForScore:(BOOL)arg1 ;
-(BOOL)hasNumRatingsUsedForScore;
-(void)setAppleRatingCategorys:(NSMutableArray *)arg1 ;
@end
