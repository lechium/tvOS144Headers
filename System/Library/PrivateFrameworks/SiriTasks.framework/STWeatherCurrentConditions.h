/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:09 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AssistantServices/STSiriModelObject.h>

@class NSNumber;

@interface STWeatherCurrentConditions : STSiriModelObject {

	long long _conditionCode;
	NSNumber* _temperature;
	NSNumber* _highTemperature;
	NSNumber* _lowTemperature;

}
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)temperature;
-(long long)conditionCode;
-(id)highTemperature;
-(id)lowTemperature;
-(id)_initWithConditionCode:(long long)arg1 temperature:(id)arg2 highTemperature:(id)arg3 lowTemperature:(id)arg4 ;
@end

