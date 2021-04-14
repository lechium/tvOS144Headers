/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:07 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_xpc_object;
@class NSObject, NSString, NSDate;

@interface ADBackgroundTaskRequest : NSObject {

	BOOL _performDeferralCheck;
	NSObject*<OS_xpc_object> _activity;
	NSString* _requestIdentifier;
	NSObject*<OS_xpc_object> _criteria;
	NSDate* _startDate;

}

@property (nonatomic,retain) NSObject*<OS_xpc_object> activity;                //@synthesize activity=_activity - In the implementation block
@property (nonatomic,retain) NSObject*<OS_xpc_object> criteria;                //@synthesize criteria=_criteria - In the implementation block
@property (assign,nonatomic) BOOL performDeferralCheck;                        //@synthesize performDeferralCheck=_performDeferralCheck - In the implementation block
@property (nonatomic,retain) NSDate * startDate;                               //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,copy,readonly) NSString * requestIdentifier;              //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
@property (assign,nonatomic) long long delay; 
@property (assign,nonatomic) BOOL requiresNetworkConnectivity; 
@property (assign,nonatomic) BOOL requireBuddyComplete; 
@property (assign,nonatomic) BOOL requireClassCData; 
@property (assign,nonatomic) BOOL allowBattery; 
@property (assign,nonatomic) BOOL requireSleep; 
@property (assign,nonatomic) BOOL isRepeating; 
@property (assign,nonatomic) long long backgroundTaskRetryCount; 
@property (assign,nonatomic) long long gracePeriod; 
@property (nonatomic,retain) NSString * priority; 
@property (assign,nonatomic) BOOL isCPUIntensive; 
@property (nonatomic,readonly) BOOL shouldDefer; 
-(id)description;
-(NSString *)priority;
-(void)setPriority:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(long long)delay;
-(void)setDelay:(long long)arg1 ;
-(BOOL)shouldDefer;
-(NSDate *)startDate;
-(void)setStartDate:(NSDate *)arg1 ;
-(NSString *)requestIdentifier;
-(NSObject*<OS_xpc_object>)activity;
-(void)setActivity:(NSObject*<OS_xpc_object>)arg1 ;
-(long long)gracePeriod;
-(NSObject*<OS_xpc_object>)criteria;
-(void)setCriteria:(NSObject*<OS_xpc_object>)arg1 ;
-(BOOL)isRepeating;
-(BOOL)taskIsDeferred;
-(void)setGracePeriod:(long long)arg1 ;
-(id)initWithID:(id)arg1 ;
-(id)initWithCriteria:(id)arg1 ID:(id)arg2 activity:(id)arg3 ;
-(id)copyBackgroundTaskAgentCriteria;
-(void)setRequiresNetworkConnectivity:(BOOL)arg1 ;
-(void)endBackgroundDeferralCheck;
-(BOOL)deferTask;
-(void)_backgroundDeferralCheck:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)taskIsContinuing;
-(long long)backgroundTaskRetryCount;
-(BOOL)requiresNetworkConnectivity;
-(BOOL)requireSleep;
-(BOOL)allowBattery;
-(void)setPropertyAsDouble:(id)arg1 value:(double)arg2 ;
-(double)getPropertyAsDouble:(id)arg1 ;
-(void)setAllowBattery:(BOOL)arg1 ;
-(void)setRequireSleep:(BOOL)arg1 ;
-(void)setIsRepeating:(BOOL)arg1 ;
-(void)setIsCPUIntensive:(BOOL)arg1 ;
-(BOOL)isCPUIntensive;
-(void)setRequireBuddyComplete:(BOOL)arg1 ;
-(BOOL)requireBuddyComplete;
-(void)setRequireClassCData:(BOOL)arg1 ;
-(BOOL)requireClassCData;
-(void)setBackgroundTaskRetryCount:(long long)arg1 ;
-(BOOL)continueTask;
-(BOOL)finishTask;
-(void)startBackgroundDeferralCheckForTime:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)taskCanContinueForTime:(id)arg1 ;
-(void)setPropertyAsString:(id)arg1 value:(id)arg2 ;
-(id)getPropertyAsString:(id)arg1 ;
-(void)setPropertyAsInteger:(id)arg1 value:(long long)arg2 ;
-(long long)getPropertyAsInteger:(id)arg1 ;
-(void)setPropertyAsDate:(id)arg1 value:(id)arg2 ;
-(id)getPropertyAsDate:(id)arg1 ;
-(BOOL)performDeferralCheck;
-(void)setPerformDeferralCheck:(BOOL)arg1 ;
@end

