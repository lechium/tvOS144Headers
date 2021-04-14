/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:06 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>
#import <libobjc.A.dylib/HMFDumpState.h>

@protocol HMDSharedHomeUpdateSessionDelegate, OS_dispatch_queue;
@class NSUUID, NSObject, HMDHome, NSDictionary, HMFMessageDispatcher, HMFTimer, NSString;

@interface HMDSharedHomeUpdateSession : NSObject <HMFLogging, HMFTimerDelegate, HMFDumpState> {

	NSUUID* _sessionID;
	id<HMDSharedHomeUpdateSessionDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _workQueue;
	HMDHome* _home;
	NSDictionary* _messagePayload;
	HMFMessageDispatcher* _messageDispatcher;
	HMFTimer* _timer;
	unsigned long long _retryCount;
	double _currentTimerValue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;                              //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,readonly) HMDHome * home;                                                      //@synthesize home=_home - In the implementation block
@property (nonatomic,readonly) NSDictionary * messagePayload;                                       //@synthesize messagePayload=_messagePayload - In the implementation block
@property (nonatomic,readonly) HMFMessageDispatcher * messageDispatcher;                            //@synthesize messageDispatcher=_messageDispatcher - In the implementation block
@property (nonatomic,retain) HMFTimer * timer;                                                      //@synthesize timer=_timer - In the implementation block
@property (assign,nonatomic) unsigned long long retryCount;                                         //@synthesize retryCount=_retryCount - In the implementation block
@property (assign,nonatomic) double currentTimerValue;                                              //@synthesize currentTimerValue=_currentTimerValue - In the implementation block
@property (nonatomic,readonly) NSString * homeIdentifier; 
@property (nonatomic,readonly) NSUUID * sessionID;                                                  //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,__weak,readonly) id<HMDSharedHomeUpdateSessionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(NSString *)description;
-(void)dealloc;
-(id<HMDSharedHomeUpdateSessionDelegate>)delegate;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(NSUUID *)sessionID;
-(unsigned long long)retryCount;
-(void)setRetryCount:(unsigned long long)arg1 ;
-(void)setTimer:(HMFTimer *)arg1 ;
-(HMFTimer *)timer;
-(HMDHome *)home;
-(NSString *)homeIdentifier;
-(id)dumpState;
-(id)logIdentifier;
-(void)timerDidFire:(id)arg1 ;
-(NSDictionary *)messagePayload;
-(HMFMessageDispatcher *)messageDispatcher;
-(void)startTimer;
-(void)_callDelegate;
-(id)initWithHome:(id)arg1 delegate:(id)arg2 workQueue:(id)arg3 messagePayload:(id)arg4 messageDispatcher:(id)arg5 ;
-(void)requestDataSync;
-(void)_requestDataSync;
-(id)_selectResident;
-(double)currentTimerValue;
-(void)setCurrentTimerValue:(double)arg1 ;
@end

