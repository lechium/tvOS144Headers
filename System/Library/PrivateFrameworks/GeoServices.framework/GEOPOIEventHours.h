/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:42 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDateInterval, NSArray;

@interface GEOPOIEventHours : NSObject <NSSecureCoding> {

	NSDateInterval* _dateInterval;
	NSArray* _hours;

}

@property (nonatomic,retain) NSDateInterval * dateInterval;              //@synthesize dateInterval=_dateInterval - In the implementation block
@property (nonatomic,retain) NSArray * hours;                            //@synthesize hours=_hours - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)eventHoursForDateTimeRanges:(id)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)hours;
-(NSDateInterval *)dateInterval;
-(void)setHours:(NSArray *)arg1 ;
-(void)setDateInterval:(NSDateInterval *)arg1 ;
-(id)initWithDateTimeRange:(id)arg1 ;
-(id)initWithDateInterval:(id)arg1 ;
@end

