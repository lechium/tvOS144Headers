/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:50 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Weather/Weather-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class City, WFLocation, WACurrentForecast, WFAirQualityConditions, NSArray, NSDate, NSURL, WFNextHourPrecipitation, WFWeatherConditions;

@interface WAForecastModel : NSObject <NSCopying> {

	int _unit;
	City* _city;
	WFLocation* _location;
	WACurrentForecast* _currentConditions;
	WFAirQualityConditions* _airQualityConditions;
	NSArray* _hourlyForecasts;
	NSArray* _dailyForecasts;
	NSDate* _sunrise;
	NSDate* _sunset;
	NSURL* _deepLink;
	NSURL* _link;
	NSArray* _severeWeatherEvents;
	NSArray* _changeForecasts;
	WFNextHourPrecipitation* _nextHourPrecipitation;
	WFWeatherConditions* _underlyingCurrentConditions;
	NSArray* _underlyingHourlyConditions;
	NSArray* _underlyingDailyConditions;

}

@property (nonatomic,retain) City * city;                                                    //@synthesize city=_city - In the implementation block
@property (assign,nonatomic) int unit;                                                       //@synthesize unit=_unit - In the implementation block
@property (nonatomic,retain) WFLocation * location;                                          //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) WACurrentForecast * currentConditions;                          //@synthesize currentConditions=_currentConditions - In the implementation block
@property (nonatomic,retain) WFAirQualityConditions * airQualityConditions;                  //@synthesize airQualityConditions=_airQualityConditions - In the implementation block
@property (nonatomic,copy) NSArray * hourlyForecasts;                                        //@synthesize hourlyForecasts=_hourlyForecasts - In the implementation block
@property (nonatomic,copy) NSArray * dailyForecasts;                                         //@synthesize dailyForecasts=_dailyForecasts - In the implementation block
@property (nonatomic,retain) NSDate * sunrise;                                               //@synthesize sunrise=_sunrise - In the implementation block
@property (nonatomic,retain) NSDate * sunset;                                                //@synthesize sunset=_sunset - In the implementation block
@property (nonatomic,retain) NSURL * deepLink;                                               //@synthesize deepLink=_deepLink - In the implementation block
@property (nonatomic,retain) NSURL * link;                                                   //@synthesize link=_link - In the implementation block
@property (nonatomic,copy) NSArray * severeWeatherEvents;                                    //@synthesize severeWeatherEvents=_severeWeatherEvents - In the implementation block
@property (nonatomic,copy) NSArray * changeForecasts;                                        //@synthesize changeForecasts=_changeForecasts - In the implementation block
@property (nonatomic,copy) WFNextHourPrecipitation * nextHourPrecipitation;                  //@synthesize nextHourPrecipitation=_nextHourPrecipitation - In the implementation block
@property (nonatomic,retain) WFWeatherConditions * underlyingCurrentConditions;              //@synthesize underlyingCurrentConditions=_underlyingCurrentConditions - In the implementation block
@property (nonatomic,retain) NSArray * underlyingHourlyConditions;                           //@synthesize underlyingHourlyConditions=_underlyingHourlyConditions - In the implementation block
@property (nonatomic,retain) NSArray * underlyingDailyConditions;                            //@synthesize underlyingDailyConditions=_underlyingDailyConditions - In the implementation block
@property (nonatomic,readonly) BOOL isPopulated; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(int)unit;
-(WFLocation *)location;
-(void)setLocation:(WFLocation *)arg1 ;
-(NSDate *)sunrise;
-(NSDate *)sunset;
-(void)setCity:(City *)arg1 ;
-(City *)city;
-(NSURL *)link;
-(void)setLink:(NSURL *)arg1 ;
-(void)setUnit:(int)arg1 ;
-(WACurrentForecast *)currentConditions;
-(void)setSunrise:(NSDate *)arg1 ;
-(void)setSunset:(NSDate *)arg1 ;
-(void)setCurrentConditions:(WACurrentForecast *)arg1 ;
-(NSArray *)dailyForecasts;
-(void)setDailyForecasts:(NSArray *)arg1 ;
-(NSArray *)hourlyForecasts;
-(void)setHourlyForecasts:(NSArray *)arg1 ;
-(void)setDeepLink:(NSURL *)arg1 ;
-(WFAirQualityConditions *)airQualityConditions;
-(WFNextHourPrecipitation *)nextHourPrecipitation;
-(void)setNextHourPrecipitation:(WFNextHourPrecipitation *)arg1 ;
-(NSArray *)changeForecasts;
-(void)setChangeForecasts:(NSArray *)arg1 ;
-(NSArray *)severeWeatherEvents;
-(void)setSevereWeatherEvents:(NSArray *)arg1 ;
-(void)setAirQualityConditions:(WFAirQualityConditions *)arg1 ;
-(NSURL *)deepLink;
-(void)setUnderlyingCurrentConditions:(WFWeatherConditions *)arg1 ;
-(void)setUnderlyingHourlyConditions:(NSArray *)arg1 ;
-(void)setUnderlyingDailyConditions:(NSArray *)arg1 ;
-(BOOL)isPopulated;
-(WFWeatherConditions *)underlyingCurrentConditions;
-(NSArray *)underlyingHourlyConditions;
-(NSArray *)underlyingDailyConditions;
@end

