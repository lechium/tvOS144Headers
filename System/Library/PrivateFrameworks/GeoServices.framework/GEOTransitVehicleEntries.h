/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:13 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSArray;


@protocol GEOTransitVehicleEntries <NSObject>
@property (nonatomic,readonly) unsigned long long firstTripID; 
@property (nonatomic,readonly) unsigned long long tripIDForNextUpcomingDeparture; 
@property (nonatomic,copy,readonly) NSArray * tripIDs; 
@property (nonatomic,copy,readonly) NSArray * upcomingTripIDs; 
@required
-(NSArray *)tripIDs;
-(unsigned long long)firstTripID;
-(unsigned long long)tripIDForNextUpcomingDeparture;
-(NSArray *)upcomingTripIDs;

@end
