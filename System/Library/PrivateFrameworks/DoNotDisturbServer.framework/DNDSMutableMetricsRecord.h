/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:16 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DoNotDisturbServer/DoNotDisturbServer-Structs.h>
#import <DoNotDisturbServer/DNDSMetricsRecord.h>

@class NSDictionary, NSDate;

@interface DNDSMutableMetricsRecord : DNDSMetricsRecord

@property (nonatomic,copy) NSDictionary * metricsByDay; 
@property (nonatomic,copy) NSDate * lastDailyHeartbeat; 
@property (nonatomic,copy) NSDictionary * metricsByWeek; 
@property (nonatomic,copy) NSDate * lastWeeklyHeartbeat; 
@property (nonatomic,copy) NSDictionary * metricsByMonth; 
@property (nonatomic,copy) NSDate * lastMonthlyHeartbeat; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setMetricsByDay:(NSDictionary *)arg1 ;
-(void)setMetricsByWeek:(NSDictionary *)arg1 ;
-(void)setMetricsByMonth:(NSDictionary *)arg1 ;
-(void)setLastDailyHeartbeat:(NSDate *)arg1 ;
-(void)setLastWeeklyHeartbeat:(NSDate *)arg1 ;
-(void)setLastMonthlyHeartbeat:(NSDate *)arg1 ;
@end

