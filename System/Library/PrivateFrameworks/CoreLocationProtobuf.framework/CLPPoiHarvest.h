/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:10 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreLocationProtobuf/CoreLocationProtobuf-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, CLPPoiTriggerEvent;

@interface CLPPoiHarvest : PBCodable <NSCopying> {

	NSMutableArray* _accessPoints;
	NSMutableArray* _locations;
	CLPPoiTriggerEvent* _triggerEvent;

}

@property (nonatomic,retain) CLPPoiTriggerEvent * triggerEvent;              //@synthesize triggerEvent=_triggerEvent - In the implementation block
@property (nonatomic,retain) NSMutableArray * locations;                     //@synthesize locations=_locations - In the implementation block
@property (nonatomic,retain) NSMutableArray * accessPoints;                  //@synthesize accessPoints=_accessPoints - In the implementation block
+(Class)locationsType;
+(Class)accessPointsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSMutableArray *)locations;
-(void)setLocations:(NSMutableArray *)arg1 ;
-(void)addLocations:(id)arg1 ;
-(unsigned long long)locationsCount;
-(void)clearLocations;
-(id)locationsAtIndex:(unsigned long long)arg1 ;
-(void)addAccessPoints:(id)arg1 ;
-(void)setTriggerEvent:(CLPPoiTriggerEvent *)arg1 ;
-(unsigned long long)accessPointsCount;
-(void)clearAccessPoints;
-(id)accessPointsAtIndex:(unsigned long long)arg1 ;
-(CLPPoiTriggerEvent *)triggerEvent;
-(NSMutableArray *)accessPoints;
-(void)setAccessPoints:(NSMutableArray *)arg1 ;
@end

