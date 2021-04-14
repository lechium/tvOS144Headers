/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:00 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HMDLogEventAnalyzer.h>

@class HMDEventCountersManager;

@interface HMDLogEventReachabilityEventsAnalyzer : HMDLogEventAnalyzer {

	HMDEventCountersManager* _eventCountersManager;

}

@property (nonatomic,readonly) HMDEventCountersManager * eventCountersManager;              //@synthesize eventCountersManager=_eventCountersManager - In the implementation block
-(HMDEventCountersManager *)eventCountersManager;
-(id)initWithSupportedEventTypes:(id)arg1 context:(id)arg2 ;
-(void)processLogEvent:(id)arg1 ;
-(id)initWithSupportedEventTypes:(id)arg1 context:(id)arg2 eventCountersManager:(id)arg3 ;
-(void)_handleRemoteDeviceReachabilityChangedLogEvent:(id)arg1 ;
-(void)_handleCameraRecordingReachabilityLogEvent:(id)arg1 ;
@end

