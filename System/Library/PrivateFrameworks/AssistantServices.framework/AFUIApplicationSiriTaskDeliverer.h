/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:42 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/AFSiriTaskDelivering.h>

@protocol OS_dispatch_group, OS_dispatch_queue;
@class NSString, BKSApplicationStateMonitor, BKSProcessAssertion, AFWatchdogTimer, NSObject, AFSiriTaskmaster;

@interface AFUIApplicationSiriTaskDeliverer : NSObject <AFSiriTaskDelivering> {

	NSString* _appBundleIdentifier;
	BKSApplicationStateMonitor* _appStateMonitor;
	BKSProcessAssertion* _bKSAssertionForBgLaunch;
	AFWatchdogTimer* _assertionTimer;
	NSObject*<OS_dispatch_group> _bKSAssertionSetupGroup;
	NSObject*<OS_dispatch_queue> _queue;
	AFSiriTaskmaster* _taskmaster;

}

@property (assign,nonatomic,__weak) AFSiriTaskmaster * taskmaster;              //@synthesize taskmaster=_taskmaster - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(void)dealloc;
-(void)deliverSiriTask:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)siriTaskDidFinish;
-(void)_invalidateAssertionTimer;
-(void)_invalidateBackboardServices;
-(void)_processAssertionWasInvalidatedForRequest:(id)arg1 ;
-(void)_startAppStateMonitoringForRequest:(id)arg1 ;
-(void)_handleSuccessfulAppLaunchToBackground:(BOOL)arg1 forRequest:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_processAssertionWasAcquired:(BOOL)arg1 ;
-(void)processAssertionWasInvalidatedForRequest:(id)arg1 ;
-(id)initWithAppBundleIdentifier:(id)arg1 ;
-(AFSiriTaskmaster *)taskmaster;
-(void)setTaskmaster:(AFSiriTaskmaster *)arg1 ;
@end

