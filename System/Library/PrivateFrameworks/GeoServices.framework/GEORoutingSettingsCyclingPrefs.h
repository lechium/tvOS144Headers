/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:52 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEORoutingSettingsCyclingPrefs : PBCodable <NSCopying> {

	BOOL _autoRecordWorkout;
	BOOL _avoidBusyRoads;
	BOOL _avoidHills;
	BOOL _avoidStairs;
	BOOL _eBike;
	struct {
		unsigned has_autoRecordWorkout : 1;
		unsigned has_avoidBusyRoads : 1;
		unsigned has_avoidHills : 1;
		unsigned has_avoidStairs : 1;
		unsigned has_eBike : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasAvoidStairs; 
@property (assign,nonatomic) BOOL avoidStairs; 
@property (assign,nonatomic) BOOL hasAvoidHills; 
@property (assign,nonatomic) BOOL avoidHills; 
@property (assign,nonatomic) BOOL hasAvoidBusyRoads; 
@property (assign,nonatomic) BOOL avoidBusyRoads; 
@property (assign,nonatomic) BOOL hasEBike; 
@property (assign,nonatomic) BOOL eBike; 
@property (assign,nonatomic) BOOL hasAutoRecordWorkout; 
@property (assign,nonatomic) BOOL autoRecordWorkout; 
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
-(void)setAvoidStairs:(BOOL)arg1 ;
-(void)setAvoidHills:(BOOL)arg1 ;
-(void)setAvoidBusyRoads:(BOOL)arg1 ;
-(BOOL)avoidStairs;
-(void)setHasAvoidStairs:(BOOL)arg1 ;
-(BOOL)hasAvoidStairs;
-(BOOL)avoidHills;
-(void)setHasAvoidHills:(BOOL)arg1 ;
-(BOOL)hasAvoidHills;
-(BOOL)avoidBusyRoads;
-(void)setHasAvoidBusyRoads:(BOOL)arg1 ;
-(BOOL)hasAvoidBusyRoads;
-(void)setEBike:(BOOL)arg1 ;
-(BOOL)eBike;
-(void)setHasEBike:(BOOL)arg1 ;
-(BOOL)hasEBike;
-(void)setAutoRecordWorkout:(BOOL)arg1 ;
-(BOOL)autoRecordWorkout;
-(void)setHasAutoRecordWorkout:(BOOL)arg1 ;
-(BOOL)hasAutoRecordWorkout;
@end

