/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:49 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /usr/lib/libcoreroutine.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, RTDefaultsManager, RTInferredMapItemFuser, RTMetricManager, RTLearnedLocationStore, NSDictionary;

@interface RTPlaceInferenceManager : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	RTDefaultsManager* _defaultsManager;
	RTInferredMapItemFuser* _inferredMapItemFuser;
	RTMetricManager* _metricManager;
	RTLearnedLocationStore* _learnedLocationStore;
	NSDictionary* _mapItemProviders;
	unsigned long long _placeInferencesLimit;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                         //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) RTDefaultsManager * defaultsManager;                        //@synthesize defaultsManager=_defaultsManager - In the implementation block
@property (nonatomic,readonly) RTInferredMapItemFuser * inferredMapItemFuser;              //@synthesize inferredMapItemFuser=_inferredMapItemFuser - In the implementation block
@property (nonatomic,readonly) RTMetricManager * metricManager;                            //@synthesize metricManager=_metricManager - In the implementation block
@property (nonatomic,readonly) RTLearnedLocationStore * learnedLocationStore;              //@synthesize learnedLocationStore=_learnedLocationStore - In the implementation block
@property (nonatomic,readonly) NSDictionary * mapItemProviders;                            //@synthesize mapItemProviders=_mapItemProviders - In the implementation block
@property (assign,nonatomic) unsigned long long placeInferencesLimit;                      //@synthesize placeInferencesLimit=_placeInferencesLimit - In the implementation block
+(void)sanityCheckMapItemProviders:(id)arg1 ;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)initWithQueue:(id)arg1 defaultsManager:(id)arg2 distanceCalculator:(id)arg3 eventManager:(id)arg4 fingerprintManager:(id)arg5 inferredMapItemFuser:(id)arg6 learnedLocationStore:(id)arg7 locationManager:(id)arg8 mapServiceManager:(id)arg9 mapsSupportManager:(id)arg10 metricManager:(id)arg11 motionActivityManager:(id)arg12 platform:(id)arg13 portraitManager:(id)arg14 ;
-(id)createAllMapItemProvidersWithDefaultManager:(id)arg1 distanceCalculator:(id)arg2 eventManager:(id)arg3 fingerprintManager:(id)arg4 learnedLocationStore:(id)arg5 locationManager:(id)arg6 mapServiceManager:(id)arg7 mapsSupportManager:(id)arg8 motionActivityManager:(id)arg9 platform:(id)arg10 portraitManager:(id)arg11 ;
-(id)_placeInferencesForOptions:(id)arg1 error:(id*)arg2 ;
-(id)_selectReferenceLocation:(id)arg1 ;
-(unsigned long long)placeInferencesLimit;
-(id)_selectMapItemProvidersForOptions:(id)arg1 ;
-(BOOL)_learnedPlaceTypeForInferredMapItem:(id)arg1 placeType:(unsigned long long*)arg2 placeTypeSource:(unsigned long long*)arg3 error:(id*)arg4 ;
-(RTInferredMapItemFuser *)inferredMapItemFuser;
-(id)_getFallbackMapItemProviderForOptions:(id)arg1 ;
-(id)_placeInferenceFromInferredMapItem:(id)arg1 referenceLocation:(id)arg2 error:(id*)arg3 ;
-(void)sendPlaceInferenceMetrics:(id)arg1 inferredMapItems:(id)arg2 fusedMapItems:(id)arg3 fallbackInferredMapItems:(id)arg4 finalPlaceInferences:(id)arg5 ;
-(id)_selectMapItemProvidersForOptions:(id)arg1 targetProvider:(unsigned long long)arg2 ;
-(RTDefaultsManager *)defaultsManager;
-(void)_addMapItemProviderFromArray:(id)arg1 toSet:(id)arg2 ;
-(NSDictionary *)mapItemProviders;
-(BOOL)_inferUserSpecificPlaceTypeForInferredMapItem:(id)arg1 userSpecificPlaceType:(unsigned long long*)arg2 userSpecificPlaceTypeSource:(unsigned long long*)arg3 error:(id*)arg4 ;
-(unsigned long long)_learnedPlaceTypeFromUserSpecificPlaceType:(unsigned long long)arg1 ;
-(unsigned long long)_learnedPlaceTypeSourceFromUserSpecificPlaceTypeSource:(unsigned long long)arg1 ;
-(RTLearnedLocationStore *)learnedLocationStore;
-(unsigned long long)_userSpecificPlaceTypeFromLearnedPlaceType:(unsigned long long)arg1 ;
-(unsigned long long)_userSpecificPlaceTypeSourceFromLearnedPlaceTypeSource:(unsigned long long)arg1 ;
-(id)_loiIdentifierForInferredMapItem:(id)arg1 ;
-(void)fetchPlaceInferencesForOptions:(id)arg1 handler:(/*^block*/id)arg2 ;
-(RTMetricManager *)metricManager;
-(void)setPlaceInferencesLimit:(unsigned long long)arg1 ;
@end

