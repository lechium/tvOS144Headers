/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:53 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class SFDeviceDiscovery, NSMutableDictionary, NSObject, NSArray;

@interface SFApproveDiscovery : NSObject {

	BOOL _activateCalled;
	/*^block*/id _activateHandler;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	SFDeviceDiscovery* _deviceDiscovery;
	NSMutableDictionary* _deviceDictionary;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _deviceFoundHandler;
	/*^block*/id _deviceLostHandler;
	/*^block*/id _invalidationHandler;
	NSArray* _devices;

}

@property (nonatomic,retain) NSArray * devices;                                       //@synthesize devices=_devices - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id deviceFoundHandler;                                     //@synthesize deviceFoundHandler=_deviceFoundHandler - In the implementation block
@property (nonatomic,copy) id deviceLostHandler;                                      //@synthesize deviceLostHandler=_deviceLostHandler - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
-(id)init;
-(void)invalidate;
-(void)setInvalidationHandler:(id)arg1 ;
-(id)invalidationHandler;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)_invalidated;
-(NSArray *)devices;
-(void)setDevices:(NSArray *)arg1 ;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(id)deviceFoundHandler;
-(void)setDeviceFoundHandler:(id)arg1 ;
-(id)deviceLostHandler;
-(void)setDeviceLostHandler:(id)arg1 ;
-(void)_activateWithCompletion:(/*^block*/id)arg1 ;
-(void)_discoveryEnsureStarted;
-(void)_discoveryEnsureStopped;
-(void)_discoveryFoundDevice:(id)arg1 ;
-(void)_discoveryLostDevice:(id)arg1 ;
-(void)_discoveryDeviceChanged:(id)arg1 ;
-(void)_activatedWithError:(id)arg1 ;
@end

