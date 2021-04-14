/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:14 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKTaskConfiguration.h>

@class HKDevice, NSUUID;

@interface HKSeriesBuilderConfiguration : HKTaskConfiguration {

	HKDevice* _device;
	NSUUID* _workoutBuilderID;

}

@property (nonatomic,copy,readonly) HKDevice * device;                      //@synthesize device=_device - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * workoutBuilderID;              //@synthesize workoutBuilderID=_workoutBuilderID - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(HKDevice *)device;
-(id)initWithDevice:(id)arg1 workoutBuilderID:(id)arg2 ;
-(NSUUID *)workoutBuilderID;
@end

