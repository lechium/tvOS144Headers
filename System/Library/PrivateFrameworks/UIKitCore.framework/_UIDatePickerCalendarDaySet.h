/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:13 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSCalendar, NSMutableDictionary;

@interface _UIDatePickerCalendarDaySet : NSObject {

	NSCalendar* _calendar;
	NSMutableDictionary* _loadedDays;

}
-(id)initWithCalendar:(id)arg1 ;
-(void)cleanupDaysKeepingDaysForMonths:(id)arg1 ;
-(id)daysForMonth:(id)arg1 includingOverlapDays:(BOOL)arg2 ;
-(id)loadedDays;
-(id)_createDaysForMonth:(id)arg1 ;
-(id)_partialDaysForMonth:(id)arg1 atBeginningOfMonth:(BOOL)arg2 count:(unsigned long long)arg3 ;
@end

