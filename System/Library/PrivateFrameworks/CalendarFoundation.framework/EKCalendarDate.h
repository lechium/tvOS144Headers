/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:48 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CalendarFoundation/CalendarFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSCalendar, NSDate, NSDateComponents;

@interface EKCalendarDate : NSObject <NSCopying, NSMutableCopying> {

	NSCalendar* _calendar;
	NSDate* _date;
	NSDateComponents* _components;
	NSDateComponents* _originalComponents;

}
+(id)calendarDateWithDate:(id)arg1 timeZone:(id)arg2 ;
+(id)calendarDateWithDateComponents:(id)arg1 timeZone:(id)arg2 ;
+(id)calendarDateWithAbsoluteTime:(double)arg1 timeZone:(id)arg2 ;
+(id)calendarDateWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3 timeZone:(id)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(long long)compare:(id)arg1 ;
-(id)date;
-(id)earlierDate:(id)arg1 ;
-(id)laterDate:(id)arg1 ;
-(id)calendar;
-(id)timeZone;
-(long long)era;
-(long long)year;
-(long long)month;
-(long long)day;
-(long long)hour;
-(long long)minute;
-(long long)second;
-(unsigned long long)weekOfYear;
-(long long)secondsFromGMT;
-(int)dayOfWeek;
-(unsigned long long)dayOfYear;
-(id)components;
-(id)initWithDate:(id)arg1 originalComponents:(id)arg2 components:(id)arg3 timeZone:(id)arg4 ;
-(id)initWithDate:(id)arg1 originalComponents:(id)arg2 components:(id)arg3 calendar:(id)arg4 ;
-(double)absoluteTime;
-(id)allComponents;
-(id)initWithDate:(id)arg1 calendar:(id)arg2 ;
-(id)dayTimeComponents;
-(id)initWithDateComponents:(id)arg1 timeZone:(id)arg2 ;
-(id)differenceAsDateComponents:(id)arg1 units:(unsigned long long)arg2 ;
-(id)calendarDateWithDate:(id)arg1 ;
-(id)initWithDateComponents:(id)arg1 calendar:(id)arg2 ;
-(id)calendarDateForWeekWithWeekStart:(int)arg1 daysSinceWeekStart:(long long*)arg2 ;
-(id)calendarDateByAddingDays:(long long)arg1 ;
-(id)calendarDateForDay;
-(id)calendarDateByAddingWeeks:(long long)arg1 ;
-(id)calendarDateByAddingSeconds:(long long)arg1 ;
-(id)dayComponents;
-(id)calendarDateForMonth;
-(id)calendarDateByAddingMonths:(long long)arg1 ;
-(id)calendarDateForYear;
-(id)calendarDateByAddingYears:(long long)arg1 ;
-(id)calendarDateByComponentwiseAddingComponents:(id)arg1 ;
-(id)initWithDate:(id)arg1 timeZone:(id)arg2 ;
-(id)initWithAbsoluteTime:(double)arg1 timeZone:(id)arg2 ;
-(id)initWithDate:(id)arg1 components:(id)arg2 timeZone:(id)arg3 ;
-(id)timeComponents;
-(id)weekComponents;
-(id)calendarDateByAddingComponents:(id)arg1 ;
-(id)calendarDateByAddingMinutes:(long long)arg1 ;
-(id)calendarDateByAddingHours:(long long)arg1 ;
-(id)calendarDateByComponentwiseAddingSeconds:(long long)arg1 ;
-(id)calendarDateInTimeZone:(id)arg1 ;
-(id)differenceAsComponentwiseDateComponents:(id)arg1 ;
-(long long)differenceInYears:(id)arg1 ;
-(long long)differenceInMonths:(id)arg1 ;
-(long long)differenceInDays:(id)arg1 ;
-(double)differenceInSeconds:(id)arg1 ;
-(unsigned long long)daysInMonth;
-(unsigned long long)daysInYear;
-(unsigned long long)weeksInYear;
-(id)calendarDateForEndOfDay;
-(id)calendarDateForWeekWithWeekStart:(int)arg1 ;
-(id)calendarDateForEndOfWeekWithWeekStart:(int)arg1 ;
-(id)calendarDateForEndOfMonth;
-(id)calendarDateForEndOfYear;
-(id)calendarDateByAddingGregorianUnits:(SCD_Struct_EK2)arg1 ;
-(SCD_Struct_EK2)differenceAsGregorianUnits:(id)arg1 flags:(unsigned long long)arg2 ;
-(id)componentsWithoutTime;
@end
