/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:59 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFMessageReceiver.h>

@protocol OS_dispatch_queue;
@class NSObject, HMFMessageDispatcher, HMDHomeManager, NSMutableArray, NSUUID, NSString;

@interface HMDClientConnection : HMFObject <HMFMessageReceiver> {

	NSObject*<OS_dispatch_queue> _workQueue;
	HMFMessageDispatcher* _msgDispatcher;
	HMDHomeManager* _homeManager;
	NSMutableArray* _commandsBeingExecuted;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                          //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) HMFMessageDispatcher * msgDispatcher;                            //@synthesize msgDispatcher=_msgDispatcher - In the implementation block
@property (assign,nonatomic,__weak) HMDHomeManager * homeManager;                             //@synthesize homeManager=_homeManager - In the implementation block
@property (nonatomic,retain) NSMutableArray * commandsBeingExecuted;                          //@synthesize commandsBeingExecuted=_commandsBeingExecuted - In the implementation block
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(HMDHomeManager *)homeManager;
-(void)setHomeManager:(HMDHomeManager *)arg1 ;
-(void)setMsgDispatcher:(HMFMessageDispatcher *)arg1 ;
-(HMFMessageDispatcher *)msgDispatcher;
-(void)_registerForMessages;
-(void)_handleSiriCommand:(id)arg1 ;
-(void)_handleDaemonRequest:(id)arg1 ;
-(void)_handleSiriSyncDataRequest:(id)arg1 ;
-(NSMutableArray *)commandsBeingExecuted;
-(id)initWithHomeManager:(id)arg1 queue:(id)arg2 messageDispatcher:(id)arg3 ;
-(void)setCommandsBeingExecuted:(NSMutableArray *)arg1 ;
@end

