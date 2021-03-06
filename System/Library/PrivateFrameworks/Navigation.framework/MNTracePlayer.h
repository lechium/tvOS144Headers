/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:40 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MNTracePlayerSchedulerDelegate.h>
#import <libobjc.A.dylib/MNTimeProvider.h>

@class MNTrace, NSHashTable, MNTracePlayerScheduler, MNTracePlayerTimelineStream, MNLocation, MNTracePlayerETAUpdater, NSDate, NSData, MNSessionUpdateManager, NSString;

@interface MNTracePlayer : NSObject <MNTracePlayerSchedulerDelegate, MNTimeProvider> {

	MNTrace* _trace;
	double _traceStartTimestamp;
	NSHashTable* _observers;
	MNTracePlayerScheduler* _scheduler;
	MNTracePlayerTimelineStream* _locationStream;
	MNLocation* _lastReportedLocation;
	BOOL _isPlaying;
	BOOL _isPaused;
	double _duration;
	double _speedMultiplier;
	BOOL _forceDirectionsResponsesFromTrace;
	MNTracePlayerTimelineStream* _directionsStream;
	BOOL _shouldPlayETARequests;
	MNTracePlayerETAUpdater* _etaUpdater;
	MNTracePlayerTimelineStream* _etaUpdatesStream;

}

@property (nonatomic,readonly) MNTrace * trace;                                      //@synthesize trace=_trace - In the implementation block
@property (nonatomic,readonly) BOOL isPlaying;                                       //@synthesize isPlaying=_isPlaying - In the implementation block
@property (nonatomic,readonly) BOOL isPaused;                                        //@synthesize isPaused=_isPaused - In the implementation block
@property (nonatomic,readonly) double position; 
@property (nonatomic,readonly) double duration;                                      //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) int mainTransportType; 
@property (nonatomic,readonly) NSDate * currentLocationDate; 
@property (nonatomic,readonly) NSData * selectedRouteID; 
@property (nonatomic,readonly) unsigned long long selectedRouteIndex; 
@property (assign,nonatomic) double speedMultiplier;                                 //@synthesize speedMultiplier=_speedMultiplier - In the implementation block
@property (assign,nonatomic) BOOL shouldPlayETARequests;                             //@synthesize shouldPlayETARequests=_shouldPlayETARequests - In the implementation block
@property (nonatomic,readonly) MNSessionUpdateManager * sessionUpdater; 
@property (assign,nonatomic) BOOL forceDirectionsResponsesFromTrace;                 //@synthesize forceDirectionsResponsesFromTrace=_forceDirectionsResponsesFromTrace - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double currentTime; 
-(void)dealloc;
-(void)resume;
-(id)initWithPath:(id)arg1 ;
-(void)start;
-(void)stop;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(BOOL)isPaused;
-(void)pause;
-(double)position;
-(double)duration;
-(MNTrace *)trace;
-(BOOL)isPlaying;
-(double)currentTime;
-(int)mainTransportType;
-(unsigned long long)selectedRouteIndex;
-(MNSessionUpdateManager *)sessionUpdater;
-(void)setSpeedMultiplier:(double)arg1 ;
-(void)setShouldPlayETARequests:(BOOL)arg1 ;
-(void)setForceDirectionsResponsesFromTrace:(BOOL)arg1 ;
-(void)startAtLocationIndex:(unsigned long long)arg1 ;
-(double)speedMultiplier;
-(BOOL)requestDirectionsNearTimestamp:(double)arg1 withHandler:(/*^block*/id)arg2 errorHandler:(/*^block*/id)arg3 ;
-(void)tracePlayerScheduler:(id)arg1 didUpdatePosition:(double)arg2 ;
-(id)initWithTrace:(id)arg1 ;
-(id)initWithPath:(id)arg1 outError:(id*)arg2 ;
-(void)_createTimelineStreams;
-(id)_locationWithCurrentDate:(id)arg1 ;
-(double)_responseTimeForRequestAtIndex:(unsigned long long)arg1 ;
-(void)jumpToTime:(double)arg1 ;
-(BOOL)requestDirectionsWithHandler:(/*^block*/id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(void)jumpToLocationAtIndex:(unsigned long long)arg1 ;
-(void)skipByTimeInterval:(double)arg1 ;
-(void)jumpToBookmarkAtIndex:(unsigned long long)arg1 ;
-(NSDate *)currentLocationDate;
-(NSData *)selectedRouteID;
-(BOOL)shouldPlayETARequests;
-(BOOL)forceDirectionsResponsesFromTrace;
@end

