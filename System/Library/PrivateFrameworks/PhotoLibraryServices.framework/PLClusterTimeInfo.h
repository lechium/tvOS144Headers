/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:13 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSCalendar, NSDate;

@interface PLClusterTimeInfo : NSObject {

	NSCalendar* _calendar;
	double _endOfSameDayTimestamp;
	double _maximumNextDayTimestamp;
	NSDate* _latestUTCDate;

}

@property (nonatomic,readonly) NSCalendar * calendar;                       //@synthesize calendar=_calendar - In the implementation block
@property (nonatomic,readonly) double endOfSameDayTimestamp;                //@synthesize endOfSameDayTimestamp=_endOfSameDayTimestamp - In the implementation block
@property (nonatomic,readonly) double maximumNextDayTimestamp;              //@synthesize maximumNextDayTimestamp=_maximumNextDayTimestamp - In the implementation block
@property (nonatomic,retain,readonly) NSDate * latestUTCDate;               //@synthesize latestUTCDate=_latestUTCDate - In the implementation block
-(NSCalendar *)calendar;
-(void)reset;
-(id)initWithCalendar:(id)arg1 ;
-(void)updateWithUTCDate:(id)arg1 localDate:(id)arg2 ;
-(BOOL)utcDateBelongsInCluster:(id)arg1 ;
-(void)_updateTimestampsWithUTCDate:(id)arg1 localDate:(id)arg2 ;
-(double)endOfSameDayTimestamp;
-(double)maximumNextDayTimestamp;
-(NSDate *)latestUTCDate;
@end

