/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:40 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSArray, HMDDevice, NSUUID, HMFMessageDispatcher, HMDLogEventDispatcher, HMDHome;


@protocol HMDMediaActionRouterDataSource <NSObject>
@property (nonatomic,copy,readonly) NSArray * enabledResidents; 
@property (nonatomic,copy,readonly) NSArray * appleMediaAccessories; 
@property (nonatomic,__weak,readonly) HMDDevice * companionDevice; 
@property (getter=isCompanionReachable,nonatomic,readonly) BOOL companionReachable; 
@property (nonatomic,readonly) NSUUID * uuid; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue; 
@property (nonatomic,readonly) HMFMessageDispatcher * msgDispatcher; 
@property (nonatomic,readonly) HMDLogEventDispatcher * logEventDispatcher; 
@property (__weak,readonly) HMDHome * home; 
@required
-(NSObject*<OS_dispatch_queue>)workQueue;
-(NSUUID *)uuid;
-(HMDHome *)home;
-(HMDDevice *)companionDevice;
-(id)mediaProfileWithUUID:(id)arg1;
-(HMFMessageDispatcher *)msgDispatcher;
-(NSArray *)appleMediaAccessories;
-(BOOL)isCompanionReachable;
-(NSArray *)enabledResidents;
-(HMDLogEventDispatcher *)logEventDispatcher;

@end

