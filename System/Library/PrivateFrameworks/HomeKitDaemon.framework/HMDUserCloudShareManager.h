/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:38 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/HMFMessageReceiver.h>
#import <libobjc.A.dylib/HMDUserCloudShareControllerDelegate.h>

@protocol OS_dispatch_queue;
@class NSUUID, NSObject, HMDHomeManager, HMFMessageDispatcher, HMDUserCloudShareController, NSString;

@interface HMDUserCloudShareManager : NSObject <HMFMessageReceiver, HMDUserCloudShareControllerDelegate> {

	NSUUID* _identifier;
	NSObject*<OS_dispatch_queue> _clientQueue;
	HMDHomeManager* _homeManager;
	HMFMessageDispatcher* _messageDispatcher;
	HMDUserCloudShareController* _userCloudShareController;

}

@property (nonatomic,copy,readonly) NSUUID * identifier;                                            //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;                            //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,__weak,readonly) HMDHomeManager * homeManager;                                 //@synthesize homeManager=_homeManager - In the implementation block
@property (nonatomic,retain) HMFMessageDispatcher * messageDispatcher;                              //@synthesize messageDispatcher=_messageDispatcher - In the implementation block
@property (nonatomic,readonly) HMDUserCloudShareController * userCloudShareController;              //@synthesize userCloudShareController=_userCloudShareController - In the implementation block
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(NSUUID *)identifier;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(HMFMessageDispatcher *)messageDispatcher;
-(HMDHomeManager *)homeManager;
-(id)messageDestination;
-(id)initWithHomeManager:(id)arg1 ;
-(void)registerForMessages;
-(id)initWithHomeManager:(id)arg1 dependency:(id)arg2 ;
-(void)setMessageDispatcher:(HMFMessageDispatcher *)arg1 ;
-(void)handleHomeChangedNotification:(id)arg1 ;
-(void)handleXPCConnectionInvalidated:(id)arg1 ;
-(void)_handleAccessoryAdded:(id)arg1 ;
-(void)_handleEnableMultiUserChangedNotification:(id)arg1 ;
-(void)_handleUserSettingsUpdatedNotification:(id)arg1 ;
-(void)_handleLocalHomeDataRemovedNotification:(id*)arg1 ;
-(void)handleUsersChangedNotification:(id)arg1 ;
-(void)_handleRegisterRequest:(id)arg1 ;
-(void)_postMultiUserStatusChangedNotification;
-(HMDUserCloudShareController *)userCloudShareController;
-(void)userCloudShareController:(id)arg1 sendShareRequestMessageWithConnection:(id)arg2 fromUser:(id)arg3 toUser:(id)arg4 home:(id)arg5 shareURL:(id)arg6 shareToken:(id)arg7 containerID:(id)arg8 completion:(/*^block*/id)arg9 ;
-(void)userCloudShareController:(id)arg1 sendRepairInfo:(id)arg2 toConnection:(id)arg3 home:(id)arg4 containerID:(id)arg5 ;
-(void)userCloudShareController:(id)arg1 wakeClientWithContainerID:(id)arg2 ;
-(void)userCloudShareController:(id)arg1 wakeClientForRepairWithContainerID:(id)arg2 ;
-(id)userCloudShareController:(id)arg1 timerWithInterval:(double)arg2 ;
-(id)currentDateForUserCloudShareController:(id)arg1 ;
-(void)configureWithMessageDispatcher:(id)arg1 ;
-(void)handleRemoteUserClientCloudShareRequest:(id)arg1 ;
-(void)handleRemoteUserClientCloudShareRepairRequest:(id)arg1 ;
-(void)_handleDeregisterRequest:(id)arg1 ;
@end

