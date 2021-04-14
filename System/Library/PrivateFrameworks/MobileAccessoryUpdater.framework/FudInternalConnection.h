/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:19 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/MobileAccessoryUpdater.framework/MobileAccessoryUpdater
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/FudConnection.h>

@protocol OS_dispatch_queue;
@class NSString, NSObject, NSMutableDictionary;

@interface FudInternalConnection : NSObject <FudConnection> {

	NSString* clientIdentifier;
	NSObject*<OS_dispatch_queue> handlerQueue;
	/*^block*/id messageHandler;
	NSMutableDictionary* pendingRequests;
	BOOL didStop;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)stop;
-(void)sendMessageToFud:(id)arg1 ;
-(void)sendMessageToFud:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)initWithClientIdentifier:(id)arg1 handlerQueue:(id)arg2 messageHandler:(/*^block*/id)arg3 ;
-(void)handleInboundNotification:(id)arg1 ;
-(long long)getNextMessageID;
@end

