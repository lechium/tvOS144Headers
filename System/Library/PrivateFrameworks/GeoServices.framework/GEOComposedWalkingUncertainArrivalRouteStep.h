/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:48 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOComposedWalkingRouteStep.h>

@class NSArray;

@interface GEOComposedWalkingUncertainArrivalRouteStep : GEOComposedWalkingRouteStep {

	NSArray* _aggregatedGEOSteps;
	double _aggregatedStepsDistance;
	unsigned _aggregatedStepsDuration;

}
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)duration;
-(double)distance;
-(BOOL)isUncertainArrival;
-(unsigned)_calculateAggregatedStepsDuration;
-(double)_calculateAggregatedStepsDistance;
-(id)initWithComposedRoute:(id)arg1 aggregatedGEOSteps:(id)arg2 stepIndex:(unsigned long long)arg3 pointRange:(NSRange)arg4 maneuverPointRange:(NSRange)arg5 ;
@end

