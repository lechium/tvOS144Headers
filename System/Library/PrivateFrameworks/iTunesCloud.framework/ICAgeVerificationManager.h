/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:24 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, ICAgeVerificationState;

@interface ICAgeVerificationManager : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _calloutQueue;
	NSMutableDictionary* _ageVerificationStateInternal;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> accessQueue;                        //@synthesize accessQueue=_accessQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> calloutQueue;                       //@synthesize calloutQueue=_calloutQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * ageVerificationStateInternal;              //@synthesize ageVerificationStateInternal=_ageVerificationStateInternal - In the implementation block
@property (nonatomic,readonly) ICAgeVerificationState * ageVerificationState; 
+(id)defaultManager;
-(id)_init;
-(NSObject*<OS_dispatch_queue>)calloutQueue;
-(void)setCalloutQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)accessQueue;
-(void)setAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_registerForNotifications;
-(void)getAgeVerificationStateForUserIdentity:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_updateAgeVerificationStateForUserIdentity:(id)arg1 sendNotification:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)ageVerificationStateForUserIdentity:(id)arg1 ;
-(NSMutableDictionary *)ageVerificationStateInternal;
-(void)_updateAgeVerificationStateAndSendNotification:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_userIdentityStoreDidChange:(id)arg1 ;
-(BOOL)_processAgeVerificationState:(id)arg1 forDSID:(id)arg2 ;
-(void)_runAgeVerificationForUserIdentity:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_bagHasValidKeys:(id)arg1 ;
-(void)getAgeVerificationStateWithCompletion:(/*^block*/id)arg1 ;
-(ICAgeVerificationState *)ageVerificationState;
-(void)setAgeVerificationStateInternal:(NSMutableDictionary *)arg1 ;
@end

