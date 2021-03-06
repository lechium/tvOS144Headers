/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:45 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFMessageReceiver.h>

@protocol HMDCloudShareMessengerDelegate, OS_dispatch_queue;
@class NSUUID, NSObject, HMFMessageDispatcher, NSString;

@interface HMDCloudShareMessenger : HMFObject <HMFLogging, HMFMessageReceiver> {

	NSUUID* _messageTargetUUID;
	id<HMDCloudShareMessengerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _workQueue;
	HMFMessageDispatcher* _messageDispatcher;
	/*^block*/id _shareInvitationRetryHandler;

}

@property (readonly) NSObject*<OS_dispatch_queue> workQueue;                                  //@synthesize workQueue=_workQueue - In the implementation block
@property (readonly) HMFMessageDispatcher * messageDispatcher;                                //@synthesize messageDispatcher=_messageDispatcher - In the implementation block
@property (copy) id shareInvitationRetryHandler;                                              //@synthesize shareInvitationRetryHandler=_shareInvitationRetryHandler - In the implementation block
@property (__weak) id<HMDCloudShareMessengerDelegate> delegate;                               //@synthesize delegate=_delegate - In the implementation block
@property (readonly) NSUUID * messageTargetUUID;                                              //@synthesize messageTargetUUID=_messageTargetUUID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
+(id)logCategory;
-(id<HMDCloudShareMessengerDelegate>)delegate;
-(void)setDelegate:(id<HMDCloudShareMessengerDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(id)logIdentifier;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(HMFMessageDispatcher *)messageDispatcher;
-(void)unconfigure;
-(void)configureWithHome:(id)arg1 ;
-(void)requestShareInvitationDataFromUser:(id)arg1 ;
-(void)sendShareInvitationData:(id)arg1 toUser:(id)arg2 minimumHomeKitVersion:(id)arg3 requiredSupportedFeatures:(id)arg4 completion:(/*^block*/id)arg5 ;
-(id)initWithMessageTargetUUID:(id)arg1 workQueue:(id)arg2 ;
-(id)initWithMessageTargetUUID:(id)arg1 workQueue:(id)arg2 messageDispatcher:(id)arg3 ;
-(void)handleInviteMessage:(id)arg1 ;
-(void)handleRequestInviteMessage:(id)arg1 ;
-(void)_sendShareInvitationData:(id)arg1 toUser:(id)arg2 minimumHomeKitVersion:(id)arg3 requiredSupportedFeatures:(id)arg4 retryCount:(unsigned long long)arg5 completion:(/*^block*/id)arg6 ;
-(id)shareInvitationRetryHandler;
-(void)setShareInvitationRetryHandler:(id)arg1 ;
@end

