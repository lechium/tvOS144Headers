/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:54 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /usr/lib/libcoreroutine.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray;

@interface RTStateModelAggOutOfStateSelection : NSObject {

	NSMutableArray* _selectOOStStates;
	double _weeklyDensityCorrection;
	double _dailyDensityCorrection;

}

@property (nonatomic,retain) NSMutableArray * selectOOStStates;              //@synthesize selectOOStStates=_selectOOStStates - In the implementation block
@property (assign,nonatomic) double weeklyDensityCorrection;                 //@synthesize weeklyDensityCorrection=_weeklyDensityCorrection - In the implementation block
@property (assign,nonatomic) double dailyDensityCorrection;                  //@synthesize dailyDensityCorrection=_dailyDensityCorrection - In the implementation block
-(id)init;
-(void)setWeeklyDensityCorrection:(double)arg1 ;
-(void)setDailyDensityCorrection:(double)arg1 ;
-(void)setSelectOOStStates:(NSMutableArray *)arg1 ;
-(id)initWithSelectOOStStates:(id)arg1 dailyDensityCorrection:(double)arg2 weeklyDensityCorrection:(double)arg3 ;
-(NSMutableArray *)selectOOStStates;
-(double)weeklyDensityCorrection;
-(double)dailyDensityCorrection;
@end

