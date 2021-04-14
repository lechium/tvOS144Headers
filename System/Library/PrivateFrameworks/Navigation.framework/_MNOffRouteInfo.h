/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:40 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Navigation/Navigation-Structs.h>
@class NSDate, GEOComposedWaypoint;

@interface _MNOffRouteInfo : NSObject {

	NSDate* _date;
	NSDate* _lastUpddate;
	GEOComposedWaypoint* _destination;
	double _originalDistanceFromDestination;
	double _distancePenalty;
	double _throttledReroutesPenalty;
	double _penalty;

}

@property (nonatomic,readonly) double penalty;              //@synthesize penalty=_penalty - In the implementation block
-(id)description;
-(double)penalty;
-(SCD_Struct_MN6)_coordinateFromWaypoint:(id)arg1 ;
-(id)initWithCurrentDate:(id)arg1 location:(id)arg2 destination:(id)arg3 ;
-(void)updateWithCurrentDate:(id)arg1 location:(id)arg2 isMostRecentReroute:(BOOL)arg3 throttledReroutesCount:(unsigned long long)arg4 ;
@end

