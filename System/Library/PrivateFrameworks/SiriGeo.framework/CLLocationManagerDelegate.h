/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:57 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SiriGeo.framework/SiriGeo
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CLLocationManagerDelegate <NSObject>
@optional
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
-(void)locationManagerDidResumeLocationUpdates:(id)arg1;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2;
-(void)locationManager:(id)arg1 monitoringDidFailForRegion:(id)arg2 withError:(id)arg3;
-(void)locationManager:(id)arg1 rangingBeaconsDidFailForRegion:(id)arg2 withError:(id)arg3;
-(void)locationManager:(id)arg1 didFailRangingBeaconsForConstraint:(id)arg2 error:(id)arg3;
-(void)locationManagerDidChangeAuthorization:(id)arg1;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
-(void)locationManager:(id)arg1 didUpdateToLocation:(id)arg2 fromLocation:(id)arg3;
-(void)locationManager:(id)arg1 didUpdateHeading:(id)arg2;
-(BOOL)locationManagerShouldDisplayHeadingCalibration:(id)arg1;
-(void)locationManager:(id)arg1 didEnterRegion:(id)arg2;
-(void)locationManager:(id)arg1 didExitRegion:(id)arg2;
-(void)locationManager:(id)arg1 didDetermineState:(long long)arg2 forRegion:(id)arg3;
-(void)locationManager:(id)arg1 didRangeBeacons:(id)arg2 inRegion:(id)arg3;
-(void)locationManager:(id)arg1 didRangeBeacons:(id)arg2 satisfyingConstraint:(id)arg3;
-(void)locationManager:(id)arg1 didStartMonitoringForRegion:(id)arg2;
-(void)locationManagerDidPauseLocationUpdates:(id)arg1;
-(void)locationManager:(id)arg1 didFinishDeferredUpdatesWithError:(id)arg2;
-(void)locationManager:(id)arg1 didVisit:(id)arg2;

@end

