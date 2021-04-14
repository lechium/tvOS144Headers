/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:55 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class SFSessionRequestInfo, NSMutableArray, SFSession, NSError, NSObject, SFDevice;

@interface SFSystemSession : NSObject {

	SFSessionRequestInfo* _currentRequest;
	BOOL _invalidateCalled;
	BOOL _pairVerifyDone;
	NSMutableArray* _requests;
	SFSession* _sfSession;
	int _state;
	BOOL _stateDone;
	NSError* _stateError;
	BOOL _allowUnencrypted;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	SFDevice* _peerDevice;

}

@property (assign,nonatomic) BOOL allowUnencrypted;                                   //@synthesize allowUnencrypted=_allowUnencrypted - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,retain) SFDevice * peerDevice;                                   //@synthesize peerDevice=_peerDevice - In the implementation block
-(id)init;
-(void)invalidate;
-(void)activate;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)removeProfileWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_run;
-(SFDevice *)peerDevice;
-(void)setPeerDevice:(SFDevice *)arg1 ;
-(void)_cleanup;
-(void)_processRequests;
-(void)_runSFSessionStart;
-(BOOL)allowUnencrypted;
-(void)setAllowUnencrypted:(BOOL)arg1 ;
-(void)_runPairVerifyStart;
-(void)_processRequestsWithError:(id)arg1 ;
-(void)getProfilesResponse:(id)arg1 error:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)installProfileResponse:(id)arg1 error:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)installProfileWithData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getSystemInfoWithCompletion:(/*^block*/id)arg1 ;
-(void)getProfilesWithCompletion:(/*^block*/id)arg1 ;
-(void)installProfileWithURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)rebootSystemWithCompletion:(/*^block*/id)arg1 ;
@end

