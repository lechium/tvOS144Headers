/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:30 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, CMMotionActivityManager, NSOperationQueue;

@interface MotionStateRelay : NSObject {

	NSObject*<OS_dispatch_queue> _alarmQueue;
	unsigned _currentMotion;
	BOOL _isStationary;
	BOOL _isMoving;
	CMMotionActivityManager* _activityManager;
	NSOperationQueue* _alarmOperationQueue;

}

@property (nonatomic,readonly) unsigned currentMotion;              //@synthesize currentMotion=_currentMotion - In the implementation block
@property (nonatomic,readonly) BOOL isStationary;                   //@synthesize isStationary=_isStationary - In the implementation block
+(id)sharedInstance;
+(BOOL)automaticallyNotifiesObserversOfCurrentMotion;
+(BOOL)automaticallyNotifiesObserversOfIsStationary;
-(id)init;
-(void)dealloc;
-(void)stopActivityUpdates;
-(BOOL)isMoving;
-(void)transitionToState:(unsigned)arg1 ;
-(void)unsubscribe;
-(void)subscribe;
-(void)initializeEngine;
-(void)destroyEngine;
-(void)stopMotionMonitoring;
-(void)startMotionMonitoring;
-(void)startActivityUpdates;
-(id)motionStateString:(unsigned)arg1 ;
-(unsigned)currentMotion;
-(BOOL)isStationary;
@end
