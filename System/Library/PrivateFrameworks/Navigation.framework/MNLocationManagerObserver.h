/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:39 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MNLocationManagerObserver <NSObject>
@required
-(void)locationManagerDidResumeLocationUpdates:(id)arg1;
-(void)locationManagerDidPauseLocationUpdates:(id)arg1;
-(void)locationManagerUpdatedLocation:(id)arg1;
-(void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2;
-(void)locationManagerDidReset:(id)arg1;
-(BOOL)locationManagerShouldPauseLocationUpdates:(id)arg1;
-(void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;
-(void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;

@end

