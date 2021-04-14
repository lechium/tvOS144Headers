/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:43 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WeatherFoundation/WeatherFoundation-Structs.h>
#import <libobjc.A.dylib/WFSettings.h>

@class NSString, NSSet, WFWeatherEventsConfig, NSDictionary, NSURL;

@interface WFInternalAppSettings : NSObject <WFSettings>

@property (nonatomic,readonly) NSString * apiVersion; 
@property (nonatomic,readonly) NSSet * aqiEnabledCountryCodes; 
@property (nonatomic,readonly) NSString * apiVersionFallback; 
@property (nonatomic,readonly) unsigned long long networkFailedAttemptsLimit; 
@property (nonatomic,readonly) unsigned long long networkSwitchExpirationTimeInSeconds; 
@property (nonatomic,readonly) unsigned long long locationNumDecimalsOfPrecision; 
@property (nonatomic,readonly) WFWeatherEventsConfig * weatherEventsConfig; 
@property (nonatomic,readonly) NSDictionary * widgetRefreshPolicy; 
@property (nonatomic,readonly) NSURL * appAnalyticsEndpointUrl; 
@property (nonatomic,readonly) float dataSamplingRate; 
@property (nonatomic,readonly) float telemetrySamplingRate; 
@property (nonatomic,readonly) float locationGeocodingSamplingRate; 
@property (nonatomic,readonly) double userIdentifierResetTimeInterval; 
@property (nonatomic,readonly) double privateUserIdentifierResetTimeInterval; 
@property (nonatomic,readonly) double cachedGeocodeLocationExpirationTimeInterval; 
@property (nonatomic,readonly) double locationUpdateMinTimeInterval; 
@property (nonatomic,readonly) double locationUpdateMinDistance; 
@property (nonatomic,readonly) BOOL disableForecastRequestCancelation; 
@property (nonatomic,readonly) BOOL disablePriorityForecastRequestQueue; 
@property (nonatomic,readonly) BOOL loadSavedCitiesFromKVSOnly; 
@property (nonatomic,readonly) BOOL disableLimitReverseGeocoding; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(NSString *)apiVersion;
-(NSSet *)aqiEnabledCountryCodes;
-(unsigned long long)networkFailedAttemptsLimit;
-(unsigned long long)networkSwitchExpirationTimeInSeconds;
-(NSString *)apiVersionFallback;
-(unsigned long long)locationNumDecimalsOfPrecision;
-(double)cachedGeocodeLocationExpirationTimeInterval;
-(double)locationUpdateMinTimeInterval;
-(double)locationUpdateMinDistance;
-(BOOL)disableForecastRequestCancelation;
-(BOOL)disablePriorityForecastRequestQueue;
-(BOOL)loadSavedCitiesFromKVSOnly;
-(BOOL)disableLimitReverseGeocoding;
-(WFWeatherEventsConfig *)weatherEventsConfig;
-(NSURL *)appAnalyticsEndpointUrl;
-(float)dataSamplingRate;
-(float)telemetrySamplingRate;
-(float)locationGeocodingSamplingRate;
-(double)userIdentifierResetTimeInterval;
-(double)privateUserIdentifierResetTimeInterval;
@end
