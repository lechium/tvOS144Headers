/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:16 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKSample.h>

@class NSArray, HKQuantity;

@interface HKWorkout : HKSample {

	unsigned long long _workoutActivityType;
	double _duration;
	NSArray* _workoutEvents;
	HKQuantity* _totalEnergyBurned;
	HKQuantity* _totalBasalEnergyBurned;
	HKQuantity* _totalDistance;
	HKQuantity* _totalElevation;
	HKQuantity* _totalSwimmingStrokeCount;
	HKQuantity* _totalFlightsClimbed;
	unsigned long long _goalType;
	HKQuantity* _goal;
	BOOL _isWatchWorkout;

}

@property (assign,setter=_setGoalType:,getter=_goalType,nonatomic) unsigned long long goalType;                                                  //@synthesize goalType=_goalType - In the implementation block
@property (setter=_setGoal:,getter=_goal,nonatomic,retain) HKQuantity * goal;                                                                    //@synthesize goal=_goal - In the implementation block
@property (setter=_setTotalBasalEnergyBurned:,getter=_totalBasalEnergyBurned,nonatomic,retain) HKQuantity * totalBasalEnergyBurned; 
@property (assign,setter=_setIsWatchWorkout:,getter=_isWatchWorkout,nonatomic) BOOL isWatchWorkout;                                              //@synthesize isWatchWorkout=_isWatchWorkout - In the implementation block
@property (getter=_activityMoveMode,nonatomic,readonly) long long activityMoveMode; 
@property (readonly) unsigned long long workoutActivityType; 
@property (copy,readonly) NSArray * workoutEvents; 
@property (readonly) double duration; 
@property (readonly) HKQuantity * totalEnergyBurned; 
@property (readonly) HKQuantity * totalDistance; 
@property (readonly) HKQuantity * totalSwimmingStrokeCount; 
@property (readonly) HKQuantity * totalFlightsClimbed;                                                                                           //@synthesize totalFlightsClimbed=_totalFlightsClimbed - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_workoutWithActivityType:(unsigned long long)arg1 startDate:(id)arg2 endDate:(id)arg3 workoutEvents:(id)arg4 duration:(double)arg5 statistics:(id)arg6 goalType:(unsigned long long)arg7 goal:(id)arg8 device:(id)arg9 metadata:(id)arg10 ;
+(BOOL)_isConcreteObjectClass;
+(id)_stringFromWorkoutActivityType:(unsigned long long)arg1 ;
+(id)_workoutWithActivityType:(unsigned long long)arg1 startDate:(id)arg2 endDate:(id)arg3 workoutEvents:(id)arg4 duration:(double)arg5 totalActiveEnergyBurned:(id)arg6 totalBasalEnergyBurned:(id)arg7 totalDistance:(id)arg8 goalType:(unsigned long long)arg9 goal:(id)arg10 device:(id)arg11 metadata:(id)arg12 ;
+(id)workoutWithActivityType:(unsigned long long)arg1 startDate:(id)arg2 endDate:(id)arg3 workoutEvents:(id)arg4 totalEnergyBurned:(id)arg5 totalDistance:(id)arg6 device:(id)arg7 metadata:(id)arg8 ;
+(id)workoutWithActivityType:(unsigned long long)arg1 startDate:(id)arg2 endDate:(id)arg3 duration:(double)arg4 totalEnergyBurned:(id)arg5 totalDistance:(id)arg6 device:(id)arg7 metadata:(id)arg8 ;
+(id)_workoutWithActivityType:(unsigned long long)arg1 startDate:(id)arg2 endDate:(id)arg3 workoutEvents:(id)arg4 duration:(double)arg5 totalActiveEnergyBurned:(id)arg6 totalBasalEnergyBurned:(id)arg7 totalDistance:(id)arg8 totalSwimmingStrokeCount:(id)arg9 totalFlightsClimbed:(id)arg10 goalType:(unsigned long long)arg11 goal:(id)arg12 device:(id)arg13 metadata:(id)arg14 config:(/*^block*/id)arg15 ;
+(id)_activityTypeMappings;
+(id)workoutWithActivityType:(unsigned long long)arg1 startDate:(id)arg2 endDate:(id)arg3 ;
+(id)workoutWithActivityType:(unsigned long long)arg1 startDate:(id)arg2 endDate:(id)arg3 workoutEvents:(id)arg4 totalEnergyBurned:(id)arg5 totalDistance:(id)arg6 metadata:(id)arg7 ;
+(id)workoutWithActivityType:(unsigned long long)arg1 startDate:(id)arg2 endDate:(id)arg3 duration:(double)arg4 totalEnergyBurned:(id)arg5 totalDistance:(id)arg6 metadata:(id)arg7 ;
+(id)workoutWithActivityType:(unsigned long long)arg1 startDate:(id)arg2 endDate:(id)arg3 workoutEvents:(id)arg4 totalEnergyBurned:(id)arg5 totalDistance:(id)arg6 totalSwimmingStrokeCount:(id)arg7 device:(id)arg8 metadata:(id)arg9 ;
+(id)workoutWithActivityType:(unsigned long long)arg1 startDate:(id)arg2 endDate:(id)arg3 workoutEvents:(id)arg4 totalEnergyBurned:(id)arg5 totalDistance:(id)arg6 totalFlightsClimbed:(id)arg7 device:(id)arg8 metadata:(id)arg9 ;
+(unsigned long long)_workoutActivityTypeFromString:(id)arg1 ;
+(id)_allWorkoutTypeNames;
+(id)_allWorkoutActivityTypes;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)duration;
-(void)_setDuration:(double)arg1 ;
-(HKQuantity *)totalDistance;
-(unsigned long long)workoutActivityType;
-(NSArray *)workoutEvents;
-(unsigned long long)_goalType;
-(id)_goal;
-(id)_validateWithConfiguration:(HKObjectValidationConfiguration)arg1 ;
-(long long)_activityMoveMode;
-(void)_enumerateTimePeriodsWithBlock:(/*^block*/id)arg1 ;
-(long long)hk_integerValue;
-(void)_enumerateActiveTimePeriods:(/*^block*/id)arg1 ;
-(HKQuantity *)totalEnergyBurned;
-(id)_totalBasalEnergyBurned;
-(BOOL)_isWatchWorkout;
-(void)_setIsWatchWorkout:(BOOL)arg1 ;
-(id)_validateWorkoutEvents:(id)arg1 withConfiguration:(HKObjectValidationConfiguration)arg2 ;
-(id)_deepCopy;
-(void)_setWorkoutActivityType:(unsigned long long)arg1 ;
-(void)_setWorkoutEvents:(id)arg1 ;
-(void)_setTotalEnergyBurned:(id)arg1 ;
-(void)_setTotalBasalEnergyBurned:(id)arg1 ;
-(void)_setTotalDistance:(id)arg1 ;
-(HKQuantity *)totalSwimmingStrokeCount;
-(void)_setTotalSwimmingStrokeCount:(id)arg1 ;
-(void)_setTotalFlightsClimbed:(id)arg1 ;
-(double)_totalEnergyBurnedInCanonicalUnit;
-(double)_totalBasalEnergyBurnedInCanonicalUnit;
-(double)_totalDistanceInCanonicalUnit;
-(double)_totalSwimmingStrokeCountInCanonicalUnit;
-(double)_totalFlightsClimbedInCanonicalUnit;
-(double)_goalInCanonicalUnit;
-(HKQuantity *)totalFlightsClimbed;
-(void)_setGoalType:(unsigned long long)arg1 ;
-(void)_setGoal:(id)arg1 ;
@end

