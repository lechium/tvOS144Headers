/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:24 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeAI/HomeAI-Structs.h>
#import <HMFoundation/HMFObject.h>

@class HMIVideoTimeline, HMITimeIntervalAverage;

@interface HMIVideoTimelineProfiler : HMFObject {

	HMIVideoTimeline* _timeline;
	HMITimeIntervalAverage* _average;

}
-(id)initWithMaxCapacity:(long long)arg1 ;
-(void)startedAtTime:(SCD_Struct_HM3)arg1 ;
-(void)endedAtTime:(SCD_Struct_HM3)arg1 ;
-(double)averageTime;
@end

