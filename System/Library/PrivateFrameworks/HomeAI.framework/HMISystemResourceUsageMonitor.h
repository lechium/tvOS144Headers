/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:23 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMISystemResourceUsageMonitorProtocol.h>

@protocol OS_dispatch_queue;
@class HMISystemResourceUsageMonitorImpl, NSObject;

@interface HMISystemResourceUsageMonitor : HMFObject <HMISystemResourceUsageMonitorProtocol> {

	HMISystemResourceUsageMonitorImpl* _systemResourceUsageMonitorImpl;
	NSObject*<OS_dispatch_queue> _workQueue;

}

@property (readonly) HMISystemResourceUsageMonitorImpl * systemResourceUsageMonitorImpl;              //@synthesize systemResourceUsageMonitorImpl=_systemResourceUsageMonitorImpl - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> workQueue;                                          //@synthesize workQueue=_workQueue - In the implementation block
@property (__weak) id<HMISystemResourceUsageMonitorDelegate> delegate; 
-(id)init;
-(id<HMISystemResourceUsageMonitorDelegate>)delegate;
-(void)setDelegate:(id<HMISystemResourceUsageMonitorDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)start;
-(id)getCurrentSystemResourceUsage;
-(HMISystemResourceUsageMonitorImpl *)systemResourceUsageMonitorImpl;
@end

