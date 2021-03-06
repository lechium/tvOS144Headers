/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:54 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /usr/lib/libcoreroutine.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class RTStateModelLocation;

@interface RTStateDepictionAggStateStats : NSObject {

	int _numOfEntries;
	RTStateModelLocation* _location;
	double _aggregateTime_s;
	double _lastExit_s;

}

@property (nonatomic,retain) RTStateModelLocation * location;              //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) double aggregateTime_s;                       //@synthesize aggregateTime_s=_aggregateTime_s - In the implementation block
@property (assign,nonatomic) double lastExit_s;                            //@synthesize lastExit_s=_lastExit_s - In the implementation block
@property (assign,nonatomic) int numOfEntries;                             //@synthesize numOfEntries=_numOfEntries - In the implementation block
-(id)init;
-(RTStateModelLocation *)location;
-(void)setLocation:(RTStateModelLocation *)arg1 ;
-(void)setAggregateTime_s:(double)arg1 ;
-(double)aggregateTime_s;
-(void)setLastExit_s:(double)arg1 ;
-(void)setNumOfEntries:(int)arg1 ;
-(double)lastExit_s;
-(int)numOfEntries;
@end

