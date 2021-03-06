/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:55 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /usr/lib/libcoreroutine.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/RTPredictedLocationOfInterestProvider.h>

@protocol OS_dispatch_queue;
@class NSObject, RTMapsSupportManager, NSString;

@interface RTPredictedLocationOfInterestProviderMaps : NSObject <RTPredictedLocationOfInterestProvider> {

	NSObject*<OS_dispatch_queue> _queue;
	RTMapsSupportManager* _mapsSupportManager;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                     //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) RTMapsSupportManager * mapsSupportManager;              //@synthesize mapsSupportManager=_mapsSupportManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)initWithMapsSupportManager:(id)arg1 ;
-(RTMapsSupportManager *)mapsSupportManager;
-(void)fetchNextPredictedLocationsOfInterestWithCriteria:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)fetchPredictedExitDatesWithCriteria:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)fetchPredictedLocationsOfInterestWithCriteria:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)_getNextPredictedLocationsOfInterestBackedByHistortyEntryRouteFromLocation:(id)arg1 startDate:(id)arg2 timeInterval:(double)arg3 historyEntryRoutes:(id)arg4 ;
-(id)_getNextPredictedLocationsOfInterestBackedByHistortyEntryPlaceDisplayFromLocation:(id)arg1 startDate:(id)arg2 timeInterval:(double)arg3 historyEntryPlaceDisplays:(id)arg4 ;
@end

