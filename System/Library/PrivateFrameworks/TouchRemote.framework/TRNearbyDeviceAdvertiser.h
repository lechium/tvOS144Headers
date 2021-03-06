/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:22 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol TRNearbyDeviceAdvertiserDelegate, OS_dispatch_queue;
@class SFService, NSObject, NSMapTable;

@interface TRNearbyDeviceAdvertiser : NSObject {

	id<TRNearbyDeviceAdvertiserDelegate> _delegate;
	unsigned long long _state;
	SFService* _service;
	NSObject*<OS_dispatch_queue> _advertiserQ;
	unsigned long long _requestedService;
	NSMapTable* _sessionsTable;
	NSObject*<OS_dispatch_queue> _sessionsTableQ;

}

@property (assign,nonatomic) unsigned long long state;                                 //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) SFService * service;                                      //@synthesize service=_service - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> advertiserQ;                 //@synthesize advertiserQ=_advertiserQ - In the implementation block
@property (assign) unsigned long long requestedService;                                //@synthesize requestedService=_requestedService - In the implementation block
@property (nonatomic,retain) NSMapTable * sessionsTable;                               //@synthesize sessionsTable=_sessionsTable - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> sessionsTableQ;              //@synthesize sessionsTableQ=_sessionsTableQ - In the implementation block
@property (__weak) id<TRNearbyDeviceAdvertiserDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
+(void)initialize;
-(id)init;
-(id<TRNearbyDeviceAdvertiserDelegate>)delegate;
-(void)setDelegate:(id<TRNearbyDeviceAdvertiserDelegate>)arg1 ;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(SFService *)service;
-(void)setService:(SFService *)arg1 ;
-(void)stopAdvertising;
-(void)_handleInterruption;
-(void)_handleInvalidation;
-(void)setRequestedService:(unsigned long long)arg1 ;
-(void)_handleEventMessage:(id)arg1 ;
-(void)_handleRequestMessage:(id)arg1 ;
-(void)_handleActivationWithError:(id)arg1 ;
-(unsigned long long)requestedService;
-(NSMapTable *)sessionsTable;
-(void)_requestSessionForMessage:(id)arg1 withCallback:(/*^block*/id)arg2 ;
-(void)_respondToRequest:(id)arg1 withError:(id)arg2 ;
-(void)_handleNewConnectionFromPeerDevice:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)startAdvertisingWithService:(unsigned long long)arg1 ;
-(void)pauseAdvertising;
-(void)resumeAdvertising;
-(NSObject*<OS_dispatch_queue>)advertiserQ;
-(void)setAdvertiserQ:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setSessionsTable:(NSMapTable *)arg1 ;
-(NSObject*<OS_dispatch_queue>)sessionsTableQ;
-(void)setSessionsTableQ:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

