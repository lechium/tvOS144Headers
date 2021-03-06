/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:16 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PodcastsFoundation.framework/PodcastsFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface IMMetrics : NSObject
+(void)initialize;
+(void)disable;
+(void)setLogLevel:(int)arg1 ;
+(void)enable;
+(void)recordEvent:(id)arg1 ;
+(void)recordUserAction:(id)arg1 dataSource:(id)arg2 ;
+(void)flushImmediately;
+(id)defaultMetricsController;
+(void)removeMetricsController:(id)arg1 ;
+(void)addMetricsController:(id)arg1 ;
+(void)recordUserAction:(id)arg1 dataSource:(id)arg2 withData:(id)arg3 ;
+(void)setupEvent:(id)arg1 forDataSource:(id)arg2 ;
+(void)startTimer:(id)arg1 dataSource:(id)arg2 ;
+(id)keyForTimerName:(id)arg1 dataSource:(id)arg2 ;
+(double)endTimer:(id)arg1 dataSource:(id)arg2 ;
+(double)endTimer:(id)arg1 dataSource:(id)arg2 withData:(id)arg3 ;
+(void)recordEvent:(id)arg1 with:(id)arg2 ;
+(id)metricsControllerForTopic:(id)arg1 ;
+(BOOL)canRecordEvent;
+(void)recordEvent:(id)arg1 dataSource:(id)arg2 data:(id)arg3 topic:(id)arg4 ;
+(void)recordEvent:(id)arg1 topic:(id)arg2 ;
+(void)cancelFlush;
+(void)setDefaultMetricsController:(id)arg1 ;
+(void)recordUserAction:(id)arg1 ;
+(void)startTimer:(id)arg1 ;
+(double)endTimer:(id)arg1 ;
+(void)recordMemory:(id)arg1 ;
+(void)recordEvent:(id)arg1 dataSource:(id)arg2 data:(id)arg3 ;
@end

