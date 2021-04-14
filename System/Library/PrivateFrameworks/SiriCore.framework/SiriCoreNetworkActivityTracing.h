/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:24 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSMutableSet;

@interface SiriCoreNetworkActivityTracing : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _activities;
	NSMutableSet* _connections;

}
+(id)sharedNetworkActivityTracing;
-(id)init;
-(void)_networkActivityStart:(long long)arg1 activate:(BOOL)arg2 ;
-(void)_networkActivityActivate:(long long)arg1 ;
-(void)_networkActivityStop:(long long)arg1 withReason:(long long)arg2 ;
-(void)_networkActivityTracingCancel;
-(void)_networkActivityAddNWConnection:(id)arg1 ;
-(void)_networkActivityRemoveNWConnection:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)networkActivityStart:(long long)arg1 activate:(BOOL)arg2 ;
-(void)networkActivityActivate:(long long)arg1 ;
-(void)networkActivityStop:(long long)arg1 withReason:(long long)arg2 ;
-(void)networkActivityTracingCancel;
-(void)networkActivityAddNWConnection:(id)arg1 ;
-(void)networkActivityRemoveNWConnection:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)currentNetworkActivityTokenWithCompletion:(/*^block*/id)arg1 ;
@end

