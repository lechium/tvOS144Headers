/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:08 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AssistantServices/AFSiriRequest.h>

@class STWeatherAttributes, NSArray, STCity;

@interface STShowDailyWeatherForecastRequest : AFSiriRequest {

	STWeatherAttributes* _currentAttributes;
	NSArray* _dailyAttributes;
	STCity* _city;
	long long _startWeekday;

}
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)city;
-(id)createResponse;
-(id)currentAttributes;
-(id)_initWithCurrentAttributes:(id)arg1 dailyAttributes:(id)arg2 city:(id)arg3 startWeekday:(long long)arg4 ;
-(id)dailyAttributes;
-(long long)startWeekday;
@end

