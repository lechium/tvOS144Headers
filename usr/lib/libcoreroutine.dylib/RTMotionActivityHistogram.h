/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:52 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /usr/lib/libcoreroutine.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary;

@interface RTMotionActivityHistogram : NSObject {

	NSMutableDictionary* _bins;
	double _totalInterval;

}

@property (assign,nonatomic) double totalInterval;                      //@synthesize totalInterval=_totalInterval - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * bins;              //@synthesize bins=_bins - In the implementation block
-(id)init;
-(NSMutableDictionary *)bins;
-(id)initWithActivites:(id)arg1 betweenDate:(id)arg2 andDate:(id)arg3 ;
-(double)totalInterval;
-(id)binForType:(unsigned long long)arg1 ;
-(void)addInterval:(double)arg1 ofType:(unsigned long long)arg2 withConfidence:(unsigned long long)arg3 ;
-(void)setTotalInterval:(double)arg1 ;
-(id)binsSortedByInterval;
@end

