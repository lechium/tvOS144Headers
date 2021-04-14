/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:54 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class SFSession, TVLAudioLatencyEstimator, NSObject, SFDevice;

@interface SFDeviceSetupTVLatencySession : NSObject {

	BOOL _activateCalled;
	int _finishState;
	BOOL _invalidateCalled;
	int _pairSetupState;
	int _pairVerifyState;
	BOOL _sessionSecured;
	unsigned long long _startTicks;
	SFSession* _sfSession;
	int _sfSessionState;
	TVLAudioLatencyEstimator* _tvLatencyEstimator;
	int _tvLatencySetupState;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	SFDevice* _peerDevice;
	/*^block*/id _progressHandler;
	/*^block*/id _promptForPINHandler;
	unsigned long long _triggerMs;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,retain) SFDevice * peerDevice;                                   //@synthesize peerDevice=_peerDevice - In the implementation block
@property (nonatomic,copy) id progressHandler;                                        //@synthesize progressHandler=_progressHandler - In the implementation block
@property (nonatomic,copy) id promptForPINHandler;                                    //@synthesize promptForPINHandler=_promptForPINHandler - In the implementation block
@property (assign,nonatomic) unsigned long long triggerMs;                            //@synthesize triggerMs=_triggerMs - In the implementation block
-(id)init;
-(void)invalidate;
-(void)activate;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_reportError:(id)arg1 ;
-(void)_run;
-(SFDevice *)peerDevice;
-(void)setPeerDevice:(SFDevice *)arg1 ;
-(void)_cleanup;
-(id)progressHandler;
-(void)setProgressHandler:(id)arg1 ;
-(int)_runFinish;
-(void)pairSetupTryPIN:(id)arg1 ;
-(id)promptForPINHandler;
-(void)setPromptForPINHandler:(id)arg1 ;
-(int)_runSFSessionStart;
-(int)_runPairSetup;
-(unsigned long long)triggerMs;
-(void)setTriggerMs:(unsigned long long)arg1 ;
-(int)_runTVLatencySetup;
-(void)_runTVLatencySetupRequest;
-(void)_runTVLatencySetupEstimate;
-(void)_runTVLatencySetupProgressEvent:(unsigned long long)arg1 info:(id)arg2 ;
-(void)_handleSetupActionRequest:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(void)_runSFSessionActivated;
-(int)_runPairVerify:(BOOL)arg1 ;
-(void)tryAgain;
@end

