/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:40 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Navigation/Navigation-Structs.h>
@class MNActiveRouteInfo;

@interface _MNTrackedAlternateRoute : NSObject {

	MNActiveRouteInfo* _alternateRoute;
	MNActiveRouteInfo* _mainRoute;
	PolylineCoordinate _divergenceCoordinate;

}

@property (nonatomic,retain) MNActiveRouteInfo * alternateRoute;                   //@synthesize alternateRoute=_alternateRoute - In the implementation block
@property (nonatomic,retain) MNActiveRouteInfo * mainRoute;                        //@synthesize mainRoute=_mainRoute - In the implementation block
@property (assign,nonatomic) PolylineCoordinate divergenceCoordinate;              //@synthesize divergenceCoordinate=_divergenceCoordinate - In the implementation block
-(MNActiveRouteInfo *)alternateRoute;
-(void)setMainRoute:(MNActiveRouteInfo *)arg1 ;
-(void)setAlternateRoute:(MNActiveRouteInfo *)arg1 ;
-(void)setDivergenceCoordinate:(PolylineCoordinate)arg1 ;
-(MNActiveRouteInfo *)mainRoute;
-(PolylineCoordinate)divergenceCoordinate;
@end

