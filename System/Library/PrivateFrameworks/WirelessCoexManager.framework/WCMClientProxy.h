/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:02 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WirelessCoexManager.framework/WirelessCoexManager
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol WCMClientCallback, OS_dispatch_queue, OS_xpc_object;
@class NSObject;

@interface WCMClientProxy : NSObject {

	int mProcessId;
	id<WCMClientCallback> mDelegate;
	NSObject*<OS_dispatch_queue> mQueue;
	BOOL mIsRegistered;
	NSObject*<OS_xpc_object> mConnection;

}
-(id)init;
-(void)dealloc;
-(void)reConnect;
-(BOOL)connectToServer;
-(void)registerToServer;
-(id)initWithClientProcessId:(int)arg1 delegate:(id)arg2 dispatch:(id)arg3 ;
-(void)sendMessage:(int)arg1 argument:(id)arg2 ;
@end
