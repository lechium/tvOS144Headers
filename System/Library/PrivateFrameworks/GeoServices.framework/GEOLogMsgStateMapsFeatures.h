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

@interface GEOLogMsgStateMapsFeatures : PBCodable <NSCopying> {

	int _favoritesCount;
	int _followedPublisherCount;
	int _personalCollectionsCount;
	int _savedCollectionsCount;
	int _submittedPhotosCount;
	int _submittedRatingsCount;
	BOOL _homeFavoriteSet;
	BOOL _schoolFavoriteSet;
	BOOL _workFavoriteSet;
	struct {
		unsigned has_favoritesCount : 1;
		unsigned has_followedPublisherCount : 1;
		unsigned has_personalCollectionsCount : 1;
		unsigned has_savedCollectionsCount : 1;
		unsigned has_submittedPhotosCount : 1;
		unsigned has_submittedRatingsCount : 1;
		unsigned has_homeFavoriteSet : 1;
		unsigned has_schoolFavoriteSet : 1;
		unsigned has_workFavoriteSet : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasHomeFavoriteSet; 
@property (assign,nonatomic) BOOL homeFavoriteSet; 
@property (assign,nonatomic) BOOL hasWorkFavoriteSet; 
@property (assign,nonatomic) BOOL workFavoriteSet; 
@property (assign,nonatomic) BOOL hasSchoolFavoriteSet; 
@property (assign,nonatomic) BOOL schoolFavoriteSet; 
@property (assign,nonatomic) BOOL hasFavoritesCount; 
@property (assign,nonatomic) int favoritesCount; 
@property (assign,nonatomic) BOOL hasPersonalCollectionsCount; 
@property (assign,nonatomic) int personalCollectionsCount; 
@property (assign,nonatomic) BOOL hasSavedCollectionsCount; 
@property (assign,nonatomic) int savedCollectionsCount; 
@property (assign,nonatomic) BOOL hasFollowedPublisherCount; 
@property (assign,nonatomic) int followedPublisherCount; 
@property (assign,nonatomic) BOOL hasSubmittedRatingsCount; 
@property (assign,nonatomic) int submittedRatingsCount; 
@property (assign,nonatomic) BOOL hasSubmittedPhotosCount; 
@property (assign,nonatomic) int submittedPhotosCount; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(void)setHomeFavoriteSet:(BOOL)arg1 ;
-(void)setWorkFavoriteSet:(BOOL)arg1 ;
-(void)setSchoolFavoriteSet:(BOOL)arg1 ;
-(void)setFavoritesCount:(int)arg1 ;
-(void)setPersonalCollectionsCount:(int)arg1 ;
-(void)setSavedCollectionsCount:(int)arg1 ;
-(void)setFollowedPublisherCount:(int)arg1 ;
-(void)setSubmittedRatingsCount:(int)arg1 ;
-(void)setSubmittedPhotosCount:(int)arg1 ;
-(BOOL)homeFavoriteSet;
-(void)setHasHomeFavoriteSet:(BOOL)arg1 ;
-(BOOL)hasHomeFavoriteSet;
-(BOOL)workFavoriteSet;
-(void)setHasWorkFavoriteSet:(BOOL)arg1 ;
-(BOOL)hasWorkFavoriteSet;
-(BOOL)schoolFavoriteSet;
-(void)setHasSchoolFavoriteSet:(BOOL)arg1 ;
-(BOOL)hasSchoolFavoriteSet;
-(int)favoritesCount;
-(void)setHasFavoritesCount:(BOOL)arg1 ;
-(BOOL)hasFavoritesCount;
-(int)personalCollectionsCount;
-(void)setHasPersonalCollectionsCount:(BOOL)arg1 ;
-(BOOL)hasPersonalCollectionsCount;
-(int)savedCollectionsCount;
-(void)setHasSavedCollectionsCount:(BOOL)arg1 ;
-(BOOL)hasSavedCollectionsCount;
-(int)followedPublisherCount;
-(void)setHasFollowedPublisherCount:(BOOL)arg1 ;
-(BOOL)hasFollowedPublisherCount;
-(int)submittedRatingsCount;
-(void)setHasSubmittedRatingsCount:(BOOL)arg1 ;
-(BOOL)hasSubmittedRatingsCount;
-(int)submittedPhotosCount;
-(void)setHasSubmittedPhotosCount:(BOOL)arg1 ;
-(BOOL)hasSubmittedPhotosCount;
@end

