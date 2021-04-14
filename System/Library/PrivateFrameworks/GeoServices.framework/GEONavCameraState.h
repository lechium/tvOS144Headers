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

@interface GEONavCameraState : PBCodable <NSCopying> {

	int _distanceToManeuver;
	int _speedBucket;
	int _upcomingManeuverType;
	BOOL _isGroupedManeuver;
	struct {
		unsigned has_distanceToManeuver : 1;
		unsigned has_speedBucket : 1;
		unsigned has_upcomingManeuverType : 1;
		unsigned has_isGroupedManeuver : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasUpcomingManeuverType; 
@property (assign,nonatomic) int upcomingManeuverType; 
@property (assign,nonatomic) BOOL hasDistanceToManeuver; 
@property (assign,nonatomic) int distanceToManeuver; 
@property (assign,nonatomic) BOOL hasIsGroupedManeuver; 
@property (assign,nonatomic) BOOL isGroupedManeuver; 
@property (assign,nonatomic) BOOL hasSpeedBucket; 
@property (assign,nonatomic) int speedBucket; 
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
-(void)setDistanceToManeuver:(int)arg1 ;
-(int)distanceToManeuver;
-(void)setHasDistanceToManeuver:(BOOL)arg1 ;
-(BOOL)hasDistanceToManeuver;
-(void)setUpcomingManeuverType:(int)arg1 ;
-(void)setIsGroupedManeuver:(BOOL)arg1 ;
-(void)setSpeedBucket:(int)arg1 ;
-(int)upcomingManeuverType;
-(void)setHasUpcomingManeuverType:(BOOL)arg1 ;
-(BOOL)hasUpcomingManeuverType;
-(id)upcomingManeuverTypeAsString:(int)arg1 ;
-(int)StringAsUpcomingManeuverType:(id)arg1 ;
-(id)distanceToManeuverAsString:(int)arg1 ;
-(int)StringAsDistanceToManeuver:(id)arg1 ;
-(BOOL)isGroupedManeuver;
-(void)setHasIsGroupedManeuver:(BOOL)arg1 ;
-(BOOL)hasIsGroupedManeuver;
-(int)speedBucket;
-(void)setHasSpeedBucket:(BOOL)arg1 ;
-(BOOL)hasSpeedBucket;
-(id)speedBucketAsString:(int)arg1 ;
-(int)StringAsSpeedBucket:(id)arg1 ;
@end

