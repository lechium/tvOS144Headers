/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:09 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosGraph/PGFeatureVectorGenerator.h>

@class CLSHolidayCalendarEventService;

@interface PGFeatureVectorUpcomingFutureGenerator : PGFeatureVectorGenerator {

	CLSHolidayCalendarEventService* _holidayService;

}

@property (nonatomic,retain) CLSHolidayCalendarEventService * holidayService;              //@synthesize holidayService=_holidayService - In the implementation block
-(void)enumerateFeatureVectorsByTypeUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)probabilityPassWithThreshold:(double)arg1 ;
-(CLSHolidayCalendarEventService *)holidayService;
-(BOOL)_enumerateHolidayFeatureVectorsFromLocalDate:(id)arg1 toLocalDate:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(BOOL)_enumeratePeopleEventFeatureVectorFromLocalDate:(id)arg1 toLocalDate:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(BOOL)_enumerateCalendarEventFeatureVectorFromLocalDate:(id)arg1 toLocalDate:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)setHolidayService:(CLSHolidayCalendarEventService *)arg1 ;
@end
