/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:20 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class GEORoutePreloader, GEOComposedRoute;


@protocol GEORoutePreloadStrategy <NSObject>
@property (assign,nonatomic,__weak) GEORoutePreloader * preloader; 
@property (nonatomic,retain) GEOComposedRoute * route; 
@required
-(void)start;
-(void)stop;
-(void)setPreloader:(id)arg1;
-(void)updateWithRoute:(id)arg1 routeMatch:(id)arg2;
-(void)performTearDown;
-(GEOComposedRoute *)route;
-(void)updateWithRouteMatch:(id)arg1;
-(void)observedNetworkQualityDidChangeFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;
-(void)setRoute:(id)arg1;
-(GEORoutePreloader *)preloader;

@end

