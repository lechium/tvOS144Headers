/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:17 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class HKSampleType, NSDateInterval;

@interface HKSampleTypeChange : NSObject <NSSecureCoding> {

	BOOL _hasUnfrozenSeries;
	HKSampleType* _sampleType;
	double _startTime;
	double _endTime;
	long long _queryStrategy;

}

@property (nonatomic,readonly) double startTime;                                //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,readonly) double endTime;                                  //@synthesize endTime=_endTime - In the implementation block
@property (nonatomic,readonly) long long queryStrategy;                         //@synthesize queryStrategy=_queryStrategy - In the implementation block
@property (nonatomic,copy,readonly) HKSampleType * sampleType;                  //@synthesize sampleType=_sampleType - In the implementation block
@property (nonatomic,copy,readonly) NSDateInterval * dateInterval; 
@property (nonatomic,readonly) BOOL hasUnfrozenSeries;                          //@synthesize hasUnfrozenSeries=_hasUnfrozenSeries - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)sampleTypeChangeWithSampleType:(id)arg1 dateInterval:(id)arg2 hasUnfrozenSeries:(BOOL)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)startTime;
-(double)endTime;
-(NSDateInterval *)dateInterval;
-(HKSampleType *)sampleType;
-(id)_initWithSampleType:(id)arg1 startTime:(double)arg2 endTime:(double)arg3 hasUnfrozenSeries:(BOOL)arg4 queryStrategy:(long long)arg5 ;
-(void)_extendDateIntervalWithSample:(id)arg1 ;
-(BOOL)hasUnfrozenSeries;
-(long long)queryStrategy;
@end
