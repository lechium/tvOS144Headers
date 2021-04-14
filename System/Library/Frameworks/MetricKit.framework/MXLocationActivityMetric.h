/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:15 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MetricKit.framework/MetricKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MetricKit/MXMetric.h>

@class NSMeasurement;

@interface MXLocationActivityMetric : MXMetric {

	NSMeasurement* _cumulativeBestAccuracyTime;
	NSMeasurement* _cumulativeBestAccuracyForNavigationTime;
	NSMeasurement* _cumulativeNearestTenMetersAccuracyTime;
	NSMeasurement* _cumulativeHundredMetersAccuracyTime;
	NSMeasurement* _cumulativeKilometerAccuracyTime;
	NSMeasurement* _cumulativeThreeKilometersAccuracyTime;

}

@property (readonly) NSMeasurement * cumulativeBestAccuracyTime;                           //@synthesize cumulativeBestAccuracyTime=_cumulativeBestAccuracyTime - In the implementation block
@property (readonly) NSMeasurement * cumulativeBestAccuracyForNavigationTime;              //@synthesize cumulativeBestAccuracyForNavigationTime=_cumulativeBestAccuracyForNavigationTime - In the implementation block
@property (readonly) NSMeasurement * cumulativeNearestTenMetersAccuracyTime;               //@synthesize cumulativeNearestTenMetersAccuracyTime=_cumulativeNearestTenMetersAccuracyTime - In the implementation block
@property (readonly) NSMeasurement * cumulativeHundredMetersAccuracyTime;                  //@synthesize cumulativeHundredMetersAccuracyTime=_cumulativeHundredMetersAccuracyTime - In the implementation block
@property (readonly) NSMeasurement * cumulativeKilometerAccuracyTime;                      //@synthesize cumulativeKilometerAccuracyTime=_cumulativeKilometerAccuracyTime - In the implementation block
@property (readonly) NSMeasurement * cumulativeThreeKilometersAccuracyTime;                //@synthesize cumulativeThreeKilometersAccuracyTime=_cumulativeThreeKilometersAccuracyTime - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)toDictionary;
-(id)initWithCumulativeBestAccuracyTimeMeasurement:(id)arg1 cumulativeBestAccuracyForNavigationTimeMeasurement:(id)arg2 nearestTenMetersAccuracyTimeMeasurement:(id)arg3 hundredMetersAccuracyTimeMeasurement:(id)arg4 kilometerAccuracyTimeMeasurement:(id)arg5 threeKilometerAccuracyTimeMeasurement:(id)arg6 ;
-(NSMeasurement *)cumulativeBestAccuracyTime;
-(NSMeasurement *)cumulativeBestAccuracyForNavigationTime;
-(NSMeasurement *)cumulativeNearestTenMetersAccuracyTime;
-(NSMeasurement *)cumulativeHundredMetersAccuracyTime;
-(NSMeasurement *)cumulativeKilometerAccuracyTime;
-(NSMeasurement *)cumulativeThreeKilometersAccuracyTime;
@end

