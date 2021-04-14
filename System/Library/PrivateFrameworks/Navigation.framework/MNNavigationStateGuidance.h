/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:40 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Navigation/MNNavigationState.h>

@class MNNavigationSessionManager, MNStartNavigationDetails;

@interface MNNavigationStateGuidance : MNNavigationState {

	MNNavigationSessionManager* _navigationSessionManager;
	MNStartNavigationDetails* _startDetails;

}
+(id)guidanceStateForStartDetails:(id)arg1 stateManager:(id)arg2 navigationSessionManager:(id)arg3 ;
-(void)setIsConnectedToCarplay:(BOOL)arg1 ;
-(void)setDisplayedStepIndex:(unsigned long long)arg1 ;
-(void)enterState;
-(void)stopNavigation;
-(void)updateDestination:(id)arg1 ;
-(void)resumeOriginalDestination;
-(void)switchToRoute:(id)arg1 ;
-(void)repeatCurrentGuidanceWithReply:(/*^block*/id)arg1 ;
-(void)repeatCurrentTrafficAlertWithReply:(/*^block*/id)arg1 ;
-(void)vibrateForPrompt:(unsigned long long)arg1 withReply:(/*^block*/id)arg2 ;
-(void)stopCurrentGuidancePrompt;
-(void)setHFPPreference:(BOOL)arg1 forSetting:(id)arg2 ;
-(void)setCurrentAudioOutputSetting:(id)arg1 ;
-(void)setRideIndex:(unsigned long long)arg1 forSegmentIndex:(unsigned long long)arg2 ;
-(void)setJunctionViewImageWidth:(double)arg1 height:(double)arg2 ;
-(void)acceptReroute:(BOOL)arg1 forTrafficIncidentAlert:(id)arg2 ;
-(void)setTraceIsPlaying:(BOOL)arg1 ;
-(void)setTracePlaybackSpeed:(double)arg1 ;
-(void)setTracePosition:(double)arg1 ;
-(void)recordTraceBookmarkAtCurrentPositionWthScreenshotData:(id)arg1 ;
-(void)recordPedestrianTracePath:(id)arg1 ;
-(void)pauseRealtimeUpdatesForSubscriber:(id)arg1 ;
-(void)resumeRealtimeUpdatesForSubscriber:(id)arg1 ;
-(id)traceManager;
-(id)initWithStateManager:(id)arg1 navigationSessionManager:(id)arg2 startDetails:(id)arg3 ;
-(id)simulationLocationProvider;
-(void)leaveState;
-(id)currentDestination;
-(BOOL)requiresHighMemoryThreshold;
-(unsigned long long)desiredLocationProviderType;
-(id)clParameters;
-(BOOL)shouldClearStoredRoutes;
-(void)preEnterState;
@end
