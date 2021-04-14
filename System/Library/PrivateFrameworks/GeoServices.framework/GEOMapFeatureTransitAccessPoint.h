/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:46 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <GeoServices/GeoServices-Structs.h>
@interface GEOMapFeatureTransitAccessPoint : NSObject {

	SCD_Struct_GE237* _feature;
	GEOCoarseLocationLatLng _coordinate;

}

@property (nonatomic,readonly) SCD_Struct_GE237* feature; 
@property (nonatomic,readonly) GEOCoarseLocationLatLng coordinate;              //@synthesize coordinate=_coordinate - In the implementation block
@property (nonatomic,readonly) BOOL isEntrance; 
@property (nonatomic,readonly) BOOL isExit; 
@property (nonatomic,readonly) double radiusMeters; 
-(void)dealloc;
-(GEOCoarseLocationLatLng)coordinate;
-(SCD_Struct_GE237*)feature;
-(id)initWithFeature:(SCD_Struct_GE237*)arg1 ;
-(BOOL)isEntrance;
-(double)radiusMeters;
-(BOOL)isExit;
@end

