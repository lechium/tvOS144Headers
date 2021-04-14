/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:12 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOMapAccessTransitNodeBase.h>
#import <libobjc.A.dylib/GEOMapTransitStop.h>

@protocol GEOMapTransitHall;
@class NSString;

@interface GEOMapAccessTransitStop : GEOMapAccessTransitNodeBase <GEOMapTransitStop> {

	id<GEOMapTransitHall> _hall;

}

@property (nonatomic,readonly) unsigned long long hallID; 
@property (nonatomic,readonly) GEOCoarseLocationLatLng coordinate; 
@property (nonatomic,readonly) unsigned long long transitID; 
@property (nonatomic,readonly) NSString * internalName; 
@property (nonatomic,readonly) double boundingRadius; 
@property (nonatomic,readonly) SCD_Struct_GE36 boundingRect; 
@property (nonatomic,readonly) GEOCoarseLocationLatLng* polygonPoints; 
@property (nonatomic,readonly) long long polygonPointsCount; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)findAccessPoints:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(unsigned long long)hallID;
-(id)findHall:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)findLinksIn:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)findLinksOut:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

