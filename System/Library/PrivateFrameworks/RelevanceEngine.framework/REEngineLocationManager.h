/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:27 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RelevanceEngine/RERelevanceEngineSubsystem.h>
#import <libobjc.A.dylib/REEngineLocationManagerProperties.h>

@class CLLocation, RELocationManager, REObserverStore;

@interface REEngineLocationManager : RERelevanceEngineSubsystem <REEngineLocationManagerProperties> {

	RELocationManager* _locationManager;
	RELocationManager* _simulatedLocationManager;
	REObserverStore* _observers;
	BOOL _monitoringLocation;
	CLLocation* _currentLocation;
	CLLocation* _location;

}

@property (retain) CLLocation * location;                                        //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) CLLocation * currentLocation;                       //@synthesize currentLocation=_currentLocation - In the implementation block
@property (nonatomic,readonly) BOOL monitoringLocation; 
@property (nonatomic,readonly) RELocationManager * locationManager; 
-(void)dealloc;
-(void)resume;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)pause;
-(CLLocation *)location;
-(void)setLocation:(CLLocation *)arg1 ;
-(CLLocation *)currentLocation;
-(void)setCurrentLocation:(CLLocation *)arg1 ;
-(RELocationManager *)locationManager;
-(id)initWithRelevanceEngine:(id)arg1 locationManager:(id)arg2 ;
-(void)_beginTraining;
-(void)_endTraining;
-(void)_updateLocationStatus;
-(BOOL)_wantsLocation;
-(id)_currentLocationManager;
-(void)_beginMonitoringLocationForManager:(id)arg1 ;
-(void)_stopMonitoringLocationForManager:(id)arg1 ;
-(void)_handleLocationUpdate:(id)arg1 ;
-(BOOL)monitoringLocation;
@end

