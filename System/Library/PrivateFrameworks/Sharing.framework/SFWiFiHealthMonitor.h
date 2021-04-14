/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:55 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_source, OS_dispatch_queue;
#import <Sharing/Sharing-Structs.h>
@class CURetrier, NSObject;

@interface SFWiFiHealthMonitor : NSObject {

	BOOL _invalidateCalled;
	int _lockdownActivated;
	int _lockdownActivationNotifyToken;
	WiFiDeviceClientRef _wifiDevice;
	BOOL _wifiDeviceSetup;
	WiFiManagerClientRef _wifiManager;
	BOOL _wifiManagerSetup;
	CURetrier* _wifiRetrier;
	unsigned long long _wifiStatusBadTicks;
	unsigned long long _wifiStatusGoodTicks;
	double _wifiStatusDebounceSecs;
	NSObject*<OS_dispatch_source> _wifiStatusDebounceTimer;
	long long _wifiStatusExternal;
	long long _wifiStatusInternal;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _invalidationHandler;
	/*^block*/id _statusHandler;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,copy) id statusHandler;                                          //@synthesize statusHandler=_statusHandler - In the implementation block
-(id)description;
-(id)init;
-(void)_activate;
-(void)invalidate;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)_invalidate;
-(void)_update;
-(void)reset;
-(void)activate;
-(id)invalidationHandler;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_wifiEnsureStarted;
-(void)_wifiEnsureStopped;
-(void)_wifiAutoJoinNotification:(id)arg1 ;
-(void)_wifiStatusChangedInternal:(long long)arg1 ;
-(void)_wifiStatusChangedExternal:(long long)arg1 ;
-(id)statusHandler;
-(void)setStatusHandler:(id)arg1 ;
@end

