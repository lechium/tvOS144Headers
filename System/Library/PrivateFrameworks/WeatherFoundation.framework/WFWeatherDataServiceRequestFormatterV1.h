/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:43 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/WFForecastRequestFormatter.h>
#import <libobjc.A.dylib/WFForecastRequestFormatterMultiHost.h>

@class NSString;

@interface WFWeatherDataServiceRequestFormatterV1 : NSObject <WFForecastRequestFormatter, WFForecastRequestFormatterMultiHost>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)hostURLForService;
+(id)forecastRequest:(unsigned long long)arg1 forLocation:(id)arg2 withUnits:(int)arg3 locale:(id)arg4 date:(id)arg5 rules:(id)arg6 options:(id)arg7 ;
+(id)forecastRequest:(unsigned long long)arg1 forLocation:(id)arg2 locale:(id)arg3 date:(id)arg4 ;
+(id)aqiRequestForScaleNamed:(id)arg1 language:(id)arg2 ;
+(id)hostURLForEnvironment:(id)arg1 ;
+(id)languagePathForLocale:(id)arg1 ;
+(id)geocodePathForLocation:(id)arg1 rules:(id)arg2 ;
@end
