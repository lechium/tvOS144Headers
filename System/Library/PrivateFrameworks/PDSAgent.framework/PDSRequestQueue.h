/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:49 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PDSAgent.framework/PDSAgent
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PDSRequestQueueDelegate, OS_dispatch_queue;
@class PDSRequest, NSObject, FTMessageDelivery, PDSUserTracker, NSDate;

@interface PDSRequestQueue : NSObject {

	id<PDSRequestQueueDelegate> _delegate;
	PDSRequest* _inflightRequest;
	PDSRequest* _queuedRequest;
	NSObject*<OS_dispatch_queue> _queue;
	FTMessageDelivery* _messageDelivery;
	PDSUserTracker* _userTracker;
	/*^block*/id _pushTokenBlock;
	/*^block*/id _entryStoreBlock;
	long long _authRetries;
	NSDate* _lastReauthAttempt;

}

@property (nonatomic,retain) PDSRequest * inflightRequest;                             //@synthesize inflightRequest=_inflightRequest - In the implementation block
@property (nonatomic,retain) PDSRequest * queuedRequest;                               //@synthesize queuedRequest=_queuedRequest - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                       //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) FTMessageDelivery * messageDelivery;                      //@synthesize messageDelivery=_messageDelivery - In the implementation block
@property (nonatomic,retain) PDSUserTracker * userTracker;                             //@synthesize userTracker=_userTracker - In the implementation block
@property (nonatomic,copy) id pushTokenBlock;                                          //@synthesize pushTokenBlock=_pushTokenBlock - In the implementation block
@property (nonatomic,copy) id entryStoreBlock;                                         //@synthesize entryStoreBlock=_entryStoreBlock - In the implementation block
@property (assign,nonatomic) long long authRetries;                                    //@synthesize authRetries=_authRetries - In the implementation block
@property (nonatomic,retain) NSDate * lastReauthAttempt;                               //@synthesize lastReauthAttempt=_lastReauthAttempt - In the implementation block
@property (assign,nonatomic,__weak) id<PDSRequestQueueDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<PDSRequestQueueDelegate>)delegate;
-(void)setDelegate:(id<PDSRequestQueueDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)_osVersion;
-(BOOL)enqueueRequest:(id)arg1 ;
-(id)_machineID;
-(id)_deviceInfo;
-(void)_dequeueIfNeeded;
-(void)setMessageDelivery:(FTMessageDelivery *)arg1 ;
-(FTMessageDelivery *)messageDelivery;
-(id)entryStoreBlock;
-(id)pushTokenBlock;
-(void)setEntryStoreBlock:(id)arg1 ;
-(void)setPushTokenBlock:(id)arg1 ;
-(void)setUserTracker:(PDSUserTracker *)arg1 ;
-(PDSUserTracker *)userTracker;
-(id)initWithMessageDelivery:(id)arg1 userTracker:(id)arg2 queue:(id)arg3 pushTokenBlock:(/*^block*/id)arg4 entryStoreBlock:(/*^block*/id)arg5 ;
-(PDSRequest *)inflightRequest;
-(void)setQueuedRequest:(PDSRequest *)arg1 ;
-(PDSRequest *)queuedRequest;
-(void)_flightRequest:(id)arg1 ;
-(id)_hwVersion;
-(void)_logEntries:(id)arg1 ;
-(void)setInflightRequest:(PDSRequest *)arg1 ;
-(void)_removeDeadEntriesForUser:(id)arg1 withError:(id*)arg2 ;
-(void)_reAuthAndContinueWithRequest:(id)arg1 forUser:(id)arg2 ;
-(void)_logProtoUserPushToken:(id)arg1 ;
-(BOOL)_isAuthIssue:(long long)arg1 ;
-(long long)authRetries;
-(NSDate *)lastReauthAttempt;
-(void)setAuthRetries:(long long)arg1 ;
-(void)setLastReauthAttempt:(NSDate *)arg1 ;
@end

