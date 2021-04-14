/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:47 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol GEOMapItem;
#import <GeoServices/GeoServices-Structs.h>
@class GEOPlace, NSString, GEOMapRegion;

@interface GEOMapItemAdditionalPlaceInfo : NSObject {

	GEOPlace* _place;
	id<GEOMapItem> _mapItem;

}

@property (nonatomic,readonly) id<GEOMapItem> mapItem;                          //@synthesize mapItem=_mapItem - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) int placeType; 
@property (nonatomic,readonly) double areaInMeters; 
@property (nonatomic,readonly) GEOCoarseLocationLatLng coordinate; 
@property (nonatomic,readonly) GEOMapRegion * mapRegion; 
-(NSString *)name;
-(GEOCoarseLocationLatLng)coordinate;
-(int)placeType;
-(id<GEOMapItem>)mapItem;
-(GEOMapRegion *)mapRegion;
-(id)initWithPlace:(id)arg1 ;
-(id)initWithMapItem:(id)arg1 ;
-(id)initWithName:(id)arg1 placeType:(int)arg2 areaInMeters:(double)arg3 ;
-(double)areaInMeters;
@end

