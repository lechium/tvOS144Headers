/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:44 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WeatherFoundation/WeatherFoundation-Structs.h>
#import <libobjc.A.dylib/WFWeatherStore.h>

@protocol OS_dispatch_queue;
@class WFWeatherStoreServiceConfiguration, NSObject, NSMutableDictionary, WFWeatherStoreCache, WFNetworkRetryManager, NSString;

@interface WFWeatherStoreService : NSObject <WFWeatherStore> {

	os_unfair_lock_s _retryLock;
	WFWeatherStoreServiceConfiguration* _configuration;
	/*^block*/id _forecastRequestStartingCallback;
	/*^block*/id _locationGeocodeForCoordinateRequestStartingCallback;
	NSObject*<OS_dispatch_queue> _incomingRequestQueue;
	NSObject*<OS_dispatch_queue> _parseQueue;
	NSObject*<OS_dispatch_queue> _mapQueue;
	NSMutableDictionary* _UUIDToCallbackMap;
	NSMutableDictionary* _UUIDToURLMap;
	NSMutableDictionary* _URLToTaskMap;
	NSMutableDictionary* _URLToCallbackMap;
	WFWeatherStoreCache* _cache;
	WFNetworkRetryManager* _retryManager;

}

@property (retain) NSObject*<OS_dispatch_queue> incomingRequestQueue;                           //@synthesize incomingRequestQueue=_incomingRequestQueue - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> parseQueue;                                     //@synthesize parseQueue=_parseQueue - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> mapQueue;                                       //@synthesize mapQueue=_mapQueue - In the implementation block
@property (assign) os_unfair_lock_s retryLock;                                                  //@synthesize retryLock=_retryLock - In the implementation block
@property (retain) NSMutableDictionary * UUIDToCallbackMap;                                     //@synthesize UUIDToCallbackMap=_UUIDToCallbackMap - In the implementation block
@property (retain) NSMutableDictionary * UUIDToURLMap;                                          //@synthesize UUIDToURLMap=_UUIDToURLMap - In the implementation block
@property (retain) NSMutableDictionary * URLToTaskMap;                                          //@synthesize URLToTaskMap=_URLToTaskMap - In the implementation block
@property (retain) NSMutableDictionary * URLToCallbackMap;                                      //@synthesize URLToCallbackMap=_URLToCallbackMap - In the implementation block
@property (nonatomic,copy) WFWeatherStoreServiceConfiguration * configuration;                  //@synthesize configuration=_configuration - In the implementation block
@property (retain) WFWeatherStoreCache * cache;                                                 //@synthesize cache=_cache - In the implementation block
@property (nonatomic,retain) WFNetworkRetryManager * retryManager;                              //@synthesize retryManager=_retryManager - In the implementation block
@property (nonatomic,copy) id forecastRequestStartingCallback;                                  //@synthesize forecastRequestStartingCallback=_forecastRequestStartingCallback - In the implementation block
@property (nonatomic,copy) id locationGeocodeForCoordinateRequestStartingCallback;              //@synthesize locationGeocodeForCoordinateRequestStartingCallback=_locationGeocodeForCoordinateRequestStartingCallback - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(WFWeatherStoreServiceConfiguration *)configuration;
-(void)setConfiguration:(WFWeatherStoreServiceConfiguration *)arg1 ;
-(void)cancelTaskWithIdentifier:(id)arg1 ;
-(id)initWithConfiguration:(id)arg1 ;
-(WFWeatherStoreCache *)cache;
-(void)setCache:(WFWeatherStoreCache *)arg1 ;
-(NSObject*<OS_dispatch_queue>)parseQueue;
-(void)setParseQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)mapQueue;
-(void)setMapQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithConfiguration:(id)arg1 error:(id*)arg2 ;
-(void)forecastForLocation:(id)arg1 locale:(id)arg2 onDate:(id)arg3 requestIdentifier:(id)arg4 options:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)hourlyForecastForLocation:(id)arg1 locale:(id)arg2 requestIdentifier:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)dailyForecastForLocation:(id)arg1 locale:(id)arg2 requestIdentifier:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)forecast:(unsigned long long)arg1 forLocation:(id)arg2 withUnits:(int)arg3 locale:(id)arg4 requestIdentifier:(id)arg5 requestOptions:(id)arg6 completionHandler:(/*^block*/id)arg7 ;
-(void)airQualityForLocation:(id)arg1 locale:(id)arg2 requestIdentifier:(id)arg3 options:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)invalidateCacheWithIdentifier:(id)arg1 ;
-(id)locationGeocodeForCoordinateRequestStartingCallback;
-(void)setIncomingRequestQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setURLToTaskMap:(NSMutableDictionary *)arg1 ;
-(void)setURLToCallbackMap:(NSMutableDictionary *)arg1 ;
-(void)setUUIDToURLMap:(NSMutableDictionary *)arg1 ;
-(void)setUUIDToCallbackMap:(NSMutableDictionary *)arg1 ;
-(void)setRetryManager:(WFNetworkRetryManager *)arg1 ;
-(void)setRetryLock:(os_unfair_lock_s)arg1 ;
-(void)_cancelWithRequestIdentifier:(id)arg1 ;
-(void)_forecastConditionsForTypes:(unsigned long long)arg1 location:(id)arg2 locale:(id)arg3 date:(id)arg4 requestIdentifier:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(id)_cachedHourlyForecastedConditionsForLocation:(id)arg1 date:(id)arg2 ;
-(id)_cachedDailyForecastedConditionsForLocation:(id)arg1 date:(id)arg2 ;
-(id)_cachedAirQualityConditionsForLocation:(id)arg1 date:(id)arg2 ;
-(void)forecast:(unsigned long long)arg1 forLocation:(id)arg2 withUnits:(int)arg3 locale:(id)arg4 requestIdentifier:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(id)_cachedCurrentObservationsForLocation:(id)arg1 date:(id)arg2 ;
-(id)_cachedDailyPollenForecastedConditionsForLocation:(id)arg1 date:(id)arg2 ;
-(id)_cachedHistoricalObservationsForLast24hForLocation:(id)arg1 date:(id)arg2 ;
-(id)_cachedChangeForecastForLocation:(id)arg1 date:(id)arg2 ;
-(id)_cachedSevereWeatherEventsForLocation:(id)arg1 date:(id)arg2 ;
-(id)_cachedNextHourPrecipitationForLocation:(id)arg1 date:(id)arg2 ;
-(void)_enumerateForecastTypesIn:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_forecastConditionsForTypes:(unsigned long long)arg1 location:(id)arg2 units:(int)arg3 locale:(id)arg4 date:(id)arg5 requestIdentifier:(id)arg6 requestOptions:(id)arg7 completionHandler:(/*^block*/id)arg8 ;
-(id)_cachedData:(unsigned long long)arg1 forLocation:(id)arg2 date:(id)arg3 ;
-(id)apiVersionForSettings:(id)arg1 ;
-(void)_forecastConditionsForTWCAQIAndTypes:(unsigned long long)arg1 location:(id)arg2 locale:(id)arg3 date:(id)arg4 requestIdentifier:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(BOOL)_cacheParsedForecastData:(id)arg1 types:(unsigned long long)arg2 location:(id)arg3 date:(id)arg4 requestIdentifier:(id)arg5 ;
-(id)languageForLocale:(id)arg1 ;
-(id)_currentScaleCategoryForScale:(id)arg1 index:(unsigned long long)arg2 ;
-(void)_submitRequest:(id)arg1 withIdentifier:(id)arg2 forScaleNamed:(id)arg3 language:(id)arg4 configuration:(id)arg5 apiVersion:(id)arg6 completionHandler:(/*^block*/id)arg7 ;
-(void)_submitRequest:(id)arg1 withIdentifier:(id)arg2 forLocation:(id)arg3 forecastTypes:(unsigned long long)arg4 configuration:(id)arg5 units:(int)arg6 locale:(id)arg7 date:(id)arg8 apiVersion:(id)arg9 completionHandler:(/*^block*/id)arg10 ;
-(void)_cacheObject:(id)arg1 type:(unsigned long long)arg2 date:(id)arg3 forLocation:(id)arg4 ;
-(NSObject*<OS_dispatch_queue>)incomingRequestQueue;
-(BOOL)_isConnectivityAvailableForWeatherHost:(id*)arg1 ;
-(id)_taskForURL:(id)arg1 ;
-(BOOL)_handleDataTaskCompletionWithData:(id)arg1 httpResponse:(id)arg2 apiVersion:(id)arg3 identifier:(id)arg4 requestURL:(id)arg5 dataTask:(id)arg6 dataTaskError:(id)arg7 startDate:(id)arg8 ;
-(void)_executeCallbacksForURL:(id)arg1 responseData:(id)arg2 error:(id)arg3 ;
-(void)_setTask:(id)arg1 requestIdentifier:(id)arg2 callback:(id)arg3 forURL:(id)arg4 ;
-(id)forecastRequestStartingCallback;
-(void)_addCallback:(id)arg1 requestIdentifier:(id)arg2 forURL:(id)arg3 ;
-(void)requestSuccessForAPIVersion:(id)arg1 ;
-(void)requestFailureForAPIVersion:(id)arg1 error:(id)arg2 ;
-(WFNetworkRetryManager *)retryManager;
-(NSMutableDictionary *)URLToCallbackMap;
-(NSMutableDictionary *)URLToTaskMap;
-(NSMutableDictionary *)UUIDToCallbackMap;
-(NSMutableDictionary *)UUIDToURLMap;
-(void)_cleanupCallbacksAndTasksForURL:(id)arg1 ;
-(void)forecast:(unsigned long long)arg1 forLocation:(id)arg2 locale:(id)arg3 requestIdentifier:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)completeErroneousForecastRequestWithHandler:(/*^block*/id)arg1 requestIdentifier:(id)arg2 error:(id)arg3 ;
-(void)setForecastRequestStartingCallback:(id)arg1 ;
-(void)setLocationGeocodeForCoordinateRequestStartingCallback:(id)arg1 ;
-(os_unfair_lock_s)retryLock;
@end

