/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:24 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMISystemResourceUsageMonitorProtocol.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol HMISystemResourceUsageMonitorDelegate, OS_dispatch_queue;
@class NSObject, HMISystemResourceUsage, HMINotifydObserver, NSString;

@interface HMISystemResourceUsageMonitorTVOS : HMFObject <HMISystemResourceUsageMonitorProtocol, HMFLogging> {

	id<HMISystemResourceUsageMonitorDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _workQueue;
	HMISystemResourceUsage* _currentSystemResourceUsage;
	HMINotifydObserver* _notifydObserverThermalUsage;

}

@property (__weak) id<HMISystemResourceUsageMonitorDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> workQueue;                           //@synthesize workQueue=_workQueue - In the implementation block
@property (readonly) HMISystemResourceUsage * currentSystemResourceUsage;              //@synthesize currentSystemResourceUsage=_currentSystemResourceUsage - In the implementation block
@property (readonly) HMINotifydObserver * notifydObserverThermalUsage;                 //@synthesize notifydObserverThermalUsage=_notifydObserverThermalUsage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(id<HMISystemResourceUsageMonitorDelegate>)delegate;
-(void)setDelegate:(id<HMISystemResourceUsageMonitorDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)start;
-(id)initWithWorkQueue:(id)arg1 ;
-(id)getCurrentSystemResourceUsage;
-(void)handleSystemThermalChanged:(unsigned long long)arg1 ;
-(HMINotifydObserver *)notifydObserverThermalUsage;
-(HMISystemResourceUsage *)currentSystemResourceUsage;
@end
