/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:41 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/AFSiriActivationListenerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, AFSiriActivationListener, NSString;

@interface AFRemoteRequestWatcher : NSObject <AFSiriActivationListenerDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _prewarmHandler;
	/*^block*/id _requestHandler;
	/*^block*/id _dismissalHandler;
	/*^block*/id _intentHandler;
	/*^block*/id _intentForwardingActionHandler;
	int _speechRequestToken;
	/*^block*/id _speechRequestHandler;
	AFSiriActivationListener* _siriActivationListener;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)setRequestHandler:(/*^block*/id)arg1 ;
-(void)_setupRequestListener;
-(void)_dispatchSpeechRequestOptions:(id)arg1 ;
-(void)_setupSpeechRequestListener;
-(void)siriActivationListener:(id)arg1 handleIntent:(id)arg2 inBackgroundAppWithBundleId:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)siriActivationListener:(id)arg1 handleIntentForwardingAction:(id)arg2 inBackgroundApplicationWithBundleIdentifier:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)siriActivationListener:(id)arg1 prewarmWithRequestInfo:(id)arg2 context:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)siriActivationListener:(id)arg1 activateWithRequestInfo:(id)arg2 context:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)siriActivationListener:(id)arg1 deactivateForReason:(long long)arg2 options:(unsigned long long)arg3 context:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)setPrewarmHandler:(/*^block*/id)arg1 ;
-(void)setNewRequestHandler:(/*^block*/id)arg1 ;
-(void)setDismissalHandler:(/*^block*/id)arg1 ;
-(void)setIntentHandler:(/*^block*/id)arg1 ;
-(void)setIntentForwardingActionHandler:(/*^block*/id)arg1 ;
-(void)setNewSpeechRequestHandler:(/*^block*/id)arg1 ;
@end

