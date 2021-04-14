/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:52 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMDHomeMessageReceiver.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMDBackingStoreObjectProtocol.h>

@protocol HMFLocking, OS_dispatch_queue, HMDResidentDeviceManagerDelegate;
@class NSObject, NSMutableSet, NSHashTable, HMFTimer, NSUUID, HMDHome, HMDMessageDispatcher, NSArray, HMDResidentDevice, NSString, NSSet;

@interface HMDResidentDeviceManager : HMFObject <HMFTimerDelegate, HMFLogging, HMDHomeMessageReceiver, NSSecureCoding, HMDBackingStoreObjectProtocol> {

	id<HMFLocking> _lock;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableSet* _residentDevices;
	NSHashTable* _dataSources;
	BOOL _residentAvailable;
	BOOL _residentSupported;
	BOOL _firstLegacyFetch;
	BOOL _firstHomeZoneFetch;
	BOOL _confirming;
	HMFTimer* _residentMonitorTimer;
	NSUUID* _primaryResidentUUID;
	id<HMDResidentDeviceManagerDelegate> _delegate;
	NSUUID* _uuid;
	HMDHome* _home;
	long long _lastAtHomeLevel;
	HMDMessageDispatcher* _messageDispatcher;

}

@property (retain) HMFTimer * residentMonitorTimer;                                                                                    //@synthesize residentMonitorTimer=_residentMonitorTimer - In the implementation block
@property (assign,getter=isConfirming,nonatomic) BOOL confirming;                                                                      //@synthesize confirming=_confirming - In the implementation block
@property (assign,nonatomic) long long lastAtHomeLevel;                                                                                //@synthesize lastAtHomeLevel=_lastAtHomeLevel - In the implementation block
@property (readonly) HMDMessageDispatcher * messageDispatcher;                                                                         //@synthesize messageDispatcher=_messageDispatcher - In the implementation block
@property (assign,getter=isResidentSupported,nonatomic) BOOL residentSupported;                                                        //@synthesize residentSupported=_residentSupported - In the implementation block
@property (nonatomic,readonly) NSArray * availableResidentDevices; 
@property (nonatomic,readonly) NSUUID * primaryResidentUUID;                                                                           //@synthesize primaryResidentUUID=_primaryResidentUUID - In the implementation block
@property (assign,getter=hasFirstLegacyFetch,nonatomic) BOOL firstLegacyFetch;                                                         //@synthesize firstLegacyFetch=_firstLegacyFetch - In the implementation block
@property (assign,getter=hasFirstHomeZoneFetch,nonatomic) BOOL firstHomeZoneFetch;                                                     //@synthesize firstHomeZoneFetch=_firstHomeZoneFetch - In the implementation block
@property (__weak) id<HMDResidentDeviceManagerDelegate> delegate;                                                                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSUUID * uuid;                                                                                          //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic,__weak) HMDHome * home;                                                                                    //@synthesize home=_home - In the implementation block
@property (nonatomic,__weak,readonly) HMDResidentDevice * primaryResidentDevice; 
@property (nonatomic,copy,readonly) NSArray * residentDevices; 
@property (getter=isResidentAvailable,nonatomic,readonly) BOOL residentAvailable;                                                      //@synthesize residentAvailable=_residentAvailable - In the implementation block
@property (getter=isCurrentDeviceAvailableResident,nonatomic,readonly) BOOL currentDeviceAvailableResident; 
@property (getter=isCurrentDevicePrimaryResident,nonatomic,readonly) BOOL currentDevicePrimaryResident; 
@property (getter=isCurrentDeviceConfirmedPrimaryResident,nonatomic,readonly) BOOL currentDeviceConfirmedPrimaryResident; 
@property (nonatomic,readonly) BOOL hasTrustZoneCapableResident; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSSet * messageReceiverChildren; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
+(BOOL)supportsSecureCoding;
+(id)shortDescription;
+(id)logCategory;
+(BOOL)hasMessageReceiverChildren;
+(long long)compareElectionVersions:(id)arg1 otherVersion:(id)arg2 ;
-(NSString *)debugDescription;
-(NSString *)description;
-(id)init;
-(void)dealloc;
-(void)run;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<HMDResidentDeviceManagerDelegate>)delegate;
-(void)setDelegate:(id<HMDResidentDeviceManagerDelegate>)arg1 ;
-(NSUUID *)uuid;
-(void)addDataSource:(id)arg1 ;
-(void)removeDataSource:(id)arg1 ;
-(id)shortDescription;
-(void)_run;
-(HMDHome *)home;
-(void)setHome:(HMDHome *)arg1 ;
-(id)dumpState;
-(id)logIdentifier;
-(void)timerDidFire:(id)arg1 ;
-(id)descriptionWithPointer:(BOOL)arg1 ;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(HMDMessageDispatcher *)messageDispatcher;
-(NSArray *)residentDevices;
-(void)_registerForMessages;
-(void)confirmWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3 ;
-(void)transactionObjectRemoved:(id)arg1 message:(id)arg2 ;
-(BOOL)isCurrentDeviceConfirmedPrimaryResident;
-(void)configureWithHome:(id)arg1 messageDispatcher:(id)arg2 ;
-(BOOL)isCurrentDeviceAvailableResident;
-(BOOL)isCurrentDevicePrimaryResident;
-(NSArray *)availableResidentDevices;
-(BOOL)hasTrustZoneCapableResident;
-(HMDResidentDevice *)primaryResidentDevice;
-(BOOL)isResidentSupported;
-(BOOL)isResidentAvailable;
-(void)removeResidentDevice:(id)arg1 ;
-(void)atHomeLevelChanged:(long long)arg1 ;
-(NSUUID *)primaryResidentUUID;
-(void)updatePrimaryResidentWithUUID:(id)arg1 actions:(id)arg2 ;
-(void)electResidentDevice;
-(HMFTimer *)residentMonitorTimer;
-(void)handleBatteryStateChange:(id)arg1 ;
-(void)handleBatteryLevelChange:(id)arg1 ;
-(void)_handleCloudZoneReadyNotification:(id)arg1 ;
-(void)__handleAppleAccountResolved:(id)arg1 ;
-(void)handleCurrentDeviceChanged:(id)arg1 ;
-(void)handleResidentDeviceIsReachable:(id)arg1 ;
-(void)handleResidentDeviceIsNotReachable:(id)arg1 ;
-(BOOL)isConfirming;
-(void)setResidentSupported:(BOOL)arg1 ;
-(void)handleCurrentDeviceUpdated:(id)arg1 ;
-(void)__currentDeviceUpdated:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_handleResidentElectionParameters:(id)arg1 ;
-(void)__handleConfirmationRequest:(id)arg1 ;
-(void)_handleConfirmResidentDevice:(id)arg1 ;
-(void)_handleResidentDeviceUpdateEnabled:(id)arg1 ;
-(void)_electResidentDevice;
-(void)_setupSessionWithPrimaryResidentDevice;
-(id)ourSelf;
-(void)_startMonitoringResident;
-(void)confirmAsResident;
-(void)_stopMonitoringResident;
-(void)_teardownSessionWithPrimaryResidentDevice;
-(void)_sendResidentDeviceNotificationWithName:(id)arg1 forResidentDevice:(id)arg2 ;
-(void)_updateResidentAvailability;
-(void)setResidentAvailable:(BOOL)arg1 ;
-(void)notifyResidentAvailable:(BOOL)arg1 ;
-(id)residentWithUUID:(id)arg1 ;
-(void)notifyUpdatedPrimaryResident:(id)arg1 ;
-(long long)compareResidentDeviceA:(id)arg1 electionParametersA:(id)arg2 residentDeviceB:(id)arg3 electionParametersB:(id)arg4 ;
-(id)_electionParameters:(id)arg1 ;
-(void)setConfirming:(BOOL)arg1 ;
-(id)_electionParameters;
-(void)_confirmResidentDevice:(id)arg1 electionParameters:(id)arg2 againstDevices:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(long long)lastAtHomeLevel;
-(BOOL)_isAtHome;
-(id)residentDeviceForDevice:(id)arg1 ;
-(void)_updateReachability:(BOOL)arg1 forResidentDevice:(id)arg2 ;
-(void)notifyClientsOfUpdatedResidentDevice:(id)arg1 ;
-(void)_updateDischargingTimer:(long long)arg1 ;
-(void)_updateChargingTimer;
-(void)_pingResident;
-(void)setLastAtHomeLevel:(long long)arg1 ;
-(void)setResidentMonitorTimer:(HMFTimer *)arg1 ;
-(void)setFirstLegacyFetch:(BOOL)arg1 ;
-(BOOL)hasFirstHomeZoneFetch;
-(void)setFirstHomeZoneFetch:(BOOL)arg1 ;
-(BOOL)hasFirstLegacyFetch;
-(void)confirmPrimaryResident;
-(void)_addResidentDeviceWithModel:(id)arg1 message:(id)arg2 ;
-(void)_removeResidentDeviceWithModel:(id)arg1 message:(id)arg2 ;
-(void)_addResidentDevice:(id)arg1 ;
-(void)_removeResidentDevice:(id)arg1 ;
-(void)updateResidentAvailability;
-(void)confirmOnAvailability;
@end

