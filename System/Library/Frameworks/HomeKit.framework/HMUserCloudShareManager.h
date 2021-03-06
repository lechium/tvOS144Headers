/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:28 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/HMFMessageReceiver.h>

@protocol HMUserCloudShareManagerDelegate;
@class _HMContext, NSUUID, NSArray, NSString;

@interface HMUserCloudShareManager : NSObject <HMFMessageReceiver> {

	BOOL _registered;
	id<HMUserCloudShareManagerDelegate> _delegate;
	_HMContext* _context;
	NSUUID* _identifier;
	NSArray* _containerIDs;

}

@property (nonatomic,readonly) _HMContext * context;                                          //@synthesize context=_context - In the implementation block
@property (readonly) NSUUID * identifier;                                                     //@synthesize identifier=_identifier - In the implementation block
@property (assign,getter=isRegistered,nonatomic) BOOL registered;                             //@synthesize registered=_registered - In the implementation block
@property (nonatomic,retain) NSArray * containerIDs;                                          //@synthesize containerIDs=_containerIDs - In the implementation block
@property (__weak) id<HMUserCloudShareManagerDelegate> delegate;                              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(id)init;
-(void)dealloc;
-(id<HMUserCloudShareManagerDelegate>)delegate;
-(void)setDelegate:(id<HMUserCloudShareManagerDelegate>)arg1 ;
-(NSUUID *)identifier;
-(_HMContext *)context;
-(id)initWithContext:(id)arg1 ;
-(void)setRegistered:(BOOL)arg1 ;
-(void)reconnect;
-(BOOL)isRegistered;
-(void)configure;
-(NSArray *)containerIDs;
-(void)setContainerIDs:(NSArray *)arg1 ;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(id)messageDestination;
-(void)__registerForMessages;
-(void)_handleDidReceiveShare:(id)arg1 ;
-(void)_handleDidReceiveRepairRequest:(id)arg1 ;
-(void)_registerWithCompletion:(/*^block*/id)arg1 ;
-(void)registerForContainerIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

