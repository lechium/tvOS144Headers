/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:31 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSDate, NSString;

@interface SACalendar : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSDate * date; 
@property (nonatomic,copy) NSString * timeZoneId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)calendar;
+(id)calendarWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSDate *)date;
-(id)groupIdentifier;
-(void)setDate:(NSDate *)arg1 ;
-(id)encodedClassName;
-(NSString *)timeZoneId;
-(void)setTimeZoneId:(NSString *)arg1 ;
@end

