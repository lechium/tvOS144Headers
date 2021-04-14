/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:58 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UIDatePickerCalendarDateComponent.h>

@interface _UIDatePickerCalendarMonth : _UIDatePickerCalendarDateComponent {

	_UIDatePickerCalendarMonth* _previousMonth;
	_UIDatePickerCalendarMonth* _nextMonth;

}

@property (nonatomic,readonly) _UIDatePickerCalendarMonth * previousMonth; 
@property (nonatomic,readonly) _UIDatePickerCalendarMonth * nextMonth; 
+(unsigned long long)representedCalendarUnits;
-(id)dayMatchingOrdinalDay:(id)arg1 ;
-(_UIDatePickerCalendarMonth *)nextMonth;
-(_UIDatePickerCalendarMonth *)previousMonth;
-(id)dayWithDate:(id)arg1 assignedMonth:(id)arg2 ;
-(id)_monthWithOffset:(long long)arg1 ;
@end
