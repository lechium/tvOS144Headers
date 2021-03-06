/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:37 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Navigation/Navigation-Structs.h>
#import <libobjc.A.dylib/MNNavigationSessionObserver.h>
#import <libobjc.A.dylib/MNSessionUpdateManagerDelegate.h>

@class MNObserverHashTable, GEOApplicationAuditToken, MNLocation, MNNavigationSession, NSString;

@interface MNLocationTracker : NSObject <MNNavigationSessionObserver, MNSessionUpdateManagerDelegate> {

	MNObserverHashTable* _safeDelegate;
	int _state;
	GEOApplicationAuditToken* _auditToken;
	MNLocation* _lastMatchedLocation;
	MNNavigationSession* _navigationSession;
	BOOL _localizeRoadNames;

}

@property (nonatomic,readonly) MNObserverHashTable * safeDelegate;                                                         //@synthesize safeDelegate=_safeDelegate - In the implementation block
@property (nonatomic,__weak,readonly) MNNavigationSession * navigationSession;                                             //@synthesize navigationSession=_navigationSession - In the implementation block
@property (assign,setter=_setState:,nonatomic) int state;                                                                  //@synthesize state=_state - In the implementation block
@property (setter=_setAuditToken:,getter=_auditToken,nonatomic,retain) GEOApplicationAuditToken * auditToken;              //@synthesize auditToken=_auditToken - In the implementation block
@property (nonatomic,readonly) int transportType; 
@property (nonatomic,readonly) MNLocation * lastMatchedLocation;                                                           //@synthesize lastMatchedLocation=_lastMatchedLocation - In the implementation block
@property (nonatomic,readonly) BOOL isRerouting; 
@property (nonatomic,readonly) BOOL hasArrived; 
@property (nonatomic,readonly) BOOL shouldProjectAlongRoute; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(int)state;
-(void)resume;
-(void)pause;
-(id)_auditToken;
-(int)transportType;
-(void)_defaultsDidChange;
-(BOOL)hasArrived;
-(BOOL)paused;
-(void)_setState:(int)arg1 ;
-(void)_updateShouldLocalizeRoadNames;
-(id)_matchedLocationForLocation:(id)arg1 ;
-(void)_switchedToStepAtIndex:(unsigned long long)arg1 ;
-(void)updateManager:(id)arg1 willSendTransitUpdateRequests:(id)arg2 ;
-(void)updateManager:(id)arg1 didReceiveTransitUpdateResponse:(id)arg2 ;
-(void)updateManager:(id)arg1 willSendTransitUpdateRequestForRouteIDs:(id)arg2 ;
-(void)updateManager:(id)arg1 didReceiveTransitUpdates:(id)arg2 ;
-(void)updateManager:(id)arg1 didReceiveTransitError:(id)arg2 ;
-(void)updateManager:(id)arg1 willSendETARequest:(id)arg2 ;
-(void)updateManager:(id)arg1 didReceiveETAResponse:(id)arg2 toRequest:(id)arg3 ;
-(void)updateManager:(id)arg1 didUpdateETAForRouteInfo:(id)arg2 ;
-(void)updateManager:(id)arg1 didReceiveETAError:(id)arg2 ;
-(BOOL)wantsETAUpdates;
-(id)routeInfoForUpdateManager:(id)arg1 ;
-(id)userLocationForUpdateManager:(id)arg1 ;
-(id)initWithNavigationSession:(id)arg1 ;
-(BOOL)isRerouting;
-(BOOL)shouldProjectAlongRoute;
-(void)startTracking;
-(void)stopTracking;
-(void)updateDestination:(id)arg1 finishedHandler:(/*^block*/id)arg2 ;
-(void)reroute:(id)arg1 reason:(unsigned long long)arg2 ;
-(id)matchedLocationForLocation:(id)arg1 ;
-(void)updateLocation:(id)arg1 ;
-(void)updateVehicleSpeed:(double)arg1 timestamp:(id)arg2 ;
-(void)updateVehicleHeading:(double)arg1 timestamp:(id)arg2 ;
-(BOOL)shouldAllowPause;
-(void)_setIsNavigatingInLowGuidance:(BOOL)arg1 ;
-(void)_updateMatchedLocation:(id)arg1 ;
-(void)_roadFeaturesForFeature:(SCD_Struct_MN5*)arg1 outRoadName:(id*)arg2 outShieldText:(id*)arg3 outShieldType:(long long*)arg4 ;
-(MNLocation *)lastMatchedLocation;
-(MNObserverHashTable *)safeDelegate;
-(MNNavigationSession *)navigationSession;
-(void)_setAuditToken:(id)arg1 ;
-(void)resetForTracePlayerAtLocation:(id)arg1 ;
-(void)traceForcedRerouteWithResponse:(id)arg1 request:(id)arg2 ;
-(void)traceForcedActiveTransportTypeChange:(int)arg1 ;
-(void)tracePaused;
-(void)traceJumpedInTime;
-(void)forceOnRoute:(id)arg1 atLocation:(id)arg2 ;
@end

