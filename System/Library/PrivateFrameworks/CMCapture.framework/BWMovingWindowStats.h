/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:45 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWStats.h>

@interface BWMovingWindowStats : BWStats {

	int _windowSize;
	int _numDataPoints;
	int _dataPointIndex;
	double* _dataPoints;

}

@property (nonatomic,readonly) int windowSize;              //@synthesize windowSize=_windowSize - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(double)max;
-(double)min;
-(int)windowSize;
-(id)initWithWindowSize:(int)arg1 ;
-(void)addDataPoint:(double)arg1 ;
@end

