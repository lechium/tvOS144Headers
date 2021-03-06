/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:39 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Navigation/Navigation-Structs.h>
@interface MNRouteCoordinateWithType : NSObject {

	unsigned long long _significanceType;
	PolylineCoordinate _routeCoordinate;

}

@property (assign,nonatomic) unsigned long long significanceType;              //@synthesize significanceType=_significanceType - In the implementation block
@property (assign,nonatomic) PolylineCoordinate routeCoordinate;               //@synthesize routeCoordinate=_routeCoordinate - In the implementation block
+(id)divergenceCoordinate:(PolylineCoordinate)arg1 ;
+(id)convergenceCoordinate:(PolylineCoordinate)arg1 ;
-(id)description;
-(PolylineCoordinate)routeCoordinate;
-(void)setRouteCoordinate:(PolylineCoordinate)arg1 ;
-(unsigned long long)significanceType;
-(void)setSignificanceType:(unsigned long long)arg1 ;
@end

