/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:58 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDateComponents, NSDate, NSCalendar;

@interface _UIDatePickerCalendarDateComponent : NSObject <NSCopying> {

	NSDateComponents* _components;
	NSDate* _date;

}

@property (nonatomic,readonly) NSDate * date; 
@property (nonatomic,readonly) NSDateComponents * components;              //@synthesize components=_components - In the implementation block
@property (nonatomic,readonly) NSCalendar * calendar; 
+(unsigned long long)representedCalendarUnits;
+(id)inlineDescriptionForComponents:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSDate *)date;
-(NSCalendar *)calendar;
-(NSDateComponents *)components;
-(id)initWithDate:(id)arg1 calendar:(id)arg2 ;
@end

