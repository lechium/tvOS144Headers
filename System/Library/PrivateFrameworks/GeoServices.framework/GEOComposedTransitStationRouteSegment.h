/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:48 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOComposedTransitBaseRouteSegment.h>

@interface GEOComposedTransitStationRouteSegment : GEOComposedTransitBaseRouteSegment
-(BOOL)isTransfer;
-(id)initWithComposedRoute:(id)arg1 decoderData:(id)arg2 stepRange:(NSRange)arg3 transitStepRange:(NSRange)arg4 pointRange:(NSRange)arg5 ;
-(BOOL)hasEnterStationManeuver;
-(BOOL)hasExitStationManeuver;
@end
