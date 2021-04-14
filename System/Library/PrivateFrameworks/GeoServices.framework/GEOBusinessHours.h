/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:40 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class GEOPDBusinessHours, NSArray, NSString, NSDate;

@interface GEOBusinessHours : NSObject {

	GEOPDBusinessHours* _hours;
	NSArray* _placeDailyHours;
	NSArray* _placeDailyNormalizedHours;
	BOOL _isBrandTypeHours;

}

@property (nonatomic,readonly) unsigned openingSoonThresholdInSeconds; 
@property (nonatomic,readonly) unsigned closingSoonThresdholdInSeconds; 
@property (nonatomic,readonly) unsigned long long hoursType; 
@property (nonatomic,readonly) NSArray * pdHours; 
@property (nonatomic,readonly) NSArray * placeDailyHours;                            //@synthesize placeDailyHours=_placeDailyHours - In the implementation block
@property (nonatomic,readonly) NSArray * placeDailyNormalizedHours;                  //@synthesize placeDailyNormalizedHours=_placeDailyNormalizedHours - In the implementation block
@property (nonatomic,readonly) NSString * localizedMessage; 
@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSDate * endDate; 
@property (nonatomic,readonly) BOOL isBrandTypeHours;                                //@synthesize isBrandTypeHours=_isBrandTypeHours - In the implementation block
+(id)prioritizeBusinessHours:(id)arg1 compareDate:(id)arg2 ;
+(void)divideBusinessHoursBasedOnTodaysDate:(id)arg1 compareDate:(id)arg2 completion:(/*^block*/id)arg3 ;
-(NSDate *)endDate;
-(NSDate *)startDate;
-(unsigned long long)hoursType;
-(id)initWithGEOPDBusinessHours:(id)arg1 timeZone:(id)arg2 ;
-(id)initWithGEOPDHours:(id)arg1 timeZone:(id)arg2 ;
-(NSArray *)placeDailyNormalizedHours;
-(BOOL)pdHoursAreValid;
-(NSArray *)pdHours;
-(unsigned)openingSoonThresholdInSeconds;
-(unsigned)closingSoonThresdholdInSeconds;
-(NSString *)localizedMessage;
-(NSArray *)placeDailyHours;
-(BOOL)isBrandTypeHours;
@end

