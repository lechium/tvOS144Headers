/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:43 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaMiningKit/CLSAutoupdatingCurrentCalendar.h>

@interface CLSCurrentCalendar : CLSAutoupdatingCurrentCalendar
+(void)initialize;
+(id)calendar;
+(void)update;
+(BOOL)nextWeekendLocalStartDate:(out id*)arg1 interval:(out double*)arg2 options:(unsigned long long)arg3 afterDate:(id)arg4 ;
+(BOOL)closestWeekendLocalStartDate:(out id*)arg1 interval:(out double*)arg2 afterDate:(id)arg3 ;
+(BOOL)isWeekendDate:(id)arg1 ;
+(BOOL)dateIntervalIntersectsWeekend:(id)arg1 ;
+(BOOL)rangeOfWeekendLocalStartDate:(out id*)arg1 interval:(out double*)arg2 containingDate:(id)arg3 ;
@end

