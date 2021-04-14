/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:24 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SAWeatherForecast.h>

@class NSNumber;

@interface SAWeatherDailyForecast : SAWeatherForecast

@property (nonatomic,copy) NSNumber * highTemperature; 
@property (nonatomic,copy) NSNumber * lowTemperature; 
+(id)dailyForecast;
+(id)dailyForecastWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSNumber *)highTemperature;
-(void)setHighTemperature:(NSNumber *)arg1 ;
-(NSNumber *)lowTemperature;
-(void)setLowTemperature:(NSNumber *)arg1 ;
@end

