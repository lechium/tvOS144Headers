/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:03 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFMessageReceiver.h>

@protocol HMFMessageReceiver;
@class HMDHomeAdministratorHandler, NSString, NSUUID;

@interface __HMDHomeAdministratorReceiver : HMFObject <HMFLogging, HMFMessageReceiver> {

	id<HMFMessageReceiver> _receiver;
	HMDHomeAdministratorHandler* _handler;

}

@property (__weak,readonly) id<HMFMessageReceiver> receiver;                                  //@synthesize receiver=_receiver - In the implementation block
@property (__weak,readonly) HMDHomeAdministratorHandler * handler;                            //@synthesize handler=_handler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
+(id)logCategory;
-(void)dealloc;
-(HMDHomeAdministratorHandler *)handler;
-(id)shortDescription;
-(id)logIdentifier;
-(id<HMFMessageReceiver>)receiver;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(void)__handleMessage:(id)arg1 ;
-(id)initWithReceiver:(id)arg1 handler:(id)arg2 ;
-(void)registerForMessage:(id)arg1 policies:(id)arg2 ;
@end

