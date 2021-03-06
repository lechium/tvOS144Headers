/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:54 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_source, OS_os_transaction, OS_dispatch_queue;
#import <Sharing/Sharing-Structs.h>
@class NSData, NSObject, SFSession, SFDevice, SFService;

@interface SFPINPairSession : NSObject {

	BOOL _activateCalled;
	BOOL _clientStarted;
	NSData* _clientSessionUUID;
	BOOL _invalidateCalled;
	unsigned long long _heartbeatLastTicks;
	NSObject*<OS_dispatch_source> _heartbeatTimer;
	BOOL _heartbeatSending;
	BOOL _pairSetupDone;
	PairingSessionPrivateRef _pairSetupSession;
	BOOL _pairSetupWaitingForUser;
	BOOL _pairVerifyDone;
	PairingSessionPrivateRef _pairVerifySession;
	SFSession* _sfSession;
	BOOL _sfSessionActivated;
	unsigned long long _startTicks;
	NSObject*<OS_os_transaction> _transaction;
	/*^block*/id _completionHandler;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	SFDevice* _peerDevice;
	SFService* _sfService;
	/*^block*/id _promptForPINHandler;
	/*^block*/id _showPINHandler;
	/*^block*/id _hidePINHandler;

}

@property (nonatomic,copy) id completionHandler;                                      //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,retain) SFDevice * peerDevice;                                   //@synthesize peerDevice=_peerDevice - In the implementation block
@property (nonatomic,retain) SFService * sfService;                                   //@synthesize sfService=_sfService - In the implementation block
@property (nonatomic,copy) id promptForPINHandler;                                    //@synthesize promptForPINHandler=_promptForPINHandler - In the implementation block
@property (nonatomic,copy) id showPINHandler;                                         //@synthesize showPINHandler=_showPINHandler - In the implementation block
@property (nonatomic,copy) id hidePINHandler;                                         //@synthesize hidePINHandler=_hidePINHandler - In the implementation block
-(id)init;
-(void)dealloc;
-(void)_activate;
-(void)invalidate;
-(void)_invalidate;
-(void)activate;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(SFDevice *)peerDevice;
-(void)setPeerDevice:(SFDevice *)arg1 ;
-(void)_cleanup;
-(id)promptForPINHandler;
-(void)setPromptForPINHandler:(id)arg1 ;
-(void)_completed:(int)arg1 ;
-(id)showPINHandler;
-(void)setShowPINHandler:(id)arg1 ;
-(id)hidePINHandler;
-(void)setHidePINHandler:(id)arg1 ;
-(void)_hearbeatTimer;
-(void)_clientRun;
-(void)_clientHeartbeatSend;
-(void)_clientSFSessionStart;
-(void)_clientPairVerify:(id)arg1 start:(BOOL)arg2 ;
-(void)_clientPairSetup:(id)arg1 start:(BOOL)arg2 ;
-(void)_clientTryPIN:(id)arg1 ;
-(void)_handleServerRequest:(id)arg1 ;
-(void)handleServerHeartbeat:(id)arg1 ;
-(void)handleServerPairVerify:(id)arg1 reset:(BOOL)arg2 ;
-(void)handleServerPairSetup:(id)arg1 reset:(BOOL)arg2 ;
-(void)clientTryPIN:(id)arg1 ;
-(void)handleServerRequest:(id)arg1 ;
-(SFService *)sfService;
-(void)setSfService:(SFService *)arg1 ;
@end

