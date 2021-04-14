/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:09 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreLocationProtobuf/CoreLocationProtobuf-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, CLPMeta;

@interface CLPIndoorCollectionRequest : PBRequest <NSCopying> {

	NSMutableArray* _bundleIds;
	NSMutableArray* _indoorCMAttitudes;
	NSMutableArray* _indoorCMPedometers;
	NSMutableArray* _indoorLocations;
	NSMutableArray* _indoorMotionActivitys;
	NSMutableArray* _indoorPressures;
	NSMutableArray* _indoorWifis;
	CLPMeta* _meta;

}

@property (nonatomic,retain) CLPMeta * meta;                                      //@synthesize meta=_meta - In the implementation block
@property (nonatomic,retain) NSMutableArray * indoorWifis;                        //@synthesize indoorWifis=_indoorWifis - In the implementation block
@property (nonatomic,retain) NSMutableArray * indoorLocations;                    //@synthesize indoorLocations=_indoorLocations - In the implementation block
@property (nonatomic,retain) NSMutableArray * indoorCMAttitudes;                  //@synthesize indoorCMAttitudes=_indoorCMAttitudes - In the implementation block
@property (nonatomic,retain) NSMutableArray * indoorCMPedometers;                 //@synthesize indoorCMPedometers=_indoorCMPedometers - In the implementation block
@property (nonatomic,retain) NSMutableArray * indoorMotionActivitys;              //@synthesize indoorMotionActivitys=_indoorMotionActivitys - In the implementation block
@property (nonatomic,retain) NSMutableArray * indoorPressures;                    //@synthesize indoorPressures=_indoorPressures - In the implementation block
@property (nonatomic,retain) NSMutableArray * bundleIds;                          //@synthesize bundleIds=_bundleIds - In the implementation block
+(Class)indoorWifisType;
+(Class)indoorLocationsType;
+(Class)indoorCMAttitudeType;
+(Class)indoorCMPedometerType;
+(Class)indoorMotionActivityType;
+(Class)indoorPressureType;
+(Class)bundleIdType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setMeta:(CLPMeta *)arg1 ;
-(CLPMeta *)meta;
-(void)addIndoorWifis:(id)arg1 ;
-(void)addIndoorLocations:(id)arg1 ;
-(void)addIndoorCMAttitude:(id)arg1 ;
-(void)addIndoorCMPedometer:(id)arg1 ;
-(void)addIndoorMotionActivity:(id)arg1 ;
-(void)addIndoorPressure:(id)arg1 ;
-(void)addBundleId:(id)arg1 ;
-(unsigned long long)indoorWifisCount;
-(void)clearIndoorWifis;
-(id)indoorWifisAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)indoorLocationsCount;
-(void)clearIndoorLocations;
-(id)indoorLocationsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)indoorCMAttitudesCount;
-(void)clearIndoorCMAttitudes;
-(id)indoorCMAttitudeAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)indoorCMPedometersCount;
-(void)clearIndoorCMPedometers;
-(id)indoorCMPedometerAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)indoorMotionActivitysCount;
-(void)clearIndoorMotionActivitys;
-(id)indoorMotionActivityAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)indoorPressuresCount;
-(void)clearIndoorPressures;
-(id)indoorPressureAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)bundleIdsCount;
-(void)clearBundleIds;
-(id)bundleIdAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)indoorWifis;
-(void)setIndoorWifis:(NSMutableArray *)arg1 ;
-(NSMutableArray *)indoorLocations;
-(void)setIndoorLocations:(NSMutableArray *)arg1 ;
-(NSMutableArray *)indoorCMAttitudes;
-(void)setIndoorCMAttitudes:(NSMutableArray *)arg1 ;
-(NSMutableArray *)indoorCMPedometers;
-(void)setIndoorCMPedometers:(NSMutableArray *)arg1 ;
-(NSMutableArray *)indoorMotionActivitys;
-(void)setIndoorMotionActivitys:(NSMutableArray *)arg1 ;
-(NSMutableArray *)indoorPressures;
-(void)setIndoorPressures:(NSMutableArray *)arg1 ;
-(NSMutableArray *)bundleIds;
-(void)setBundleIds:(NSMutableArray *)arg1 ;
@end
