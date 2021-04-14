/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:23 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, NSString;

@interface SAReminderRecurrence : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSArray * daysOfTheMonth; 
@property (nonatomic,copy) NSArray * daysOfTheWeek; 
@property (nonatomic,copy) NSArray * daysOfTheYear; 
@property (nonatomic,copy) NSString * frequencyTimeUnit; 
@property (assign,nonatomic) long long interval; 
@property (nonatomic,copy) NSArray * monthsOfTheYear; 
@property (nonatomic,copy) NSArray * weeksOfTheYear; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)recurrence;
+(id)recurrenceWithDictionary:(id)arg1 context:(id)arg2 ;
-(long long)interval;
-(void)setInterval:(long long)arg1 ;
-(id)groupIdentifier;
-(NSArray *)daysOfTheWeek;
-(id)encodedClassName;
-(NSArray *)daysOfTheMonth;
-(void)setDaysOfTheMonth:(NSArray *)arg1 ;
-(void)setDaysOfTheWeek:(NSArray *)arg1 ;
-(NSArray *)daysOfTheYear;
-(void)setDaysOfTheYear:(NSArray *)arg1 ;
-(NSString *)frequencyTimeUnit;
-(void)setFrequencyTimeUnit:(NSString *)arg1 ;
-(NSArray *)monthsOfTheYear;
-(void)setMonthsOfTheYear:(NSArray *)arg1 ;
-(NSArray *)weeksOfTheYear;
-(void)setWeeksOfTheYear:(NSArray *)arg1 ;
@end

