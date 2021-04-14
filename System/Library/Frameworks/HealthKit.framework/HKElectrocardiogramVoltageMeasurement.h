/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:13 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface HKElectrocardiogramVoltageMeasurement : NSObject {

	float _leadIVoltage;
	double _timeSinceSampleStart;

}

@property (nonatomic,readonly) double timeSinceSampleStart;              //@synthesize timeSinceSampleStart=_timeSinceSampleStart - In the implementation block
-(id)initWithLeadIVoltage:(float)arg1 timeSinceSampleStart:(double)arg2 ;
-(id)quantityForLead:(long long)arg1 ;
-(double)timeSinceSampleStart;
@end

