/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:28 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RelevanceEngine/REPredictor.h>
#import <libobjc.A.dylib/REDeviceMotionPredictorProperties.h>

@class CMMotionActivityManager, REUpNextScheduler, CMMotionActivity;

@interface REDeviceMotionPredictor : REPredictor <REDeviceMotionPredictorProperties> {

	CMMotionActivityManager* _activityManager;
	REUpNextScheduler* _scheduler;
	CMMotionActivity* _lastActivity;
	BOOL _stationary;
	unsigned long long _motionType;

}

@property (getter=isStationary) BOOL stationary;                                       //@synthesize stationary=_stationary - In the implementation block
@property (assign) unsigned long long motionType;                                      //@synthesize motionType=_motionType - In the implementation block
@property (nonatomic,readonly) CMMotionActivityManager * activityManager; 
+(id)supportedFeatures;
-(id)_init;
-(void)resume;
-(void)pause;
-(unsigned long long)motionType;
-(void)setMotionType:(unsigned long long)arg1 ;
-(BOOL)isStationary;
-(void)setStationary:(BOOL)arg1 ;
-(id)featureValueForFeature:(id)arg1 element:(id)arg2 engine:(id)arg3 trainingContext:(id)arg4 ;
-(void)_updateWithActivity:(id)arg1 ;
-(CMMotionActivityManager *)activityManager;
@end

