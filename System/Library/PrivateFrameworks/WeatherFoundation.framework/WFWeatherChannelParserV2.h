/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:43 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/WFForecastDataParser.h>

@class NSCalendar, NSString;

@interface WFWeatherChannelParserV2 : NSObject <WFForecastDataParser> {

	NSCalendar* _calendar;

}

@property (nonatomic,retain) NSCalendar * calendar;                 //@synthesize calendar=_calendar - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)expectedDailyForecastCount;
+(unsigned long long)expectedHourlyForecastCount;
+(id)componentsForCurrentForecast;
+(id)componentsForHourlyForecasts;
+(id)componentsForDailyForecasts;
-(id)init;
-(NSCalendar *)calendar;
-(void)setCalendar:(NSCalendar *)arg1 ;
-(id)parseForecastData:(id)arg1 types:(unsigned long long)arg2 location:(id)arg3 locale:(id)arg4 date:(id)arg5 error:(id*)arg6 rules:(id)arg7 ;
-(id)parseAirQualityData:(id)arg1 location:(id)arg2 error:(id*)arg3 ;
-(id)parseCurrentCondition:(id)arg1 ;
-(id)parseDailyForecasts:(id)arg1 ;
-(id)parseHourlyForecasts:(id)arg1 ;
-(void)parseCommonComponents:(id)arg1 data:(id)arg2 ;
-(unsigned long long)_pressureTrendFromWeatherChannelCode:(id)arg1 ;
-(id)parseForecastData:(id)arg1 types:(unsigned long long)arg2 location:(id)arg3 locale:(id)arg4 date:(id)arg5 error:(id*)arg6 ;
@end

