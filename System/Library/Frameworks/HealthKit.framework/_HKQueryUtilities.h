/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:13 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface _HKQueryUtilities : NSObject
+(double)totalDurationFromCoalescedDateIntervals:(id)arg1 ;
+(id)coalesceTimePeriodsFromSamples:(id)arg1 strictStartDate:(id)arg2 strictEndDate:(id)arg3 ;
+(id)arrayByCoalescingObjects:(id)arg1 startDate:(id)arg2 intervalComponents:(id)arg3 calendar:(id)arg4 combiningBlock:(/*^block*/id)arg5 ;
+(id)_processSleepQueryResults:(id)arg1 startDate:(id)arg2 intervalComponents:(id)arg3 sourceOrder:(id)arg4 calendar:(id)arg5 ;
+(id)sleepDateIntervalForThePastWeekWithCalendar:(id)arg1 ;
+(id)sleepQueryWithStartDate:(id)arg1 endDate:(id)arg2 intervalComponents:(id)arg3 calendar:(id)arg4 predicate:(id)arg5 healthStore:(id)arg6 completion:(/*^block*/id)arg7 ;
+(id)coalesceTimePeriods:(id)arg1 strictStartDate:(id)arg2 strictEndDate:(id)arg3 ;
+(void)_organizeSampleByStartDate:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 intervalComponents:(id)arg4 callback:(/*^block*/id)arg5 ;
+(id)calculateCountStatisticsWithSamples:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 intervalComponents:(id)arg4 ;
+(id)calculateTotalDurationsWithTimePeriods:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 intervalComponents:(id)arg4 startOfDayTransform:(/*^block*/id)arg5 ;
+(id)calculateIncludedValuesWithSamples:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 intervalComponents:(id)arg4 ;
+(id)countStatisticsQueryWithSampleType:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 intervalComponents:(id)arg4 predicate:(id)arg5 completion:(/*^block*/id)arg6 ;
+(id)averageSumFromStatistics:(id)arg1 unit:(id)arg2 ;
+(id)averageSumFromQuantities:(id)arg1 unit:(id)arg2 ;
+(id)minimumFromQuantities:(id)arg1 unit:(id)arg2 ;
+(id)maximumFromQuantities:(id)arg1 unit:(id)arg2 ;
+(BOOL)shouldUseDailyAverageWithDateComponents:(id)arg1 sampleType:(id)arg2 ;
+(id)coalesceTotalDurations:(id)arg1 startDate:(id)arg2 intervalComponents:(id)arg3 intervalRecordCountsOut:(id*)arg4 ;
@end

