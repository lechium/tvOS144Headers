/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:18 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/RTFrameworkProtocol.h>

@protocol OS_dispatch_queue;
@class NSXPCConnection, NSString, RTEventAgentHelper, RTTokenBucket, RTRoutineManagerRegistrantAction, RTRoutineManagerRegistrantScenarioTrigger, NSObject;

@interface RTRoutineManager : NSObject <RTFrameworkProtocol> {

	NSXPCConnection* _xpcConnection;
	/*^block*/id _visitHandler;
	/*^block*/id _leechedVisitHandler;
	/*^block*/id _leechedLowConfidenceVisitHandler;
	/*^block*/id _vehicleEventsHandler;
	NSString* _restorationIdentifier;
	RTEventAgentHelper* _eventAgentHelper;
	RTTokenBucket* _clientThrottle;
	RTRoutineManagerRegistrantAction* _actionRegistrant;
	RTRoutineManagerRegistrantScenarioTrigger* _scenarioTriggerRegistrant;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSXPCConnection * xpcConnection;                                                    //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (nonatomic,copy) id visitHandler;                                                                      //@synthesize visitHandler=_visitHandler - In the implementation block
@property (nonatomic,copy) id leechedVisitHandler;                                                               //@synthesize leechedVisitHandler=_leechedVisitHandler - In the implementation block
@property (nonatomic,copy) id leechedLowConfidenceVisitHandler;                                                  //@synthesize leechedLowConfidenceVisitHandler=_leechedLowConfidenceVisitHandler - In the implementation block
@property (nonatomic,copy) id vehicleEventsHandler;                                                              //@synthesize vehicleEventsHandler=_vehicleEventsHandler - In the implementation block
@property (nonatomic,retain) NSString * restorationIdentifier;                                                   //@synthesize restorationIdentifier=_restorationIdentifier - In the implementation block
@property (nonatomic,retain) RTEventAgentHelper * eventAgentHelper;                                              //@synthesize eventAgentHelper=_eventAgentHelper - In the implementation block
@property (nonatomic,retain) RTTokenBucket * clientThrottle;                                                     //@synthesize clientThrottle=_clientThrottle - In the implementation block
@property (nonatomic,retain) RTRoutineManagerRegistrantAction * actionRegistrant;                                //@synthesize actionRegistrant=_actionRegistrant - In the implementation block
@property (nonatomic,retain) RTRoutineManagerRegistrantScenarioTrigger * scenarioTriggerRegistrant;              //@synthesize scenarioTriggerRegistrant=_scenarioTriggerRegistrant - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                                 //@synthesize queue=_queue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultManager;
+(id)modeOfTransportationToString:(long long)arg1 ;
+(id)routineModeToString:(long long)arg1 ;
-(id)init;
-(void)dealloc;
-(void)enumerateObjectsWithOptions:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_createConnection;
-(NSXPCConnection *)xpcConnection;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(void)handleDaemonStart;
-(void)createConnection;
-(void)stopMonitoringVisits;
-(void)fetchLocationsOfInterestVisitedBetweenStartDate:(id)arg1 endDate:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)fetchPredictedLocationsOfInterestAssociatedToTitle:(id)arg1 location:(id)arg2 calendarIdentifier:(id)arg3 withHandler:(/*^block*/id)arg4 ;
-(void)fetchLocationsOfInterestAssociatedToIdentifier:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)userInteractionWithPredictedLocationOfInterest:(id)arg1 interaction:(unsigned long long)arg2 feedback:(id)arg3 ;
-(void)extendLifetimeOfVisitsWithIdentifiers:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)fetchLocationsOfInterestOfType:(long long)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)setRestorationIdentifier:(NSString *)arg1 ;
-(void)onVisit:(id)arg1 withError:(id)arg2 ;
-(void)onLeechedVisit:(id)arg1 withError:(id)arg2 ;
-(void)onLeechedLowConfidenceVisit:(id)arg1 withError:(id)arg2 ;
-(void)onScenarioTrigger:(id)arg1 withError:(id)arg2 ;
-(void)onVehicleEvents:(id)arg1 error:(id)arg2 ;
-(id)initWithRestorationIdentifier:(id)arg1 ;
-(void)fetchFormattedPostalAddressesFromMeCard:(/*^block*/id)arg1 ;
-(NSString *)restorationIdentifier;
-(id)visitHandler;
-(void)startMonitoringVisitsWithHandler:(/*^block*/id)arg1 ;
-(id)leechedVisitHandler;
-(void)startLeechingVisitsWithHandler:(/*^block*/id)arg1 ;
-(id)leechedLowConfidenceVisitHandler;
-(void)startLeechingLowConfidenceVisitsWithHandler:(/*^block*/id)arg1 ;
-(void)startMonitoringScenarioTriggerOfType:(unsigned long long)arg1 withHandler:(/*^block*/id)arg2 ;
-(id)vehicleEventsHandler;
-(void)startMonitoringVehicleEventsWithHandler:(/*^block*/id)arg1 ;
-(id)_proxyForServicingSelector:(SEL)arg1 asynchronous:(BOOL)arg2 withErrorHandler:(/*^block*/id)arg3 ;
-(id)_proxyForServicingSelector:(SEL)arg1 withErrorHandler:(/*^block*/id)arg2 ;
-(void)setRoutineEnabled:(BOOL)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)fetchNextPredictedLocationsOfInterestFromLocation:(id)arg1 startDate:(id)arg2 timeInterval:(double)arg3 withHandler:(/*^block*/id)arg4 ;
-(void)setVisitHandler:(id)arg1 ;
-(void)setLeechedVisitHandler:(id)arg1 ;
-(void)setLeechedLowConfidenceVisitHandler:(id)arg1 ;
-(void)vehicleEventAtLocation:(id)arg1 notes:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)clearAllVehicleEventsWithHandler:(/*^block*/id)arg1 ;
-(void)setVehicleEventsHandler:(id)arg1 ;
-(void)userInteractionWithPredictedLocationOfInterest:(id)arg1 interaction:(unsigned long long)arg2 feedback:(id)arg3 geoMapItem:(id)arg4 handler:(/*^block*/id)arg5 ;
-(BOOL)selectorIsWhitelisted:(SEL)arg1 ;
-(void)fetchTransitionsBetweenStartDate:(id)arg1 endDate:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)fetchRoutineEnabledWithHandler:(/*^block*/id)arg1 ;
-(void)fetchRoutineStateWithHandler:(/*^block*/id)arg1 ;
-(void)setRoutineEnabled:(BOOL)arg1 ;
-(void)clearRoutineWithHandler:(/*^block*/id)arg1 ;
-(void)fetchCloudSyncAuthorizationState:(/*^block*/id)arg1 ;
-(void)updateCloudSyncProvisionedForAccount:(BOOL)arg1 handler:(/*^block*/id)arg2 ;
-(void)enumerateStoredLocationsWithOptions:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)fetchRoutineModeFromLocation:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)fetchNextPredictedLocationsOfInterestWithHandler:(/*^block*/id)arg1 ;
-(void)fetchPredictedLocationsOfInterestOnDate:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)stopLeechingVisits;
-(void)stopLeechingLowConfidenceVisits;
-(void)fetchStoredVisitsWithOptions:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)fetchPlaceInferencesWithOptions:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)fetchPathToDiagnosticFilesWithHandler:(/*^block*/id)arg1 ;
-(void)stopMonitoringScenarioTriggerOfType:(unsigned long long)arg1 ;
-(void)fetchMonitoredScenarioTriggerTypesWithHandler:(/*^block*/id)arg1 ;
-(void)fetchPredictedExitDatesFromLocation:(id)arg1 onDate:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)fetchPredictedLocationsOfInterestBetweenStartDate:(id)arg1 endDate:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)fetchLocationOfInterestWithIdentifier:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)fetchLocationOfInterestAtLocation:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)fetchLocationsOfInterestWithinDistance:(double)arg1 ofLocation:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)fetchLocationsOfInterestVisitedSinceDate:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)fetchAllLocationsOfInterestForSettingsWithHandler:(/*^block*/id)arg1 ;
-(void)addLocationOfInterestOfType:(long long)arg1 mapItem:(id)arg2 customLabel:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)updateLocationOfInterestWithIdentifier:(id)arg1 type:(long long)arg2 mapItem:(id)arg3 customLabel:(id)arg4 handler:(/*^block*/id)arg5 ;
-(void)updateLocationOfInterestWithIdentifier:(id)arg1 mapItem:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)updateLocationOfInterestWithIdentifier:(id)arg1 type:(long long)arg2 handler:(/*^block*/id)arg3 ;
-(void)updateLocationOfInterestWithIdentifier:(id)arg1 customLabel:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)updateLocationOfInterestWithIdentifier:(id)arg1 type:(long long)arg2 customLabel:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)removeLocationOfInterestWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)removeVisitWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)extendLifetimeOfVisitWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)fetchLastVehicleEventsWithHandler:(/*^block*/id)arg1 ;
-(void)vehicleEventAtLocation:(id)arg1 notes:(id)arg2 ;
-(void)clearAllVehicleEvents;
-(void)clearAllVehicleEvents:(/*^block*/id)arg1 ;
-(void)updateVehicleEventWithIdentifier:(id)arg1 notes:(id)arg2 ;
-(void)updateVehicleEventWithIdentifier:(id)arg1 photo:(id)arg2 ;
-(void)updateVehicleEventWithIdentifier:(id)arg1 geoMapItem:(id)arg2 ;
-(void)updateVehicleEventWithIdentifier:(id)arg1 location:(id)arg2 ;
-(void)engageInVehicleEventWithIdentifier:(id)arg1 ;
-(void)stopMonitoringVehicleEvents;
-(void)fetchAutomaticVehicleEventDetectionSupportedWithHandler:(/*^block*/id)arg1 ;
-(void)stopMonitoringNextPredictedLocationsOfInterest;
-(RTEventAgentHelper *)eventAgentHelper;
-(void)setEventAgentHelper:(RTEventAgentHelper *)arg1 ;
-(RTTokenBucket *)clientThrottle;
-(void)setClientThrottle:(RTTokenBucket *)arg1 ;
-(RTRoutineManagerRegistrantAction *)actionRegistrant;
-(void)setActionRegistrant:(RTRoutineManagerRegistrantAction *)arg1 ;
-(RTRoutineManagerRegistrantScenarioTrigger *)scenarioTriggerRegistrant;
-(void)setScenarioTriggerRegistrant:(RTRoutineManagerRegistrantScenarioTrigger *)arg1 ;
-(void)fetchCurrentPredictedLocationsOfInterestLookingBack:(double)arg1 lookingAhead:(double)arg2 handler:(/*^block*/id)arg3 ;
-(void)performBluePOIQueryLookingBack:(double)arg1 lookingAhead:(double)arg2 handler:(/*^block*/id)arg3 ;
@end

