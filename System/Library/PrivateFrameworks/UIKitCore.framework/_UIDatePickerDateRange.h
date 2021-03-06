/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:57 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <UIKitCore/UIKitCore-Structs.h>
@class NSDate;

@interface _UIDatePickerDateRange : NSObject {

	SCD_Struct_UI30 _flags;
	NSDate* _startDate;
	NSDate* _endDate;

}

@property (nonatomic,readonly) NSDate * startDate;              //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSDate * endDate;                //@synthesize endDate=_endDate - In the implementation block
-(id)init;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 ;
-(NSDate *)endDate;
-(NSDate *)startDate;
-(BOOL)containsDate:(id)arg1 ;
-(id)dateInRangeForDate:(id)arg1 ;
-(BOOL)containsDay:(id)arg1 ;
-(BOOL)containsMonth:(id)arg1 ;
-(BOOL)_containsDate:(id)arg1 withAccuracy:(unsigned long long)arg2 inCalendar:(id)arg3 ;
@end

