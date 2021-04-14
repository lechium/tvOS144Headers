/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:47 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <FrontBoardServices/FBSProcessWatchdog.h>

@class RBSProcessHandle, FBProcessWatchdogEventContext, FBProcessCPUStatistics;

@interface FBProcessWatchdog : FBSProcessWatchdog {

	RBSProcessHandle* _handle;
	long long _event;
	FBProcessWatchdogEventContext* _eventContext;
	FBProcessCPUStatistics* _cpuStatistics;

}

@property (nonatomic,readonly) long long event;                                                  //@synthesize event=_event - In the implementation block
@property (nonatomic,retain,readonly) FBProcessWatchdogEventContext * eventContext;              //@synthesize eventContext=_eventContext - In the implementation block
@property (nonatomic,retain,readonly) FBProcessCPUStatistics * cpuStatistics;                    //@synthesize cpuStatistics=_cpuStatistics - In the implementation block
-(void)activate;
-(long long)event;
-(id)initWithProcess:(id)arg1 context:(id)arg2 policy:(id)arg3 ;
-(FBProcessWatchdogEventContext *)eventContext;
-(FBProcessCPUStatistics *)cpuStatistics;
@end

