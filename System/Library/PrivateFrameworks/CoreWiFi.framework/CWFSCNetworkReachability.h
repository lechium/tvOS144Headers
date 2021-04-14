/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:10 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <CoreWiFi/CoreWiFi-Structs.h>
@class NSObject;

@interface CWFSCNetworkReachability : NSObject {

	NSObject*<OS_dispatch_queue> _mutexQueue;
	NSObject*<OS_dispatch_queue> _eventQueue;
	SCNetworkReachabilityRef _reachabilityRef;
	BOOL _isMonitoringEvents;
	/*^block*/id _eventHandler;

}

@property (copy) id eventHandler;              //@synthesize eventHandler=_eventHandler - In the implementation block
-(id)init;
-(void)dealloc;
-(unsigned)flags;
-(void)setEventHandler:(id)arg1 ;
-(id)eventHandler;
-(void)startEventMonitoring;
-(void)stopEventMonitoring;
-(BOOL)isMonitoringEvents;
@end

