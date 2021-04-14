/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:02 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>
#import <libobjc.A.dylib/IDSServiceDelegate.h>
#import <libobjc.A.dylib/HMDIDSActivityMonitorObserverDelegate.h>
#import <libobjc.A.dylib/HMFNetMonitorDelegate.h>

@protocol HMFLocking, OS_dispatch_queue;
@class NSObject, NSOperationQueue, NSMapTable, HMDAccountRegistry, IDSService, HMDIDSActivityMonitorObserver, HMFNetMonitor, HMFTimer, NSArray, NSString;

@interface HMDRemoteDeviceMonitor : HMFObject <HMFLogging, HMFTimerDelegate, IDSServiceDelegate, HMDIDSActivityMonitorObserverDelegate, HMFNetMonitorDelegate> {

	id<HMFLocking> _lock;
	NSObject*<OS_dispatch_queue> _queue;
	NSOperationQueue* _operationQueue;
	NSMapTable* _devices;
	BOOL _reachable;
	BOOL _started;
	HMDAccountRegistry* _accountRegistry;
	IDSService* _service;
	HMDIDSActivityMonitorObserver* _activityObserver;
	HMFNetMonitor* _netMonitor;
	HMFTimer* _deviceHealthTimer;

}

@property (nonatomic,readonly) IDSService * service;                                          //@synthesize service=_service - In the implementation block
@property (nonatomic,readonly) HMDIDSActivityMonitorObserver * activityObserver;              //@synthesize activityObserver=_activityObserver - In the implementation block
@property (getter=isStarted,readonly) BOOL started;                                           //@synthesize started=_started - In the implementation block
@property (nonatomic,readonly) HMFNetMonitor * netMonitor;                                    //@synthesize netMonitor=_netMonitor - In the implementation block
@property (nonatomic,readonly) HMFTimer * deviceHealthTimer;                                  //@synthesize deviceHealthTimer=_deviceHealthTimer - In the implementation block
@property (nonatomic,readonly) HMDAccountRegistry * accountRegistry;                          //@synthesize accountRegistry=_accountRegistry - In the implementation block
@property (getter=isReachable,readonly) BOOL reachable;                                       //@synthesize reachable=_reachable - In the implementation block
@property (readonly) NSArray * unreachableDevices; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(id)pingMessageForDevice:(id)arg1 timeout:(double)arg2 restriction:(unsigned long long)arg3 ;
-(id)init;
-(void)dealloc;
-(void)start;
-(BOOL)isStarted;
-(IDSService *)service;
-(id)devices;
-(void)setStarted:(BOOL)arg1 ;
-(void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)service:(id)arg1 activeAccountsChanged:(id)arg2 ;
-(id)dumpState;
-(BOOL)isReachable;
-(void)timerDidFire:(id)arg1 ;
-(void)networkMonitorIsReachable:(id)arg1 ;
-(void)networkMonitorIsUnreachable:(id)arg1 ;
-(void)setReachable:(BOOL)arg1 ;
-(HMDIDSActivityMonitorObserver *)activityObserver;
-(HMDAccountRegistry *)accountRegistry;
-(NSArray *)unreachableDevices;
-(void)confirmDevice:(id)arg1 timeout:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
-(HMFNetMonitor *)netMonitor;
-(void)startMonitoringDevice:(id)arg1 ;
-(id)initWithAccountRegistry:(id)arg1 activityObserver:(id)arg2 ;
-(void)observer:(id)arg1 didUpdateDevice:(id)arg2 isOnline:(BOOL)arg3 ;
-(void)handleCurrentDeviceUpdate:(id)arg1 ;
-(void)handleAccountRemoved:(id)arg1 ;
-(void)notifyDeviceReachabilityChange:(BOOL)arg1 forDevice:(id)arg2 ;
-(id)_startMonitoringDevice:(id)arg1 ;
-(void)handleAddedDeviceInformation:(id)arg1 ;
-(void)handleDeviceRemovedFromAccount:(id)arg1 ;
-(void)handleRemovedDeviceInformation:(id)arg1 ;
-(id)_deviceInformationForDevice:(id)arg1 ;
-(void)_sendPingToDevice:(id)arg1 ;
-(void)_startActivelyMonitoringDevice:(id)arg1 ;
-(void)stopMonitoringDevice:(id)arg1 ;
-(void)_handleGlobalReachabilityChange;
-(HMFTimer *)deviceHealthTimer;
-(void)_stopActivelyMonitoringDevice:(id)arg1 ;
@end

