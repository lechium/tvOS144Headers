/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:54 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class EKRecurrenceHelper, NSDateComponents, NSString, NSDate, EKRecurrenceEnd, NSArray;

@interface EKRecurrenceRule : EKObject <NSCopying> {

	EKRecurrenceHelper* _recurrenceHelper;
	BOOL _shouldPinMonthDays;
	BOOL _usesEndDate;

}

@property (nonatomic,readonly) BOOL shouldPinMonthDays;                             //@synthesize shouldPinMonthDays=_shouldPinMonthDays - In the implementation block
@property (nonatomic,readonly) NSDateComponents * dateComponents; 
@property (readonly) BOOL usesEndDate;                                              //@synthesize usesEndDate=_usesEndDate - In the implementation block
@property (nonatomic,readonly) NSString * UUID; 
@property (nonatomic,readonly) NSDate * cachedEndDate; 
@property (nonatomic,readonly) BOOL dirtyStateMayAffectExceptionDates; 
@property (nonatomic,readonly) NSString * calendarIdentifier; 
@property (nonatomic,copy) EKRecurrenceEnd * recurrenceEnd; 
@property (nonatomic,readonly) long long frequency; 
@property (nonatomic,readonly) long long interval; 
@property (nonatomic,readonly) long long firstDayOfTheWeek; 
@property (nonatomic,readonly) NSArray * daysOfTheWeek; 
@property (nonatomic,readonly) NSArray * daysOfTheMonth; 
@property (nonatomic,readonly) NSArray * daysOfTheYear; 
@property (nonatomic,readonly) NSArray * weeksOfTheYear; 
@property (nonatomic,readonly) NSArray * monthsOfTheYear; 
@property (nonatomic,readonly) NSArray * setPositions; 
+(long long)daysTypeForDayArray:(id)arg1 ;
+(id)iCalendarValueFromDayOfTheWeek:(unsigned long long)arg1 ;
+(long long)_ekWeekdayFromCalDayOfWeek:(int)arg1 ;
+(int)_calDayOfWeekFromEKWeekday:(long long)arg1 ;
+(id)iCalendarValueFromRecurrenceType:(long long)arg1 ;
+(id)iCalendarValueFromDate:(id)arg1 isDateOnly:(BOOL)arg2 isFloating:(BOOL)arg3 ;
+(id)knownSingleValueKeysForComparison;
+(Class)frozenClass;
+(id)knownIdentityKeysForComparison;
+(id)recurrenceRuleWithType:(long long)arg1 interval:(unsigned long long)arg2 end:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(unsigned long long)count;
-(NSString *)calendarIdentifier;
-(NSString *)UUID;
-(id)specifier;
-(void)setCount:(unsigned long long)arg1 ;
-(void)reset;
-(long long)interval;
-(void)setInterval:(long long)arg1 ;
-(id)endDate;
-(void)rollback;
-(void)setEndDate:(id)arg1 ;
-(void)setUUID:(NSString *)arg1 ;
-(void)setFrequency:(long long)arg1 ;
-(long long)frequency;
-(NSDateComponents *)dateComponents;
-(id)initRecurrenceWithFrequency:(long long)arg1 interval:(long long)arg2 daysOfTheWeek:(id)arg3 daysOfTheMonth:(id)arg4 monthsOfTheYear:(id)arg5 weeksOfTheYear:(id)arg6 daysOfTheYear:(id)arg7 setPositions:(id)arg8 end:(id)arg9 ;
-(NSArray *)daysOfTheWeek;
-(NSArray *)daysOfTheMonth;
-(void)setDaysOfTheMonth:(NSArray *)arg1 ;
-(void)setDaysOfTheWeek:(NSArray *)arg1 ;
-(NSArray *)daysOfTheYear;
-(void)setDaysOfTheYear:(NSArray *)arg1 ;
-(NSArray *)monthsOfTheYear;
-(void)setMonthsOfTheYear:(NSArray *)arg1 ;
-(NSArray *)weeksOfTheYear;
-(void)setWeeksOfTheYear:(NSArray *)arg1 ;
-(NSArray *)setPositions;
-(void)setSetPositions:(NSArray *)arg1 ;
-(BOOL)shouldPinMonthDays;
-(id)initRecurrenceWithFrequency:(long long)arg1 interval:(long long)arg2 end:(id)arg3 ;
-(void)setFirstDayOfTheWeek:(long long)arg1 ;
-(void)setRecurrenceEnd:(EKRecurrenceEnd *)arg1 ;
-(id)stringValueAsDateOnly:(BOOL)arg1 isFloating:(BOOL)arg2 ;
-(EKRecurrenceEnd *)recurrenceEnd;
-(void)setSpecifier:(id)arg1 ;
-(int)firstDayOfTheWeekRaw;
-(void)setFirstDayOfTheWeekRaw:(int)arg1 ;
-(BOOL)usesEndDate;
-(id)_recurrenceHelper;
-(void)_updateSpecifierIfNeeded;
-(NSDate *)cachedEndDate;
-(id)humanReadableDescriptionWithStartDate:(id)arg1 isConcise:(BOOL)arg2 ;
-(long long)firstDayOfTheWeek;
-(BOOL)dirtyStateMayAffectExceptionDates;
-(BOOL)mayOccurAfterDate:(id)arg1 ;
-(void)pinToEndsOfMonthsWithCalendarItem:(id)arg1 ;
-(BOOL)isWeekdayRule;
-(BOOL)isWeekendRule;
-(BOOL)isAnyDayRule;
-(BOOL)isSimpleRule;
-(id)humanReadableDescriptionWithStartDate:(id)arg1 ;
-(BOOL)isEqualToRecurrenceRule:(id)arg1 ;
@end

